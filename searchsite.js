// NOTICE:
// i, kittenpopo, am not a web developer
// i dont really know how js works or what the fuck im doing
// but it works soooo

funcLoadedCount = 0

function CreateSearchResult(lineNum, funcName, funcSig, dllName, originTag, vtableName, vtableIndex) {
	var searchResultDiv = document.createElement("div");
	searchResultDiv.classList.add("searchResult");
	
	innerHTMLData = funcName;
	if (originTag != null) {
		innerHTMLData += "<div class=\"code_Gray\"> from </div>";
		innerHTMLData += "<div class=\"code_White\">" + originTag + "</div>";
	}
	
	innerHTMLData += "\n<br>\n";
	innerHTMLData += "<div class=\"code_Red\">" + dllName + ".dll</div>";
	innerHTMLData += "<div class=\"code_Gray\"> -> </div>";
	innerHTMLData += "<div class=\"code_Green\">\"" + funcSig + "\"</div>";
	
	if (vtableName != null && vtableIndex != null) {
		innerHTMLData+= "\n<br>\n";
		innerHTMLData += "<div class=\"code_Gray\">Virtual Class: </div>";
		innerHTMLData += "<div class=\"code_Orange\">" + vtableName + "</div>";
		innerHTMLData += "<div class=\"code_Gray\">, table index: </div>";
		innerHTMLData += "<div class=\"code_Orange\">" + vtableIndex + "</div>";
	}
	
	searchResultDiv.innerHTML = innerHTMLData;
	g_SearchUL.appendChild(searchResultDiv);
	funcLoadedCount++;
}

function TryGetLinePart(parts, index) {
	if (parts.length > index) {
		return parts[index];
	} else {
		return null;
	}
}

function HandleSigsText(text, dllName) {
	console.log(" -> HandleSigsText (length: " + text.length + ")");
	lines = text.split("\n");
	console.log(" -> Line (signature) count: " + lines.length);
	
	for (var i = 0; i < lines.length; i++) {
		if (lines[i].length == 0) {
			continue;
		}
		
		var lineParts = lines[i].split("=");
		if (lineParts.length < 2) {
			console.warn(" -> INVALID LINE: " +  lines[i]);
			continue;
		}
		
		var funcName = lineParts[0];
		var funcSig = lineParts[1]
		CreateSearchResult(i, funcName, funcSig, dllName, 
			TryGetLinePart(lineParts, 2), TryGetLinePart(lineParts, 3), TryGetLinePart(lineParts, 4));
	}
	
	g_FuncCountText.innerHTML = "Functions loaded: " + funcLoadedCount;
}

function LoadHandleSigsFile(file, dllName) {
	console.log("LoadHandleSigsFile: " + file);
    var rawFile = new XMLHttpRequest();
    rawFile.open("GET", file, false);
    rawFile.onreadystatechange = function() {
        if (rawFile.readyState === 4 && rawFile.status === 200 || rawFile.status == 0) {
            HandleSigsText(rawFile.responseText, dllName);
        } else {
			console.error("Failed to load raw sigs file: " + file + ", status: " + rawFile.status);
		}
    }
	rawFile.send(null);
}

// https://www.w3schools.com/howto/howto_js_filter_lists.asp
function UpdateSearch() {
	var input = document.getElementById('searchInput');
	var filter = input.value.toUpperCase();
	var ul = document.getElementById("searchUL");
	var seachResults = ul.getElementsByClassName("searchResult");
	console.log("Updating search for " + (seachResults.length) + " result(s)");
	
	// Loop through all list items, and hide those who don't match the search query
	for (i = 0; i < seachResults.length; i++) {
		var elem = seachResults[i]
		var txtValue = elem.textContent || elem.innerText;
		if (txtValue.toUpperCase().indexOf(filter) > -1) {
			seachResults[i].style.display = "";
		} else {
			seachResults[i].style.display = "none";
		}
	}
}

///////////////////////////////

async function LoadSigs() {
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/client_funcs.c", "client");
	await new Promise(r => setTimeout(r, 100));
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/engine_funcs.c", "engine");
	await new Promise(r => setTimeout(r, 100));
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/server_funcs.c", "server");
		
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/filesystem_stdio_funcs.c", "filesystem_stdio");
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/panorama_funcs.c", "panorama");
	LoadHandleSigsFile("https://raw.githubusercontent.com/KittenPopo/csgo-offsets/site/rawsigdata/panoramauiclient_funcs.c", "panoramauiclient");
}

function Init() {
	console.log("Init() searchsite.js!");
	
	// lol
	g_SearchUL = document.getElementById("searchUL");
	g_SearchResults = document.getElementById("searchUL").getElementsByClassName("searchResult");
	g_FuncCountText = document.getElementById("funcCount");
	
	LoadSigs();
}