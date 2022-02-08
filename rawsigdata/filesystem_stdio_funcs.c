CBaseFileSystem::Open()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CBaseFileSystem::Close()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CBaseFileSystem::Seek()=83 ? ? ? ? ? ? 7E AD=vprof
CBaseFileSystem::Tell()=55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16=vprof
CBaseFileSystem::Size()=55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C=vprof
CBaseFileSystem::Read()=55 8B EC 83 E4 F8 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89=vprof
CBaseFileSystem::Write()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CBaseFileSystem::Truncate()=55 8B EC 53 8B D9 8B ? ? ? ? ? 57=vprof
CBaseFileSystem::FPrintf()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 53=vprof
CBaseFileSystem::Flush()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CBaseFileSystem::ReadLine()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CBaseFileSystem::GetFileTime()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D FC 8B ? ? ? ? ? 89 45 F8=vprof
CBaseFileSystem::FileExists()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B=vprof
CBaseFileSystem::FindFileAbsoluteList()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CBaseFileSystem::FindFirst()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D FC 8B ? ? ? ? ? 89 45 DC=vprof
CBaseFileSystem::FindNext()=55 8B EC 83 EC 0C 53 8B D9 8B=vprof
