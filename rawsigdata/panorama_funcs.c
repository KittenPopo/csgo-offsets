CUIEngine::RegisterScheduledDelegate()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 3C=vprof
CUIEngine::OnJSScheduledFunction()=55 8B EC 83 E4 F8 83 EC 1C 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 45=vprof
CUIEngine::InitializePanoramaContext()=55 8B EC 83 EC 3C 53 8B D9=vprof
CUIEngine::CompileScript()=55 8B EC 83 E4 F8 83 EC 64 53 8B D9=vprof
CUIEngine::RunFunction()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof
CUIEngine::RunScheduledDelegates()=55 8B EC 83 EC 34 53 8B D9 8B=vprof
CUIEngine::RunFrame()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 0F=vprof
CUIEngine::PaintWindows()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CUIEngine::RegisterEventHandler()=55 8B EC 83 E4 F8 83 EC 24 53 8B D9 8B=vprof
CUIEngine::RegisterJSEventHandler()=55 8B EC 83 EC 24 53 56 8B F1=vprof
CUIEngine::UnregisterJSEventHandler()=55 8B EC 83 EC 08 89=vprof
CUIEngine::RegisterForUnhandledEvent()=55 8B EC 83 EC 30 53 8B D9 8B=vprof
CUIEngine::UnregisterForUnhandledEvent()=55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 89=vprof
CUIEngine::UnregisterJSForUnhandledEvent()=55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 89=vprof
CUIEngine::InvokeJSGenericCallback()=55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 1C=vprof
CUIEngine::UnregisterEventHandler()=55 8B EC 83 E4 F8 83 EC 0C 53 89=vprof
CUIEngine::DispatchQueuedEvent()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89=vprof
CUIEngine::RegisterEventFilter()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8D 45 08 8D=vprof
CUIEngine::UnregisterEventFilter()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8D 45 08 50=vprof
CUIPanel::CUIPanel()=55 8B EC 51 56 8B F1 57 C7 ? ? ? ? ? 8B ? ? ? ? ? 8B=vprof
CUIPanel::Initialize()=55 8B EC 51 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CUIPanel::Shutdown()=55 8B EC 83 EC 1C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 E4=vprof
CUIPanel::BLoadLayout()=55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 8B=vprof
CUIPanel::BApplyLayoutFile()=55 8B EC 83 EC 1C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F8=vprof
CUIPanel::BApplyLayoutSnippet()=8B 4D 08 8D 55 0E 83 C1 08 52 8B 01 FF 50 0C 51 8B CC 66 8B 00 66 89 01 E8 ? ? ? ? 8B ? ? ? ? ? E8 ? ? ? ? 8B D0=vprof
ClearPanelEvents()=55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 89=vprof
CUIPanel::BSetProperty()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CUIPanel::BApplyPanelDescription()=55 8B EC 83 E4 F8 83 EC 4C 53 8B=vprof
CUIPanel::BCreateChildrenFromDescription()=55 8B EC 83 EC 14 8B D1=vprof
CUIPanel::MarkStylesDirty()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 8B=vprof
CUIPanel::SetFocusToNextPanel()=55 8B EC 83 E4 F8 83 EC 30 56 57 8B F9=vprof
CUIPanel::SetInputFocusToFirstOrLastChildInFocusOrder()=88 58 34=vprof
CUIPanel::RemoveAndDeleteChildren()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 8B=vprof
CUIPanel::RemoveAndDeleteChildrenOfType()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B=vprof
CUIPanel::SetFocusInternal()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 56=vprof
CUIPanel::AddStyleFlag()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 1C=vprof
CUISoundSystem::ServiceAudio()=8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? FF ? ? ? ? ? C3 CC CC CC CC=vprof
CImageDecodeWorkItem::RunWorkItem()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof
CImageDecodeWorkItem::DispatchResult()=56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF=vprof
CImageDecodeWorkThreadPool::RunFrame()=56 8B F1 57 8B ? ? ? ? ? 8B 06=vprof
CImageDecodeThread::Run()=55 8B EC 83 EC 10 57 8B F9 C6=vprof
CImageData::SetImageDataR8G8B8A8()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CImageResourceManager::LoadImageInternal()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 FC=vprof
CImageResourceManager::LoadLocalFileSynchronous()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CImageResourceManager::LoadImageFromMemory()=83 F8 02 7E 2F=vprof
CImageResourceManager::LoadImageFromEngineRT()=55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 8B=vprof
ConvertJpegToRGB()=55 8B EC 83 EC 20 89=vprof
BResizeImageRGBA()=55 8B EC 83 EC 70 89=vprof
CGamepadController::ProcessRemoteInput()=55 8B EC 83 E4 F0 83 EC 38 56 8B F1 8B=vprof
CGamepadController::RunFrame()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B CE=vprof
CUIInputEngine::RunFrame()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8D=vprof
CSteamGameController::GotWindowFocus()=81 ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? FF ? ? ? ? ? C3 CC=vprof
CUIWindowInput::SetInputFocus()=55 8B EC 83 E4 F8 83 EC 4C 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CUIWindowInput::ProcessMouseTrackingResults()=55 8B EC 83 EC 5C 53 56 57 8B F9=vprof
CLayoutFileXMLParser::BAddPanel()=55 8B EC 83 EC 24 53 56 57 8B F9=vprof
CLayoutFile::BLoadFromBuffer()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F8=vprof
CStyleFileSet::BContainsStyleFile()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CStyleFile::BLoadFromBuffer()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 10=vprof
CLocalization::ResolveDialogVariable()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 53 56 8B ? ? ? ? ? 8B=vprof
CLocalization::OnPanelDeleted()=55 8B EC 83 EC 48 53 8B D9=vprof
CLocalizationStringDialogVariablesDerived::Recalculate()=55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B=vprof
CLocalizationStringSimple::Recalculate()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 57=vprof
CLocalization::SetLongestStringForToken()=55 8B EC 83 E4 F8 83 EC 4C 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CPanelStyle::GetInterpolatedPosition()=55 8B EC 56 8B F1 8B ? ? ? ? ? 57=vprof
CAnimationParticleSystem::SerializeParticles()=BB ? ? ? ? E7=vprof
CAnimationParticleSystem::RunSystem()=55 8B EC 83 EC 44 57 8B F9=vprof
CUIRenderEngine::BeginFrame()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CUIRenderEngine::EndFrame()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CResourceSystem::Update()=55 8B EC 83 E4 F8 83 EC 2C 53 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CResourceSystem::OnManifestLoaded()=55 8B EC 83 EC 30 8B D1=vprof
CResourceSystem::CreateResourceManifest()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 14=vprof
CCreateVTFTextureJob::DoExecute()=55 8B EC 83 E4 F8 83 EC 34 53 8B D9=vprof
