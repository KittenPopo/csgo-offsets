CAchievementMgr::SaveGlobalState()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
UpdateClientSideAnimations()=8B ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 85 DB 74 1C=vprof
CBaseLesson::IsTimedOut()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF=vprof
CIconLesson::ShouldDisplay()=53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B CE=vprof
CIconLesson::IsVisible()=53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 83=vprof
CScriptedIconLesson::OnOpen()=55 8B EC 83 EC 20 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 E0=vprof=CScriptedIconLesson=6
CScriptedIconLesson::Update()=55 8B EC 83 EC 18 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof=CScriptedIconLesson=7
CScriptedIconLesson::FireGameEvent()=55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof=CScriptedIconLesson=1
CScriptedIconLesson::ProcessElements()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CScriptedIconLesson::ProcessElement()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 F8 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 5D=vprof
CCascadeLightManager::InitRenderTargets()=56 8B F1 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 18 83 ? ? ? ? ? ? 74 0F 8B 01 FF 50 2C C7 ? ? ? ? ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 18 83 ? ? ? ? ? ? 74 0F 8B 01 FF 50 2C C7 ? ? ? ? ? ? ? ? ? 8D=vprof
CRopeManager::DrawRenderCache()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B D1 8B=vprof
CBaseEntity::EmitSound()=55 8B EC 81 ? ? ? ? ? 53 8B C1 F3=vprof
CSprite::GetToolRecordingState()=8B 45 34 8B 5D 38 89=vprof
CClientLeafSystem::ProjectFlashlight()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 5D=vprof=CClientLeafSystem=24
CVisibleShadowList::FindShadows()=55 8B EC 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? A1=vprof
CClientShadowMgr::InitDepthTextureShadows()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 4E 14=vprof=CClientShadowMgr=3
CClientShadowMgr::UpdateFlashlightState()=55 8B EC 83 E4 F8 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 44 24 0C 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B=vprof=CClientShadowMgr=19
CClientShadowMgr::UpdateProjectionState()=55 8B EC 83 E4 F8 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 44 24 0C 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 0F=vprof=CClientShadowMgr=22
CClientShadowMgr::BuildPerspectiveWorldToFlashlightMatrix()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 75 0C 8D 46 0C 50 56 8D 45=vprof
CClientShadowMgr::BuildFlashlight()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D EC=vprof
CClientShadowMgr::UpdateBrushShadow()=8B ? ? ? ? ? 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 57=vprof
CClientShadowMgr::ReprojectShadows()=55 8B EC 83 EC 08 A1 ? ? ? ? 56 57 8B F9 8B=vprof=CClientShadowMgr=48
CClientShadowMgr::UpdateProjectedTextureInternal()=55 8B EC 53 8B 5D 08 56 0F=vprof
CClientShadowMgr::UpdateProjectedTexture()=55 8B EC 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85=vprof=CClientShadowMgr=24
CClientShadowMgr::CullReceiver()=55 8B EC 83 EC 38 53 56 57 8B 7D 08=vprof
CClientShadowMgr::ComputeShadowDepthTextures()=8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 68=vprof=CClientShadowMgr=43
CClientShadowMgr::ComputeShadowTextures()=55 8B EC 83 E4 C0 83 EC 34 53 8B D9 8B=vprof=CClientShadowMgr=29
CClientShadowMgr::DrawDeferredShadows()=8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22=vprof=CClientShadowMgr=46
CDetailObjectSystem::CountSpritesInLeafList()=55 8B EC 83 EC 10 89 4D F4 8B ? ? ? ? ? 8B=vprof
CDetailObjectSystem::SortSpritesBackToFront()=55 8B EC 83 EC 34 53 56 8B F1 8B ? ? ? ? ? 57=vprof
CDetailObjectSystem::RenderTranslucentDetailObjects()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 3C=vprof=CDetailObjectSystem=18
CDetailObjectSystem::RenderTranslucentDetailObjectsInLeaf()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B F9 8B=vprof=CDetailObjectSystem=19
CFlashlightEffect::UpdateLightTopDown()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CFlashlightEffect::UpdateLight()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? A1=vprof
CFlashlightEffect::UpdateDefaultFlashlightState()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF=vprof
CModelRenderSystem::DrawModels()=55 8B EC 83 EC 4C 83=vprof=CModelRenderSystem=17
CModelRenderSystem::ComputeTranslucentRenderData()=8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 E8 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B=vprof=CModelRenderSystem=19
CModelRenderSystem::DrawBrushModels()=55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9=vprof=CModelRenderSystem=18
CParticleEffectBinding::DrawModel()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 14 8B ? ? ? ? ? 89=vprof=CParticleEffectBinding=20
CParticleMSG::UpdateNewEffects()=55 8B EC 81 ? ? ? ? ? 53 8B D9 F3=vprof
CNewParticleEffect::DrawModel()=55 8B EC 83 E4 F8 83 EC 54 53 8B D9=vprof=CLocalSpaceEmitter=167
CPhysicsSystem::PhysicsSimulate()=55 8B EC 83 EC 7C 8B ? ? ? ? ? 53 56=vprof
CPrediction::ProcessMovement()=55 8B EC 83 E4 C0 83 EC 34 53 56 8B 75=vprof
CPrediction::Update()=55 8B EC 83 EC 08 53 56 8B F1 8B ? ? ? ? ? 57 8B=vprof
CSprite::DrawModel()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D F8=vprof
CSpriteTrail::DrawModel()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 14 8B ? ? ? ? ? 89 44 24 2C 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 83=vprof=C_Sprite=374
CViewRender::Render()=F3 ? ? ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? F3=vprof
SetupRenderablesList()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89=vprof
BuildWorldRenderLists()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 8B=vprof
DrawWorld()=55 8B EC 51 A1 ? ? ? ? F3 ? ? ? ? 53=vprof
CViewRender::DrawTranslucentWorldInLeaves()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 10 8B ? ? ? ? ? 89=vprof
CViewRender::DrawTranslucentWorldAndDetailPropsInLeaves()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 80 7D 20=vprof
CViewRender::Draw3dSkyboxworld()=56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 83=vprof=CSkyboxView=3
CShadowDepthView::Draw()=55 8B EC 83 E4 F8 83 EC 28 56 57 8B F9 8B ? ? ? ? ? 89=vprof=CShadowDepthView=3
CEconItem::BAddToMessage::std::string()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6=vprof=CEconItem=8
CEconItemSchema::GetAttributeDefinitionByName()=55 8B EC 8B 01 5D FF ? ? ? ? ? CC CC CC CC 55 8B EC 53 56=vprof
CEconItemView::GetStaticData()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85=vprof
SnowFall()=55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 44 24 30=vprof
GlassImpactCallback()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CGCClient()=55 8B EC 53 8B D9 8B ? ? ? ? ? 56 8B ? ? ? ? ? 85=vprof=GCSDK::CProtoBufGCClientSendHandler=0
CJobMgr::BResumeSleepingJobs()=56 8B F1 57 8D ? ? ? ? ? E8 ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 8D=vprof
CJobMgr::BResumeYieldingJobs()=55 8B EC 53 56 57 8B F1 FF=vprof
CProtoBufMsg::BAsyncSendProto()=55 8B EC 83 EC 1C 89 4D F8=vprof
GCHost()=55 8B EC 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? E8=vprof
GetMessage()=55 8B EC 51 8B ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 89 75 FC 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 7D 0C=vprof
CPanel2D::Initialize()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
CPanel2D::BSetProperty()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF=vprof
Clabel::OnMouseMove()=55 8B EC F3 ? ? ? ? 83 EC 18=vprof
CImagePanel::SetImage()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 4B=vprof
CMoviePanel::Clear()=55 8B EC 83 EC 10 53 56 8B F1 8B ? ? ? ? ? 57=vprof
CMoviePanel::Paint()=55 8B EC 83 EC 18 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof=panorama::CMoviePanel=3
CHTML::Paint()=56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF=vprof=panorama::CHTML=3
CDebugLayout::AppendElementOpenTag()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89=vprof
CDebugLayout::Build()=55 8B EC 83 E4 F8 83 EC 34 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89=vprof
CDebugPanelComputed::Build()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 28=vprof
CDebugPanelStyle::GetStyleBuffer()=55 8B EC 83 E4 F8 83 EC 14 53 8B D9 8B ? ? ? ? ? 56 57 89 5C=vprof
CDebugPanelStyle::Build()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB=vprof
CDebugPanelStyle::AppendElementStyles()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 F8 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 47=vprof
CDebugPanelStyle::AppendCascadeStyles()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 5C=vprof
CDebugPanelStyle::AppendInheritedStyles()=55 8B EC 83 EC 54 53 8B D9 8B ? ? ? ? ? 56=vprof
CDebugPanelStyle::AppendStyleInfoForProperty()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 58=vprof
CDebugPanelStyle::AppendAnimations()=55 8B EC 83 E4 F8 83 EC 4C 53 8B D9 8B=vprof
CDebugPanelStyle::OnPanelStyleChanged()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB=vprof
CGrid::CGrid()=55 8B EC 83 E4 F8 56 57 8B F1 6A 00 FF 75 0C FF 75 08 C7 ? ? ? ? ? A1 ? ? ? ? 89 46 08 A1 ? ? ? ? 6A 00 89 46 0C E8 ? ? ? ? C7 ? ? ? ? ? A1=vprof
CGrid::UpdateVecVisible()=55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F4 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? C7=vprof
CGrid::GetVisibleChildCount()=56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 80 ? ? ? ? ? ? 74 0D 8B CE E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof
CGrid::GetVisibleChild()=55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C=vprof
CGrid::MoveSelection()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 83=vprof
CGrid::OnLayoutTraverse()=55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 44 24 34=vprof=panorama::CGrid=7
CGrid::SetFocusedChild()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89=vprof
CGrid::EventInputFocusSet()=55 8B EC 51 51 53 56 8B F1 8B=vprof
CGrid::GetFocusedChildVisibleIndex()=55 8B EC 83 EC 10 53 56 57 8B F9 8B ? ? ? ? ? 89 7D F8=vprof
CGrid::MotionTimeout()=55 8B EC 83 EC 0C 53 56 8B F1 8B ? ? ? ? ? 57 8B=vprof
CGrid::UpdateChildPositions()=55 8B EC 83 E4 F8 83 EC 78 56 57 8B F9 8B ? ? ? ? ? 89=vprof
CParticleCollection::InitializeNewParticles()=55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89=vprof
CParticleCollection::Simulate()=55 8B EC 83 E4 F8 83 EC 30 56 57 8B F9 0F=vprof
CParticleSystemMgr::DrawRenderCache()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 89=vprof
CParticleCollection::GenerateSortedIndexList()=55 8B EC 83 E4 F8 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? F3 ? ? ? ? 8B=vprof
_CodeRGBBlock()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B 75 08 57 85=pdb
_CodeAlphaBlock()=81 ? ? ? ? ? 8B ? ? ? ? ? ? 53 55=pdb
GCSDK::_dynamic_initializer_for__g_RegisterLock_SteamID__()=6A 01 68 ? ? ? ? 6A 01=pdb
GCSDK::_dynamic_initializer_for__g_RegisterLock_Party__()=6A 00 68 ? ? ? ? 6A 02 B9=pdb
GCSDK::_dynamic_initializer_for__g_RegisterLock_Lobby__()=6A 00 68 ? ? ? ? 6A 03 B9=pdb
_dynamic_initializer_for__network_connection_token_default__()=B9 ? ? ? ? E8 ? ? ? ? 6A 00 68 ? ? ? ? B9=pdb
_dynamic_initializer_for__g_ProtobufLogHandler__()=68 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 83 C4 08 C3=pdb
_dynamic_initializer_for__LOG_DEVELOPER_VERBOSE__()=FF ? ? ? ? ? 6A 00 6A 00 6A 00 68 ? ? ? ? FF ? ? ? ? ? 83 C4 14 A3=pdb
_dynamic_initializer_for__dmodels__()=56 57 BF ? ? ? ? BE ? ? ? ? 0F 1F 40 00 8B CF E8 ? ? ? ? 83 C7 30=pdb
_dynamic_initializer_for__dplanes__()=56 57 BF ? ? ? ? BE ? ? ? ? 0F 1F 40 00 8B CF E8 ? ? ? ? 83 C7 14=pdb
_dynamic_initializer_for__dtexdata__()=56 57 BF ? ? ? ? BE ? ? ? ? 0F 1F 40 00 8B CF E8 ? ? ? ? 83 C7 20=pdb
_dynamic_initializer_for__entities__()=56 57 BF ? ? ? ? BE ? ? ? ? 0F 1F 40 00 8B CF E8 ? ? ? ? 83 C7 2C=pdb
_dynamic_initializer_for__g_EntityLists__()=56 BA ? ? ? ? B8=pdb
_dynamic_initializer_for__g_pLessonVariableInfo__()=B8 ? ? ? ? B9 ? ? ? ? 66 ? ? ? ? ? C7=pdb
_dynamic_initializer_for__ss_righthand__()=6A 01 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? C3=pdb
_dynamic_initializer_for__g_KeyValueSaver__()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 0F 57 C0 C6=pdb
_dynamic_initializer_for__g_staticPlayerNames__()=68 ? ? ? ? 6A 00 68 ? ? ? ? E8 ? ? ? ? 83 C4 0C C3=pdb
_dynamic_initializer_for__s_GaussianRandomStream__()=6A 00 B9 ? ? ? ? FF=pdb
_dynamic_initializer_for__s_HLTVCamera__()=B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C6=pdb
_dynamic_initializer_for__g_AsyncCaptionResourceManager__()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? ? ? ? 68 ? ? ? ? C7=pdb
_dynamic_initializer_for__s_ParticleSystemQuery__()=B9 ? ? ? ? E8 ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? ? ? ? 68 ? ? ? ? 0F ? ? ? ? ? ? E8=pdb
_dynamic_initializer_for__LOG_SND_EMITTERSYSTEM__()=FF ? ? ? ? ? 6A 00 6A 01 68 ? ? ? ? 68=pdb
_dynamic_initializer_for__LOG_WORKSHOP__()=FF ? ? ? ? ? 6A 01 6A 01 68=pdb
_dynamic_initializer_for__g_PPInit__()=0F 57 C0 C6 ? ? ? ? ? ? 0F ? ? ? ? ? ? C3=pdb
_dynamic_initializer_for__LOG_VScript__()=FF ? ? ? ? ? 6A 01 6A 01 6A 00 68=pdb
_dynamic_initializer_for__mp_warmuptime__()=68 ? ? ? ? 51 C7 ? ? ? ? ? ? 6A 00 51 C7 ? ? ? ? ? ? B9 ? ? ? ? 6A 01=pdb
_dynamic_initializer_for__g_SteamWorksGameStatsClient__()=68 ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? B9=pdb
_dynamic_initializer_for__g_Generated_Texture_Saver__()=6A 00 B9 ? ? ? ? E8 ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? ? ? ? 68 ? ? ? ? 0F ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C6=pdb
_dynamic_initializer_for__g_PrecipHack__()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C6=pdb
_dynamic_initializer_for____g_C_TEPlayerDecal__()=B9 ? ? ? ? E8 ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? ? ? ? 68 ? ? ? ? C7=pdb
_dynamic_initializer_for__vgui::Panel::m_MessageMap__()=55 8B EC 83 EC 10 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 0F 10 45 F0 C7=pdb
void protobuf_AssignDesc_steammessages_2eproto(void)=55 8B EC 83 E4 F8 83 EC 44 53 56 33 DB 57 89 5C 24 10 E8 ? ? ? ? 6A 13=pdb
_anonymous_namespace_::protobuf_RegisterTypes()=68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 83 C4 08=pdb
virtual void CMsgWebAPIKey::Clear(void)=8B 41 20 84 C0 74 3F C1 E8 04=pdb
virtual void CMsgConVarValue::Clear(void)=80 79 14 00 74 47=pdb
virtual CMsgHttpRequest::~CMsgHttpRequest(void)=56 8B F1 57 8B 4E 08=pdb
virtual int CMsgHttpRequest::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 50 00 0F ? ? ? ? ? F6 47 50 01 74 1B 8B 47 20=pdb
virtual void CMsgWebAPIRequest::Clear(void)=56 8B F1 80 7E 28 00 0F=pdb=CMsgWebAPIRequest=3
virtual int CMsgWebAPIRequest::ByteSize(void)const=56 8B F1 57 33 FF 80 7E 28 00 0F ? ? ? ? ? F6 46 28 01 74 25=pdb=CMsgWebAPIRequest=8
virtual void CMsgHttpResponse::Clear(void)=56 8B F1 8B 46 24 84 C0 74 2A=pdb=CCommunity_GetGamePersonalDataEntries_Response=3
virtual void CMsgNotifyWatchdog::Clear(void)=8B 41 28 84 C0 74 4A=pdb=CMsgNotifyWatchdog=3
virtual int CSOQuestProgress::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 18 00 74 6E=pdb
virtual void CMsgAMGetUserGameStats::Clear(void)=80 79 28 00 74 1C=pdb
virtual void CGCMsgMemCachedGetResponse::Clear(void)=56 8B F1 8D 4E 08 E8 ? ? ? ? 8D=pdb
virtual int CMsgSDONoMemcached::ByteSize(void)const=56 8B F1 8B 4E 04 8D=pdb
virtual void CGCMsgSQLStatsResponse::Clear(void)=8B 41 30 84 C0 74 38=pdb
virtual void CMsgAMAddFreeLicense::Clear(void)=8B 41 20 84 C0 74 3F C1 E8 03=pdb
virtual int CGCMsgGetIPLocation::ByteSize(void)const=56 57 8B F9 8D 57 04 8B 47 0C 8D 34 80=pdb
virtual void CIPLocationInfo::Clear(void)=8B 41 24 84 C0 0F=pdb=CIPLocationInfo=3
virtual void CMsgGCRoutingInfo::Clear(void)=8B 41 28 A9 ? ? ? ? 74 38=pdb
virtual int CMsgGCRoutingInfo::ByteSize(void)const=55 8B EC 51 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 8B 46 28=pdb
bool CMsgGCMsgSetOptions_Option_IsValid(int)=55 8B EC 83 7D 08 03 0F=pdb
void CMsgGCHUpdateSession::SharedCtor(void)=C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6 41 14 00 C7=pdb
char const near * CSteamID::Render(void)const=A1 ? ? ? ? 8B D1 56=pdb
_sscanf()=55 8B EC 83 E4 F8 8D 45 10=pdb
virtual void CExampleEffect::Init(void)=C6 41 04 00 C3=pdb
struct TSLNodeBase_t near * CTSListBase::Pop(void)=55 8B EC 83 E4 F8 56 57 8B F9 8B 37=pdb
CUtlString::~CUtlString(void)=56 8B F1 C7 ? ? ? ? ? ? 83 7E 08 00 7C 20 8B 16 85 D2 74 13 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 5E=pdb
void CVarBitVecBase<int>::ReallocInts(int)=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 75 22 83 7E 04 01 7E 0F A1 ? ? ? ? FF 76 0C 8B 08 8B 01 FF 50 14 5F C7 ? ? ? ? ? ? 5E 5D C2 04 00 53=pdb
GCSDK::CMessageList::~CMessageList(void)=A1 ? ? ? ? 8B ? ? ? ? ? 56 33 F6 85 C0 7E 32 57 8B 3C B2 85 FF 74 24 A1=pdb
bool lessFunc(int const near &,int const near &)=55 8B EC 8B 45 08 8B 08 8B 45 0C 3B 08 0F 9C=pdb
CThreadSafeMemoryPool::~CThreadSafeMemoryPool(void)=56 8B F1 8B 06 A9=pdb
error_exit()=55 8B EC 56 8B 75 08 56 8B 06=pdb
output_message()=55 8B EC 8B 45 08 8D ? ? ? ? ? 81 ? ? ? ? ? 8B=pdb
emit_message()=55 8B EC 8B 45 08 8B 4D 0C 56 8B=pdb
format_message()=55 8B EC 8B 45 08 56 8B 10 8B 4A=pdb
reset_error_mgr()=55 8B EC 8B 4D 08 8B 01 C7 ? ? ? ? ? ? 8B 01 C7=pdb
_jpeg_suppress_tables()=8B 41 58 85 C0 74 07=pdb
default_decompress_parms()=56 8B F1 8B 46 24 83 E8 01=pdb
_jpeg_consume_input()=56 8B F1 8B 46 14 05=pdb
init_source()=55 8B EC 8B 45 08 8B 40 18=pdb
fill_input_buffer()=55 8B EC 56 57 8B 7D 08 8B 77=pdb
skip_input_data()=55 8B EC 53 8B 5D 08 56 57 8B 7D 0C 8B 73=pdb
_jpeg_add_quant_table()=55 8B EC 53 56 57 8B F9 8B DA 83=pdb
add_huff_table()=55 8B EC 51 53 56 8B F2 8B D9 89 75 FC 83=pdb
alloc_small()=55 8B EC 53 8B 5D 10 56 8B 75=pdb
alloc_large()=55 8B EC 51 53 56 8B 75 08 57 8B 7D=pdb
alloc_sarray()=55 8B EC 51 53 8B 5D 08 33 D2 56 57=pdb
alloc_barray()=55 8B EC 83 EC 08 53 8B 5D 10 33=pdb
realize_virt_arrays()=55 8B EC 51 53 56 57 8B 7D 08 33 DB 89=pdb
do_sarray_io()=55 8B EC 83 EC 0C 53 56 57 8B FA 89 4D FC 33 DB 8B 47 08 8B 57 18 8B 77 10 0F=pdb
do_barray_io()=55 8B EC 83 EC 0C 53 56 57 8B FA 89 4D FC 33 DB 8B 47 08 8B 57 18 8B 77 10 C1=pdb
free_pool()=55 8B EC 53 56 8B 75 0C 57 8B 7D 08 8B 5F=pdb
emit_marker()=53 56 8B F1 8B DA 8B 4E=pdb
emit_2bytes()=53 56 8B F1 8B DA 57 8B CB=pdb
emit_dht()=55 8B EC 83 EC 08 80 7D 08 00 56=pdb
emit_dac()=55 8B EC 83 EC 20 53 56 8B F1 0F=pdb
emit_sof()=53 56 57 8B F1 E8 ? ? ? ? 8B 46 4C=pdb
emit_sos()=55 8B EC 51 56 BA=pdb
emit_pseudo_sos()=56 BA ? ? ? ? 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B CE E8 ? ? ? ? 8B 4E 18 8B 01 C6 00 00=pdb
emit_jfif_app0()=56 BA ? ? ? ? 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B CE E8 ? ? ? ? 8B 4E 18 8B 01 C6 00 4A=pdb
emit_adobe_app14()=56 BA ? ? ? ? 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B CE E8 ? ? ? ? 8B 4E 18 8B 01 C6 00 41=pdb
write_marker_header()=55 8B EC 56 8B 75 08 57 8B 7D 10 81=pdb
write_marker_byte()=55 8B EC 8A 45 0C 56 8B 75=pdb
write_frame_header()=55 8B EC 51 53 56 8B 75 08 33 D2 57 33 FF 89=pdb
write_scan_header()=55 8B EC 51 53 56 8B 75 08 80=pdb
write_file_trailer()=55 8B EC BA=pdb
write_tables_only()=55 8B EC 53 56 8B 75 08 BA ? ? ? ? 57 8B CE E8=pdb
get_soi()=56 8B F1 6A 01 56=pdb
get_sof()=55 8B EC 51 8A 45 08 53=pdb
get_sos()=55 8B EC 83 EC 1C 53 56 8B F1 57 8B 4E=pdb
get_dac()=55 8B EC 83 EC 10 53 56 8B F1 57 8B 5E=pdb
get_dht()=55 8B EC 81 ? ? ? ? ? 53 8B C1 56=pdb
get_dqt()=55 8B EC 83 EC 28 8B C1 53=pdb
get_dri()=55 8B EC 83 EC 08 8B C1 53 56 57=pdb
examine_app0()=55 8B EC 53 8B 5D 0C 56 8B F1 8B 4D 08 03=pdb
examine_app14()=55 8B EC 83 EC 08 53 8B D9 89 55=pdb
get_interesting_appn()=55 8B EC 8B 45 08 83 EC 1C 53 8B 58=pdb
skip_variable()=55 8B EC 51 53 56 57 8B 7D 08 8B 77=pdb
first_marker()=55 8B EC 83 EC 0C 8B C1 53 56=pdb
read_markers()=55 8B EC 56 8B 75 08 83 ? ? ? ? ? ? 75 1E=pdb
read_restart_marker()=55 8B EC 56 8B 75 08 83 ? ? ? ? ? ? 75 10=pdb
_jpeg_resync_to_restart()=55 8B EC 53 8B 5D 08 56 8B 75 0C 57 8B 03 8B=pdb
reset_marker_reader()=55 8B EC 8B 45 08 8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
_jinit_marker_reader()=56 8B F1 68 ? ? ? ? 6A 00 56 8B=pdb
_jpeg_core_output_dimensions()=56 8B F1 57 8B 56 30=pdb
initial_setup()=55 8B EC 83 EC 08 56 8B F1 81=pdb
per_scan_setup()=55 8B EC 83 EC 0C 56 8B F1 57 8B ? ? ? ? ? 83 F8 01 75 65=pdb
latch_quant_tables()=55 8B EC 83 EC 0C 53 8B D9 33 C0 89=pdb
start_input_pass()=55 8B EC 56 8B 75 08 8B CE E8=pdb
finish_input_pass()=55 8B EC 8B 45 08 8B ? ? ? ? ? C7 ? ? ? ? ? 5D=pdb
consume_markers()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 80 7F 11=pdb
reset_input_controller()=55 8B EC 56 8B 75 08 56 8B ? ? ? ? ? C7=pdb
_jinit_compress_master()=56 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 75 15=pdb
use_merged_upsample()=80 79 48 00 0F=pdb
_jpeg_calc_output_dimensions()=55 8B EC 83 EC 18 56 8B F1 89 75 F4=pdb
prepare_range_limit_table()=53 8B D9 56 57 68 ? ? ? ? 8B 43=pdb
master_selection()=56 8B F1 57 8B ? ? ? ? ? E8 ? ? ? ? 8B CE=pdb
prepare_for_output_pass()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 80 7F 08=pdb
finish_output_pass()=55 8B EC 8B 4D 08 56 80=pdb
finish_pass()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 8B 47 10 48=pdb
arith_encode()=55 8B EC 83 EC 08 8B C2 53=pdb
emit_restart()=55 8B EC 83 EC 0C 53 56 8B F1 8B DA 57 56=pdb
encode_mcu_DC_first()=55 8B EC 83 EC 1C 53 8B 5D 08 56 83 ? ? ? ? ? ? 8B ? ? ? ? ? 89 75 E8=pdb
encode_mcu_AC_first()=55 8B EC 83 EC 24 53 8B 5D 08 56=pdb
encode_mcu_DC_refine()=55 8B EC 56 8B 75 08 57 83=pdb
encode_mcu_AC_refine()=55 8B EC 83 EC 14 53 56 8B 75 08 57 83=pdb
encode_mcu()=55 8B EC 83 EC 28 53 8B 5D 08 57 83 ? ? ? ? ? ? 8B=pdb
start_pass()=55 8B EC 83 EC 08 80 7D 0C 00 56 8B=pdb
_jinit_arith_encoder()=56 8B F1 68 ? ? ? ? 6A 01 56 8B 46 04 8B 00 FF D0 83=pdb
start_pass_prep()=55 8B EC 83 7D 0C 00 56=pdb
pre_process_data()=55 8B EC 83 EC 1C 8B 55 10 56=pdb
pre_process_context()=55 8B EC 83 EC 1C 8B 4D 20=pdb
create_context_buffer()=55 8B EC 83 EC 28 53 8B D9 56 57 89 5D E0=pdb
_jinit_c_prep_controller()=55 8B EC 51 56 8B F1 6A 40 6A 01 56 8B 46 04 8B 00 FF D0 89 ? ? ? ? ? 83 C4 0C C7 ? ? ? ? ? 8B=pdb
expand_right_edge()=55 8B EC 83 EC 08 53 8B 5D 0C 56 8B F1=pdb
sep_downsample()=55 8B EC 83 EC 08 53 56 8B 75 08 C7=pdb
int_downsample()=55 8B EC 83 EC 2C 8B 45 0C 53 56 57 8B=pdb
fullsize_downsample()=55 8B EC 51 8B 4D 08 8B 45=pdb
h2v1_downsample()=55 8B EC 51 8B 45 0C 53 8B 5D 10=pdb
h2v2_downsample()=55 8B EC 83 EC 0C 8B 45 0C 8B=pdb
h2v2_smooth_downsample()=55 8B EC 83 EC 24 8B 45 0C 53=pdb
fullsize_smooth_downsample()=55 8B EC 83 EC 1C 8B 45 0C 53 8B 5D 08 56 8B=pdb
_jinit_downsampler()=55 8B EC 83 EC 1C 53 56 8B F1 C6=pdb
start_pass_main()=55 8B EC 8B 55 08 80 ? ? ? ? ? ? 8B=pdb
process_data_simple_main()=55 8B EC 56 57 8B 7D 08 8B ? ? ? ? ? 8B 46 08=pdb
_jinit_c_main_controller()=55 8B EC 51 56 8B F1 6A 40 6A 01 56 8B 46 04 8B 00 FF D0 89 ? ? ? ? ? 83 C4 0C C7 ? ? ? ? ? 80=pdb
_jpeg_calc_jpeg_dimensions()=55 8B EC 51 57 8B F9 8B 47 3C=pdb
initial_setup_0()=55 8B EC 83 EC 18 53 56 8B F1 57 89=pdb
validate_script()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 83 ? ? ? ? ? ? 7F=pdb
reduce_script()=53 8B D9 33 D2 56 33=pdb
select_scan_parameters()=53 56 8B F1 57 8B ? ? ? ? ? 85 C9 74 6F=pdb
per_scan_setup_0()=55 8B EC 83 EC 0C 56 8B F1 57 8B ? ? ? ? ? 83 F8 01 75 64=pdb
prepare_for_pass()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 8B 47 10 83=pdb
pass_startup()=55 8B EC 56 8B 75 08 56 8B ? ? ? ? ? C6=pdb
finish_pass_master()=55 8B EC 56 57 8B 7D 08 57 8B=pdb
_jinit_c_master_control()=56 8B F1 57 6A 20=pdb
start_iMCU_row()=83 ? ? ? ? ? ? 8B ? ? ? ? ? 7E 16 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C3 8B ? ? ? ? ? 48 39 42=pdb
start_pass_coef()=55 8B EC 8B 4D 08 56 8B ? ? ? ? ? C7=pdb
compress_data()=55 8B EC 83 EC 30 8B 55 08=pdb
compress_first_pass()=55 8B EC 83 EC 2C 53 56 57 8B 7D 08 33=pdb
compress_output()=55 8B EC 83 EC 34 53 56 8B 75 08 57 33 FF 8B ? ? ? ? ? 89 5D FC 39 ? ? ? ? ? 7E 46=pdb
_jinit_c_coef_controller()=55 8B EC 83 EC 10 8B 41 04 53=pdb
rgb_ycc_start()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 4B=pdb
rgb_ycc_convert()=55 8B EC 83 EC 18 83 6D=pdb
rgb_gray_convert()=55 8B EC 83 EC 0C 8B 4D 08 53 8B ? ? ? ? ? 8B=pdb
cmyk_ycck_convert()=55 8B EC 83 EC 1C 83 6D=pdb
grayscale_convert()=55 8B EC 51 8B 45 08 53 8B 5D 18=pdb
null_convert()=55 8B EC 83 EC 08 8B 45 08 8B 55=pdb
_jinit_color_converter()=56 8B F1 57 6A 0C=pdb
jpeg_make_c_derived_tbl()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8A C2 88 45 FF 8B D9 57=pdb
emit_bits_s()=55 8B EC 51 8B 45 08 89 55=pdb
emit_bits_e()=55 8B EC 83 EC 08 53 8B 5D 08 89 55=pdb
emit_eobrun()=57 8B F9 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 56=pdb
emit_restart_s()=53 56 8B DA 8B F1 6A=pdb
encode_mcu_DC_first_0()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 8B 43=pdb
encode_mcu_AC_first_0()=55 8B EC 83 EC 1C 56 57 8B 7D 08 8B 47=pdb
encode_mcu_DC_refine_0()=55 8B EC 56 57 8B 7D 08 8B 47 18=pdb
encode_one_block()=55 8B EC 83 EC 10 53 8B D9 89 55 F4=pdb
encode_mcu_huff()=55 8B EC 83 EC 28 56 57 8B 7D 08 89=pdb
finish_pass_huff()=55 8B EC 83 EC 24 56 8B 75 08 57 80=pdb
jpeg_gen_optimal_table()=55 8B EC 81 ? ? ? ? ? 53 57 68 ? ? ? ? 0F=pdb
finish_pass_gather()=55 8B EC 83 EC 10 53 56 8B 75 08 80=pdb
start_pass_huff()=55 8B EC 8A 4D 0C=pdb
_jinit_huff_encoder()=56 8B F1 68 ? ? ? ? 6A 01 56 8B 46 04 8B 00 FF D0 89 ? ? ? ? ? 83 C4 0C C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
forward_DCT()=55 8B EC 81 ? ? ? ? ? 83 7D 20 00 8B 45 08 8B 55 0C 56=pdb
forward_DCT_float()=55 8B EC 81 ? ? ? ? ? 83 7D 20 00 8B 45 08 8B 55 0C 53=pdb
start_pass_fdctmgr()=55 8B EC 83 EC 18 8B 55 08 53 56 57 8B ? ? ? ? ? 33=pdb
_jinit_forward_dct()=56 8B F1 68 ? ? ? ? 6A 01 56 8B 46 04 8B 00 FF D0 89 ? ? ? ? ? 83 C4 0C C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
select_ncolors()=55 8B EC 83 EC 18 53 89=pdb
create_colormap()=55 8B EC 83 EC 2C 53 56 8B F1 57=pdb
create_colorindex()=55 8B EC 83 EC 1C 53 56 57 8B F9 89 7D E8=pdb
color_quantize()=55 8B EC 83 EC 0C 83 7D 14 00 8B 4D 08 53=pdb
color_quantize3()=55 8B EC 83 EC 0C 83 7D 14 00 8B 4D 08 8B=pdb
quantize_ord_dither()=55 8B EC 83 EC 20 83 7D 14=pdb
quantize3_ord_dither()=55 8B EC 83 EC 28 83 7D=pdb
quantize_fs_dither()=55 8B EC 83 EC 40 83=pdb
alloc_fs_workspace()=55 8B EC 51 53 56 8B F1 33 DB 57 8B=pdb
start_pass_1_quant()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 8B 47 10 89=pdb
new_color_map_1_quant()=55 8B EC 8B 4D 08 8B 01 C7 ? ? ? ? ? ? 8B 01 89=pdb
_jinit_1pass_quantizer()=56 8B F1 6A 58=pdb
build_ycc_rgb_table()=55 8B EC 83 EC 08 53 56 8B F1 57 68 ? ? ? ? 6A 01 8B 46 04 8B ? ? ? ? ? 56 8B 00 FF D0 89 47 10=pdb
start_pass_merged_upsample()=55 8B EC 8B 45 08 8B ? ? ? ? ? C6 41=pdb
merged_2v_upsample()=55 8B EC 8B 4D 1C=pdb
merged_1v_upsample()=55 8B EC 8B 45 18 8B=pdb
h2v1_merged_upsample()=55 8B EC 83 EC 1C 53 8B 5D 08 56 57 8B ? ? ? ? ? 8B=pdb
h2v2_merged_upsample()=55 8B EC 83 EC 28 53 8B 5D 08 56 8B=pdb
_jinit_merged_upsampler()=56 57 8B F9 6A 30 6A 01=pdb
start_pass_upsample()=55 8B EC 8B 4D 08 8B ? ? ? ? ? 8B ? ? ? ? ? 89=pdb
sep_upsample()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B ? ? ? ? ? 89=pdb
fullsize_upsample()=55 8B EC 8B 4D 14 8B 45 10 89=pdb
noop_upsample()=55 8B EC 8B 45 14 C7=pdb
int_upsample()=55 8B EC 83 EC 14 8B 45 14=pdb
h2v1_upsample()=55 8B EC 8B 4D 08 8B 45 14=pdb
h2v2_upsample()=55 8B EC 8B 45 14 53 8B 5D 08 57=pdb
_jinit_upsampler()=55 8B EC 83 EC 1C 53 56 8B F1 57 68=pdb
jpeg_make_d_derived_tbl()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8A C2 88 45 FF 8B D9 89=pdb
jpeg_fill_bit_buffer()=55 8B EC 83 EC 0C 8B C1 89 55=pdb
jpeg_huff_decode()=55 8B EC 53 8B 5D 10 57 8B F9 8B 4D 08=pdb
process_restart()=53 56 57 8B F9 57=pdb
decode_mcu_DC_first()=55 8B EC 83 EC 3C 53 8B 5D 08=pdb
decode_mcu_AC_first()=55 8B EC 83 EC 38 8B 45 08 53 83=pdb
decode_mcu_DC_refine()=55 8B EC 83 EC 1C 56 57 8B 7D 08 B8=pdb
decode_mcu_AC_refine()=55 8B EC 81 ? ? ? ? ? 53 57 8B 7D 08 83=pdb
decode_mcu_sub()=55 8B EC 83 EC 50 8B 4D 08 53 83=pdb
decode_mcu()=55 8B EC 83 EC 48 8B 45=pdb
start_pass_huff_decoder()=55 8B EC 83 EC 0C 53 56 8B 75 08 57 80 ? ? ? ? ? ? 8B ? ? ? ? ? 89 5D F4=pdb
_jinit_huff_decoder()=55 8B EC 51 53 8B D9 56 68=pdb
prescan_quantize()=55 8B EC 8B 4D 08 53 57=pdb
update_box()=55 8B EC 83 EC 2C 8B ? ? ? ? ? 53 8B DA=pdb
median_cut()=55 8B EC 83 EC 10 53 8B C2=pdb
compute_color()=55 8B EC 83 EC 3C 8B C1=pdb
select_colors()=55 8B EC 51 53 56 8B 71 04=pdb
find_nearby_colors()=55 8B EC 81 ? ? ? ? ? 53 8B 59=pdb
find_best_colors()=55 8B EC 81 ? ? ? ? ? 56 8B F2 B8=pdb
fill_inverse_cmap()=55 8B EC 81 ? ? ? ? ? 53 56 57 89 4D FC 8B=pdb
pass2_fs_dither()=55 8B EC 83 EC 6C 83=pdb
init_error_limit()=8B 41 04 56 8B ? ? ? ? ? 57 8B 00 68 ? ? ? ? 6A 01 51 FF D0 83 C4 0C 33=pdb
finish_pass1()=55 8B EC 8B 4D 08 56 8B ? ? ? ? ? 8B 46=pdb
start_pass_2_quant()=55 8B EC 53 56 8B 75 08 57 83 7E=pdb
new_color_map_2_quant()=55 8B EC 8B 45 08 8B ? ? ? ? ? C6 40=pdb
_jinit_2pass_quantizer()=56 8B F1 57 6A 2C=pdb
arith_decode()=55 8B EC 83 EC 08 53 56 8B F1 57 8B FA 89 7D=pdb
process_restart_0()=55 8B EC 83 EC 0C 53 56 8B F1 56=pdb
decode_mcu_DC_first_0()=55 8B EC 83 EC 1C 53 57 8B=pdb
decode_mcu_DC_refine_0()=55 8B EC 53 56 57 8B 7D 08 83 ? ? ? ? ? ? 8B=pdb
decode_mcu_0()=55 8B EC 83 EC 24 53 8B 5D 08 83=pdb
start_pass_0()=55 8B EC 83 EC 0C 53 56 8B 75 08 57 80 ? ? ? ? ? ? 8B ? ? ? ? ? 89 5D 08=pdb
_jinit_arith_decoder()=53 8B D9 68 ? ? ? ? 6A=pdb
start_iMCU_row_0()=83 ? ? ? ? ? ? 8B ? ? ? ? ? 7E 16 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C3 8B ? ? ? ? ? 48 39 ? ? ? ? ? 8B=pdb
start_input_pass_0()=55 8B EC 8B 4D 08 C7=pdb
start_output_pass()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 83 7F=pdb
decompress_onepass()=55 8B EC 83 EC 3C 8B 4D=pdb
consume_data()=55 8B EC 83 EC 34 53 56 8B 75 08 57 33 FF 8B ? ? ? ? ? 89 5D FC 39 ? ? ? ? ? 7E 49=pdb
decompress_data()=55 8B EC 83 EC 24 8B 55 08 57=pdb
decompress_smooth_data()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 57 8B ? ? ? ? ? 8B=pdb
_jinit_d_coef_controller()=55 8B EC 83 EC 14 53 56 57 8B F9 8A=pdb
build_ycc_rgb_table_0()=55 8B EC 83 EC 08 53 56 8B F1 57 68 ? ? ? ? 6A 01 8B 46 04 8B ? ? ? ? ? 56 8B 00 FF D0 89 47 08=pdb
ycc_rgb_convert()=55 8B EC 83 EC 28 83 6D=pdb
null_convert_0()=55 8B EC 51 8B 45 08 8B 55 18=pdb
grayscale_convert_0()=55 8B EC 8B 45 08 53 56 8B 75 18=pdb
gray_rgb_convert()=55 8B EC 8B 45 08 53 8B 5D 18=pdb
ycck_cmyk_convert()=55 8B EC 83 EC 2C 83 6D=pdb
_jinit_color_deconverter()=56 8B F1 57 6A 18=pdb
alloc_funny_pointers()=55 8B EC 83 EC 10 53 56 8B F1 57 8B 46=pdb
make_funny_pointers()=55 8B EC 83 EC 2C 53 8B D9 57=pdb
set_wraparound_pointers()=55 8B EC 83 EC 18 53 8B D9 56 33=pdb
set_bottom_pointers()=55 8B EC 83 EC 0C 53 56 8B F1 57 33 FF 89=pdb
start_pass_main_0()=55 8B EC 8B 4D 08 8B 45 0C 56 8B ? ? ? ? ? 83 E8 00 74=pdb
process_data_simple_main_0()=55 8B EC 53 8B 5D 08 57 8B ? ? ? ? ? 80 7F 30 00 75 1B=pdb
process_data_context_main()=55 8B EC 53 8B 5D 08 57 8B ? ? ? ? ? 80 7F 30 00 75 25=pdb
process_data_crank_post()=55 8B EC FF 75 14 8B 45 08 FF 75 10 FF=pdb
_jinit_d_main_controller()=55 8B EC 83 EC 08 53 56 8B F1 57 6A 50=pdb
start_pass_1()=55 8B EC 83 EC 14 53 8B 5D 08 33=pdb
_jinit_inverse_dct()=55 8B EC 51 56 8B F1 57 6A 54=pdb
start_pass_dpost()=55 8B EC 8B 4D 08 8B 45 0C 56 8B ? ? ? ? ? 83 E8 00 0F=pdb
post_process_1pass()=55 8B EC 8B 4D 20=pdb
post_process_prepass()=55 8B EC 53 8B 5D 08 56 57 8B ? ? ? ? ? 83 7E=pdb
post_process_2pass()=55 8B EC 51 8B 55 08 53 56 57 8B=pdb
_jinit_d_post_controller()=55 8B EC 83 EC 08 53 57 8B F9 88=pdb
_jpeg_fdct_islow()=55 8B EC 83 EC 28 8B 45 08 33=pdb
_jpeg_fdct_7x7()=55 8B EC 83 EC 14 53 56 57 68 ? ? ? ? 6A 00 FF=pdb
_jpeg_fdct_5x5()=55 8B EC 83 EC 08 53 56 57 68 ? ? ? ? 6A 00 FF=pdb
_jpeg_fdct_3x3()=55 8B EC 53 56 57 68 ? ? ? ? 6A 00 FF 75 08 E8 ? ? ? ? 8B 5D=pdb
_jpeg_fdct_2x2()=55 8B EC 53 56 57 68 ? ? ? ? 6A 00 FF 75 08 E8 ? ? ? ? 8B 75=pdb
_jpeg_fdct_1x1()=55 8B EC 56 8B 75 08 68 ? ? ? ? 6A 00 56 E8 ? ? ? ? 8B 45 0C 83 C4 0C 8B 08=pdb
_jpeg_fdct_9x9()=55 8B EC 83 EC 4C 8B 45 08 33=pdb
_jpeg_fdct_10x10()=55 8B EC 83 EC 74 8B=pdb
_jpeg_fdct_11x11()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D D0=pdb
_jpeg_fdct_12x12()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D D0=pdb
_jpeg_fdct_13x13()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D D4=pdb
_jpeg_fdct_14x14()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D D4=pdb
_jpeg_fdct_15x15()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D C0=pdb
_jpeg_fdct_16x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D CC=pdb
_jpeg_fdct_16x8()=55 8B EC 83 EC 5C 8B 45 08 33=pdb
_jpeg_fdct_14x7()=55 8B EC 83 EC 54 8B 45 08=pdb
_jpeg_fdct_12x6()=55 8B EC 83 EC 44 53 8B 5D 08=pdb
_jpeg_fdct_10x5()=55 8B EC 83 EC 38 53 8B 5D 08 56=pdb
_jpeg_fdct_8x4()=55 8B EC 83 EC 2C 53 8B 5D=pdb
_jpeg_fdct_2x1()=55 8B EC 56 8B 75 08 68 ? ? ? ? 6A 00 56 E8 ? ? ? ? 8B 45 0C 83 C4 0C 8B 00=pdb
_jpeg_fdct_8x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D DC=pdb
_jpeg_fdct_7x14()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 68=pdb
_jpeg_fdct_6x12()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 68=pdb
_jpeg_fdct_5x10()=55 8B EC 83 EC 64 53 8B 5D 08 56=pdb
_jpeg_fdct_4x8()=55 8B EC 83 EC 1C 8B 4D 08 53=pdb
_jpeg_fdct_3x6()=55 8B EC 83 EC 10 53 56 57 68 ? ? ? ? 6A 00 FF 75 08 E8 ? ? ? ? 8B 5D=pdb
_jpeg_fdct_2x4()=55 8B EC 53 8B 5D 08 56 57 68 ? ? ? ? 6A=pdb
_jpeg_fdct_1x2()=55 8B EC 56 57 8B 7D 08 68 ? ? ? ? 6A=pdb
_jpeg_fdct_ifast()=55 8B EC 83 EC 10 8B 4D 0C=pdb
_jpeg_fdct_float()=55 8B EC 51 53 8B 5D 0C 56 57 8B 1B=pdb
_jpeg_idct_islow()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B 5D 10 56 8B ? ? ? ? ? 83 E8 80 C7 ? ? ? ? ? ? 89 45 F8=pdb
_jpeg_idct_7x7()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B 5D 10 56 8B ? ? ? ? ? 83 E8 80 0F=pdb
_jpeg_idct_6x6()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 55 10 53 56 8B ? ? ? ? ? 0F BF 1A 83 E8 80 89=pdb
_jpeg_idct_5x5()=55 8B EC 83 EC 5C 8B 45 08 53=pdb
_jpeg_idct_4x4()=55 8B EC 83 EC 34 8B 45 08 53 56 57 8B ? ? ? ? ? 8B=pdb
_jpeg_idct_3x3()=55 8B EC 83 EC 14 8B 45 08 8B=pdb
_jpeg_idct_2x2()=55 8B EC 8B 45 08 8B 4D 10 53=pdb
_jpeg_idct_1x1()=55 8B EC 8B 45 0C 56 8B 48=pdb
_jpeg_idct_9x9()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B ? ? ? ? ? 83=pdb
_jpeg_idct_10x10()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 83 E8 80 89 45 F0=pdb
_jpeg_idct_11x11()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 55 10 53 56 8B ? ? ? ? ? 83 C2 40=pdb
_jpeg_idct_12x12()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 8B=pdb
_jpeg_idct_13x13()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B ? ? ? ? ? 8D=pdb
_jpeg_idct_14x14()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 4D 10 53 83 C1 20 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 83 E8 80 89 4D=pdb
_jpeg_idct_15x15()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B 5D 10 83=pdb
_jpeg_idct_16x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B ? ? ? ? ? 8B 7D 10 83 E8 80 89 45 08=pdb
_jpeg_idct_14x7()=55 8B EC 81 ? ? ? ? ? 8B 4D 0C 8B=pdb
_jpeg_idct_12x6()=55 8B EC 81 ? ? ? ? ? 8B 4D 0C 53 8B 5D=pdb
_jpeg_idct_10x5()=55 8B EC 81 ? ? ? ? ? 8B 4D 0C 53 8B 45=pdb
_jpeg_idct_8x4()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 55 10 53 56 8B ? ? ? ? ? 0F BF 1A 83 E8 80 0F=pdb
_jpeg_idct_6x3()=55 8B EC 83 EC 38 8B 45 08 53 56 57=pdb
_jpeg_idct_4x2()=55 8B EC 83 EC 10 8B 45 08 8B 55=pdb
_jpeg_idct_2x1()=55 8B EC 8B 45 08 53 56 57 8B ? ? ? ? ? 8B 45=pdb
_jpeg_idct_8x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B ? ? ? ? ? 8B 7D 10 83 E8 80 89 45 EC=pdb
_jpeg_idct_7x14()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 83 E8 80 89 45 F4=pdb
_jpeg_idct_6x12()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 55 10 53 56 8B ? ? ? ? ? 83 C2 20=pdb
_jpeg_idct_5x10()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8B 4D 10 53 83 C1 20 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 83 E8 80 89 45=pdb
_jpeg_idct_3x6()=55 8B EC 83 EC 3C 8B 45 08 8B=pdb
_jpeg_idct_2x4()=55 8B EC 83 EC 10 8B 45 08 53 56 57 8B ? ? ? ? ? 8B=pdb
_jpeg_idct_1x2()=55 8B EC 8B 45 08 53 56 8B 75 14=pdb
_jpeg_idct_ifast()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 8D=pdb
_jpeg_idct_float()=55 8B EC 81 ? ? ? ? ? 8B 45 08 8D=pdb
_inflateReset()=55 8B EC 8B 45 08 85 C0 0F ? ? ? ? ? 8B=pdb
_inflateReset2()=56 57 8B F9 85 FF 74 41=pdb
_inflateInit2_()=55 8B EC 8B 45 08 56 8B F1 85 C0 0F=pdb
_inflateInit_()=55 8B EC FF 75 10 8B 4D 08 FF 75 0C E8 ? ? ? ? 83=pdb
updatewindow()=55 8B EC 51 53 8B D9 B8 ? ? ? ? 56=pdb
_inflate()=55 8B EC 8B 45 08 83 EC 40 85=pdb
_inflateEnd()=55 8B EC 56 8B 75 08 85 F6 74 38=pdb
_crc32()=55 8B EC 8B 55 0C 85 D2 75 04=pdb
crc32_little()=55 8B EC 51 53 57 8B 7D 08 8B DA=pdb
fill_window()=55 8B EC 83 EC 08 53 56 57 8B F9 8B 77=pdb
deflate_stored()=55 8B EC 53 56 8B 75 08 BB ? ? ? ? 57 8B 46=pdb
deflate_fast()=55 8B EC 53 56 8B 75 08 57 8B 5D=pdb
deflate_slow()=55 8B EC 83 EC 08 53 56 8B 75 08 57 8B 5D=pdb
_zcalloc()=55 8B EC 8B 45 0C 0F AF=pdb
_adler32()=55 8B EC 53 8B 5D 08 56 57 8B F9 8B F2=pdb
_inflate_table()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 0F=pdb
_inflate_fast()=55 8B EC 83 EC 44 53 56 57 8B F9 89 7D E8=pdb
init_block()=8D ? ? ? ? ? BA ? ? ? ? 56 0F=pdb
gen_bitlen()=55 8B EC 83 EC 34 8B 42 04=pdb
gen_codes()=55 8B EC 83 EC 24 53 56 8B D9 89=pdb
build_tree()=55 8B EC 83 EC 10 8B C2 83=pdb
send_tree()=55 8B EC 83 EC 1C 53 56 57 8B FA=pdb
build_bl_tree()=56 8B F1 FF ? ? ? ? ? 8D ? ? ? ? ? E8=pdb
send_all_trees()=55 8B EC 51 53 56 8B F1 8B C2=pdb
__tr_stored_block()=55 8B EC 53 57 8B F9 8B DA 8B=pdb
__tr_flush_block()=55 8B EC 83 EC 08 53 56 57 8B F9 C7 ? ? ? ? ? ? 8B DA=pdb
compress_block()=55 8B EC 83 EC 14 53 8B DA 8B=pdb
detect_data_type()=56 57 8B F9 B8 ? ? ? ? 33=pdb
bi_windup()=56 8B F1 8B ? ? ? ? ? 83 F8 08=pdb
virtual int CMsgApplySticker::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 28 00 0F ? ? ? ? ? F6 47 28 01 74 11 FF 77 0C FF 77 08 E8 ? ? ? ? 83 C4 08 8D 70 01 8B 47 28 D1 E8 A8 01 74 11=pdb=CMsgApplySticker=8
virtual int CMsgGCBannedWord::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 18 00 0F ? ? ? ? ? F6 47 18 01 74 1B 8B 47 08=pdb
virtual int CMsgGameServerInfo::ByteSize(void)const=53 56 57 8B F9 33 F6 8B 57 64=pdb=CMsgGameServerInfo=8
virtual int CMsgInviteToParty::ByteSize(void)const=56 57 8B F9 33 F6 8B 4F 1C 84 C9 74 59=pdb=CMsgInviteToParty=8
virtual int CSOItemCriteria::ByteSize(void)const=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 8B 4F 38=pdb
virtual int CSOItemRecipe::ByteSize(void)const=55 8B EC 51 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 80 7E 74=pdb=CSOItemRecipe=8
virtual void CMsgGCReportAbuse::Clear(void)=8B 41 34 84 C0 74 5A=pdb=CMsgGCReportAbuse=3
virtual void CMsgGameServerInfo::Clear(void)=8B 41 64 84=pdb=CMsgGameServerInfo=3
virtual void CMsgPartyInviteResponse::Clear(void)=80 79 20 00 74 20 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb=CMsgPartyInviteResponse=3
virtual void CMsgUpdateItemSchema::Clear(void)=80 79 1C 00 74 75=pdb=CMsgUpdateItemSchema=3
virtual void CMsgUseItem::Clear(void)=80 79 38 00 74 31=pdb=CMsgUseItem=3
virtual void CSOEconItem::Clear(void)=56 8B F1 57 8B 46 78 84=pdb
virtual void CSOItemCriteria::Clear(void)=56 8B F1 57 8B 46 38 84 C0 74 26=pdb
virtual void CSOItemCriteriaCondition::Clear(void)=8B 41 20 84 C0 74 5A=pdb=CSOItemCriteriaCondition=3
virtual void CSOLobbyInvite::Clear(void)=8B 41 20 84 C0 74 3F C1 E8 02 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
virtual int CSOEconItem::GetCachedSize(void)const=8B 41 74 C3=pdb
virtual int CSOItemRecipe::GetCachedSize(void)const=8B 41 70 C3=pdb
virtual void CSOEconItem::SetCachedSize(int)const=55 8B EC 8B 45 08 89 41 74=pdb=CSOEconItem=16
virtual void CSOItemRecipe::SetCachedSize(int)const=55 8B EC 8B 45 08 89 41 70=pdb=CSOItemRecipe=16
virtual CSOEconCoupon::~CSOEconCoupon(void)=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? 8B CE 5E=pdb
virtual int CPreMatchInfoData::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 24 00 74 68=pdb=MLTick=8
virtual int DataCenterPing::ByteSize(void)const=56 57 8B F9 33 F6 8B 4F 14 84 C9 74 3C=pdb
virtual int GameServerPing::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 18 00 74 79=pdb
virtual int PlayerRankingInfo::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 1C 00 74 7B=pdb
virtual int TournamentEvent::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 30 00 0F ? ? ? ? ? F6 47 30 01 74 26=pdb
virtual int TournamentPlayer::ByteSize(void)const=56 8B F1 57 33 FF 80 7E 28 00 0F ? ? ? ? ? F6 46 28 01 74 1B=pdb
virtual int TournamentTeam::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 2C 00 0F ? ? ? ? ? F6 47 2C 01 74 26=pdb
virtual int WatchableMatchInfo::ByteSize(void)const=53 56 8B F1 57 33 FF 80 7E 58=pdb
virtual int XpProgressData::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 14 00 74 52=pdb
virtual void CSOPersonaDataPublic::Clear(void)=56 8B F1 8B 46 18 84 C0 74 1D=pdb=CSOPersonaDataPublic=3
virtual void CSVCMsg_EncryptedData::Clear(void)=80 79 14 00 74 29=pdb
virtual void ScoreLeaderboardData::Clear(void)=56 8B F1 57 80 7E 38 00 74=pdb
virtual void TournamentEvent::Clear(void)=8B 41 30 84 C0 0F=pdb
virtual void TournamentPlayer::Clear(void)=8B 41 28 84 C0 0F=pdb=TournamentPlayer=3
virtual void TournamentTeam::Clear(void)=56 8B F1 57 8B 46 2C=pdb
virtual void WatchableMatchInfo::Clear(void)=8B 41 58 84=pdb
void CMsgGC_ServerQuestUpdateData::SharedDtor(void)=56 57 8B F9 8B 77 18 81=pdb
void protobuf_AddDesc_cstrike15_5fgcmessages_2eproto(void)=80 ? ? ? ? ? ? 0F ? ? ? ? ? 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? C6 ? ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8=pdb
virtual void CEngineGotvSyncPacket::Clear(void)=8B 41 34 84 C0 74 3F=pdb=CMsgGCCStrike15_v2_ClientReportPlayer=3
CCSUsrMsg_ResetHud::CCSUsrMsg_ResetHud(void)=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? 8B C6 C6 46 08 00 C7 ? ? ? ? ? ? 5E=pdb
virtual int CCSUsrMsg_HudMsg::ByteSize(void)const=53 56 57 8B F9 33 F6 8B 57 34=pdb=CCSUsrMsg_HudMsg=8
virtual int CCSUsrMsg_RadioText::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 28 00 0F ? ? ? ? ? F6 47 28 01 74 26=pdb=CCSUsrMsg_RadioText=8
virtual int CCSUsrMsg_ReportHit::ByteSize(void)const=53 56 57 8B F9 33 F6 8B 5F 1C 84 DB 74=pdb=CCSUsrMsg_ReportHit=8
virtual int CCSUsrMsg_SayText2::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 28 00 74=pdb=CCSUsrMsg_SayText2=8
virtual int CCSUsrMsg_Shake::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 1C 00 74 53=pdb=CCSUsrMsg_Shake=8
virtual int CCSUsrMsg_VGUIMenu::ByteSize(void)const=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 24 00 74 37=pdb=CCSUsrMsg_VGUIMenu=8
virtual int CCSUsrMsg_VoiceMask::ByteSize(void)const=55 8B EC 83 EC 08 8B 41 20=pdb=CCSUsrMsg_VoiceMask=8
virtual void CCSUsrMsg_Damage::Clear(void)=56 8B F1 8B 46 18 84 C0 74 20 D1 E8 C7 ? ? ? ? ? ? A8=pdb
virtual void CCSUsrMsg_DisplayInventory::Clear(void)=80 79 14 00 74 0B C6=pdb=CCSUsrMsg_DisplayInventory=3
virtual void CCSUsrMsg_Fade::Clear(void)=56 8B F1 8B 46 1C 84 C0 74 28 C1 E8 03=pdb=CCSUsrMsg_Fade=3
virtual void CCSUsrMsg_HudMsg::Clear(void)=56 8B F1 8B 46 34=pdb=CCSUsrMsg_HudMsg=3
virtual void CSVCMsg_Sounds::Clear(void)=56 8B F1 57 80 7E 20 00 74 04=pdb
virtual void CCSUsrMsg_QuestProgress::Clear(void)=80 79 1C 00 74 19=pdb
virtual void CCSUsrMsg_RawAudio::Clear(void)=8B 41 1C 84 C0 74 38 C1 E8 03=pdb
virtual void CSVCMsg_SetPause::Clear(void)=80 79 10 00 74 04=pdb
virtual void CCSUsrMsg_VGUIMenu::Clear(void)=56 8B F1 57 80 7E 24 00 74 26=pdb=CCSUsrMsg_VGUIMenu=3
virtual void CCSUsrMsg_VoiceMask::Clear(void)=56 8B F1 57 F7 ? ? ? ? ? ? 74 04=pdb=CCSUsrMsg_VoiceMask=3
virtual void CCLCMsg_RespondCvarValue::Clear(void)=8B 41 1C 84 C0 74 57=pdb
void CCSUsrMsg_VoteStart::SharedDtor(void)=56 57 8B F9 8B 77 10 81=pdb
void protobuf_AddDesc_cstrike15_5fusermessages_2eproto(void)=80 ? ? ? ? ? ? 0F ? ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? C6 ? ? ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8=pdb
CSVCMsg_VoiceData::CSVCMsg_VoiceData(void)=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? 66=pdb
virtual int CCLCMsg_ClientInfo::ByteSize(void)const=56 8B F1 57 33 FF 8B 4E 2C=pdb=CCLCMsg_ClientInfo=8
virtual int CMsgVector2D::ByteSize(void)const=56 57 8B F9 33 F6 8B 4F 14 84 C9 74 18 8A C1 24 01 0F B6 F0 F7 DE 1B F6 D1 E9 83 E6 05 F6 C1 01 74 03 83 C6 05 8B 47=pdb=CMsgVector2D=8
virtual int CMsgVector::ByteSize(void)const=56 57 8B F9 33 F6 8B 57 18 84 D2 74 25=pdb
virtual int CNETMsg_File::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 18 00 74 7B=pdb
virtual int CNETMsg_SignonState::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 2C 00 0F ? ? ? ? ? F6 47 2C 01 74 1B=pdb=CNETMsg_SignonState=8
virtual int CSVCMsg_Menu::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 14 00 74 5E=pdb
virtual int CSVCMsg_SendTable::ByteSize(void)const=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 8B 47 24=pdb=CSVCMsg_SendTable=8
virtual int CSVCMsg_VoiceData::ByteSize(void)const=56 57 8B F9 33 F6 80 7F 34=pdb=CSVCMsg_VoiceData=8
virtual void CCLCMsg_ClientInfo::Clear(void)=8B 41 2C 84 C0 74 3E=pdb=CCLCMsg_ClientInfo=3
virtual void CCLCMsg_FileCRCCheck::Clear(void)=8B 41 38 84 C0 0F=pdb=CCLCMsg_FileCRCCheck=3
virtual void CCSUsrMsg_ShowMenu::Clear(void)=8B 41 18 84 C0 74 31=pdb
virtual void CCLCMsg_VoiceData::Clear(void)=80 79 2C 00 74 4C=pdb=CCLCMsg_VoiceData=3
virtual void CMsg_CVars_CVar::Clear(void)=80 79 18 00 74 4E=pdb=CMsg_CVars_CVar=3
virtual void CNETMsg_File::Clear(void)=8B 41 18 84 C0 74 2F=pdb
virtual void CSVCMsg_BSPDecal::Clear(void)=56 8B F1 80 7E 20 00 74 2B=pdb=CSVCMsg_BSPDecal=3
virtual void CSVCMsg_ClassInfo_class_t::Clear(void)=8B 41 18 84 C0 74 4F=pdb
virtual void CSVCMsg_CreateStringTable::Clear(void)=80 79 2C 00 74 6F=pdb=CSVCMsg_CreateStringTable=3
virtual void CSVCMsg_FixAngle::Clear(void)=56 8B F1 8B 46 14 84 C0 74 16=pdb=CSVCMsg_FixAngle=3
virtual void CSVCMsg_GameEvent_key_t::Clear(void)=8B 41 38 84 C0 74 57=pdb=CSVCMsg_GameEvent_key_t=3
virtual void CSVCMsg_PacketEntities::Clear(void)=8B 41 24 84 C0 74 45=pdb=CSVCMsg_PacketEntities=3
virtual void CCSUsrMsg_SendAudio::Clear(void)=80 79 10 00 74 22=pdb
virtual void CSVCMsg_SendTable::Clear(void)=56 8B F1 57 8B 46 24 84 C0 74 2A D1=pdb=CSVCMsg_SendTable=3
virtual void CSVCMsg_Sounds_sounddata_t::Clear(void)=8B 41 4C 84=pdb=CSVCMsg_Sounds_sounddata_t=3
virtual void CSVCMsg_TempEntities::Clear(void)=8B 41 18 84 C0 74 2E C1 E8 02 C6=pdb=CSVCMsg_TempEntities=3
virtual void CSVCMsg_VoiceData::Clear(void)=8B 41 34 84 C0 74 55=pdb=CSVCMsg_VoiceData=3
virtual void CSVCMsg_VoiceInit::Clear(void)=8B 41 18 84 C0 74 30 D1 E8 C7 ? ? ? ? ? ? A8=pdb
void CSVCMsg_VoiceData::SharedDtor(void)=56 8B 71 18 81=pdb
void CSVCMsg_GameEvent::SharedDtor(void)=56 8B 71 08 81=pdb
void protobuf_AddDesc_network_5fconnection_2eproto(void)=80 ? ? ? ? ? ? 75 64 68=pdb
virtual CAchievementMgr::~CAchievementMgr(void)=56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? ? 83 7E F4=pdb
AchievementIDCompare()=55 8B EC 8B 45 08 56 57 8B 08 8B 45 0C 83=pdb
AchievementOrderCompare()=55 8B EC 8B 45 08 56 57 8B 38 8B 45=pdb
void CAchievementMgr::ClearAchievementData(int)=55 8B EC 56 57 8B 7D 08 33 F6 8D=pdb
int CAchievementMgr::GetAchievementCount(bool)=55 8B EC 56 57 0F B7 79=pdb
virtual int ConVar::GetInt(void)const=8B 51 1C 3B D1 75 06=pdb
virtual void CAchievementMgr::Shutdown(void)=53 56 57 8B D9 E8 ? ? ? ? 0F=pdb=CAchievementMgr=3
virtual void CAchievementMgr::Update(float)=56 57 8B F9 8B ? ? ? ? ? 85 C9 75 18=pdb=CAchievementMgr=14
int CAmmoDef::PlrDamage(int)=55 8B EC 8B 45 08 8B D1 83 F8 01 7C=pdb
CBasePlayerAnimState::CBasePlayerAnimState(void)=C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8B ? ? ? ? ? 89 ? ? ? ? ? C7=pdb
virtual float ConVar::GetFloat(void)const=55 8B EC 51 8B 51 1C 3B=pdb
virtual void CBasePlayerAnimState::Release(void)=85 C9 74 07 8B 01 6A 01 FF 50 24=pdb
CBaseAchievement::CBaseAchievement(void)=C6 41 08 00 8B C1=pdb
void CBaseAchievement::AwardAchievement(void)=56 8B F1 8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 75=pdb
void CBaseAchievement::HandleProgressUpdate(void)=56 8B F1 8B 4E 20 85 C9 7E=pdb
virtual void CBaseAchievement::SetShowOnHUD(bool)=55 8B EC 53 8A 5D 08 38=pdb
virtual void CBaseAchievement::SetUserSlot(int)=55 8B EC 8B 45 08 89 41 7C=pdb
bool C_CSGameRules::IsFreezePeriod(void)=8A 41 20 C3=pdb
virtual bool CBaseAchievement::ShouldShowOnHUD(void)=8A 41 78=pdb
CSoundParameters::CSoundParameters(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6 41 20=pdb
virtual void C_BaseCombatWeapon::AbortReload(void)=56 8B F1 6A 07=pdb
virtual bool C_BaseCombatWeapon::CanBeSelected(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 02=pdb
void C_BaseCombatWeapon::ClassifyWeaponModel(void)=53 56 57 8B F9 8B 47 04 8D=pdb
int C_BaseWeaponWorldModel::GetMuzzleBoneIndex(void)=56 8B F1 83 ? ? ? ? ? ? 75 10=pdb
virtual int C_BaseCombatWeapon::GetRandomBurst(void)=A1 ? ? ? ? 56 8B F1 57 8B 38=pdb
virtual int C_BaseEntity::GetSolidFlags(void)const=81 ? ? ? ? ? 8B 01 FF 60 30=pdb
void C_BaseCombatWeapon::GiveDefaultAmmo(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 8B=pdb
virtual bool C_BaseCombatWeapon::HasAnyAmmo(void)=56 8B F1 8B ? ? ? ? ? C1 E8 1F=pdb
virtual bool C_BaseCombatWeapon::Reload(void)=56 8B F1 8B 06 FF ? ? ? ? ? FF ? ? ? ? ? 50=pdb
virtual void C_BaseCombatWeapon::Spawn(void)=56 8B F1 57 8B 06 FF ? ? ? ? ? 6A 02=pdb
virtual void C_BaseEntity::Think(void)=8B C1 8B 50 40=pdb
virtual void C_BaseCombatWeapon::WeaponIdle(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0F=pdb
CEffectData::CEffectData(void)=C7 ? ? ? ? ? ? 33 C0 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
void C_BaseEntity::AddEffects(int)=55 8B EC 53 8B 5D 08 56 8B F1 09=pdb
void C_BaseEntity::CheckHasThinkFunction(bool)=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B C6=pdb
virtual class Vector C_BaseEntity::EarPosition(void)=55 8B EC 8B 11 FF 75 08 FF ? ? ? ? ? 8B=pdb
virtual class Vector C_BaseEntity::EyePosition(void)=55 8B EC 56 8B F1 8B 06 FF 50 28=pdb
virtual int C_BaseEntity::GetTracerAttachment(void)=8B ? ? ? ? ? 56 83 CE=pdb
bool C_BaseEntity::IsStandable(void)const=56 8B F1 8B 06 FF ? ? ? ? ? A8=pdb
void C_BaseEntity::SetCollisionGroup(int)=55 8B EC 8B 45 08 39 ? ? ? ? ? 74 0B=pdb
bool C_BaseEntity::WillThink(void)=8B C1 83 ? ? ? ? ? ? 7E=pdb
virtual void C_BasePlayer::AbortReload(void)=56 8B F1 8B 06 FF ? ? ? ? ? 85 C0 74 15 8B 06 8B CE FF ? ? ? ? ? 8B=pdb
int C_BasePlayer::GetAssociatedTeamNumber(void)const=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 74 44=pdb
virtual int C_BasePlayer::GetDefaultFOV(void)const=56 57 8B F9 8B 07 FF ? ? ? ? ? 83=pdb
virtual float C_BasePlayer::GetPlayerMaxSpeed(void)=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 19=pdb
bool C_BasePlayer::IsSpectator(void)const=56 8B F1 8B 06 FF ? ? ? ? ? 83 F8 01 75 2D=pdb
virtual void C_BasePlayer::ItemPostFrame(void)=55 8B EC 83 EC 0C 56 57 8B F9 8B 37=pdb
virtual void C_BasePlayer::ItemPreFrame(void)=53 8B D9 56 57 8B 03 FF ? ? ? ? ? 8B 03 8B CB FF=pdb
float C_BaseAnimating::SetPoseParameter(int,float)=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 75 14 8B 46 04 8D 4E 04 FF 50 20 85 C0 74 07 8B CE E8 ? ? ? ? 8B ? ? ? ? ? 85 C0=pdb
void C_Beam::SetBeamFlags(int)=55 8B EC 8B 45 08 39 ? ? ? ? ? 74 06 89 ? ? ? ? ? 5D=pdb
void C_Beam::SetEndEntity(class C_BaseEntity near *)=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 0B 8B 06 8B CE FF 50 08 8B 00 EB 03 83 C8 FF 8B ? ? ? ? ? 49=pdb
CMeshBuilder::CMeshBuilder(void)=C7 ? ? ? ? ? ? ? ? ? 8B C1 C6=pdb
void CVertexBuilder::AdvanceVertex(void)=FF ? ? ? ? ? 8B ? ? ? ? ? 3B ? ? ? ? ? 7E 06 89 ? ? ? ? ? 8B 01=pdb
void CVertexBuilder::Reset(void)=8B 41 54 89 ? ? ? ? ? 8B=pdb
CBoneMergeCache::CBoneMergeCache(void)=56 8B F1 0F 57 C0 C7 ? ? ? ? ? ? ? ? ? C7=pdb
void CUtlBuffer::GetTypeBin<int>(int near &)=55 8B EC 56 6A 04=pdb
CUtlBuffer::~CUtlBuffer(void)=56 8B F1 83 7E 08 00 7C 20 8B 16 85 D2 74 13 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 5E=pdb
virtual void C_BaseAnimating::Clear(void)=56 8B F1 6A 3C=pdb
virtual void C_ClientRagdoll::ClientThink(void)=55 8B EC 83 EC 30 56 8B F1 80=pdb=IPVSNotify=27
virtual void C_BaseAnimating::DoMuzzleFlash(void)=8A ? ? ? ? ? FE C0 24 03 88 ? ? ? ? ? C3=pdb
virtual int C_BaseAnimating::GetRenderFlags(void)=A1 ? ? ? ? 53 56 8B F1 33=pdb
void C_BaseAnimating::InvalidateBoneCache(void)=80 ? ? ? ? ? ? 74 16 A1 ? ? ? ? 48 C7 ? ? ? ? ? ? ? ? ? 89 ? ? ? ? ? C3=pdb
bool C_BaseAnimating::IsRagdoll(void)const=83 ? ? ? ? ? ? 74 0C 80 ? ? ? ? ? ? 74=pdb
virtual bool C_BaseAnimating::IsSelfAnimating(void)=80 ? ? ? ? ? ? 74 03 B0 01 C3 0F=pdb
void C_BaseAnimating::RagdollMoved(void)=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 8B 01 FF 50=pdb
void C_BaseAnimating::ResetSequenceInfo(void)=56 8B F1 83 ? ? ? ? ? ? 75 0A 8B=pdb
virtual void C_ClientRagdoll::SUB_Remove(void)=8B 01 51 C6 ? ? ? ? ? ? C7=pdb=C_ClientRagdoll=128
virtual void C_BaseAnimating::SetPredictable(bool)=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B CE=pdb=CColorPickerPanel=88
virtual void C_BaseAnimating::SetSequence(int)=55 8B EC 53 8B 5D 08 56 8B F1 39 ? ? ? ? ? 74=pdb
void C_BaseAnimating::TermRopes(void)=53 56 57 8B F9 BB ? ? ? ? 0F ? ? ? ? ? ? 66=pdb
char const near * CStudioHdr::name(void)const=8B 11 8B ? ? ? ? ? 85 C0 74 1B=pdb
void C_AnimationLayer::Reset(void)=56 8B F1 0F 57 C9 8B=pdb
VMatrix::VMatrix(struct matrix3x4_t const near &)=55 8B EC 8B 45 08 0F 10 00 0F 11 01=pdb
void C_BaseEntity::AddToLeafSystem(void)=0F ? ? ? ? ? ? 50 E8 ? ? ? ? C3=pdb
void CC_CL_Find_Ent(class CCommand const near &)=55 8B EC 51 57 8B 7D 08 8B 07=pdb
void CC_CL_Find_Ent_Index(class CCommand const near &)=55 8B EC 8B 4D 08 8B 01 83 F8 02 7D 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 83 F8 01 B8=pdb
virtual void C_BaseEntity::Clear(void)=56 8B F1 B8 ? ? ? ? 57 56=pdb
virtual bool C_BaseEntity::CreateLightEffects(void)=A1 ? ? ? ? 53 56 57 8B 30=pdb
virtual void C_BaseEntity::CreateModelInstance(void)=56 8B F1 B8 ? ? ? ? 66 ? ? ? ? ? ? 75=pdb
void C_BaseEntity::CreateShadow(void)=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 57 8D ? ? ? ? ? 89=pdb
void C_BaseEntity::DrawBBoxVisualizations(void)=55 8B EC 83 EC 18 53 8B D9 56 57 F6=pdb
float C_BaseEntity::GetInterpolationAmount(int)=55 8B EC 56 57 8B F1 BF=pdb
void near * C_BaseEntity::GetPredictedFrame(int)=55 8B EC 57 8B F9 83 ? ? ? ? ? ? 75 07 33=pdb
virtual int C_BaseEntity::GetRenderFlags(void)=8B 01 FF 50 20 8B D0 85 D2 74 1B=pdb
int C_BaseEntity::GetSoundSourceIndex(void)const=8B 01 FF 50 08 8B 00 83 F8 FF 75 06=pdb
void InitC_BaseEntityScriptDesc(void)=80 ? ? ? ? ? ? 0F ? ? ? ? ? FF ? ? ? ? ? B9 ? ? ? ? C6=pdb
virtual bool C_BaseEntity::IsDormant(void)const=83 79 5C FF 74=pdb
static void C_BaseEntity::MarkAimEntsDirty(void)=8B ? ? ? ? ? 33 C0 85 D2 7E 28=pdb
virtual void C_BaseEntity::MarkShadowDirty(bool)=55 8B EC 80 7D 08 00 74 0B=pdb
virtual void C_BaseEntity::OnRestore(void)=56 6A 07 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 8B CE 5E=pdb
virtual bool C_BaseEntity::PreRender(int)=8B 01 53 32=pdb
RecvProxy_MoveCollide()=55 8B EC 8B 45 08 8A 48 08 8B 45 0C=pdb
RecvProxy_MoveType()=55 8B EC 8B 45 08 8B 4D 0C 8A=pdb
void C_BaseEntity::RemoveFromAimEntsList(void)=57 8B F9 8B ? ? ? ? ? 83 F8 FF 0F ? ? ? ? ? 8B=pdb
void C_BaseEntity::RemoveVar(void near *,bool)=55 8B EC 56 8B F1 33 C0 8B 4E=pdb
virtual void C_BaseEntity::ResetLatched(void)=57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 75 35=pdb
virtual void C_BaseEntity::SUB_Remove(void)=56 8B F1 83 ? ? ? ? ? ? 7E 1A=pdb
virtual int C_BaseEntity::Save(class ISave near &)=55 8B EC 56 8B F1 8B 06 FF 50 3C=pdb
bool C_BaseEntity::SetModel(char const near *)=55 8B EC 8B 55 08 57 8B F9 85 D2 74 28=pdb
virtual void C_BaseEntity::SetPredictable(bool)=55 8B EC 8A 45 08 88 ? ? ? ? ? 8D=pdb
void C_BaseEntity::ShutdownPredictable(void)=56 8B ? ? ? ? ? 33 C0 57 8B F9=pdb
virtual bool C_BaseEntity::VPhysicsIsFlesh(void)=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B 01=pdb
virtual void C_BaseEntity::ValidateModelIndex(void)=8B 11 0F ? ? ? ? ? ? 50 FF ? ? ? ? ? C3=pdb
virtual bool CFlexSceneFileManager::Init(void)=56 6A 01 68 ? ? ? ? 6A=pdb
virtual void C_BaseFlex::OnThreadedDrawSetup(void)=83 ? ? ? ? ? ? 7C 39=pdb
virtual CBaseLesson::~CBaseLesson(void)=55 8B EC 51 56 8B F1 8B 4E 0C C7=pdb
void CBaseLesson::Init(void)=55 8B EC 51 56 8B F1 8D 45 FE 68 ? ? ? ? 50 B9 ? ? ? ? 80=pdb
void CIconLesson::Init(void)=55 8B EC 51 56 8B F1 8D 45 FE 68 ? ? ? ? 50 B9 ? ? ? ? C7=pdb
void CScriptedIconLesson::Init(void)=55 8B EC 83 EC 0C 8D 45 FE=pdb
void CTextLesson::Init(void)=55 8B EC 51 56 68 ? ? ? ? 8D 45 FE=pdb
bool CBaseLesson::IsLocked(void)const=56 8B F1 0F 57 C9 F3 ? ? ? ? 0F 2E C1 9F=pdb
bool CBaseLesson::ShouldShowSpew(void)=53 56 57 8B ? ? ? ? ? 8B D9 8B ? ? ? ? ? BE=pdb
virtual void CIconLesson::UpdateInactive(void)=55 8B EC 83 EC 10 A1 ? ? ? ? 56 8B F1 89=pdb
virtual bool CBaseLesson::WasDisplayed(void)const=80 79 64 00 0F=pdb
fogparams_t::fogparams_t(void)=C7 ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? C7=pdb
virtual bool C_BasePlayer::CanSetSoundMixer(void)=8B 01 FF ? ? ? ? ? 33 C9 83 F8 02=pdb
virtual float C_BasePlayer::GetMinFOV(void)const=A1 ? ? ? ? 83 78 18 01 75 07=pdb=C_BasePlayer=347
char const near * C_BasePlayer::GetPlayerName(void)=56 8B ? ? ? ? ? 85 F6 74 21 8B 41=pdb
virtual bool C_BasePlayer::ShouldPredict(void)=56 8B F1 85 F6 74 1C 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0E 8A ? ? ? ? ? 84 C0 74 04 B0 01 5E C3 32=pdb
virtual void C_BasePlayer::UpdateClientData(void)=56 57 8B F9 33 F6 8B 07 8B CF 56 FF ? ? ? ? ? 85 C0 74 16=pdb
void C_BasePlayer::UpdateFogBlend(void)=55 8B EC 83 EC 1C 56 8B F1 57 F3=pdb
virtual void C_BasePlayer::UpdateSpeechVOIP(bool)=55 8B EC 80 7D 08 00 57 8B F9 74=pdb
virtual bool C_BaseToggle::ShouldPredict(void)=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 74 0D=pdb
C_BeamSpotLight::C_BeamSpotLight(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? F3=pdb
void C_ColorCorrection::EnableOnClient(bool,bool)=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 75 15=pdb
virtual void C_EntityDissolve::UpdateOnRemove(void)=56 8B F1 8B ? ? ? ? ? 85 D2 74 16=pdb=C_EntityDissolve=127
virtual void C_EntityFlame::ClientThink(void)=56 8B F1 8D 4E F4=pdb=PrecacheEffectBuildPrecache::CResourcePrecacher=61
C_EnvDOFController::C_EnvDOFController(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
C_FogController::C_FogController(void)=55 8B EC 83 EC 08 56 57 8B F1 E8 ? ? ? ? 8D=pdb
C_EnvProjectedTexture::C_EnvProjectedTexture(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? 8D ? ? ? ? ? C7=pdb
FlashlightState_t::FlashlightState_t(void)=C7 ? ? ? ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? ? ? ? C7=pdb
bool C_EnvProjectedTexture::IsBBoxVisible(void)=55 8B EC 83 EC 34 56 8B F1 8B=pdb
virtual void C_EnvScreenOverlay::ClientThink(void)=F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 7B 1D=pdb=C_EnvScreenEffect=206
void C_EnvScreenOverlay::StartCurrentOverlay(void)=56 8B F1 8B ? ? ? ? ? 83 F9 0A=pdb
void C_EnvScreenOverlay::StartOverlays(void)=56 8B F1 51 C7 ? ? ? ? ? ? 8B 06 C7 ? ? ? ? ? ? ? ? ? C7=pdb
void C_EnvScreenOverlay::StopOverlays(void)=56 8B F1 51 C7 ? ? ? ? ? ? 8B 06 FF ? ? ? ? ? 80=pdb
C_EnvTonemapController::C_EnvTonemapController(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb
C_FireSmoke::C_FireSmoke(void)=53 56 57 8B D9 E8 ? ? ? ? C7 ? ? ? ? ? 8D ? ? ? ? ? C7 ? ? ? ? ? ? BF=pdb
virtual void C_Func_Dust::ClientThink(void)=55 8B EC 83 EC 1C 56 8B F1 8B ? ? ? ? ? A8=pdb=C_TEDust=52
virtual C_FuncSmokeVolume::~C_FuncSmokeVolume(void)=56 8B F1 FF ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
virtual void C_GameInstructor::Shutdown(void)=56 57 8B F9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 7E 21=pdb=C_GameInstructor=3
C_GameInstructor::C_GameInstructor(void)=56 68 ? ? ? ? 8B F1 E8 ? ? ? ? C7=pdb
void C_GameInstructor::FindErrors(void)=55 8B EC 83 EC 08 8B C1 33=pdb
void GameInstructor_Init(void)=8B ? ? ? ? ? 85 C9 74 57 8B=pdb
gameinstructor_reload_lessons()=A1 ? ? ? ? B9 ? ? ? ? FF 50 0C A1 ? ? ? ? B9 ? ? ? ? FF 60=pdb
virtual void C_LightGlow::ClientThink(void)=55 8B EC 83 EC 0C 56 8B F1 8B 46 F4=pdb=C_LightGlowOverlay=7
RecvProxy_HDRColorScale()=55 8B EC 8B 45 08 8B 48 08 8B 45 0C 89 ? ? ? ? ? 5D=pdb
virtual bool C_LightGlow::Simulate(void)=56 8B F1 8B 06 FF 50 28 8B 10=pdb=C_LightGlow=98
virtual C_ParticleSystem::~C_ParticleSystem(void)=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 85 FF=pdb
CPixelVisibilityQuery::CPixelVisibilityQuery(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 B8=pdb
COcclusionQuerySet::~COcclusionQuerySet(void)=55 8B EC 83 EC 0C 8B ? ? ? ? ? 57=pdb
void CPixelVisibilitySystem::DeleteUnusedSets(bool)=55 8B EC 83 EC 08 57 8B F9 B9=pdb
pixelvis_debug()=0F ? ? ? ? ? ? 8D 0C 80 A1 ? ? ? ? 0F ? ? ? ? 50 0F ? ? ? ? ? ? 50 0F=pdb
void C_Plasma::Update(void)=55 8B EC A1 ? ? ? ? 83 EC 0C F3=pdb
void C_Plasma::UpdateAnimation(void)=55 8B EC 83 EC 0C A1 ? ? ? ? 53 56 57 F3=pdb
class IGameResources near * GameResources(void)=A1 ? ? ? ? 85 C0 74 06 05=pdb
virtual int C_PlayerResource::GetCoachingTeam(int)=55 8B EC 8B 45 08 8D 50 FF 83 FA 3F 77 0B=pdb
unsigned __int64 C_PlayerResource::GetXuid(int)=55 8B EC 8B 55 08 8D 42 FF 83 F8 3F 77 12=pdb
virtual bool vgui::Panel::IsProportional(void)=0F B7 41 64 C1 E8 0C=pdb
CRopeManager::CRopeManager(void)=56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 46 04=pdb
virtual CRopeManager::~CRopeManager(void)=53 8B D9 56 57 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 83=pdb
bool C_RopeKeyframe::AnyPointsMoved(void)=56 57 8B ? ? ? ? ? 33 D2 85 FF 7E 52=pdb
void C_RopeKeyframe::FinishInit(char const near *)=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 6A=pdb
virtual void CRopeManager::ResetRenderCache(void)=56 8B F1 8B 56 10 85 D2 7E=pdb=CRopeManager=1
virtual void CRopeManager::SetHolidayLightMode(bool)=55 8B EC 8A 45 08 88 41 40=pdb=CRopeManager=4
void ShakeRopesCallback(class CEffectData const near &)=55 8B EC 83 EC 10 8B 4D 08 F3=pdb
virtual bool C_RopeKeyframe::ShouldDraw(void)=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 75 04=pdb=C_RopeKeyframe::CPhysicsDelegate=14
void C_RopeKeyframe::UpdateHolidayLights(void)=A1 ? ? ? ? B9 ? ? ? ? 8B 40 14 FF D0 84 C0 0F ? ? ? ? ? A1=pdb
bool UseHWMorphVCDs(void)=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0F A1 ? ? ? ? 8B D0 81 ? ? ? ? ? EB 12 8B 01 FF 50 34 8B ? ? ? ? ? 8B D0 A1 ? ? ? ? 85 D2 75=pdb
C_SlideshowDisplay::C_SlideshowDisplay(void)=56 57 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? C7=pdb
int C_SlideshowDisplay::NumMaterials(void)=8B ? ? ? ? ? 8B 00 85 C0 75=pdb
virtual void C_SoundscapeSystem::OnRestore(void)=A1 ? ? ? ? 8B 40 04 89 41=pdb=C_SoundscapeSystem=9
char const near * CCommand::operator[](int)const=55 8B EC 8B 45 08 85 C0 78 0F=pdb
void C_SoundscapeSystem::OnStopAllSounds(void)=56 8B F1 83 ? ? ? ? ? ? 57=pdb=C_SoundscapeSystem=7
static void C_Sprite::DestroyAllClientside(void)=83 ? ? ? ? ? ? 7E 20 0F ? ? ? ? ? ? A1 ? ? ? ? 8B 08 8B 41 08 83 C1 08 FF 50 04 83 ? ? ? ? ? ? 7F E7 C3=pdb
static void C_Sprite::RecreateAllClientside(void)=83 ? ? ? ? ? ? 7E 20 0F ? ? ? ? ? ? A1 ? ? ? ? 8B 08 8B 41 08 83 C1 08 FF 50 04 83 ? ? ? ? ? ? 7F E7 8B=pdb
virtual bool C_Team::ContainsPlayer(int)=55 8B EC 56 8B ? ? ? ? ? 33 D2 85 F6 7E 1C 8B ? ? ? ? ? 8B 4D 08 0F ? ? ? ? ? ? 39=pdb
virtual int C_Team::GetGGLeader(int)=55 8B EC 8B 45 08 83 F8 03 75=pdb
void RecvProxyArrayLength_PlayerArray(void near *,int,int)=55 8B EC 8B 4D 08 8B 45 10 39=pdb
Test_ProxyToggle_EnsureValue()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 83 3E=pdb
virtual bool C_VGuiScreen::ShouldDraw(void)=8B ? ? ? ? ? C1 E8 05 F6=pdb=CVGuiScreenEnumerator=13
virtual C_VoteController::~C_VoteController(void)=56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? C7=pdb
virtual void C_VoteController::Spawn(void)=56 8B F1 C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
ClientWorldFactory()=55 8B EC 8B ? ? ? ? ? FF 75 0C FF 75 08 8B 01=pdb
virtual bool C_World::Init(int,int)=55 8B EC C7 ? ? ? ? ? ? ? ? ? 5D=pdb=C_World=43
virtual void C_World::Release(void)=83 C1 F8 E9=pdb
virtual int ConVar_ServerBounded::GetInt(void)const=55 8B EC 51 8B 01 8B=pdb
void CFmtStrN<256,0>::Append(char)=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 7D=pdb
virtual int CFunctorJob::DoExecute(void)=8B 49 48 8B=pdb=CFunctorJob=3
virtual int CHLClient::GetInEyeEntity(void)const=E8 ? ? ? ? 85 C0 74 08 8D 48 08=pdb=CHLClient=116
virtual void CHLClient::GetStatus(char near *,int)=55 8B EC FF 75 0C FF 75 08 E8 ? ? ? ? 83=pdb=google::protobuf::internal::FieldSkipper=1
virtual void CHLClient::HudText(char const near *)=55 8B EC FF 75 08 E8 ? ? ? ? 83 C4 04 5D=pdb=google::protobuf::internal::FieldSkipper=2
bool CJob::IsFinished(void)const=8B 41 0C 83 F8 01 74 0D=pdb
bool CSteamID::IsValid(void)const=56 8B 71 04 8B D6=pdb
void PurgeOnDataChangedEvents(void)=0F ? ? ? ? ? ? 85 C0 74 0F=pdb
virtual void CHLClient::RetireAllPlayerDecals(bool)=55 8B EC E8 ? ? ? ? 80=pdb=CHLClient=114
void CHLClient::UncacheAllMaterials(void)=53 8B D9 56 57 BE ? ? ? ? 0F=pdb
cl_dumpsplithacks()=8B ? ? ? ? ? 56 8B ? ? ? ? ? 0F 1F 00 83 FE FF 74 47=pdb
virtual bool CClientThinkList::Init(void)=C7 ? ? ? ? ? ? B0 01 C6 41 4C=pdb=CClientThinkList=1
virtual CClientEntityList::~CClientEntityList(void)=56 57 8B F9 C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8=pdb
void CClientEntityList::Release(void)=53 56 57 8B F9 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 2B=pdb
virtual CClientLeafSystem::~CClientLeafSystem(void)=53 56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
bool CClientAlphaProperty::IgnoresZBuffer(void)const=66 8B 41 0A BA=pdb
virtual ClientModeShared::~ClientModeShared(void)=56 57 8B F9 8D 77 04 C7 ? ? ? ? ? 8B=pdb
virtual void ClientModeShared::Update(void)=A1 ? ? ? ? 53 56 8B F1 B9 ? ? ? ? FF=pdb
virtual void ClientModeShared::VGui_Shutdown(void)=56 8B F1 8B 4E 18 85 C9 74 0A=pdb
CViewSetup::CViewSetup(void)=80 ? ? ? ? ? ? 8B C1 C7=pdb
void CTextureAllocator::AddBlockToLRU(int)=55 8B EC 51 8B 45 08 53 8B D9 56 BE=pdb
void CTextureAllocator::DeallocateAllTextures(void)=56 57 8B F9 8D 4F 04 E8 ? ? ? ? 83=pdb
void CClientShadowMgr::DestroyQueuedShadows(void)=56 8B F1 57 33 FF 39 ? ? ? ? ? 7E 1D=pdb
virtual bool CShadowLeafEnum::EnumerateLeaf(int,int)=55 8B EC 83 C1 04 8D 45 08 50 FF ? ? ? ? ? E8=pdb=CShadowLeafEnum=0
virtual void CShadowModelProxy::OnBind(void near *)=55 8B EC 56 57 FF ? ? ? ? ? 8B F9=pdb=CShadowModelProxy=1
virtual void CShadowProxy::OnBind(void near *)=56 FF ? ? ? ? ? 8B F1 8B 4E=pdb=CShadowProxy=1
virtual void ParticleSphereProxy::Release(void)=85 C9 74 07 8B 01 6A 01 FF 50 14=pdb
r_shadowcolor()=55 8B EC 56 8B 75 08 8B 06 83 F8 01=pdb
virtual void CEffectsList::Flush(void)=55 8B EC 51 56 8B 71 04=pdb=CEffectsList=3
void CClientSteamContext::Activate(void)=56 8B F1 80 ? ? ? ? ? ? 75 3C C6=pdb
void CClientSteamContext::UpdateLoggedOnState(void)=55 8B EC 83 EC 0C 53 56 8B F1 8B 4E=pdb
CCollisionProperty::CCollisionProperty(void)=56 8B F1 33 C0 6A 00=pdb
RecvProxy_IntDirtySurround()=55 8B EC 8B 55 10 8B 4D 08 0F=pdb
RecvProxy_OBBMaxs()=55 8B EC 8B 45 08 56 8B 75 0C 83=pdb
RecvProxy_OBBMins()=55 8B EC 56 8B 75 0C 8B CE 8B 06 FF 50 08=pdb
RecvProxy_VectorDirtySurround()=55 8B EC 8B 45 08 8B 4D 10 F3=pdb
void UpdateDirtySpatialPartitionEntities(void)=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 83 ? ? ? ? ? ? 75=pdb
void CCollisionProperty::UpdatePartition(void)=55 8B EC 83 EC 18 57 8B F9 8B 4F=pdb
CCSMParallelSplit::CCSMParallelSplit(void)=56 57 8B F9 8D 4F 40 C6=pdb
SunLightState_t::SunLightState_t(void)=53 8B D9 56 57 BF ? ? ? ? 8D 73=pdb
virtual CDetailModel::~CDetailModel(void)=55 8B EC 83 EC 08 56 8B F1 8B 46 2C=pdb
DrawMeshCallback()=55 8B EC 8B 4D 08 6A 00 6A=pdb
void CDetailObjectSystem::FreeSortBuffers(void)=56 8B F1 8B ? ? ? ? ? 85 D2 74 1C=pdb
ShouldDrawInWireFrameMode()=8B ? ? ? ? ? 85 C9 75 1C 8B ? ? ? ? ? 68=pdb
float CountdownTimer::Now(void)const=A1 ? ? ? ? D9 40 10 C3=pdb
void CBaseEntityList::RemoveEntityAtSlot(int)=55 8B EC 53 8B 5D 08 8B C3 56 57=pdb
CEnvWindShared::CEnvWindShared(void)=53 56 8B ? ? ? ? ? 57 8B F9 C7=pdb
void ResetWindspeed(void)=0F ? ? ? ? ? ? BA ? ? ? ? 66 ? ? ? ? ? ? 74=pdb
char near * ParseFile(char near *,char near *,bool near *)=55 8B EC 6A 00 FF 75 10 FF 75 0C FF 75 08 E8 ? ? ? ? 83=pdb
virtual void CFXQuad::Destroy(void)=56 8B F1 8B 4E 10 85 C9 74=pdb=CFXQuad=4
virtual bool CFXQuad::IsActive(void)=F3 ? ? ? ? 0F 2F 41 38=pdb=CFXQuad=3
void CGameTimescale::UpdateTimescale(void)=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=pdb
virtual void CGameMovement::AddGravity(void)=55 8B EC 83 EC 14 0F 57 C9=pdb
void CreateStuckTable(void)=55 8B EC 83 EC 0C 83 ? ? ? ? ? ? 0F ? ? ? ? ? 68=pdb
virtual void CGameMovement::FinishGravity(void)=55 8B EC 83 EC 08 0F 57 C9 57=pdb
virtual void CGameMovement::FullLadderMove(void)=56 8B F1 8B 06 FF ? ? ? ? ? 8B 46=pdb
virtual void CGameMovement::FullTossMove(void)=55 8B EC 81 ? ? ? ? ? 53 8B D9 C7 ? ? ? ? ? ? 8B 03=pdb
virtual bool CGameMovement::InWater(void)=8B 41 04 80 ? ? ? ? ? ? 0F=pdb
virtual void CGameMovement::ReduceTimers(void)=A1 ? ? ? ? 8B 51 04 56=pdb
virtual void CGameMovement::StartGravity(void)=55 8B EC 83 EC 14 56 57 8B F9 0F 57 C0 8B=pdb
virtual int C_GameRulesProxy::ObjectCaps(void)=E8 ? ? ? ? 25 ? ? ? ? C3=pdb
__int64 CFpsHistogram::Encode(void)const=55 8B EC 83 EC 2C 53 56 57 8B F9 8B 4F=pdb
virtual void CBaseGameStats_Driver::OnRestore(void)=8B ? ? ? ? ? 8B 01 FF 60 28=pdb=CBaseGameStats_Driver=9
void CGameStringPool::PurgeDeferredDeleteList(void)=56 8B F1 57 33 FF 39 7E 2C=pdb
virtual bool CHudGeiger::ShouldDraw(void)=8B ? ? ? ? ? 85 C0 7E 13 3D=pdb=CHudGeiger=13
CGlowOverlay::CGlowOverlay(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? ? ? ? C7=pdb
bool C_HLTVCamera::IsPVSLocked(void)=8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 85 C0 74 09 83 78 0C 00 74 03 B0=pdb
Spec_Autodirector_Cameraman_Callback()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 75 0C 0F 57 C0 0F ? ? ? ? ? ? 77 0C 6A 00 B9 ? ? ? ? E8 ? ? ? ? C3=pdb
CHud::CHud(void)=C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 1C C7=pdb
bool CHud::HudDisabled(void)=83 ? ? ? ? ? ? 0F 9F C0 C3=pdb
void CHud::LevelInit(void)=55 8B EC 51 53 8B D9 56 33 F6 57 39 73=pdb
virtual void CBaseHudChat::SetChatPrompt(int)=56 8B F1 8B ? ? ? ? ? 83 ? ? ? ? ? ? 8B=pdb
void CAsyncCaptionResourceManager::Clear(void)=55 8B EC 83 EC 10 8B C1 C7 ? ? ? ? ? ? 89=pdb
void CHudCloseCaption::ClearAsyncWork(void)=53 8B D9 56 0F=pdb
void CHudCloseCaption::CreateFonts(void)=53 56 57 8B ? ? ? ? ? 8B D9 68=pdb
EmitCaptionCompletion()=55 8B EC 83 EC 0C 57 33 FF 39=pdb
virtual void CHudCloseCaption::LevelInit(void)=56 8B F1 E8 ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 8B=pdb=CHudCloseCaption=6
virtual void CHudCloseCaption::LevelShutdown(void)=56 8B F1 8B 06 C6 ? ? ? ? ? ? FF 50=pdb=CHudCloseCaption=7
virtual void CHudCloseCaption::Reset(void)=56 8B F1 80 ? ? ? ? ? ? 75 18=pdb=CHudCloseCaption=8
cc_random()=55 8B EC 56 57 8B 7D 08 BE ? ? ? ? 83=pdb
virtual void CHudHintDisplay::OnThink(void)=55 8B EC 83 EC 08 53 8B D9 8D 4D FC 56 51=pdb=CHudHintDisplay=101
virtual void CHudHintKeyDisplay::Reset(void)=6A 00 81 ? ? ? ? ? E8 ? ? ? ? C3=pdb
virtual void CLCD::AddChatLine(char const near *)=55 8B EC 83 EC 10 56 8B F1 83 7E=pdb=CLCD=1
virtual void CLCDItemIcon::Create(class IG15 near *)=55 8B EC 56 8B F1 57 8B 7D 08 8B CF FF 76 1C=pdb=CLCDItemIcon=1
void CUtlDict<class CUtlString,int>::RemoveAll(void)=53 8B D9 56 8B 73 10 83 FE FF 74 3E 8B 43 04 8D 0C F6=pdb
virtual void CLCDItem::Wipe(class IG15 near *)=55 8B EC 56 8B F1 57 33 FF 39 7E=pdb
void CLocatorTarget::Deactivate(bool)=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 12 8B 01 8B=pdb
class Color ConVar::GetColor(void)const=55 8B EC 8B 41 1C 83 EC 08=pdb
bool CLocatorTarget::IsPresenting(void)=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 16 F3 ? ? ? ? ? ? ? F3 ? ? ? ? 81 ? ? ? ? ? ? EB 0A=pdb
bool CLocatorTarget::IsStatic(void)=55 8B EC 51 56 8B F1 F7=pdb
bool CLocatorTarget::IsVisible(void)=8A 41 1E=pdb
void CLocatorTarget::SetVisible(bool)=55 8B EC 8A 45 08 56 8B F1 38 46 1E=pdb
void CLocatorTarget::StartPresent(void)=A1 ? ? ? ? 8B 40 10 89 ? ? ? ? ? C3=pdb
virtual bool CPDumpPanel::ShouldDraw(void)=83 ? ? ? ? ? ? 75 03 32=pdb=CPDumpPanel=13
virtual bool CHudSaveStatus::ShouldDraw(void)=55 8B EC 83 EC 08 0F 57 C9 53=pdb=CHudSaveStatus=13
virtual void CHudSubtitles::Reset(void)=56 8B F1 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? C7=pdb
virtual bool CHudSubtitles::ShouldDraw(void)=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 8B 01=pdb=CHudSubtitles=13
virtual bool CHudVehicle::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 85 C0 74 35=pdb=CHudVehicle=13
InvokeMethod()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8B CE 57=pdb
InvokeMethodTickProgress()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C9=pdb
void CUtlBuffer::Purge(void)=56 8B F1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
ValveJpegErrorHandler()=55 8B EC 8B 45 08 8D ? ? ? ? ? 81 ? ? ? ? ? 56=pdb
init_destination()=55 8B EC 8B 4D 08 56 68=pdb
term_destination()=55 8B EC 8B 45 08 8B 48 18 B8=pdb
virtual bool CInput::JoyStickActive(void)=56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74 2C=pdb
virtual void CInput::ClearInputButton(int)=55 8B EC 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 75 09=pdb
virtual float CInput::GetLookSpring(void)=55 8B EC 51 8B ? ? ? ? ? 81 ? ? ? ? ? 75 14=pdb
void IN_Impulse(class CCommand const near &)=55 8B EC 8B 45 08 83 38 01 7F 15=pdb
virtual float ConVar_m_pitch::GetFloat(void)const=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 85 C9=pdb=ConVar_m_pitch=12
virtual void CInput::SetFullscreenMousePos(int,int)=55 8B EC A1 ? ? ? ? FF 75 0C FF 75 08 8B 10 FF ? ? ? ? ? 8B=pdb
virtual void CLessOrEqualProxy::OnBind(void near *)=55 8B EC 83 EC 14 53 8B D9 56 57 8B 4B=pdb=CLessOrEqualProxy=1
__malloc_base()=55 8B EC A1 ? ? ? ? FF 75 08 8B 08 8B 01 FF 50 04=pdb
__free_base()=55 8B EC A1 ? ? ? ? FF 75 08 8B 08 8B 01 FF 50 14=pdb
__recalloc()=55 8B EC A1 ? ? ? ? 53 8B 5D 0C 0F=pdb
__calloc_base()=55 8B EC A1 ? ? ? ? 56 57 8B 7D 08 8B 08=pdb
virtual void CHudMenu::OnThink(void)=80 ? ? ? ? ? ? 74 22 A1=pdb=CHudMenu=125
virtual bool CHudMenu::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 84 C0 74 2F=pdb=CHudMenu=13
void CHudMessage::MessageScanNextChar(void)=55 8B EC 83 EC 14 53 56 8B F1 33=pdb
void CHudMessage::MessageScanStart(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 85=pdb
void CHudMessage::PaintCharacters(void)=55 8B EC 83 EC 18 53 57=pdb
virtual void CHudMessage::Reset(void)=56 8B F1 68 ? ? ? ? 6A 00 8D ? ? ? ? ? 50 E8 ? ? ? ? 83=pdb=CHudMessage=8
virtual void CHudMessage::SetDefaultFont(void)=8B 01 FF ? ? ? ? ? FF 50 10=pdb=CHudMessage=242
virtual void CHudMessage::SetFont(unsigned long)=55 8B EC 8B 45 08 56 8B F1 8D=pdb=CHudMessage=241
virtual void CHudMessage::SetPosition(int,int)=55 8B EC 81 ? ? ? ? ? E8 ? ? ? ? 85 C0 74 14=pdb=CHudMessage=237
virtual bool CHudMessage::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 84 C0 74 16=pdb=CHudMessage=13
virtual void CMumbleSystem::PostRender(void)=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 57=pdb=CMumbleSystem=15
ParticleControlPoint_t::ParticleControlPoint_t(void)=55 8B EC 51 8B D1 C7=pdb
virtual CParticleMgr::~CParticleMgr(void)=56 57 8B F9 6A 00 C7 ? ? ? ? ? E8=pdb
bool VMatrix::IsIdentity(void)const=F3 0F 10 01 F3 ? ? ? ? ? ? ? 0F 2E=pdb
void CParticleMgr::PostRender(void)=56 8B F1 57 BF ? ? ? ? 0F B7 46 34=pdb
void CParticleMgr::RemoveAllEffects(void)=55 8B EC 83 EC 08 56 57 8B F9 89 7D F8=pdb
void CParticleMgr::SpewInfo(bool)=53 8B ? ? ? ? ? 57 68 ? ? ? ? 8B=pdb
void CParticleEffectBinding::Term(void)=55 8B EC 83 EC 0C 56 8B F1 83 ? ? ? ? ? ? 0F=pdb
virtual void CLocalSpaceEmitter::Update(float)=8B 01 FF 50 48 C2=pdb=CLocalSpaceEmitter=1
virtual void CParticleSystemQuery::PreSimulate(void)=8B D1 33 C0 39 42=pdb=CParticleSystemQuery=30
void CPerfVisualBenchmark::Print(void)=55 8B EC 83 EC 10 53 57 8B F9 C7=pdb
virtual void CDataObjectAccessSystem::Shutdown(void)=56 57 8D 71 0C=pdb=CDataObjectAccessSystem=3
void C_BaseEntity::DestroyAllDataObjects(void)=56 57 8B F9 33 F6 66 ? ? ? ? ? ? ? ? ? 8B ? ? ? ? ? 0F=pdb
bool C_BaseEntity::IsSolid(void)const=80 ? ? ? ? ? ? 74 0C F6=pdb
bool C_BaseEntity::PhysicsCheckWater(void)=80 ? ? ? ? ? ? 0F 97 C0 C3=pdb
C_PhysPropClientside::C_PhysPropClientside(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? ? ? ? C7=pdb
virtual void C_PhysPropClientside::ClientThink(void)=55 8B EC 51 F3 ? ? ? ? ? ? ? 0F 57=pdb=C_PhysPropClientside=257
virtual float C_PhysPropClientside::GetMass(void)=8B ? ? ? ? ? 85 C9 74 07 8B 01 8B 40 74=pdb=CSoftbodyProcess=129
virtual bool C_PhysPropClientside::IsAsleep(void)=8B ? ? ? ? ? 85 C9 74 07 8B 01 8B 40 08=pdb=CSoftbodyProcess=130
virtual void C_PhysPropClientside::OnTakeDamage(int)=55 8B EC 80 ? ? ? ? ? ? 74 1A=pdb=C_PhysPropClientside=249
bool CPoseDebuggerImpl::IsModelShown(int)const=55 8B EC 8B 55 08 56 8B F1 81=pdb
virtual bool CPrediction::InPrediction(void)const=8A 41 08 C3=pdb
optimized_datamap_t::optimized_datamap_t(void)=56 8B F1 BA ? ? ? ? 8D 46 24=pdb
CompareFlattenedOffsets()=55 8B EC 8B 55 08 56 8B 75 0C 8B 42=pdb
cl_predictioncopy_describe()=55 8B EC 8B 4D 08 8B 01 83 F8 01 7F=pdb
virtual void CBreakParser::SetDefaults(void near *)=55 8B EC 8B 55 08 C6=pdb=CBreakParser=1
virtual bool C_ServerRagdoll::Simulate(void)=56 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F=pdb
CRagdoll::CRagdoll(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
void CRagdoll::PhysForceRagdollToSleep(void)=55 8B EC 81 ? ? ? ? ? 53 8B D9 C7 ? ? ? ? ? ? 56=pdb
_rand()=68 ? ? ? ? 6A 00 FF ? ? ? ? ? 83 C4 08 C3=pdb
virtual bool CRenderToRTHelper::Init(void)=83 ? ? ? ? ? ? 57 8B F9 75 04=pdb=CRenderToRTHelper=0
void CBaseRopePhysics::SetNumNodes(int)=55 8B EC 8B 45 08 8B D1 56=pdb
virtual void CSaveRestoreBlockSet::PostSave(void)=56 8B F1 57 33 FF 39 7E 30 7E 16 0F ? ? ? ? 8B 46 24 8B 0C B8 8B 01 FF 50 10=pdb=CSaveRestoreBlockSet=4
virtual void CSaveRestoreBlockSet::PreRestore(void)=56 57 8B F9 33 F6 39 77 30 7E 16=pdb=CSaveRestoreBlockSet=5
virtual void CSaveRestoreBlockSet::PostRestore(void)=56 8B F1 57 33 FF 39 7E 30 7E 16 0F ? ? ? ? 8B 46 24 8B 0C B8 8B 01 FF 50 20=pdb=CSaveRestoreBlockSet=8
int CRestore::ReadSimple<bool>(bool near *,int,int)=55 8B EC 51 56 57 8B 7D 10 8B D1=pdb
CRestore::CRestore(class CSaveRestoreData near *)=55 8B EC 56 8B F1 8B 4D 08 C7 ? ? ? ? ? C7=pdb
CSave::CSave(class CSaveRestoreData near *)=55 8B EC 8B 55 08 56 8B F1 8B CA=pdb
void CSave::BufferData(char const near *,int)=55 8B EC 53 8B D9 56 8B 73 18 85=pdb
int CSave::DataEmpty(char const near *,int)=55 8B EC 8B 45 0C 8B 4D 08 83=pdb
virtual void CRestore::EndBlock(void)=56 8B F1 57 8B 56 10=pdb=CRestore=8
virtual void CSave::EndBlock(void)=55 8B EC 83 EC 08 53 56 57 8B F9 8B 07 FF 50=pdb=CSave=9
virtual void CSave::EndLogging(void)=56 8B F1 8B 56 20=pdb=CSave=1
virtual bool CRestore::GetPrecacheMode(void)=8A 41 24 C3=pdb
virtual int CRestore::GetReadPos(void)const=8B 41 18 8B 40 08=pdb
bool CSaveRestoreSegment::Read(void near *,int)=55 8B EC 56 8B F1 8B 4E 0C 8B=pdb
virtual int CRestore::ReadTick(int near *,int,int)=55 8B EC 8B 41 1C 53=pdb=CRestore=26
virtual int CRestore::ReadTime(float near *,int,int)=55 8B EC 51 8B 41 1C 56 FF=pdb=CRestore=25
virtual void CSave::SetWritePos(int)=55 8B EC 8B 55 08 8B 49=pdb
virtual void CRestore::SkipEntityData(void)=55 8B EC 51 56 8B F1 57 8B 06 FF=pdb=CRestore=37
virtual int CRestore::SkipHeader(void)=55 8B EC 51 8B 01 8D 55 FC 52 FF 50=pdb=CRestore=10
virtual void CRestore::StartBlock(void)=55 8B EC 8B 01 8D 55 E0=pdb=CRestore=5
virtual void CSave::StartBlock(void)=8B 01 68 ? ? ? ? FF 50 20=pdb=CSave=7
virtual void CSave::StartLogging(char const near *)=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 C1=pdb=CSave=0
virtual void CSave::WriteInt(int const near *,int)=55 8B EC 8B 45 0C C1 E0 02=pdb
virtual void CSave::WriteString(char const near *)=55 8B EC 8B 55 08 8B C2 56 57 8B F1 8D 78 01 90 8A 08 40 84 C9 75 F9 2B C7 8B CE 40=pdb=CSave=23
virtual void CSave::WriteTick(int const near *,int)=55 8B EC 51 53 56 57 8B F9 8B 5D=pdb=CSave=34
virtual bool CSceneTokenProcessor::GetToken(bool)=55 8B EC 51 56 57 8B F9 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 8D=pdb=CSceneTokenProcessor=1
CSceneEventInfo::CSceneEventInfo(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6 41 10 00 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
void CSceneTokenProcessor::SetBuffer(char near *)=55 8B EC 8B 45 08 89 41 04 5D=pdb
virtual bool CSoundEmitterSystem::Init(void)=8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 44 A3 ? ? ? ? B0=pdb=CSoundEmitterSystem=1
cl_soundemitter_flush()=A1 ? ? ? ? B9 ? ? ? ? FF 50 0C 8B ? ? ? ? ? 8B=pdb
virtual void CSoundControllerImp::Update(float)=8B 41 FC 83 C1 FC FF 50 04 C2=pdb=CSoundEnvelopeController=41
virtual void CSpatialEntityMgr::Update(float)=57 8B F9 83 7F 18 00 7E=pdb=CSpatialEntityMgr=14
C_Sprite::C_Sprite(void)=55 8B EC 83 EC 08 56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
int C_Sprite::GetRenderBrightness(void)=8B D1 F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F=pdb
RecvProxy_SpriteScale()=55 8B EC 8B 45 08 8B 4D 0C F3 ? ? ? ? 0F ? ? ? ? ? ? 9F=pdb
void CEngineSprite::SetFrame(enum RenderMode_t,int)=55 8B EC 0F B7 11=pdb
void CEngineSprite::Shutdown(void)=56 8B F1 57 BF ? ? ? ? 0F B7 16=pdb
C_SpriteTrail::C_SpriteTrail(void)=55 8B EC 83 EC 08 56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? 0F 57 C9=pdb
virtual void C_SpriteTrail::ClientThink(void)=56 8D 71 F4 8B CE E8 ? ? ? ? 8B=pdb=C_SpriteTrail=194
void C_SpriteTrail::ConvertSkybox(void)=33 D2 39 ? ? ? ? ? 0F ? ? ? ? ? 66=pdb
void C_SpriteTrail::UpdateTrail(void)=55 8B EC A1 ? ? ? ? 83 EC 10 56 8B F1 F3=pdb
int CStringRegistry::GetStringID(char const near *)=55 8B EC 8B 45 08 83 EC 08 56 57=pdb
int CStudioHdr::GetNumAttachments(void)const=8B 41 04 85 C0 75 09 8B 01 8B ? ? ? ? ? C3 8B 40 3C=pdb
int CStudioHdr::GetNumPoseParameters(void)const=8B 41 04 85 C0 75 10=pdb
int CStudioHdr::GetNumSeq(void)const=8B 41 04 85 C0 75 09 8B 01 8B ? ? ? ? ? C3 8B 40 14=pdb
int CStudioHdr::GetSharedPoseParameter(int,int)const=55 8B EC 56 8B 71 04=pdb
int CStudioHdr::GetTransition(int,int)const=55 8B EC 83 79 04 00 8B 45=pdb
char const near * studiohdr_t::pszName(void)const=8B ? ? ? ? ? 85 C0 74 1B 8D 14=pdb
char near * CStudioHdr::pszNodeName(int)=55 8B EC 57 8B F9 8B 4F 04 85 C9 75 18=pdb
void CStudioHdr::setBoneFlags(int,int)=55 8B EC 51 53 8B 5D 0C 8B C1=pdb
void CSubtitlePanel::Pause(bool)=55 8B EC 8A 45 08 83=pdb
CUGCFileRequestManager::CUGCFileRequestManager(void)=C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 04 89 41 18=pdb
UGCFileRequest_t::UGCFileRequest_t(void)=56 8B F1 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
void UGCUtil_Shutdown(void)=8B ? ? ? ? ? 85 C9 74 20 8B 01 6A=pdb=CSGOWorkshopMaps=3
void bf_write::WriteUBitLong(unsigned int,int,bool)=55 8B EC 53 8B 5D 0C 57 8B F9 8B=pdb
bool UTIL_IsLowViolence(void)=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 43=pdb
virtual void CAvatarImage::Paint(void)=53 56 8B F1 57 80 7E 25=pdb=CAvatarImage=0
void CAvatarImage::SetAvatarSize(int,int)=55 8B EC 80 79 3C 00 8B 45=pdb
virtual void CAvatarImage::SetSize(int,int)=55 8B EC 80 79 3C 00 8B 55=pdb
virtual void CBitmapButton::Paint(void)=53 56 8B F1 33 DB 8B 06 8B=pdb=CBitmapButton=128
virtual class Color BitmapImage::GetColor(void)=55 8B EC 8B 45 08 8B 49 1C=pdb=BitmapImage=14
virtual void BitmapImage::Paint(void)=55 8B EC 83 EC 08 56 8B F1 8B 56=pdb=BitmapImage=0
virtual void vgui::Image::SetBkColor(class Color)=55 8B EC 8B 01 FF 75 08 FF 50 48=pdb
virtual void BitmapImage::SetPos(int,int)=55 8B EC 8B 45 08 89 41 20 8B=pdb=BitmapImage=1
virtual void CCenterPrint::Destroy(void)=56 8B F1 8B 4E 04 85 C9 74 22=pdb=CCenterPrint=1
virtual void CCenterStringLabel::Print(char near *)=55 8B EC 56 FF 75 08 8B F1 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 81=pdb=CCenterStringLabel=253
virtual void CDebugOverlay::Paint(void)=55 8B EC 83 EC 1C 89 4D F0=pdb=CDebugOverlay=128
virtual bool CDebugOverlay::ShouldDraw(void)=8B ? ? ? ? ? 8B 01 FF 50 38 85=pdb=CDebugOverlay=211
virtual void CFPSPanel::DumpStats(void)=56 8B F1 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? A1=pdb=CFPSPanel=211
void CFPSPanel::InitAverages(void)=56 8B F1 68 ? ? ? ? 6A 00 8D ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 50=pdb
virtual bool CFPSPanel::ShouldDraw(void)=80 ? ? ? ? ? ? 56 8B F1 0F ? ? ? ? ? 8B ? ? ? ? ? 81=pdb=CFPSPanel=212
bool VGui_IsSplitScreenPIP(void)=83 ? ? ? ? ? ? 7C 2A 8B ? ? ? ? ? 81=pdb
virtual void CLoadingDisc::Destroy(void)=56 8B F1 8B 4E 04 85 C9 74 1B 8B 01 6A 00 FF ? ? ? ? ? 8B 4E 04 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B=pdb=CLoadingDisc=1
virtual void CNetGraphPanelInterface::Destroy(void)=56 8B F1 8B 4E 04 85 C9 74 1B 8B 01 6A 00 FF ? ? ? ? ? 8B 4E 04 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 5E=pdb
virtual void CMessageChars::Clear(void)=8B 49 04 85 C9 0F ? ? ? ? ? C3=pdb
virtual void CMessageCharsPanel::Paint(void)=55 8B EC 51 53 56 8B ? ? ? ? ? 89 4D FC 57=pdb=CMessageCharsPanel=128
void CMovieDisplayScreen::UpdateMovie(void)=56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? B8 ? ? ? ? 66 ? ? ? ? ? ? 0F=pdb=CMovieDisplayScreen=27
void CNetGraphPanel::ComputeNetgraphHeight(void)=56 8B F1 8B ? ? ? ? ? 57 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 89=pdb
void CNetGraphPanel::DrawHatches(int,int,int)=55 8B EC 83 EC 24 89 4D F8=pdb
void CNetGraphPanel::DrawStreamProgress(int,int,int)=55 8B EC 83 EC 14 8B 45 08 56 8B F1 C7 ? ? ? ? ? ? 57=pdb
void CNetGraphPanel::InitColors(void)=55 8B EC 83 EC 20 F3 ? ? ? ? ? ? ? F3=pdb
virtual void VideoPanel::Activate(void)=55 8B EC 51 53 8B D9 56 57 6A 01=pdb=VideoPanel=238
virtual void VideoPanel::OnVideoOver(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? C7=pdb=VideoPanel=280
void VGui_ClearVideoPanels(void)=56 8B ? ? ? ? ? 83 C6 FF=pdb
stopvideos()=56 33 F6 39 ? ? ? ? ? 7E 2D 57 0F=pdb
virtual float CViewRender::GetZNear(void)=55 8B EC 51 8B ? ? ? ? ? 66=pdb
virtual void CViewRender::StartPitchDrift(void)=55 8B EC 51 A1 ? ? ? ? 56 8B F1 F3 ? ? ? ? 0F=pdb
virtual void CViewRender::StopPitchDrift(void)=A1 ? ? ? ? F3 ? ? ? ? 0F 5A C0 C6=pdb
virtual void CViewRenderBeams::ClearBeams(void)=56 8B F1 57 83 7E 04 00 74=pdb
void Beam_t::ComputeBounds(void)=55 8B EC 83 EC 0C 56 8B F1 8B 46 30=pdb
Noise()=55 8B EC 51 56 57 8B 7D 0C 8B F7=pdb
virtual void CViewEffects::LevelInit(void)=56 8B F1 8B 06 FF 50 34=pdb=CViewEffects=14
virtual void CViewEffects::ClearPermanentFades(void)=53 57 8B F9 8B 5F 18 83 EB 01 78=pdb=CViewEffects=5
virtual void CViewEffects::ClearAllFades(void)=56 8B F1 57 8B 7E 18 83 EF 01 78 19=pdb
virtual void CViewEffects::Save(class ISave near *)=55 8B EC 51 53 56 8B 75 08 8B D9 57 6A=pdb=CViewEffects=11
virtual void CViewEffects::ClearAllShakes(void)=53 56 8B F1 57 33 FF 8B 5E 2C=pdb=CViewEffects=13
void CC_Shake_TestPunch(class CCommand const near &)=55 8B EC 83 EC 30 56 8B 75 08 8B 06=pdb
void CViewEffects::ClearAllTilts(void)=53 56 8B F1 57 33 FF 8B 5E 50=pdb
bool __MsgFunc_Fade(class CCSUsrMsg_Fade const near &)=55 8B EC 83 EC 0C 8B 4D 08 8B=pdb
bool __MsgFunc_Shake(class CCSUsrMsg_Shake const near &)=55 8B EC 83 EC 1C 8B 4D 08 C7=pdb
virtual void CViewAngleAnimation::ClientThink(void)=55 8B EC 83 EC 44 53 56 57 8B F9 80=pdb=CViewAngleAnimation=191
void CViewAngleAnimation::SetAngles(class QAngle)=55 8B EC 83 EC 14 56 8B F1 F6=pdb
viewanim_addkeyframe()=55 8B EC 83 EC 1C 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=pdb
viewanim_create()=55 8B EC 8B ? ? ? ? ? 85 C9 74 10 8B 01=pdb
bool IsDepthOfFieldEnabled(void)=8B ? ? ? ? ? 56 8B 01 FF 50 34 8B F0 85 F6 75=pdb
CClientRenderablesList::CClientRenderablesList(void)=C7 ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
virtual bool CRefractiveGlassView::AdjustView(float)=56 57 8B F9 E8 ? ? ? ? 8B F0 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B CE 8B 16 FF=pdb=CRefractiveGlassView=4
virtual int PruneWorldListInfoJob::DoExecute(void)=55 8B EC 83 EC 0C 8B ? ? ? ? ? 53 56 8B F1=pdb=PruneWorldListInfoJob=3
virtual void CFreezeFrameView::Draw(void)=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 89 5D FC 8B 01 FF ? ? ? ? ? 8B=pdb=CFreezeFrameView=3
virtual void CRefractiveGlassView::Draw(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B CF=pdb=CRefractiveGlassView=3
virtual void CViewRender::FreezeFrame(float)=55 8B EC F3 ? ? ? ? 0F 57 C0 0F 2E D0=pdb
virtual int CViewRender::GetDrawFlags(void)=8B ? ? ? ? ? 85 C9 74 05 8B 01 FF 60 08 33=pdb
virtual void CBaseWorldView::PopView(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B 06 8B CE 6A=pdb
virtual void CRefractiveGlassView::PopView(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B 06 8B CE FF=pdb
void CConcurrentViewData::Purge(void)=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 85 C9 74 0F=pdb
virtual void CBaseWorldView::PushView(float)=55 8B EC F3 ? ? ? ? 83 EC 08 53=pdb
virtual void CReflectiveGlassView::PushView(float)=55 8B EC 83 EC 10 53 8B D9 8B ? ? ? ? ? 56=pdb=CReflectiveGlassView=5
virtual void CRefractiveGlassView::PushView(float)=55 8B EC 83 EC 14 89 4D FC 8B=pdb=CRefractiveGlassView=5
void CRendering3dView::ReleaseLists(void)=55 8B EC 51 53 56 8B F1 57 8B ? ? ? ? ? 85 C9=pdb
SetLightmapScaleForWater()=55 8B EC 8B ? ? ? ? ? 83 EC 18 8B 01 FF=pdb
void CUnderWaterView::CRefractionView::Setup(void)=53 8B D9 B9 ? ? ? ? 56 57 8B FB 8D ? ? ? ? ? 8D 46 08 F7 DE 1B F6 23 F0 F7 DF 8D 43 08 1B FF 23 F8 F3 A5 8B CB E8 ? ? ? ? 80 7B=pdb
r_cheapwaterend()=55 8B EC 51 8B 45 08 83 38 02 75 27 FF ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? D9 5D 08 F3 ? ? ? ? F3 ? ? ? ? 8B 01 FF 50 44=pdb
r_cheapwaterstart()=55 8B EC 51 8B 45 08 83 38 02 75 27 FF ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? D9 5D 08 F3 ? ? ? ? F3 ? ? ? ? 8B 01 FF 50 40=pdb
testfreezeframe_f()=8B ? ? ? ? ? 51 C7 ? ? ? ? ? ? 8B 01 FF 50 7C C3=pdb
CVoiceStatus::CVoiceStatus(void)=55 8B EC 83 EC 0C 53 56 8B F1 57 89 75 F8 C7=pdb
virtual CVoiceStatus::~CVoiceStatus(void)=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 05 8B 01 FF 50 34=pdb
void ClientVoiceMgr_LevelInit(void)=8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? C3=pdb
script_help_client()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=pdb
void near * zcalloc(void near *,unsigned int,unsigned int)=55 8B EC A1 ? ? ? ? 56 57 8B 7D 0C=pdb
void zcfree(void near *,void near *)=55 8B EC A1 ? ? ? ? FF 75 0C 8B=pdb
CAchievement_Meta::CAchievement_Meta(void)=55 8B EC 83 EC 20 56 8B F1 E8=pdb
virtual CAchievement_Meta::~CAchievement_Meta(void)=56 8B F1 8D ? ? ? ? ? E8 ? ? ? ? F6=pdb
bool CGlowObject::IsRendering(void)const=56 57 8B F9 8B 37 E8=pdb
virtual bool C_CHostage::ShouldDraw(void)=80 ? ? ? ? ? ? 75 19 8B ? ? ? ? ? 83=pdb=C_CHostage=276
BeamInfo_t::BeamInfo_t(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6 41 70=pdb
virtual C_CSPlayer::~C_CSPlayer(void)=55 8B EC 51 53 8B D9 56 89 5D FC C7=pdb
void C_CSPlayer::ClearAllBulletHitModels(void)=57 8B F9 8B ? ? ? ? ? 85 C0 74 2D=pdb
float C_CSPlayer::GetFreezeFrameInterpolant(void)=55 8B EC 83 EC 08 80 ? ? ? ? ? ? A1=pdb
GlowEffectSensorGrenade()=55 8B EC 8B 4D 08 0F 57 C0=pdb=C_PlayerAddonModel=295
void C_CSPlayer::HandleTaserAnimation(void)=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? A1=pdb
void CBoneSnapshot::Init(void)=56 8B F1 68 ? ? ? ? 6A 00 8D ? ? ? ? ? C7 ? ? ? ? ? 50=pdb
bool C_CSPlayer::IsHoldingSpecGrenadeKey(void)=55 8B EC 51 8B ? ? ? ? ? 32=pdb
bool C_BaseEntity::IsVisible(void)const=B8 ? ? ? ? 66 ? ? ? ? ? ? 75 03=pdb
virtual void C_CSPlayer::SetSequence(int)=55 8B EC 80 ? ? ? ? ? ? 74 16=pdb=C_CSPlayer=219
void C_CSPlayer::UpdateFlashBangEffect(void)=A1 ? ? ? ? 0F 57 D2 F3 ? ? ? ? ? ? ? F3 ? ? ? ? 0F=pdb
virtual void CBaseViewport::ShowBackGround(bool)=55 8B EC 8B 49 1C 8B 01=pdb
virtual void CCSModeManager::LevelShutdown(void)=8B ? ? ? ? ? 8B 01 FF 60 68=pdb=CCSModeManager=3
cl_reloadpostprocessparams()=55 8B EC 8B 45 08 B9 ? ? ? ? 83 38 02 75=pdb
cl_sos_test_get_opvar()=55 8B EC 56 8B 75 08 8B 06 83 F8 02 7E=pdb
toggleRdrOpt()=80 ? ? ? ? ? ? 8B ? ? ? ? ? 0F 94 C0 A2=pdb
virtual bool CCSCustomTextureSaver::Init(void)=C7 ? ? ? ? ? ? B0 01 C6 41 20=pdb=CCSCustomTextureSaver=1
virtual bool CCSGameMovement::LadderMove(void)=53 56 8B F1 E8 ? ? ? ? 8A D8 84=pdb=CCSGameMovement=43
virtual void CCSGameMovement::PlayerMove(void)=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? E8=pdb=CCSGameMovement=17
virtual void CCSGameMovement::ReduceTimers(void)=55 8B EC 83 EC 08 0F 57 D2 56 8B=pdb=CCSGameMovement=54
void C_CSGameRules::CloseBuyMenu(int)=55 8B EC 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 0F ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb
float C_CSGameRules::GetBuyTimeLength(void)=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 8B 01 FF=pdb
static int C_CSGameRules::GetMaxPlayers(void)=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74 06 B8=pdb
int C_CSGameRules::GetNumWinsToClinch(void)const=57 8B F9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 7E 6E=pdb
bool C_CSGameRules::IsEndMatchVotingForNextMap(void)=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 74 5A=pdb
virtual bool C_CSGameRules::IsGameRestarting(void)=8A 41 54=pdb=C_CSGameRules=56
bool C_CSGameRules::IsPlayingCoopGuardian(void)const=8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 04 75 12=pdb
bool C_CSGameRules::IsPlayingCoopMission(void)const=8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 04 75 13 8B ? ? ? ? ? 8B 01 FF 50 24 83=pdb
bool C_CSGameRules::IsPlayingGunGame(void)const=8B ? ? ? ? ? 8B 01 FF 50 20 48 F7 D8 1B C0 40 C3=pdb
bool C_CSGameRules::IsPlayingTraining(void)const=8B ? ? ? ? ? 8B 01 FF 50 20 33 C9 83 F8 02=pdb
bool C_CSGameRules::IsWarmupPeriod(void)const=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 02 75 04=pdb
virtual bool C_CSGameRules::ShouldCollide(int,int)=55 8B EC 8B 55 08 56 8B 75 0C 3B=pdb
void __CreateGameRules_CCSGameRules(void)=A1 ? ? ? ? 56 68 ? ? ? ? 8B 08 8B 01 FF 50 04 68 ? ? ? ? 8B F0 6A 00 56 E8 ? ? ? ? 83 C4 0C 85 F6 74 08=pdb
print_mapgroup()=8B ? ? ? ? ? 53 56 57 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 8B F0=pdb
virtual void CPlayerRankManager::Shutdown(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 2C 8B D7=pdb=CPlayerRankManager=3
print_achievement_categories()=55 8B EC 83 EC 08 53 8B ? ? ? ? ? 33 C0=pdb
bool CGameTrace::DidHit(void)const=F3 ? ? ? ? ? ? ? 0F 2F 41 2C 77=pdb
bool CCSPlayerAnimState::HandleJumping(void)=55 8B EC 51 56 8B F1 80 ? ? ? ? ? ? 0F=pdb
virtual void CCSPlayerAnimState::Update(float,float)=55 8B EC 56 8B F1 57 F3=pdb
CMatRenderContextPtr::~CMatRenderContextPtr(void)=56 8B F1 8B 0E 85 C9 74 11=pdb
bool IsPreCrouchUpdateDemo(void)=8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 75 14 8B ? ? ? ? ? 8B=pdb
virtual GameTypes::~GameTypes(void)=53 56 8B F1 57 8D ? ? ? ? ? C7 ? ? ? ? ? E8=pdb
GameTypes::Map::~Map(void)=56 57 8B F9 C7 ? ? ? ? ? ? ? ? ? 83 ? ? ? ? ? ? 7C=pdb
bool GameTypes::LoadMaps(class KeyValues near *)=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 39=pdb
virtual bool CSteamWorksGameStatsClient::Init(void)=E8 ? ? ? ? 6A 01 68 ? ? ? ? B9=pdb=CSteamWorksGameStatsClient=1
void Show_Steam_Stats_Session_ID(void)=F7 ? ? ? ? ? ? ? ? ? 56 BE=pdb
void C_Inferno::RecomputeBounds(void)=56 8B F1 8B 06 FF 50 28 F3 ? ? ? ? ? ? ? 8B CE F3 0F 10=pdb
virtual void CBitmapImagePanel::forceReload(void)=56 8B F1 80 ? ? ? ? ? ? 74 1F=pdb=CBitmapImagePanel=212
void CBitmapImagePanel::forceUpload(void)=56 8B F1 80 ? ? ? ? ? ? 57 8D ? ? ? ? ? 74 31=pdb
virtual void CGameConsole::Activate(void)=56 8B F1 80 7E 04 00 74=pdb=CGameConsole=1
virtual void CGameConsole::Clear(void)=80 79 04 00 74 08=pdb=CGameConsole=3
virtual bool CGameConsole::IsConsoleVisible(void)=80 79 04 00 75 03 32=pdb=CGameConsole=5
virtual void CGameConsole::SetParent(int)=55 8B EC 80 79 04 00 74 0C=pdb=CGameConsole=6
virtual void CGameConsole::Shutdown(void)=56 8B F1 8B 4E 08 85 C9 74 1C=pdb=CGameConsole=7
virtual bool CGameUI::IsInLevel(void)=8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 85 C0 74 1C 80=pdb=CGameUI=29
virtual void CGameUI::SetProgressOnStart(void)=80 49 08=pdb=CGameUI=23
char const near * CModInfo::GetFallbackDir(void)=8B ? ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? C3=pdb
wchar_t const near * CModInfo::GetGameTitle(void)=56 8B F1 66 83 3E=pdb
void COptionsSubKeyboard::Finish(enum ButtonCode_t)=55 8B EC 53 56 8B F1 57 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb
virtual void COptionsSubKeyboard::ItemSelected(int)=55 8B EC 56 8B F1 57 8B 7D 08 57 8B ? ? ? ? ? 8B=pdb=COptionsSubKeyboard=241
virtual void COptionsSubKeyboard::OnResetData(void)=56 8B F1 E8 ? ? ? ? 8B 06 8B CE 8B ? ? ? ? ? FF D0 84 C0 74 10=pdb=COptionsSubKeyboard=236
void COptionsSubMouse::UpdateJoystickPanels(void)=55 8B EC 51 56 57 8B F9 8B ? ? ? ? ? 8B 01=pdb
void COptionsSubMultiplayer::RemapLogo(void)=55 8B EC 81 ? ? ? ? ? 56 8B F1 8D ? ? ? ? ? 68 ? ? ? ? 52=pdb
virtual void CGammaDialog::OnClose(void)=56 8B F1 6A 01 F3=pdb=CGammaDialog=235
virtual void CGammaDialog::OnOK(void)=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B CE 66=pdb=CGammaDialog=280
virtual void COptionsSubVideo::OnResetData(void)=53 8B D9 56 57 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb=COptionsSubVideo=236
virtual void COptionsSubVideo::PerformLayout(void)=56 8B F1 E8 ? ? ? ? 83 ? ? ? ? ? ? 74 24=pdb=COptionsSubVideo=132
void COptionsSubVoice::EndTestMicrophone(void)=56 8B F1 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 40=pdb
virtual void COptionsSubVoice::OnApplyChanges(void)=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=pdb=COptionsSubVoice=237
void COptionsSubVoice::ResetVoiceParameters(void)=55 8B EC 83 EC 08 56 8B F1 51=pdb
void COptionsSubVoice::StartTestMicrophone(void)=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 80=pdb
virtual void CPanelListPanel::DeleteAllItems(void)=56 8B F1 57 33 FF 39 ? ? ? ? ? 7E 3B=pdb
virtual void CPanelListPanel::OnMouseWheeled(int)=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 4D 08 C1 E1 04 2B 4D 08 2B=pdb=CPanelListPanel=108
virtual void CPanelListPanel::RemoveItem(int)=55 8B EC 53 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 8B=pdb=CPanelListPanel=215
virtual bool CRunGameEngine::IsInGame(void)=55 8B EC 51 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 85 C0 74=pdb=CRunGameEngine=5
CDescription::~CDescription(void)=57 8B F9 8B 4F 04 C7 ? ? ? ? ? 85 C9 74 20=pdb
virtual CScriptObject::~CScriptObject(void)=57 8B F9 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C0 74 1C=pdb
bool CDescription::InitFromFile(char near *)=55 8B EC 51 89 4D FC 8B ? ? ? ? ? 53 83=pdb
BaseModUI::CUIGameData::CUIGameData(void)=55 8B EC 83 EC 10 53 56 8B F1 C7 ? ? ? ? ? ? C7=pdb
virtual void vgui::URLButton::DoClick(void)=56 8B F1 6A 01 8B 06 FF ? ? ? ? ? 8B 06=pdb=vgui::URLButton=259
void vgui::URLButton::Init(void)=56 8B F1 6A 00 6A 00 66=pdb
virtual void vgui::URLButton::OnCursorEntered(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0C 8B=pdb=vgui::URLButton=103
virtual void vgui::URLButton::OnCursorExited(void)=8A ? ? ? ? ? C0 E8 05 A8 01 75 0A=pdb=vgui::URLButton=104
virtual void vgui::Button::OnSetState(int)=55 8B EC 83 7D 08 00 56 8B F1 0F=pdb
virtual void vgui::URLButton::PerformLayout(void)=55 8B EC 51 56 57 8B F9 8D 45=pdb=vgui::URLButton=132
virtual void vgui::URLButton::SetArmed(bool)=55 8B EC 56 8B F1 8A 4D 08 8A ? ? ? ? ? 24=pdb=vgui::URLButton=250
virtual bool CExampleEffect::IsEnabled(void)=8A 41 04 C3=pdb
virtual void CBenchmarkResultsDialog::OnClose(void)=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 15=pdb
void CNewGameDialog::ShiftPanelIndices(int)=55 8B EC 83 7D 08 00 56 57 8B F1=pdb
virtual void CAsyncCtxSaveGame::Completed(void)=51 8B ? ? ? ? ? E8 ? ? ? ? C3=pdb=CAsyncCtxSaveGame=2
virtual void CAsyncCtxSaveGame::ExecuteAsync(void)=8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 28 56=pdb=CAsyncCtxSaveGame=1
virtual CBaseModPanel::~CBaseModPanel(void)=56 8B F1 C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 83=pdb
virtual void CBaseModPanel::OnGameUIActivated(void)=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 1E=pdb
virtual void CGameMenu::OnKillFocus(void)=53 56 57 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 8B CE 8B 06 8B 1F FF 10 50 8B CF FF ? ? ? ? ? 5F=pdb=CGameMenu=99
virtual void CBaseModPanel::OnSizeChanged(int,int)=55 8B EC 81 ? ? ? ? ? 5D=pdb
PanelJobWrapperFn()=55 8B EC 83 EC 08 56 FF ? ? ? ? ? 8B=pdb
virtual CGameSavePanel::~CGameSavePanel(void)=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B=pdb
virtual void CSaveGameBrowserDialog::Activate(void)=56 8B F1 0F ? ? ? ? ? ? 50 E8=pdb
void CSaveGameBrowserDialog::ShiftPanelIndices(int)=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 57=pdb
void CSaveGameBrowserDialog::ShowNoSaveGameUI(void)=56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 6A 00 68=pdb
virtual CHltvReplaySystem::~CHltvReplaySystem(void)=56 8B F1 57 8D ? ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 83=pdb
virtual int CHudChat::GetChatInputOffset(void)=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 08=pdb=CHudChat=32
virtual class Color CHudChat::GetClientColor(int)=55 8B EC 8B 55 0C 85 D2 75 0F=pdb=CHudChat=40
virtual void CHudWeaponSelection::LevelInit(void)=8B ? ? ? ? ? 85 C0 79 0B=pdb=CHudWeaponSelection=6
virtual bool CRadioStatus::Init(void)=56 8B F1 83 ? ? ? ? ? ? 75 22=pdb
virtual void CRadioStatus::Shutdown(void)=56 8B F1 8B ? ? ? ? ? 85 C9 74 05 8B 01=pdb=CRadioStatus=3
menuselect()=55 8B EC 8B 4D 08 8B 01 83 F8 02 0F=pdb
virtual bool SFMapOverview::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 84 C0 75 1E=pdb=CUserMessageBinder::BindParams<25,class CCSUsrMsg_ProcessSpottedEntityUpdate,0>=19
void SFMapOverview::UpdateGrenades(void)=53 8B D9 57 33 FF 39 ? ? ? ? ? 7C=pdb
virtual bool SFHudRadio::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 84 C0 74 04 32 C0 5E C3 A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 12=pdb
virtual bool SFHudFreezePanel::ShouldDraw(void)=56 8B F1 80 ? ? ? ? ? ? 74 31=pdb=CCSGO_HudFreezePanel=91
virtual bool SFHudInfoPanel::ShouldDraw(void)=56 8B F1 E8 ? ? ? ? 84 C0 74 04 32 C0 5E C3 A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 23=pdb=CCSGO_HudDamageIndicator=91
virtual void SFHudRadar::Reset(void)=8B 01 6A 01 FF 50 3C=pdb=CCSGO_HudRadar=87
virtual bool SFWeaponSelection::ShouldDraw(void)=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 74 20=pdb=CCSGO_OutOfAmmo=115
virtual void C_Item_Healthshot::WeaponIdle(void)=A1 ? ? ? ? 56 8B F1 F3 ? ? ? ? ? ? ? 0F 2F 40 10 77 2F=pdb=C_Item_Healthshot=325
virtual bool C_BaseCSGrenade::Deploy(void)=55 8B EC 83 EC 08 80 ? ? ? ? ? ? 74 07 C6 ? ? ? ? ? ? 80 ? ? ? ? ? ? 74 07 C6 ? ? ? ? ? ? 80=pdb
void CountdownTimer::Invalidate(void)=55 8B EC 83 EC 08 F3 ? ? ? ? 56=pdb
virtual void C_WeaponBaseItem::Spawn(void)=55 8B EC 83 EC 08 56 8B F1 C7 ? ? ? ? ? ? F3=pdb
virtual class Vector C_C4::GetGlowColor(void)=55 8B EC 8B 45 08 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 5D=pdb=C_C4=486
virtual C_WeaponCSBase::~C_WeaponCSBase(void)=55 8B EC 51 53 8B D9 56 57 68 ? ? ? ? FF=pdb
virtual void C_WeaponCSBaseGun::Spawn(void)=55 8B EC 83 EC 08 56 8B F1 E8 ? ? ? ? 80=pdb
virtual bool C_WeaponCSBaseGun::Deploy(void)=55 8B EC 83 EC 10 56 8B F1 C7 ? ? ? ? ? ? F3=pdb
virtual void C_WeaponCSBaseGun::DoFireEffects(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 16=pdb
virtual bool C_DEagle::SendWeaponAnim(int)=55 8B EC 8B 45 08 3D ? ? ? ? 75 0F=pdb=C_DEagle=301
virtual bool C_WeaponElite::SendWeaponAnim(int)=55 8B EC 8B 45 08 3D ? ? ? ? 75 3C=pdb=C_WeaponElite=301
bool CIronSightController::IsInIronSight(void)=53 56 8B F1 57 8B 4E 3C=pdb
bool CIronSightController::ShouldHideCrossHair(void)=8B 41 3C 85 C0 74 27=pdb
virtual void C_Knife::WeaponIdle(void)=A1 ? ? ? ? 56 8B F1 F3 ? ? ? ? ? ? ? 0F 2F 40 10 77 3A=pdb
void CAttributeManager::ClearCache(void)=57 8B F9 80 7F 20 00 0F ? ? ? ? ? C7=pdb
void CCSInventoryManager::GenerateBaseItems(void)=55 8B EC 83 EC 0C 53 56 33 D2=pdb
virtual bool CCSInventoryManager::Init(void)=56 8B F1 6A 00 68 ? ? ? ? 68=pdb
CEconStyleInfo::CEconStyleInfo(void)=C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 18=pdb
AlternateIconData_t::~AlternateIconData_t(void)=56 8B F1 C7 ? ? ? ? ? ? 83 7E 38=pdb
virtual int CBaseAchievement::GetCount(void)=8B 41 58 C3=pdb
CItemSelectionCriteria::CItemSelectionCriteria(void)=C6 01 00 C7 ? ? ? ? ? ? C6=pdb
CEconItem::CEconItem(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? C7=pdb
virtual CEconItem::~CEconItem(void)=56 8B F1 8B 4E 18 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 85 C9 74 05 E8 ? ? ? ? C7=pdb
virtual unsigned char CEconItem::GetFlags(void)const=8A 41 2C C3=pdb=CEconItem=30
virtual bool CEconItem::GetInUse(void)const=B8 ? ? ? ? 66 39 41 22 0F=pdb=CEconItem=34
virtual int CEconItem::GetQuality(void)const=0F B7 41 22 C1 E8 05=pdb=CEconItem=28
virtual int CEconItem::GetRarity(void)const=53 56 8B F1 57 8B 06 FF 50 30=pdb=CEconItem=29
void CEconItem::SetItemID(unsigned __int64)=55 8B EC 8B 55 08 53 8B 5D 0C 56 8B=pdb
void CEconItem::SetOriginalID(unsigned __int64)=55 8B EC 8B 55 08 8B 45 0C 3B=pdb
CPlayerInventory::CPlayerInventory(void)=56 8B F1 C7 ? ? ? ? ? 8D 4E 2C=pdb
void C_EconItemView::SetItemID(unsigned __int64)=55 8B EC 8B 45 08 53 8B 5D 0C 56 57=pdb
void C_EconItemView::ClearInventoryImageRgba(void)=55 8B EC 81 ? ? ? ? ? 57 8B F9 C7 ? ? ? ? ? ? C7=pdb
void CEconItemAttribute::Init(void)=55 8B EC 83 EC 08 53 56 8B F1 BB=pdb
void C_EconItemView::Invalidate(void)=56 8B F1 80 ? ? ? ? ? ? 57 8D ? ? ? ? ? 74 13=pdb
BMPResData_t::BMPResData_t(void)=C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 48=pdb
virtual void CBaseModelPanel::OnCursorMoved(int,int)=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8D=pdb
void CBaseModelPanel::SetModelAnim(int,bool)=55 8B EC 8B D1 8B ? ? ? ? ? 85 C9=pdb
virtual CBaseViewport::~CBaseViewport(void)=53 57 8B F9 8D ? ? ? ? ? C7=pdb
virtual void CBaseViewport::LevelInit(void)=56 57 8B F9 33 F6 39 77 50=pdb
virtual void CBaseViewport::Paint(void)=8B ? ? ? ? ? 56 81 ? ? ? ? ? 75 0F 8B ? ? ? ? ? 8B C6 35 ? ? ? ? EB 11 8B 01 FF 50 34 8B ? ? ? ? ? 8B ? ? ? ? ? 85=pdb
virtual void CBaseViewport::SetParent(unsigned int)=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A 01 8B=pdb
hidepanel()=55 8B EC 8B ? ? ? ? ? 85 C9 74 15 8B 55 08 83 3A 02 75 0D 8B 01 6A 00=pdb
showpanel()=55 8B EC 8B ? ? ? ? ? 85 C9 74 15 8B 55 08 83 3A 02 75 0D 8B 01 6A 01=pdb
virtual void CClientScoreBoardDialog::Reset(void)=56 8B F1 8B 4E 18 8B=pdb=CClientScoreBoardDialog=251
virtual bool C_BaseTempEntity::Init(int,int)=A1 ? ? ? ? 89 41 0C B0=pdb
CSnowFallManager::CSnowFallManager(void)=56 57 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? 8D ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
virtual CSnowFallManager::~CSnowFallManager(void)=56 8B F1 57 8D ? ? ? ? ? C7 ? ? ? ? ? 8B CF=pdb
virtual void CClient_Precipitation::Precache(void)=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 83=pdb=CClient_Precipitation=34
virtual bool C_Embers::Simulate(void)=55 8B EC 51 56 8B F1 80 ? ? ? ? ? ? 75 07=pdb=C_Embers=98
virtual void C_MovieExplosion::Update(float)=55 8B EC 83 EC 14 53 8B D9 83 ? ? ? ? ? ? 0F ? ? ? ? ? F3=pdb=FX_CacheMaterialHandlesPrecache::CResourcePrecacher=35
C_RecipientFilter::C_RecipientFilter(void)=C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 08=pdb
virtual C_RecipientFilter::~C_RecipientFilter(void)=56 8B F1 8D 4E 08 C7 ? ? ? ? ? E8 ? ? ? ? C7=pdb
void C_SporeTrail::AddParticles(void)=55 8B EC 83 EC 0C 56 83=pdb
virtual void C_SporeTrail::Update(float)=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 51=pdb=C_DustTrail=197
void constraint_ballsocketparams_t::Defaults(void)=C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6 41 2C=pdb
virtual CTempEnts::~CTempEnts(void)=53 56 57 8B F9 8D 4F 04=pdb
virtual void CTempEnts::Update(void)=55 8B EC 83 EC 08 57 8B F9 66=pdb
virtual void CPlayerLogoProxy::Release(void)=56 8B F1 8B 4E 18 85 C9 74 05=pdb
virtual C_FEPlayerDecal::~C_FEPlayerDecal(void)=55 8B EC 83 EC 08 56 57 8B F9 C7 ? ? ? ? ? C7=pdb
void OnPlayerDecalsLevelShutdown(void)=8B ? ? ? ? ? 56 8B ? ? ? ? ? 0F 1F 00 83 FE FF 74 4D=pdb
C_TestTraceline::C_TestTraceline(void)=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=pdb
virtual void CFXStaticLine::Destroy(void)=56 8B F1 8B 4E 0C 85 C9 74 0C=pdb
virtual void CFXDiscreetLine::Update(double)=55 8B EC F3 ? ? ? ? 0F 5A C0 F2 ? ? ? ? 66 0F 5A C0 F3 ? ? ? ? F3=pdb=CFXDiscreetLine=5
virtual void CFXLine::Destroy(void)=56 8B F1 8B 4E 54 85=pdb=CFXLine=4
virtual bool CFXLine::IsActive(void)=F3 ? ? ? ? 0F 2F 41 50 0F=pdb=CFXLine=3
virtual void CFXLine::Update(double)=55 8B EC F3 ? ? ? ? F2=pdb=CFXLine=5
void InitSmokeFogOverlay(void)=8B ? ? ? ? ? 85 C9 74 0F 8B 01 FF 50 34=pdb
virtual void CClientTools::EnableRecordingMode(bool)=55 8B EC 8A 45 08 88 41 38=pdb=CClientTools=32
virtual int CClientTools::GetEntIndex(void near *)=55 8B EC 8B 4D 08 85 C9 74 0D 8B 41=pdb=CClientTools=36
virtual void CToolFrameworkClient::PreRender(void)=8B 49 04 85 C9 74 05 8B 01 FF 60 14=pdb=CToolFrameworkClient=13
virtual void CToolFrameworkClient::PostRender(void)=8B 49 04 85 C9 74 05 8B 01 FF 60 18=pdb=CToolFrameworkClient=15
stb__InitDXT()=33 D2 8B CA=pdb
int mstudioseqdesc_t::anim(int,int)const=55 8B EC 8B 51 44=pdb
void CIKContext::ClearTargets(void)=33 C0 39 ? ? ? ? ? 7E 1B=pdb
bool CIKTarget::IsActive(void)=F3 ? ? ? ? 33 C0 0F ? ? ? ? ? ? 0F 97=pdb
virtual float CChoreoEvent::GetDuration(void)=55 8B EC 51 F3 ? ? ? ? 0F ? ? ? ? ? ? F3=pdb=CChoreoEvent=0
bool CChoreoEvent::GetTrackLookupSet(void)=8A ? ? ? ? ? C0 E8 03 24=pdb
bool CChoreoEvent::IsProcessing(void)const=8A ? ? ? ? ? C0 E8 04 24 01 C3=pdb=vgui::TreeView=252
bool CChoreoEvent::IsResumeCondition(void)=8A ? ? ? ? ? D0 E8 24=pdb
bool CChoreoEvent::IsUsingRelativeTag(void)=8A ? ? ? ? ? C0 E8 02 24 01 C3=pdb
bool CChoreoEvent::PreventTagOverlap(void)=F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 53 57=pdb
void CChoreoEvent::RemoveAllTracks(void)=56 8B F1 8B ? ? ? ? ? 85 C0 7E 48=pdb
void CFlexAnimationTrack::Resort(int)=55 8B EC 83 EC 24 8B 45 08 56 8B=pdb
void CChoreoEvent::SetActive(bool)=55 8B EC 8A 45 08 C0 E0 06=pdb=vgui::ListPanel=228
void CChoreoEvent::SetPlayOverScript(bool)=55 8B EC 8A ? ? ? ? ? 8A 45 08=pdb=CNewParticleEffect=4
void CChoreoEvent::SetTrackLookupSet(bool)=55 8B EC 8A 45 08 C0 E0 03 32 ? ? ? ? ? 24 08 30 ? ? ? ? ? 5D=pdb=vgui::ListPanel=261
unsigned char CUtlBuffer::GetUnsignedChar(void)=55 8B EC 51 56 8B F1 F6 46 15=pdb
void DisconnectInterfaces(void)=8B ? ? ? ? ? 83 EA 01 89 ? ? ? ? ? 78=pdb
google::protobuf::internal::Mutex::Mutex(void)=56 6A 18 8B F1=pdb
google::protobuf::internal::Mutex::~Mutex(void)=56 8B F1 FF 36 FF=pdb
void google::protobuf::internal::InitLogSilencerCount(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 04=pdb
void google::protobuf::internal::InitShutdownFunctions(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 0C=pdb
void google::protobuf::internal::OnShutdown(void (*)(void))=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 10 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? A1=pdb
unsigned int google::protobuf::ghtonl(unsigned int)=55 8B EC 8B 4D 08 8B C1 C1 E8=pdb
google::protobuf::_anonymous_namespace_::DeleteGeneratedPool()=8B ? ? ? ? ? 85 C9 74 06 8B 01 6A 01 FF 10 56 8B=pdb
google::protobuf::_anonymous_namespace_::FormatLineOptions()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 75=pdb
google::protobuf::_anonymous_namespace_::Symbol::GetFile()=8B 01 83 F8 07=pdb
google::protobuf::_anonymous_namespace_::RetrieveOptions()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 5D 10=pdb
google::protobuf::_anonymous_namespace_::ToCamelCase()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 08 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? C7=pdb
void google::protobuf::UnknownField::DeepCopy(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 07 C1=pdb
google::protobuf::internal::SubMessagePrefix()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 24 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 75 08 8B 4D=pdb
virtual void CHudElement::SetHud(class CHud near *)=55 8B EC 8B 45 08 89 41 38=pdb
google::protobuf::internal::_anonymous_namespace_::Register()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 78 A1 ? ? ? ? 33 C5 89 45 F0 56=pdb
google::protobuf::TextFormat::Parser::Parser(void)=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb
google::protobuf::TextFormat::Printer::Printer(void)=C7 ? ? ? ? ? 8B C1 66=pdb
google::protobuf::_anonymous_namespace_::FieldSpaceUsed()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C A1 ? ? ? ? 33 C5 89 45 F0 50 8D 45 F4 64 ? ? ? ? ? 8B=pdb
google::protobuf::io::Tokenizer::Token::~Token(void)=8B 41 18 56 8D 71 04=pdb
google::protobuf::io::Tokenizer::~Tokenizer(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 57 60=pdb
google::protobuf::io::AppendUTF8()=55 8B EC 51 8B 55 08 C7=pdb
google::protobuf::io::_anonymous_namespace_::DigitValue()=55 8B EC 8A 4D 08 8D 41 D0=pdb
google::protobuf::io::FetchUnicodePoint()=55 8B EC 83 EC 08 8B 45 0C 53 8B 5D 08 C7=pdb
bool google::protobuf::io::Tokenizer::Next(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 34 A1 ? ? ? ? 33 C5 89 45 F0 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1 8B=pdb
google::protobuf::io::ReadHexDigits()=55 8B EC 8B 45 0C 56 8B 75 10 C7=pdb
void google::protobuf::io::Tokenizer::Refresh(void)=55 8B EC 51 56 8B F1 80 7E 68=pdb
google::protobuf::io::_anonymous_namespace_::TranslateEscape()=55 8B EC 0F BE 45=pdb
void google::protobuf::DelocalizeRadix(char near *)=55 8B EC 56 8B 75 08 6A 2E 56 E8 ? ? ? ? 83=pdb
google::protobuf::internal::ValidateEnumUsingDescriptor()=55 8B EC FF 75 0C 8B 4D 08 E8 ? ? ? ? F7=pdb
void fourplanes_t::ComputeSignbits(void)=0F 28 01 0F ? ? ? ? ? ? ? 0F 29=pdb
void InitSinCosTable(void)=56 33 F6 66 0F 6E=pdb
class VMatrix VMatrix::Transpose(void)const=55 8B EC 8B 55 08 56 8B F1 8B 06=pdb
IceKey::~IceKey(void)=56 33 F6 39 71=pdb
int GetSIMDRandContext(void)=56 57 8B ? ? ? ? ? 0F ? ? ? ? ? ? ? 33 F6=pdb
void CSoftbody::InitDefaults(void)=33 C0 56 8B F1 83=pdb
virtual void vgui::Image::SetPos(int,int)=55 8B EC 8B 45 08 89 41 04 8B 45 0C 89 41 08 5D=pdb
CParticleCollection::CParticleCollection(void)=55 8B EC 51 56 8B F1 68 ? ? ? ? 6A=pdb
void CParticleSystemMgr::InitAttributeTable(void)=56 57 68 ? ? ? ? 6A 00 68=pdb
bool CParticleCollection::IsBatchable(void)const=8A ? ? ? ? ? C0 E8 07 C3=pdb=CNewParticleEffect=3
bool CParticleCollection::IsFinished(void)const=55 8B EC 51 57 8B F9 8B 47 48 85 C0 75=pdb
void CParticleCollection::LabelTextureUsage(void)=56 8B F1 8B 4E 48 85 C9 74 5B=pdb
void CParticleCollection::ResetParticleCache(void)=55 8B EC 51 53 8B D9 83 ? ? ? ? ? ? 74=pdb
void CParticleCollection::StartEmission(bool)=55 8B EC 57 8B F9 8B 47 48=pdb
void CParticleSnapshot::Purge(void)=56 8B F1 E8 ? ? ? ? 0F ? ? ? ? ? ? C7=pdb
SortLessFuncExtended()=55 8B EC 8B 45 08 8B 10 8B 45=pdb
int FourRays::CalculateDirectionSignMask(void)const=8D 51 30 8B=pdb
virtual bool ConVar::IsRegistered(void)const=8B 41 1C 8A 40=pdb
virtual void ConVar::AddFlags(int)=55 8B EC 8B 49 1C 8B 45 08 09=pdb
virtual int ConVar::GetFlags(void)const=8B 41 1C 8B 40 14=pdb
virtual void ConVar::SetValue(class Color)=55 8B EC 8B 49 04 FF 75 08 8B 01 FF 50=pdb
virtual void ConVar::InternalSetFloatValue(float)=55 8B EC 83 EC 28 56 8B F1 F3 ? ? ? ? F3 ? ? ? ? 31=pdb
virtual void ConVar::InternalSetIntValue(int)=55 8B EC 83 EC 28 56 8B F1 57 8B=pdb
virtual bool ConVar::ClampValue(float near &)=55 8B EC 80 79 34=pdb
virtual void ConCommandBase::Init(void)=8B D1 8B ? ? ? ? ? 85 C9 74 05=pdb
virtual void ConCommandBase::RemoveFlags(int)=55 8B EC 8B 45 08 F7 D0=pdb
virtual void ConCommandBase::AddFlags(int)=55 8B EC 8B 45 08 09=pdb
virtual bool ConCommand::CanAutoComplete(void)=8A 41 20 24=pdb
virtual char const near * ConVar::GetName(void)const=8B 41 1C 8B 40 0C=pdb
void ConVarRef::Init(char const near *,bool)=55 8B EC 57 8B F9 8B ? ? ? ? ? 85 C9 74 0C=pdb
virtual bool ConCommandBase::IsFlagSet(int)const=55 8B EC 8B 45 08 85 41=pdb
virtual bool ConVar::IsFlagSet(int)const=55 8B EC 8B 49 1C 8B 45 08 85=pdb
virtual void ConVar::SetValue(int)=55 8B EC 8B 49 04 8B 01 5D FF 60 40=pdb
virtual void ConVar::SetValue(float)=55 8B EC 8B 49 04 F3=pdb
virtual void ConVar::SetValue(char const near *)=55 8B EC 8B 49 04 8B 01 5D FF 60 38=pdb
void KeyValues::AddSubKey(class KeyValues near *)=55 8B EC 8B 41 18 85 C0 75=pdb
class KeyValues near * KeyValues::FindKey(int)const=55 8B EC 85 C9 74 1D=pdb
char CUtlBuffer::GetChar(void)=56 6A 01 8B F1 E8 ? ? ? ? 84=pdb
int KeyValues::GetInt(char const near *,int)=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 85 C0 74 45=pdb
char const near * KeyValues::GetName(void)const=57 8B F9 85 FF 74 1F=pdb
void KeyValues::RemoveEverything(void)=56 57 8B F9 8B 4F 18 85=pdb
void KeyValues::RemoveSubKey(class KeyValues near *)=55 8B EC 56 8B 75 08 85 F6 74 4D 8B 51=pdb
void CKeyValuesTokenReader::SeekBackOneToken(void)=56 8B F1 8B ? ? ? ? ? 80 7E 0C=pdb
void KeyValues::SetInt(char const near *,int)=55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 85 C0 74 0A 8B 4D 0C 89 48 0C C6 40 10 02=pdb
void KeyValues::SetName(char const near *)=55 8B EC 51 56 8B F1 C7 ? ? ? ? ? ? FF=pdb
void KeyValues::deleteThis(void)=56 8B F1 85 F6 74 13=pdb
char const near * CUtlString::Get(void)const=83 79 0C 00 B8 ? ? ? ? 74 02 8B 01 C3=pdb
void CUtlBinaryBlock::Set(void const near *,int)=55 8B EC 53 56 33 DB 8B=pdb
unsigned int HashString(char const near *)=0F B6 01 33 D2=pdb
unsigned int HashStringCaseless(char const near *)=53 56 8B F1 33 DB 57 33 FF 0F=pdb
void CUtlBuffer::PutTypeBin<char>(char)=55 8B EC 56 8B F1 F6 46 14 01 75 7B=pdb
CUtlBuffer::CUtlBuffer(int,int,int)=55 8B EC 56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
CUtlBuffer::CUtlBuffer(void const near *,int,int)=55 8B EC 8B 45 08 56 8B F1 8B 4D 0C 89 06 8B=pdb
void CUtlBuffer::AddNullTermination(int)=55 8B EC 56 8B F1 57 8B 7D 08 3B 7E 1C=pdb
bool CUtlBuffer::CheckGet(int)=55 8B EC 56 8B F1 8A 56 14=pdb
bool CUtlBuffer::CheckPut(int)=55 8B EC 56 8B F1 F6 46 14 01 75 2C=pdb
void CUtlBuffer::EatWhiteSpace(void)=56 8B F1 F6 46 15 01 74 5D=pdb
bool CUtlBuffer::Get(void near *,int)=55 8B EC 56 57 8B 7D 0C 8B F1 85 FF 7E=pdb
void CUtlBuffer::GetString(char near *,int)=55 8B EC 51 57 8B F9 80 7F 14=pdb
void const near * CUtlBuffer::PeekGet(int,int)=55 8B EC 56 8B F1 57 F6 46 14 02=pdb
unsigned int ThreadedLoadLibraryFunc(void near *)=55 8B EC 56 8B 75 08 6A 08=pdb
void CBitRead::ReadBitVec3Coord(class Vector near &)=55 8B EC 56 57 8B 7D 08 8B F1 C7=pdb
unsigned int CBitRead::ReadVarInt32(void)=55 8B EC 83 EC 08 53 56 8B C1 33=pdb
bool CBitRead::Seek(int)=55 8B EC 51 53 56 57 8B 7D 08 8B F1 C6 45 FF 01=pdb
CUtlSymbol::CUtlSymbol(char const near *)=55 8B EC 51 53 56 57 8B D9 E8 ? ? ? ? 8B ? ? ? ? ? 8B 47=pdb
int CUtlSymbolTable::FindPoolWithSpace(int)const=55 8B EC 53 56 57 8B 79 30=pdb
void CSOAContainer::AllocateData(int,int,int)=55 8B EC 8B 55 08 8B 45 0C 53=pdb
void CSOAContainer::Purge(void)=56 8B F1 E8 ? ? ? ? 68 ? ? ? ? 8D ? ? ? ? ? 68=pdb
void CSOAContainer::PurgeData(void)=56 8B F1 57 8B ? ? ? ? ? 85 D2 74 1C=pdb
bool netadr_s::IsLocalhost(void)const=80 79 04 7F=pdb
void netadr_s::SetIP(unsigned int)=55 8B EC 8B 45 08 0F C8=pdb
void netadr_s::SetPort(unsigned short)=55 8B EC 66 8B 45 08 86=pdb
void CUtlMemoryPool::Clear(void)=53 8B D9 57 8B 53=pdb
void CUtlMemoryPool::AddNewBlob(void)=53 8B D9 8B 43 08 83=pdb
void near * CUtlMemoryPool::AllocZero(unsigned int)=55 8B EC 53 8B 5D 08 56 8B F1 3B 1E=pdb
void CStringPool::FreeAll(void)=53 56 57 8B F9 BE ? ? ? ? 0F B7 47 10 66 90 66 3B C6 74 16 0F B7 C8 8D 14 49=pdb
void CMemoryStack::Term(void)=56 8B F1 8B 4E 14 85=pdb
void bf_write::WriteShort(int)=55 8B EC 6A 10 FF 75 08 E8 ? ? ? ? 5D=pdb=CSave=31
unsigned int CDataManagerBase::FlushAll(void)=55 8B EC 83 EC 30 53 8B D9 56 57=pdb
void DefaultConditionalErrorProc(char const near *)=55 8B EC FF 75 08 68 ? ? ? ? FF=pdb
CUtlStreamBuffer::~CUtlStreamBuffer(void)=56 8B F1 E8 ? ? ? ? 83 7E 08 00 7C 20 8B 16 85 D2 74 13 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 5E=pdb
void CUtlStreamBuffer::Close(void)=56 8B F1 57 F6 46 15=pdb
int CUtlStreamBuffer::ReadBytesFromFile(int,int)=55 8B EC 56 57 8B F9 83 7F=pdb
bool CUtlStreamBuffer::StreamGetOverflow(int)=55 8B EC 56 8B F1 80 7E 14 00 0F ? ? ? ? ? F6 46 15 08 0F ? ? ? ? ? 83=pdb
bool CUtlStreamBuffer::StreamPutOverflow(int)=55 8B EC 56 8B F1 80 7E 14 00 0F ? ? ? ? ? F6 46 15 08 0F ? ? ? ? ? 57=pdb
struct studiohdr_t near * CMDL::GetStudioHdr(void)=8B C1 8B ? ? ? ? ? 85 C9 75 03 33=pdb
vgui::DragDrop_t::DragDrop_t(void)=C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 18=pdb
virtual vgui::Panel::~Panel(void)=56 8B F1 57 80 7E 38 00 C7=pdb
virtual void vgui::Panel::DeletePanel(void)=66 ? ? ? ? B8 ? ? ? ? 66 21 41=pdb
int vgui::Panel::GetChildCount(void)=57 8B ? ? ? ? ? 85 FF 74 10 8B 01 56 8B 37 FF 10 50 8B CF FF 56 44=pdb
class Color vgui::Panel::GetDropFrameColor(void)=55 8B EC 8B 45 08 8B 49 30=pdb=vehicleview_t=11
virtual char const near * vgui::Panel::GetName(void)=83 C1 50 E9=pdb
virtual unsigned long vgui::Panel::GetScheme(void)=53 8B D9 8B ? ? ? ? ? 85 C0 75=pdb
int vgui::Panel::GetTall(void)=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 FC 57 50 8D 45 F8 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B 45=pdb
virtual unsigned int vgui::Panel::GetVParent(void)=57 8B ? ? ? ? ? 85 FF 74 10 8B 01 56 8B 37 FF 10 50 8B CF FF 56 50=pdb
int vgui::Panel::GetWide(void)=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 F8=pdb
virtual bool vgui::Panel::HasFocus(void)=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 10=pdb
virtual bool vgui::Panel::HasParent(unsigned int)=55 8B EC 8B 45 08 85 C0 75 06 32=pdb
virtual void vgui::Panel::InternalMousePressed(int)=55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B 01 FF 50 18=pdb
virtual bool vgui::Panel::IsAutoDeleteSet(void)=0F B7 41 64 C1 E8 06=pdb
virtual bool vgui::Panel::IsBuildGroupEnabled(void)=53 56 8B F1 57 8B ? ? ? ? ? 83 FA FF 0F=pdb
bool vgui::Panel::IsBuildModeActive(void)=8B ? ? ? ? ? 83 F9 FF 74 40 8B D1=pdb
virtual bool vgui::Panel::IsCursorNone(void)=8B 01 FF ? ? ? ? ? 85 C0 0F 94 C0 C3=pdb
virtual bool vgui::Panel::IsCursorOver(void)=55 8B EC 83 EC 20 53 56 8B D9 8D=pdb
virtual bool vgui::Panel::IsDragEnabled(void)const=8B 41 28 8A 00=pdb
virtual bool vgui::Panel::IsDropEnabled(void)const=8B 41 28 8A 40 40=pdb
virtual bool vgui::Panel::IsFullyVisible(void)=8B 01 56 8B ? ? ? ? ? 57 8B 3E FF 10 50 8B 47 68=pdb
virtual bool vgui::Panel::IsLayoutInvalid(void)=0F B7 41 64 C1 E8 07=pdb
virtual bool vgui::Panel::IsOpaque(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 17=pdb
virtual bool vgui::Panel::IsPopup(void)=8B 01 56 8B ? ? ? ? ? 57 8B 3E FF 10 50 8B 47 60=pdb
virtual bool vgui::Panel::IsVisible(void)=57 8B ? ? ? ? ? 85 FF 74 12=pdb
bool vgui::Panel::IsWithin(int,int)=55 8B EC 83 EC 10 56 8B ? ? ? ? ? 8D 45=pdb
void vgui::Panel::MakePopup(bool,bool)=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 6A=pdb
virtual void vgui::Panel::MarkForDeletion(void)=53 8B D9 F6 43 64=pdb
virtual void vgui::Panel::MoveToFront(void)=53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 8B CB=pdb
virtual void vgui::Panel::NavigateFrom(void)=55 8B EC 83 EC 08 53 8B D9 33 C0=pdb
virtual void vgui::Panel::OnSizeChanged(int,int)=8B 01 6A 00 6A 00 FF ? ? ? ? ? C2=pdb
virtual void vgui::Panel::OnStartDragging(void)=57 8B F9 8B ? ? ? ? ? 6A 6B=pdb
virtual void vgui::Panel::OnThink(void)=55 8B EC 83 EC 20 53 8B D9 89 5D FC 8B 43=pdb=C_CSRootPanel=101
virtual void vgui::Panel::PaintBackground(void)=55 8B EC 83 EC 18 8D 45 FC=pdb
virtual void vgui::Panel::PaintBorder(void)=56 57 8B F9 8B 47 60 8B=pdb
virtual void vgui::Panel::PaintBuildOverlay(void)=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 FC 57 50 8D 45 F8 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B ? ? ? ? ? 68 ? ? ? ? 6A 00 6A=pdb
virtual void vgui::Panel::PerformLayout(void)=55 8B EC 83 EC 10 56 8B F1 8B ? ? ? ? ? 85 C9 74=pdb=vgui::GraphPanel=132
virtual void vgui::Panel::Repaint(void)=66 ? ? ? ? 57 8B ? ? ? ? ? 85=pdb
virtual void vgui::Panel::RequestFocus(int)=56 57 8B F9 6A 00 8B 37=pdb
void vgui::Panel::SetAlpha(int)=55 8B EC 66 ? ? ? ? 0F 5B C0 F3=pdb
virtual void vgui::Panel::SetBlockDragChaining(bool)=55 8B EC 8B 49 28 8A 45 08 88 41 58=pdb
void vgui::Panel::SetBounds(int,int,int,int)=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 FF 75 0C 8B 03 FF 75 08 8B 3E FF 10 50 8B CE FF 57 08=pdb
virtual void vgui::Panel::SetDragEnabled(bool)=55 8B EC 53 8A 5D 08 56 8B F1 8B 46=pdb
virtual void vgui::Panel::SetDragSTartTolerance(int)=55 8B EC 8B 49 28 8B=pdb
virtual void vgui::Panel::SetDropEnabled(bool,float)=55 8B EC 8B 51 28=pdb
virtual void vgui::Panel::SetEnabled(bool)=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 10=pdb
virtual void vgui::Panel::SetMouseInputEnabled(bool)=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 08 8B 3E FF 10 50 8B CE FF ? ? ? ? ? 8B=pdb
virtual void vgui::Panel::SetParent(unsigned int)=55 8B EC 51 8B 45 08 53 8B D9 89=pdb
virtual void vgui::Panel::SetScheme(unsigned long)=55 8B EC 8B 45 08 3B ? ? ? ? ? 74 06=pdb
virtual void vgui::Panel::SetShowDragHelper(bool)=55 8B EC 8B 49 28 8A 45 08 88 41 01=pdb
virtual void vgui::Panel::SetVisible(bool)=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 08 8B 3E FF 10 50 8B CE FF 57=pdb
virtual void vgui::Panel::Think(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 3B=pdb
virtual vgui::Frame::~Frame(void)=56 57 8B F9 8B 77 4C=pdb
virtual void vgui::Frame::Activate(void)=53 8B D9 56 57 8B 03 FF ? ? ? ? ? 8B 03 8B CB 8B=pdb
virtual void vgui::Frame::ActivateMinimized(void)=53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 10=pdb
_anonymous_namespace_::GripPanel::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 89=pdb
void vgui::Frame::FinishClose(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE 80=pdb
virtual void vgui::Frame::FlashWindowStop(void)=53 8B D9 56 8B ? ? ? ? ? 57 8B 03 6A 00 8B 3E FF 10 50 8B CE FF ? ? ? ? ? 80=pdb
_anonymous_namespace_::GripPanel::OnCursorMoved()=55 8B EC 83 EC 10 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=pdb
virtual void vgui::Frame::OnMinimize(void)=8B 01 56 8B ? ? ? ? ? 57 6A 01 8B=pdb
_anonymous_namespace_::GripPanel::OnMouseDoublePressed()=55 8B EC 8B 01 FF ? ? ? ? ? 8B 10=pdb
_anonymous_namespace_::GripPanel::OnMousePressed()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 83=pdb
_anonymous_namespace_::GripPanel::OnMouseReleased()=56 8B F1 6A 00 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF 50 08 8B ? ? ? ? ? 8B=pdb
virtual void vgui::Frame::PaintBackground(void)=55 8B EC 83 EC 0C 53 8B D9 56 89=pdb
virtual void vgui::Frame::SetSizeable(bool)=55 8B EC 8A ? ? ? ? ? 32 45 08 24 01 30 ? ? ? ? ? E8=pdb
virtual void vgui::Frame::SetSmallCaption(bool)=55 8B EC 8A 45 08 C0 E0 03 32 ? ? ? ? ? 24 08 30 ? ? ? ? ? 8B=pdb
virtual void vgui::Frame::SetTitleBarVisible(bool)=55 8B EC 53 8B 5D 08 8A C3=pdb
void vgui::Frame::SetupResizeCursors(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B ? ? ? ? ? 84 C0 8B=pdb
_anonymous_namespace_::CaptionGripPanel::tryToDock()=55 8B EC 83 EC 10 53 8B D9 56 8B ? ? ? ? ? 8B=pdb
virtual void vgui::Label::SetHotkey(wchar_t)=55 8B EC 66 8B 45 08 66 ? ? ? ? ? ? 5D=pdb
virtual void vgui::Label::SetImagePreOffset(int,int)=55 8B EC 8B 45 08 8B D1 85 C0 78 3F=pdb
virtual void vgui::Label::SetText(char const near *)=55 8B EC 8B 45 08 85 C0 53=pdb
virtual int vgui::Label::SetTextImageIndex(int)=55 8B EC 53 8B 5D 08 57 8B F9 8B ? ? ? ? ? 3B=pdb
virtual vgui::TextEntry::~TextEntry(void)=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8D=pdb
virtual void vgui::TextEntry::Backspace(void)=55 8B EC 51 56 8B F1 8B 06 8B=pdb
void vgui::TextEntry::CalcBreakIndex(void)=8B ? ? ? ? ? 3B ? ? ? ? ? 75 10 8B ? ? ? ? ? 83=pdb
virtual void vgui::TextEntry::CutSelected(void)=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8B 06 8B CE 6A=pdb
virtual bool vgui::TextEntry::DrawCursor(int,int)=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 75=pdb
void vgui::TextEntry::FlipToLastIME(void)=56 8B F1 8B ? ? ? ? ? 57 8B 01 FF 50 68=pdb
int vgui::TextEntry::GetCurrentLineStart(void)=80 ? ? ? ? ? ? 75 07 8B ? ? ? ? ? C3=pdb
int vgui::TextEntry::GetCursorLine(void)=56 8B F1 33 C0 8B ? ? ? ? ? 85 C9 7E=pdb
virtual void vgui::TextEntry::GotoDown(void)=55 8B EC 83 EC 08 57 8B F9 6A 00 8B 07 FF ? ? ? ? ? 80 ? ? ? ? ? ? 74 13=pdb
virtual void vgui::TextEntry::GotoFirstOfLine(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B CE=pdb
virtual void vgui::TextEntry::GotoLeft(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 33=pdb
virtual void vgui::TextEntry::GotoTextStart(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE C7=pdb
virtual void vgui::TextEntry::GotoUp(void)=55 8B EC 83 EC 08 57 8B F9 6A 00 8B 07 FF ? ? ? ? ? 80 ? ? ? ? ? ? 74 1E=pdb
virtual void vgui::TextEntry::GotoWordLeft(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 83=pdb
virtual void vgui::TextEntry::GotoWordRight(void)=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 40=pdb
virtual void vgui::TextEntry::InsertChar(wchar_t)=55 8B EC 8B 55 08 56 8B F1 66=pdb
virtual bool vgui::TextEntry::IsEditable(void)=80 ? ? ? ? ? ? 74 11 8B 01 8B=pdb
virtual void vgui::TextEntry::MoveCursor(int,int)=55 8B EC 83 EC 1C 8B 45 08 56 8B=pdb
virtual void vgui::TextEntry::OnKeyTyped(wchar_t)=55 8B EC 56 8B F1 57 8B 7D 08 57 8A=pdb
virtual void vgui::TextEntry::OnSetState(int)=55 8B EC 83 EC 40 8D 45 C0 56 FF=pdb
virtual void vgui::TextEntry::PerformLayout(void)=56 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 80=pdb
virtual void vgui::TextEntry::SaveUndoState(void)=8B ? ? ? ? ? 53 8B ? ? ? ? ? 56 8B=pdb
void vgui::TextEntry::ScrollLeft(void)=80 ? ? ? ? ? ? 75 39 80=pdb
virtual void vgui::TextEntry::SelectNone(void)=8B 01 C7 ? ? ? ? ? ? ? ? ? FF 60=pdb
virtual void vgui::TextEntry::SetEditable(bool)=55 8B EC 53 8A 5D 08 56 8B F1 51=pdb
virtual void vgui::TextEntry::SetEnabled(bool)=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE FF 50=pdb
virtual void vgui::TextEntry::SetFont(unsigned long)=55 8B EC 8B 45 08 56 8B F1 6A 00=pdb
virtual void vgui::TextEntry::Undo(void)=55 8B EC 83 EC 08 53 56 8B F1 57 8D ? ? ? ? ? 89=pdb
virtual void vgui::RichText::CutSelected(void)=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 6A 00 FF 50=pdb
void vgui::RichText::GetText(int,wchar_t near *,int)=55 8B EC 56 57 8B 7D 0C 8B F1 85 FF 74 4C=pdb
void vgui::RichText::GotoTextEnd(void)=55 8B EC 83 EC 08 56 8B F1 8D 55=pdb
void vgui::RichText::GotoTextStart(void)=56 8B F1 6A 00 8B ? ? ? ? ? C7=pdb
void vgui::RichText::GotoWordLeft(void)=56 8B F1 8B ? ? ? ? ? 83 F8 01 7C=pdb
void vgui::RichText::GotoWordRight(void)=56 8B F1 8B ? ? ? ? ? 40 89=pdb
virtual void vgui::RichText::MoveScrollBar(int)=55 8B EC 8B 45 08 8B 11=pdb
virtual void vgui::RichText::OnSliderMoved(void)=8B 01 C6 ? ? ? ? ? ? FF 60=pdb
virtual void vgui::RichText::OnThink(void)=56 8B F1 80 ? ? ? ? ? ? 74 1D=pdb
void vgui::RichText::TruncateTextStream(void)=56 8B F1 8B ? ? ? ? ? 83 F8 01 0F=pdb
void vgui::Button::Init(void)=56 57 8B F9 B8 ? ? ? ? 6A=pdb
virtual bool vgui::Button::IsBlinking(void)=0F ? ? ? ? ? ? C1 E8 09 83=pdb
virtual void vgui::Button::NavigateFrom(void)=56 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 FF=pdb
virtual void vgui::Button::OnCursorEntered(void)=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0B=pdb
virtual void vgui::Button::OnCursorExited(void)=8A ? ? ? ? ? C0 E8 05 A8 01 75 08 8B 01=pdb
virtual void vgui::Button::PerformLayout(void)=55 8B EC 83 EC 0C 56 57 8B F9 0F ? ? ? ? ? ? 8B=pdb
virtual void vgui::Button::SetArmed(bool)=55 8B EC 53 8A 5D 08 56 8B F1 8A=pdb
virtual void vgui::Button::SetBlink(bool)=55 8B EC 56 8B F1 8A 4D 08 66=pdb
virtual void vgui::ToggleButton::DoClick(void)=56 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 8B=pdb
virtual void CheckImage::Paint(void)=55 8B EC 83 EC 14 53 8B D9 56 89=pdb=CheckImage=0
virtual void vgui::Image::DrawPrintChar(wchar_t)=55 8B EC 8B ? ? ? ? ? 6A 00 FF 75 08 8B 01 FF 50 74=pdb
virtual void vgui::Image::DrawSetTextPos(int,int)=55 8B EC 8B 41 08 8B ? ? ? ? ? 03 45 0C 56 50 8B 41 04 8B CA 8B 32 03 45 08 50 FF 56 68 5E=pdb
virtual class Color vgui::Image::GetColor(void)=55 8B EC 8B 45 08 8B 49 14=pdb
virtual void vgui::Image::SetColor(class Color)=55 8B EC 8B 45 08 89 41 14 8B 11=pdb
virtual void vgui::Image::SetSize(int,int)=55 8B EC 8B 45 08 89 41 0C 8B=pdb
virtual void vgui::ComboBox::HideMenu(void)=56 8B F1 8B ? ? ? ? ? 85 C9 74 21=pdb
virtual bool vgui::ComboBox::IsItemIDValid(int)=55 8B EC 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? 5D=pdb
virtual void vgui::ComboBox::ShowMenu(void)=56 8B F1 8B ? ? ? ? ? 85 C9 74 15 8B 01 6A=pdb
virtual vgui::ListPanel::~ListPanel(void)=53 56 8B F1 57 C7 ? ? ? ? ? E8 ? ? ? ? 8A=pdb
virtual void vgui::ListPanel::ApplyItemChanges(int)=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 FF=pdb=vgui::ListPanel=239
AscendingSortFunc()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 57=pdb
FastSortFunc()=55 8B EC 8B 45 0C 8B 4D 10 56=pdb
virtual int vgui::ListPanel::GetItemCurrentRow(int)=55 8B EC 8B ? ? ? ? ? 33 C0 56 85 D2 7E 1C 8B ? ? ? ? ? 8B 75 08 0F ? ? ? ? ? ? 39=pdb=vgui::ListPanel=233
virtual int vgui::ListPanel::GetStartItem(void)=55 8B EC 51 56 57 8B F9 8B 07 8B=pdb=vgui::ListPanel=278
virtual bool vgui::ListPanel::IsItemSelected(int)=55 8B EC 8B 55 08 56 8B F1 57 85 D2 78=pdb=vgui::ListPanel=257
virtual void vgui::ListPanel::SetFont(unsigned long)=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 27=pdb=vgui::ListPanel=252
virtual void Dragger::SetMovable(bool)=55 8B EC 53 8A 5D 08 56 8B F1 8B 06=pdb=Dragger=211
virtual vgui::ListViewPanel::~ListViewPanel(void)=56 8B F1 57 C7 ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 85=pdb
void vgui::ListViewPanel::FinishKeyPress(int)=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 6A 4F=pdb
virtual void vgui::ListViewItem::PerformLayout(void)=55 8B EC 83 EC 08 53 8B D9 56 57 8B 03 FF ? ? ? ? ? 80=pdb=vgui::ListViewItem=132
virtual void vgui::ListViewPanel::RemoveItem(int)=55 8B EC 51 56 8B 75 08 89 4D FC 57=pdb=vgui::ListViewPanel=215
virtual vgui::Menu::~Menu(void)=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8D=pdb
virtual void vgui::Menu::ActivateItem(int)=55 8B EC 56 8B 75 08 57 8B F9 85 F6 78 4E=pdb
virtual void vgui::Menu::ActivateItemByRow(int)=55 8B EC 56 8B 75 08 85 F6 78 19=pdb
virtual void vgui::Menu::AddScrollBar(void)=56 8B F1 6A 01 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 80=pdb
void vgui::Menu::CalculateWidth(void)=55 8B EC 83 EC 08 56 8B F1 F6=pdb
void vgui::Menu::ClearCurrentlyHighlightedItem(void)=56 8B F1 8B ? ? ? ? ? 85 D2 78=pdb
int vgui::Menu::CountVisibleItems(void)=55 8B EC 51 53 8B D1=pdb
void vgui::Menu::DeleteAllItems(void)=53 56 57 8B F9 8B ? ? ? ? ? 83 F8 FF 74 23=pdb
virtual void vgui::Menu::LayoutMenuBorder(void)=53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50 50 8B CE FF 57 20 68=pdb
void vgui::Menu::MoveAlongMenuItemList(int,int)=55 8B EC 81 ? ? ? ? ? 57 8B F9 83=pdb
virtual void vgui::Menu::MoveMenuItem(int,int)=55 8B EC 51 8B C1 53 56 33 F6 89 45 FC 8B ? ? ? ? ? 85=pdb
virtual void vgui::Menu::OnHotKey(wchar_t)=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 83 F8=pdb
virtual void vgui::Menu::OnKeyTyped(wchar_t)=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 66 85=pdb
virtual void vgui::Menu::OnKillFocus(void)=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 89 5D FC 8B 01 FF 50=pdb
virtual void vgui::Menu::OnMouseWheeled(int)=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 2E=pdb
virtual void vgui::Menu::OnSliderMoved(void)=56 6A 00 8B F1 E8 ? ? ? ? 8B 06=pdb
virtual void vgui::Menu::OnTypeAhead(wchar_t)=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? FF=pdb
virtual void vgui::Menu::RemoveScrollBar(void)=56 8B F1 6A 00 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 80=pdb
void vgui::Menu::SetCurrentlyHighlightedItem(int)=55 8B EC 53 8B 5D 08 56 57 53 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 33=pdb
virtual void vgui::Menu::SetFont(unsigned long)=55 8B EC 8B 55 08 56 8B F1 89=pdb
virtual void vgui::MenuBar::OnMenuClose(void)=8B 01 6A 00 FF 50 30 C3=pdb=vgui::MenuBar=214
virtual void vgui::MenuBar::Paint(void)=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 89=pdb
virtual void MenuItemCheckImage::Paint(void)=55 8B EC 51 56 57 8B F9 8B 37 FF=pdb=MenuItemCheckImage=0
virtual void vgui::MenuItem::PerformLayout(void)=55 8B EC 51 56 57 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 85=pdb
virtual void vgui::ProgressBar::SetProgress(float)=55 8B EC F3 ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 7B 20=pdb
virtual void RadioImage::Paint(void)=55 8B EC 51 57 8B F9 8B 07 FF 77=pdb=RadioImage=0
_anonymous_namespace_::ScrollBarButton::OnMouseReleased()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 4A=pdb
virtual void vgui::ScrollBar::OnSliderMoved(int)=55 8B EC 56 FF 75 08 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 5E=pdb
virtual vgui::TreeView::~TreeView(void)=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 FF 74 25=pdb
int vgui::TreeNode::CountVisibleIndex(void)=55 8B EC 83 EC 14 56 57 8B F9 C7 ? ? ? ? ? ? 8B=pdb
int vgui::TreeNode::CountVisibleNodes(void)=53 8B D9 56 BE ? ? ? ? 80=pdb
virtual void vgui::TreeView::ExpandItem(int,bool)=55 8B EC 8B 55 08 56 8B F1 85 D2 78 40=pdb=vgui::TreeView=243
virtual int vgui::TreeView::GetChild(int,int)=55 8B EC 8B 45 08 8D 14 40 8B ? ? ? ? ? 8B 04 90 8B ? ? ? ? ? 8B=pdb=vgui::TreeView=214
virtual int vgui::TreeView::GetItemParent(int)const=55 8B EC 8B 45 08 8D 14 40 8B ? ? ? ? ? 8B 04 90 8B ? ? ? ? ? 5D=pdb=vgui::TreeView=220
virtual int vgui::TreeView::GetNumChildren(int)=55 8B EC 8B 45 08 8B D1 83 F8 FF 75=pdb=vgui::TreeView=213
virtual int vgui::TreeView::GetRootItemIndex(void)=8B ? ? ? ? ? 85 C0 74 07 8B ? ? ? ? ? C3 83=pdb=vgui::TreeView=212
virtual void vgui::TreeView::MakeItemVisible(int)=55 8B EC 8B 45 08 53 56 57 8B F9 8D 14=pdb=vgui::TreeView=245
virtual void vgui::TreeNodeText::OnKillFocus(void)=56 8B F1 E8 ? ? ? ? 6A=pdb=vgui::TreeNodeText=99
virtual void vgui::TreeView::OnMouseWheeled(int)=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 29=pdb=vgui::TreeView=108
virtual void vgui::TreeNode::OnSetFocus(void)=8B ? ? ? ? ? 6A 00 8B 01 FF 50 30 C3=pdb=vgui::TreeNode=98
virtual void vgui::TreeView::OnSliderMoved(int)=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF 50=pdb
virtual void vgui::TreeNodeText::OnTextChanged(void)=8B 01 FF ? ? ? ? ? 6A 00 6A 00 8B C8=pdb=vgui::TreeNodeText=287
virtual void vgui::TreeNode::Paint(void)=56 8B F1 83 ? ? ? ? ? ? 7F=pdb=vgui::TreeNode=128
virtual void vgui::TreeView::RangeSelectItems(int)=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 85 D2=pdb
virtual void vgui::TreeView::RemoveAll(void)=56 57 8B F9 33 F6 39 ? ? ? ? ? 7E 41=pdb=vgui::TreeView=218
void vgui::TreeNode::RemoveChildren(void)=56 57 8B F9 8B ? ? ? ? ? 83 EE 01 78 27=pdb
virtual void vgui::TreeView::RemoveSelectedItem(int)=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 3B ? ? ? ? ? 0F=pdb=vgui::TreeView=225
void vgui::TreeNode::SetFont(unsigned long)=55 8B EC 53 8B 5D 08 57 8B F9 85 DB 74 50=pdb
virtual void vgui::TreeView::SetFont(unsigned long)=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 3C=pdb=vgui::TreeView=221
void vgui::TreeNode::SetNodeExpanded(bool)=55 8B EC 8A 45 08 56 8B F1 88 ? ? ? ? ? 84 C0 74 51=pdb
virtual void vgui::TreeNode::StepInto(bool)=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 75 07 6A=pdb=vgui::TreeNode=212
virtual void vgui::TreeNode::StepOver(bool)=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=pdb
virtual vgui::PanelListPanel::~PanelListPanel(void)=56 57 8B F9 C7 ? ? ? ? ? E8 ? ? ? ? 8D=pdb
virtual void vgui::PanelListPanel::RemoveItem(int)=55 8B EC 83 EC 08 8B C1 56 8B=pdb=vgui::PanelListPanel=214
virtual void vgui::Slider::DrawNob(void)=55 8B EC 83 EC 14 53 56 8B D9 8D=pdb
virtual void vgui::Slider::DrawTickLabels(void)=55 8B EC 83 EC 18 56 8B F1 8D 4D F0=pdb
virtual void vgui::Slider::DrawTicks(void)=55 8B EC 83 EC 1C 53 56 8B D9 8D=pdb
virtual void vgui::Slider::Paint(void)=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8B 06 8B CE 5E=pdb=vgui::Slider=128
virtual void vgui::Slider::PaintBackground(void)=55 8B EC 83 EC 10 53 56 57 8B D9 E8 ? ? ? ? 8B=pdb
virtual void vgui::Slider::SetRange(int,int)=55 8B EC 8B 55 08 8B ? ? ? ? ? 56 8B=pdb
virtual void vgui::Slider::SetValue(int,bool)=55 8B EC 8B 45 08 56 8B F1 57 8B ? ? ? ? ? 8B=pdb
virtual vgui::CConsolePanel::~CConsolePanel(void)=53 56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? E8=pdb
virtual void vgui::CConsolePanel::OnThink(void)=56 8B F1 E8 ? ? ? ? 8B 06 8B CE 8B ? ? ? ? ? FF D0 84 C0 74 1C=pdb=vgui::CConsolePanel=101
vgui::FileData_t::~FileData_t(void)=56 8B F1 C7 ? ? ? ? ? ? 83 7E 70=pdb
void vgui::FileOpenDialog::BuildFileList(void)=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8D=pdb
void vgui::SectionedListPanel::MoveSelectionUp(void)=53 57 8B F9 8B 07 FF ? ? ? ? ? 8B D8 83 FB FF 74 66=pdb
virtual void vgui::ListPanel::OnSliderMoved(void)=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE 5E=pdb
void vgui::CItemButton::SetSectionID(int)=55 8B EC 53 8B 5D 08 56 8B F1 3B ? ? ? ? ? 74=pdb
virtual vgui::CFooterPanel::~CFooterPanel(void)=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 D2 74 17 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? ? ? ? ? 8D=pdb
virtual void vgui::HTML::SetViewSourceEnabled(bool)=55 8B EC 8B ? ? ? ? ? FF 75 08 FF ? ? ? ? ? 8B=pdb
vgui::ImageList::~ImageList(void)=56 8B F1 80 7E 14 00 74 22=pdb
bool vgui::ImageList::IsValidIndex(int)=55 8B EC 8B 45 08 85 C0 78 0B=pdb
virtual void vgui::BaseTooltip::HideTooltip(void)=8A 41 24 24=pdb=vgui::BaseTooltip=3
virtual void vgui::BuildModeDialog::OnClose(void)=56 8B F1 8B ? ? ? ? ? 8B 01 8B 40 04=pdb=vgui::BuildModeDialog=235
virtual unsigned long vgui::TextImage::GetFont(void)=F6 41 34 10=pdb
virtual void vgui::TextImage::Paint(void)=55 8B EC 83 EC 28 56 8B F1 8D=pdb=vgui::TextImage=0
virtual void vgui::TextImage::SetFont(unsigned long)=55 8B EC 8B 45 08 80 49=pdb
virtual void vgui::ScrollBarSlider::Paint(void)=55 8B EC 83 EC 0C 56 8B F1 8D 4D F4 51 8D=pdb=vgui::ScrollBarSlider=128
virtual void vgui::ScrollBarSlider::SetValue(int)=55 8B EC 8B 55 08 56 57 8B F9 8B ? ? ? ? ? 2B=pdb=vgui::ScrollBarSlider=211
void vgui::PropertySheet::ClearPageDropTab(void)=56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 56=pdb
virtual void vgui::PageTab::OnCursorEntered(void)=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 18 89 ? ? ? ? ? 5E=pdb=vgui::PageTab=103
virtual void vgui::PageTab::OnThink(void)=56 8B F1 80 ? ? ? ? ? ? 74 48=pdb=vgui::PageTab=101
virtual void vgui::PropertySheet::OnThink(void)=56 8B F1 E8 ? ? ? ? 83 ? ? ? ? ? ? 74 20=pdb
virtual void vgui::PropertySheet::RequestFocus(int)=55 8B EC 8B 55 08 56 8B F1 83 FA=pdb=vgui::PropertySheet=12
virtual void vgui::PropertySheet::SetSmallTabs(bool)=55 8B EC 8A 45 08 53=pdb=vgui::PropertySheet=257
virtual void vgui::PropertySheet::SetTabWidth(int)=55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 8B=pdb=vgui::PropertySheet=240
CVTFTexture::CVTFTexture(void)=C7 ? ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 5C=pdb
virtual float CVTFTexture::BumpScale(void)const=D9 41 40=pdb=CVTFTexture=24
virtual void CVTFTexture::ComputeAlphaFlags(void)=55 8B EC 83 EC 18 56 8B F1 81=pdb=CVTFTexture=49
virtual int CVTFTexture::ComputeFaceSize(int)const=55 8B EC FF 71 18 FF 75=pdb=CVTFTexture=35
virtual int CVTFTexture::ComputeTotalSize(void)const=56 8B F1 FF 76 18 6A=pdb=CVTFTexture=36
virtual bool CVTFTexture::ConstructLowResImage(void)=55 8B EC 83 EC 54 56 8B=pdb=CVTFTexture=50
virtual int CVTFTexture::FileSize(int)const=55 8B EC 57 6A 30=pdb=CVTFTexture=13
virtual bool CVTFTexture::IsCubeMap(void)const=8B 41 2C C1 E8 0E=pdb=CVTFTexture=29
virtual bool CVTFTexture::IsNormalMap(void)const=8B 41 2C C1 E8 07 83=pdb=CVTFTexture=30
virtual bool CVTFTexture::IsVolumeTexture(void)const=83 79 14 01 0F=pdb=CVTFTexture=31
std::_Init_locks::_Init_locks(void)=33 C0 57 8B F9 40=pdb
std::_Init_locks::~_Init_locks(void)=83 C8 FF F0 ? ? ? ? ? ? ? 79=pdb
std::_Fac_node::~_Fac_node(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 79=pdb
std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void)=56 EB 18=pdb
__Mtxinit()=55 8B EC 6A 00 68 ? ? ? ? FF=pdb
__freea_crt()=55 8B EC 8B 45 08 85 C0 74 12 83 E8=pdb
_Init_atexit::~_Init_atexit(void)=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? EB=pdb
initialize_pointers()=56 68 ? ? ? ? FF ? ? ? ? ? 8B F0=pdb
___crtInitializeCriticalSectionEx()=55 8B EC 56 8B ? ? ? ? ? 33 ? ? ? ? ? 74 14=pdb
void operator delete[](void near *,unsigned int)=55 8B EC FF 75 08 E8 ? ? ? ? 59 5D C3=pdb
find_pe_section()=55 8B EC 8B 45 08 56 8B 48=pdb
___scrt_acquire_startup_lock()=E8 ? ? ? ? 85 C0 75 03 32=pdb
___scrt_dllmain_after_initialize_c()=E8 ? ? ? ? 85 C0 74 07 E8=pdb
___scrt_dllmain_before_initialize_c()=6A 00 E8 ? ? ? ? 84 C0 59=pdb
___scrt_dllmain_crt_thread_detach()=E8 ? ? ? ? E8 ? ? ? ? B0 01 C3=pdb
___scrt_dllmain_exception_filter()=55 8B EC E8 ? ? ? ? 85 C0 75=pdb
___scrt_dllmain_uninitialize_c()=E8 ? ? ? ? 85 C0 74 0C 68 ? ? ? ? E8=pdb
___scrt_dllmain_uninitialize_critical()=6A 00 E8 ? ? ? ? 59 E9=pdb
___scrt_initialize_crt()=55 8B EC 83 7D 08 00 75 07=pdb
___scrt_initialize_onexit_tables()=55 8B EC 83 EC 0C 56 8B 75 08 85 F6 74 05=pdb
___scrt_is_nonwritable_in_current_image()=6A 08 68 ? ? ? ? E8 ? ? ? ? 83 65 FC 00 B8=pdb
___scrt_release_startup_lock()=55 8B EC E8 ? ? ? ? 85 C0 74 0F=pdb
___scrt_uninitialize_crt()=55 8B EC 80 ? ? ? ? ? ? 74 06 80=pdb
__onexit()=55 8B EC A1 ? ? ? ? 8B C8=pdb
_atexit()=55 8B EC FF 75 08 E8 ? ? ? ? F7=pdb
__scrt_initialize_thread_safe_statics()=53 56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? E8=pdb
__scrt_uninitialize_thread_safe_statics()=68 ? ? ? ? FF ? ? ? ? ? A1 ? ? ? ? 85=pdb
__Init_thread_footer()=55 8B EC E8 ? ? ? ? 8B ? ? ? ? ? 8B 45 08 41=pdb
__Init_thread_header()=55 8B EC 56 E8 ? ? ? ? 8B 75 08 EB=pdb
__Init_thread_notify()=A1 ? ? ? ? 85 C0 75 24 56=pdb
__Init_thread_wait()=55 8B EC 83 ? ? ? ? ? ? 56 75=pdb
__alloca_probe_16()=51 8D 4C 24 08 2B C8 83 E1 0F=pdb
__alloca_probe_8()=51 8D 4C 24 08 2B C8 83 E1 07=pdb
__chkstk()=51 8D 4C 24 04=pdb
__ftol2_sse()=83 ? ? ? ? ? ? 74 37 55=pdb
__ftol2_sse_excpt()=83 ? ? ? ? ? ? 74 1B 83=pdb
__ftol2()=55 8B EC 83 EC 20 83 E4=pdb
__ftoui3()=B9 ? ? ? ? F2 ? ? ? ? ? ? ? EB 1C B9 ? ? ? ? F2 ? ? ? ? ? ? ? EB 0D B9 ? ? ? ? F2 ? ? ? ? ? ? ? 66 0F 7E=pdb
__ftol3_except()=83 EC 20 9B=pdb
__dtol3()=B9 ? ? ? ? F2 ? ? ? ? ? ? ? 66 0F 6F=pdb
__ultod3()=0F 57 C0 F2 0F 2A C1 C1 E9 1F F2 ? ? ? ? ? ? ? ? 85=pdb
__ltod3()=0F 57 C9 F2 0F 2A CA 0F=pdb
__alldiv()=57 56 53 33=pdb
__aullshr()=80 F9 40 73 15 80 F9 20 73 06 0F AD=pdb
__aulldiv()=53 56 8B 44 24=pdb
__allmul()=8B 44 24 08 8B 4C 24 10=pdb
dllmain_crt_dispatch()=55 8B EC 8B 45 0C 83 E8 00 74 33=pdb
dllmain_crt_process_attach()=6A 10 68 ? ? ? ? E8 ? ? ? ? 6A=pdb
dllmain_crt_process_detach()=6A 0C 68 ? ? ? ? E8 ? ? ? ? A1=pdb
dllmain_dispatch()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 7D=pdb
dllmain_raw()=55 8B EC 56 8B ? ? ? ? ? 85 F6 75 05=pdb
_DllMainCRTStartup(x,x,x)=55 8B EC 83 7D 0C 01 75=pdb
__security_check_cookie(x)=3B ? ? ? ? ? F2 75=pdb
___raise_securityfailure()=55 8B EC 6A 00 FF ? ? ? ? ? FF 75 08 FF=pdb
___report_gsfailure()=55 8B EC 81 ? ? ? ? ? 6A 17 E8 ? ? ? ? 85 C0 74 05 6A=pdb
___report_rangecheckfailure()=55 8B EC 6A 08 E8=pdb
___report_securityfailure()=55 8B EC 81 ? ? ? ? ? 6A 17 E8 ? ? ? ? 85 C0 74 05 8B=pdb
__EH_prolog3_catch()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 89 65=pdb
___scrt_fastfail()=55 8B EC 81 ? ? ? ? ? 53 56 6A=pdb
__SEH_prolog4()=68 ? ? ? ? 64 ? ? ? ? ? ? 8B 44 24 10 89 6C 24 10 8D 6C 24 10 2B E0 53 56 57 A1 ? ? ? ? 31 45 FC 33 C5 50=pdb
__SEH_epilog4()=8B 4D F0 64 ? ? ? ? ? ? 59 5F 5F=pdb
___security_init_cookie()=55 8B EC 83 EC 14 83 65=pdb
___scrt_initialize_default_local_stdio_options()=E8 ? ? ? ? 8B 48 04 83 08 04=pdb
___sse2_acosf4()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 0F=pdb
___sse2_sin2()=8B C4 81 ? ? ? ? ? 83 E4 F0 89 44=pdb
_B1_1()=57 8B 7C 24 0C 81=pdb
__vmldPow_HA_scalar()=55 8B EC 83 E4 F8 56 57 53 83 EC 2C=pdb
__raise_zerodivide()=66 0F 76 DB=pdb
_pow_scalar()=60 8B C4 83=pdb
___sse2_pow2()=8B C4 81 ? ? ? ? ? 83 E4 F0 89 ? ? ? ? ? ? 66=pdb
__raise_invalid()=66 0F 76 D2=pdb
___common_sacos_cout_rare()=55 8B EC 83 E4 F8 56 57 53 83 EC 5C=pdb
___common_srl()=8B 44 24 04 8B 54 24 08 8B 4C 24 0C 80 F9 40 73 16=pdb
___common_sll()=8B 44 24 04 8B 54 24 08 8B 4C 24 0C 80 F9 40 73 15=pdb
___common_pi04_reduction_LA()=55 8B EC 83 E4 F0 56 57 53 83 EC 54 B8 ? ? ? ? 8B 55 0C 8B 5D 10 2B D0 0F ? ? ? ? ? 33 C0 66 ? ? ? ? D9 7C 24 46=pdb
__get_purecall_handler()=33 C9 BA ? ? ? ? 33=pdb
__purecall()=56 E8 ? ? ? ? 8B F0 85 F6 74 09=pdb
__set_purecall_handler()=55 8B EC FF 75 08 E8 ? ? ? ? 8B D0=pdb
_CxxThrowException(x,x)=55 8B EC 83 EC 20 53 8B 5D 08 56 57 6A=pdb
__CatchGuardHandler()=55 8B EC 56 FC=pdb
__CreateFrameInfo()=55 8B EC 8B 4D 0C 56 8B=pdb
__FindAndUnlinkFrame()=55 8B EC 56 E8 ? ? ? ? 8B 75 08 3B=pdb
__IsExceptionObjectToBeDestroyed()=55 8B EC E8 ? ? ? ? 8B 40=pdb
__TranslatorGuardHandler()=55 8B EC 51 53 FC=pdb
___CxxFrameHandler3()=55 8B EC 83 EC 08 53 56 57 FC=pdb
FindCompleteObject()=55 8B EC 8B 55 08 8B 02 8B 48 FC=pdb
FindMITargetTypeInstance()=55 8B EC 83 EC 14 8B 45 0C 33=pdb
FindSITargetTypeInstance()=55 8B EC 51 51 8B 45 08 53=pdb
FindVITargetTypeInstance()=55 8B EC 83 EC 24 8B 45 0C 83=pdb
PMDtoOffset()=55 8B EC 56 8B 75 0C 33=pdb
___RTDynamicCast()=6A 18 68 ? ? ? ? E8 ? ? ? ? 8B=pdb
___RTtypeid()=6A 14 68 ? ? ? ? E8 ? ? ? ? 8B 45=pdb
_strchr()=83 ? ? ? ? ? ? 72 5F 0F=pdb
_memset()=8B 4C 24 0C 0F ? ? ? ? 8B D7=pdb
___std_type_info_compare()=55 8B EC 8B 45 08 8B 4D 0C 3B=pdb
___std_type_info_destroy_list()=55 8B EC FF 75 08 FF ? ? ? ? ? 85=pdb
___std_type_info_name()=55 8B EC 83 EC 0C 33 C9 33=pdb
_wcschr()=53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B=pdb
_wcsstr()=53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83=pdb
_strstr()=8B 4C 24 08 8B 44 24 04=pdb
_longjmp()=55 8B EC FF 75 08 E8 ? ? ? ? 59 5D E9=pdb
__setjmp3()=8B 54 24 04 89=pdb
_strrchr()=55 8B EC 57 83=pdb
___std_exception_copy()=55 8B EC 57 8B 7D 08 80 7F 04=pdb
___std_exception_destroy()=55 8B EC 56 8B 75 08 80 7E 04=pdb
___DestructExceptionObject()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 45 08 85=pdb
virtual std::exception::~exception(void)=8D 41 04 C7 ? ? ? ? ? 50=pdb
CallCatchBlock()=6A 38 68 ? ? ? ? E8=pdb
CallUnexpected()=6A 04 B8 ? ? ? ? E8 ? ? ? ? E8=pdb
CatchIt()=55 8B EC 83 7D 20=pdb
ExFilterRethrow()=55 8B EC 8B 45 08 8B 00 81 ? ? ? ? ? 75=pdb
FindHandler()=55 8B EC 83 EC 44 53 8B 5D 0C 56 57 8B=pdb
FindHandlerForForeignException()=55 8B EC 51 51 57 8B 7D 08=pdb
IsInExceptionSpec()=55 8B EC 83 EC 18 53 56 8B 75 0C 57=pdb
Is_bad_exception_allowed()=55 8B EC 53 56 57 8B 7D 08 33=pdb
___AdjustPointer()=55 8B EC 8B 4D 0C 8B 55=pdb
___BuildCatchObject()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 55=pdb
___BuildCatchObjectHelper()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 DB 8B=pdb
___FrameUnwindFilter()=55 8B EC 8B 45 08 8B 00 81 ? ? ? ? ? 74=pdb
___FrameUnwindToState()=6A 10 68 ? ? ? ? E8 ? ? ? ? 8B 45=pdb
___InternalCxxFrameHandler()=55 8B EC 53 56 57 FF 75 10 E8=pdb
___TypeMatch()=55 8B EC 8B 55 08 53 56 57 8B 42=pdb
_memchr()=8B 44 24 0C 53 85=pdb
_memcmp()=55 8B EC 53 8B 5D 10 8B=pdb
___vcrt_initialize()=E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 84=pdb
___vcrt_thread_detach()=6A 00 E8 ? ? ? ? 59 B0 01 C3=pdb
___vcrt_uninitialize()=55 8B EC 80 7D 08 00 75 12=pdb
ValidateLocalCookies()=55 8B EC 56 8B 75 08 57 8B 7D 0C 8B 06=pdb
__except_handler4()=55 8B EC 83 EC 1C 53 56 8B 75 0C 57=pdb
___vcrt_initialize_pure_virtual_call_handler()=A1 ? ? ? ? 83 E0 1F 6A 20 59 2B C8 33 C0 D3 C8 33 ? ? ? ? ? A3 ? ? ? ? C3=pdb
__vcrt_freefls(x)=55 8B EC 8B 45 08 85 C0 74 0E 3D=pdb
___vcrt_freeptd()=55 8B EC A1 ? ? ? ? 83 F8 FF 74 27=pdb
___vcrt_getptd_noexit()=83 ? ? ? ? ? ? 75 03 33 C0 C3 53=pdb
___vcrt_initialize_ptd()=68 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 59=pdb
___vcrt_uninitialize_ptd()=A1 ? ? ? ? 83 F8 FF 74 0E=pdb
_CallSettingFrame(x,x,x)=55 8B EC 83 EC 04=pdb
DName::DName(char const near * near &,char)=55 8B EC 53 56 8B F1 57 8B 7D 08 83 26=pdb
DName::DName(class DName near *)=55 8B EC 53 33 DB 56 8B F1=pdb
DName::DName(char const near *)=55 8B EC 56 8B F1 33 C0 8B 4D 08 88 46 04 81 ? ? ? ? ? ? 89 06 85=pdb
DName::DName(enum DNameStatus)=55 8B EC 8B 45 08 56 8B F1 81 ? ? ? ? ? ? 83=pdb
DName::DName(__int64)=55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 55 0C 8B C1=pdb
DName::DName(unsigned __int64)=55 8B EC 83 EC 24 A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
pDNameNode::pDNameNode(class DName near *)=55 8B EC 8B 45 08 C7 ? ? ? ? ? 85=pdb
pcharNode::pcharNode(char const near *,int)=55 8B EC 53 56 8B F1 57 8B 7D 0C C7=pdb
class DName Replicator::operator[](int)const=55 8B EC 8B 55 0C 83 FA 09=pdb
UnDecorator::operator char near *(void)=55 8B EC 83 EC 20 8B 4D=pdb
void _HeapManager::Destructor(void)=57 8B F9 83 7F 04 00 74 2E=pdb
void DName::append(class DNameNode near *)=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 2E 6A=pdb
void DName::doPchar(char const near *,int)=55 8B EC 56 8B F1 57 33 FF 39 3E=pdb
static class DName UnDecorator::getBasedType(void)=55 8B EC 83 EC 10 6A 00 E8=pdb
static class DName UnDecorator::getDimension(bool)=55 8B EC 8B ? ? ? ? ? 83 EC 18 56 33=pdb
static class DName UnDecorator::getEnumType(void)=55 8B EC 83 EC 18 A1 ? ? ? ? 83=pdb
char DName::getLastChar(void)const=57 8B 39 85 FF 75 04 32=pdb
virtual char DNameStatusNode::getLastChar(void)const=83 79 04 01 0F 95=pdb
virtual char pDNameNode::getLastChar(void)const=8B 49 04 85 C9 0F ? ? ? ? ? 32 C0 C3=pdb
virtual char pairNode::getLastChar(void)const=53 8B D9 56 57 8B 7B 08=pdb
virtual char pcharNode::getLastChar(void)const=8B 51 08 85 D2 74 08=pdb
static int UnDecorator::getNumberOfDimensions(void)=8B ? ? ? ? ? 8A 01 84 C0 75 03=pdb
static class DName UnDecorator::getScope(void)=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 C6=pdb
static class DName UnDecorator::getScopedName(void)=55 8B EC 83 EC 18 53 56 8B 75 08 33 DB 57=pdb
char near * DName::getString(char near *,int)const=55 8B EC 53 8B D9 56 8B 75 08 57 83=pdb
static class DName UnDecorator::getSymbolName(void)=55 8B EC A1 ? ? ? ? 80=pdb
static class DName UnDecorator::getThisType(void)=55 8B EC 83 EC 10 83 65=pdb
static class DName UnDecorator::getThrowTypes(void)=55 8B EC A1 ? ? ? ? 83 EC 18 8A 08 84 C9 74=pdb
static int UnDecorator::getTypeEncoding(void)=55 8B EC 51 8B ? ? ? ? ? 53 56 57 6A=pdb
static class DName UnDecorator::getZName(bool,bool)=55 8B EC 83 EC 3C A1=pdb
int DName::length(void)const=57 8B 39 85 FF 75 04 33=pdb
virtual int pDNameNode::length(void)const=8B 49 04 85 C9 0F ? ? ? ? ? 33=pdb
virtual int pairNode::length(void)const=55 8B EC 51 8B C1 89 45 FC 83 78=pdb
und_strncmp()=55 8B EC 8B 45 10 85 C0 75 02 5D C3 8B 4D 0C 8B 55 08 53=pdb
___unDName()=6A 64 68 ? ? ? ? E8 ? ? ? ? 8B=pdb
___longjmp_internal()=55 8B EC 83 EC 50 8B 5C=pdb
__global_unwind2()=55 8B EC 53 56 57 55=pdb
__unwind_handler()=8B 4C 24 04 F7 ? ? ? ? ? ? B8 ? ? ? ? 74 32=pdb
__local_unwind2()=53 56 57 8B 44=pdb
__abnormal_termination()=33 C0 64=pdb
__NLG_Notify1()=53 51 BB ? ? ? ? EB=pdb
__NLG_Notify()=53 51 BB ? ? ? ? 8B=pdb
_unexpected()=56 E8 ? ? ? ? 8B 70 04=pdb
___vcrt_initialize_locks()=56 57 BF ? ? ? ? 33 F6 6A 00 68 ? ? ? ? 57 E8 ? ? ? ? 83=pdb
__local_unwind4()=53 56 57 8B 54=pdb
_seh_longjmp_unwind4(x)=55 FF 74 24 08=pdb
_EH4_CallFilterFunc(x,x)=55 56 57 53=pdb
_EH4_TransferToHandler(x,x)=8B EA 8B F1=pdb
_EH4_GlobalUnwind2(x,x)=55 8B EC 53 56 57 6A 00 52=pdb
_EH4_LocalUnwind(x,x,x,x)=55 8B 6C 24 08 52=pdb
_rt_probe_read4(x)=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 FC=pdb
___acrt_call_reportfault()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 83 7D 08=pdb
__invalid_parameter()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8 ? ? ? ? 85=pdb
__invalid_parameter_noinfo()=33 C0 50 50 50 50 50 E8 ? ? ? ? 83=pdb
__invalid_parameter_noinfo_noreturn()=8B FF 56 33 F6 56=pdb
__invoke_watson()=6A 17 E8 ? ? ? ? 85 C0 74 05 6A 05=pdb
shortsort()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 53 8B 5D 0C 3B D9 76 6C=pdb
_qsort()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08=pdb
__chvalidchk_l()=8B FF 55 8B EC 8B 45 10 85 C0 74=pdb
__isalnum_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 68=pdb
__ischartype_l()=8B FF 55 8B EC 8B 4D 10 85=pdb
__iscntrl_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 20=pdb
__isdigit_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 04=pdb
__isspace_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 08=pdb
_isalnum()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 25=pdb
_iscntrl()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 20=pdb
_isdigit()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 04=pdb
_isspace()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 08=pdb
fFMOD()=D9 C9 D9 F8=pdb
_lambda_d9b46f0b07bf76f03656ac7f646b375e_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B7 00 50 E8 ? ? ? ? 8B 46 04 33 C9 66 89 08 8B 46 08 8B 0E 5E=pdb
_lambda_af0d5e41dc07595f2c52435db9a0efad_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B6 00 50 E8 ? ? ? ? 8B 46 04 C6 00 00 8B 46 08 8B 0E 5E=pdb
memcpy_s()=8B FF 55 8B EC 56 8B 75 14 85 F6 75=pdb
___libm_sse2_powf()=F3 ? ? ? ? ? ? ? 83 EC 0C 66 ? ? ? ? ? ? ? 66=pdb
___acrt_initialize_stdio()=A1 ? ? ? ? 56 6A 03=pdb
___acrt_iob_func()=8B FF 55 8B EC 6B 45 08 38=pdb
___acrt_uninitialize_stdio()=8B FF 56 E8 ? ? ? ? E8=pdb
common_fsopen_char_()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 08 85 F6 0F 95 C0 85 C0 75 14 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 33 C0 EB 73=pdb
_fopen()=8B FF 55 8B EC 6A 40=pdb
__fclose_nolock()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 15=pdb
_fclose()=6A 10 68 ? ? ? ? E8 ? ? ? ? 8B 75=pdb
__fread_nolock_s()=8B FF 55 8B EC 83 EC 14 53 56 8B=pdb
_fread()=8B FF 55 8B EC FF 75 14 FF 75 10 FF 75 0C 6A=pdb
_fread_s()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 7D=pdb
long LongLongSub(__int64,__int64,__int64 near *)=8B FF 55 8B EC 53 56 8B 75 08 2B=pdb
common_fseek()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 C0 39 45 08 0F 95 C0 85 C0 75 15 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 83 C8 FF EB 47=pdb
common_fseek_binary_mode_read_only_fast_track_nolock()=8B FF 55 8B EC 83 7D 14=pdb
common_fseek_nolock()=8B FF 55 8B EC 8B 45 08 8B 40=pdb
_fseek()=8B FF 55 8B EC FF 75 10=pdb
_lambda_b51c0495177f500e782686251704ae76_::operator()=8B FF 55 8B EC 51 51 56 8B F1 57 8B=pdb
__fwrite_nolock()=8B FF 55 8B EC 83 EC 0C 53 56 8B 75 0C=pdb
_fwrite()=8B FF 55 8B EC 83 EC 10 83 7D 0C=pdb
common_vsprintf_s_char_()=8B FF 55 8B EC 83 7D 18=pdb
_lambda_4f2c1eaeead2a5fc776db5b62ea0fb9b_::operator()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B F1=pdb
___stdio_common_vfprintf()=8B FF 55 8B EC 83 EC 2C 8B=pdb
common_vsscanf_char_()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 57 8B=pdb
common_vsscanf_wchar_t_()=8B FF 55 8B EC 83 EC 7C=pdb
_lambda_83425c3f06effba31f387a263a50d5fb_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B7 00 50 E8 ? ? ? ? 8B 46 04 33 C9 66 89 08 8B 46 08 8B 0E FF=pdb
_lambda_79c077965043167fb4fbb9f601780f11_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B6 00 50 E8 ? ? ? ? 8B 46 04 C6 00 00 8B 46 08 8B 0E FF=pdb
_strtok()=8B FF 55 8B EC E8 ? ? ? ? 83=pdb
___libm_sse2_expf()=F3 0F 10 C8 F3 0F 10=pdb
___libm_sse2_logf()=F3 ? ? ? ? ? ? ? F3 0F 10 F8=pdb
_wcsncpy()=8B FF 55 8B EC 8B 4D 10 57=pdb
internal_islower_l()=8B FF 55 8B EC FF 75 0C 6A 02=pdb
internal_isupper_l()=8B FF 55 8B EC FF 75 0C 6A 01=pdb
_tolower()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 10 6A 00 FF 75 08 E8 ? ? ? ? 59 59 8B C8 EB 0E 8B 4D 08 8D 41 BF=pdb
_toupper()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 10 6A 00 FF 75 08 E8 ? ? ? ? 59 59 8B C8 EB 0E 8B 4D 08 8D 41 9F=pdb
___libm_sse2_atanf()=B9 ? ? ? ? 66 0F 6E D1 F3=pdb
shortsort_s()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 53 8B 5D 0C 3B D9 76 6F=pdb
swap()=8B FF 55 8B EC 8B 45 0C 57=pdb
_qsort_s()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 18=pdb
common_stat__stat64i32_()=8B FF 55 8B EC 83 EC 34 83=pdb
common_stat_handle_file_not_opened__stat64i32_()=8B FF 55 8B EC 51 FF 75 08 E8=pdb
common_stat_handle_file_opened__stat64i32_()=8B FF 55 8B EC 83 EC 50=pdb
convert_large_integer_time_to_time_t___int64_()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 83=pdb
call_wfullpath()=8B FF 55 8B EC 56 57 E8 ? ? ? ? 8B 38=pdb
compute_size()=8B FF 55 8B EC 8B 4D 0C 8B=pdb
convert_to_stat_mode()=8B FF 55 8B EC 56 57 0F B6=pdb
get_drive_number_from_path()=8B FF 55 8B EC 8B 4D 08 33 D2 53=pdb
has_executable_extension()=8B FF 55 8B EC 83 7D 08 00 75 04 32=pdb
is_root_or_empty()=8B FF 55 8B EC 8B 4D 08 85 C9 74 47=pdb
is_root_unc_name()=8B FF 55 8B EC 8B 55 08 8B=pdb
is_slash()=8B FF 55 8B EC 66 ? ? ? ? 74 0B=pdb
is_usable_drive_or_unc_root()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 68=pdb
__stat64i32()=8B FF 55 8B EC 51 83 7D 08 00 56=pdb
common_getdcwd_char_()=8B FF 55 8B EC 51 56 8B 75 10=pdb
common_getdcwd_wchar_t_()=8B FF 55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 53 8B=pdb
is_valid_drive()=8B FF 55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
common_getenv_char_()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 08 85 F6 0F 95 C0 85 C0 75 14 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 33 C0 EB 40=pdb
common_getenv_nolock_char_()=8B FF 55 8B EC 51 56 57 E8 ? ? ? ? 8B F8=pdb
common_getenv_s_char_()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 0B=pdb
common_getenv_s_nolock_char_()=8B FF 55 8B EC 51 53 8B 5D 08 56=pdb
__access()=8B FF 55 8B EC FF 75 0C FF=pdb
__access_s()=8B FF 55 8B EC 51 83 7D 08 00 75 0E=pdb
common_ftell_long_()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 C0 39 45 08 0F 95 C0 85 C0 75 15 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 83 C8 FF EB 2D=pdb
common_ftell_nolock_long_()=8B FF 55 8B EC FF 75 08 E8 ? ? ? ? 59 85=pdb
common_ftell_nolock___int64_()=8B FF 55 8B EC 83 EC 10 83 7D 08 00 75 1A=pdb
common_ftell_read_mode_nolock()=8B FF 55 8B EC 83 EC 1C 57=pdb
common_ftell_translated_utf8_nolock()=8B FF 55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53=pdb
bool __crt_time_is_leap_year<int>(int)=8B FF 55 8B EC 8B 4D 08 8B C1=pdb
common_asctime_s_char_()=8B FF 55 8B EC 51 53 56 8B 75 08 57 85=pdb
common_asctime_s_write_value_char_()=8B FF 55 8B EC 56 6A=pdb
bool __crt_time_is_day_valid(int,int,int)=8B FF 55 8B EC 83 7D 10 00 7F=pdb
_asctime()=8B FF 55 8B EC 56 57 E8 ? ? ? ? 85=pdb
common_localtime_s_long_()=8B FF 55 8B EC 83 EC 10 56 8B 75=pdb
common_localtime_s___int64_()=8B FF 55 8B EC 83 EC 14 56 8B=pdb
common_timespec_get__timespec64_()=8B FF 55 8B EC 51 51 56 8B 75 08 85 F6 75 14=pdb
__time64()=8B FF 55 8B EC 83 EC 10 33 C0 57=pdb
_strnlen()=8B FF 55 8B EC A1 ? ? ? ? 56 57=pdb
_wcsnlen()=8B FF 55 8B EC 51 A1 ? ? ? ? 8B=pdb
_wcsncmp()=8B FF 55 8B EC 8B 45 10 85 C0 75=pdb
__isleadbyte_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8B=pdb
_iswascii()=8B FF 55 8B EC B8 ? ? ? ? 66=pdb
_iswcntrl()=8B FF 55 8B EC 6A 20=pdb
_iswdigit()=8B FF 55 8B EC 6A 04 FF=pdb
_iswpunct()=8B FF 55 8B EC 6A 10=pdb
_iswspace()=8B FF 55 8B EC 6A 08=pdb
__fputc_nolock()=8B FF 55 8B EC 8B 55 0C 83 6A=pdb
___libm_sse2_acosf()=66 0F 7E C0 B9=pdb
___libm_sse2_asinf()=66 0F 7E C0 F3=pdb
___libm_sse2_pow()=83 EC 14 66=pdb
___libm_sse2_tanf()=66 ? ? ? ? 66 25 FF 7F 66 2D 80 00 66 3D FF=pdb
___acrt_errno_from_os_error()=8B FF 55 8B EC 8B 4D 08 33 C0 3B=pdb
___acrt_errno_map_os_error()=8B FF 55 8B EC 56 E8 ? ? ? ? 8B 4D=pdb
___doserrno()=E8 ? ? ? ? 85 C0 75 06 B8 ? ? ? ? C3 83 C0 14=pdb
__errno()=E8 ? ? ? ? 85 C0 75 06 B8 ? ? ? ? C3 83 C0 10=pdb
common_futime___int64___utimbuf64_()=8B FF 55 8B EC 83 EC 68=pdb
common_utime___int64_char___utimbuf64_()=8B FF 55 8B EC 51 83 7D 08 00 75 15=pdb
_strncmp()=53 56 8B 4C=pdb
__mbsstr_l()=8B FF 55 8B EC 83 EC 18 53 56 57 FF 75 10=pdb
int __crt_time_elapsed_leap_years<int>(int)=8B FF 55 8B EC 8B 45 08 56 BE=pdb
common_gmtime_s_long_()=8B FF 55 8B EC 51 51 56 8B 75 08 85 F6 75 16=pdb
common_gmtime_s___int64_()=8B FF 55 8B EC 83 EC 0C 56 8B 75 08 85=pdb
compute_year()=8B FF 55 8B EC 56 57 8B 7D 08 B9=pdb
compute_year_0()=8B FF 55 8B EC 51 53 8B 5D 08 B8=pdb
___getgmtimebuf()=8B FF 56 E8 ? ? ? ? 8B=pdb
_isindst_nolock()=8B FF 55 8B EC 51 53 8D=pdb
cvtdate()=8B FF 55 8B EC 51 51 83 65 F8 00 83 7D=pdb
tzset_from_environment_nolock()=8B FF 55 8B EC 83 EC 0C 53 56 E8=pdb
tzset_from_system_nolock()=8B FF 55 8B EC 83 EC 10 53 56 E8=pdb
tzset_nolock()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 83 ? ? ? ? ? ? 8D=pdb
___tzset()=6A 08 68 ? ? ? ? E8 ? ? ? ? A1=pdb
__isindst()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 06=pdb
___acrt_stdio_free_tmpfile_name_buffers_nolock()=8B FF 53 56 57 6A=pdb
__wcsicmp()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 75=pdb
__wcsicmp_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 FF=pdb
___libm_sse2_atan()=83 EC 0C 66 ? ? ? ? ? ? ? 66 0F 57=pdb
__ftol()=55 8B EC 83 C4 F4 9B=pdb
atexit_exception_filter()=8B FF 55 8B EC 33 C0 81=pdb
common_exit()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 75 10=pdb
exit_or_terminate_process()=8B FF 55 8B EC E8 ? ? ? ? 84=pdb
is_managed_app()=6A 00 FF ? ? ? ? ? 8B C8 85=pdb
try_cor_exit_process()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 83=pdb
___acrt_initialize_thread_local_exit_callback()=8B FF 55 8B EC 8B 45 08 A3=pdb
__cexit()=6A 01 6A 00 6A 00 E8=pdb
__exit()=8B FF 55 8B EC 6A 00 6A 02=pdb
_exit()=8B FF 55 8B EC 6A 00 6A 00 FF 75 08=pdb
__libm_sse2_pow_precise()=83 EC 10 0F ? ? ? ? 8B 44=pdb
_abort()=E8 ? ? ? ? 85 C0 74 08 6A=pdb
___acrt_stdio_flush_nolock()=8B FF 55 8B EC 8B 4D 08 56 8D=pdb
__fflush_nolock()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 09=pdb
__flushall()=6A 01 E8 ? ? ? ? 59 C3=pdb
common_flush_all()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 83=pdb
_fflush()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 75 08=pdb
_ldiv()=8B FF 55 8B EC 8B 45 08 99=pdb
_strpbrk()=55 8B EC 56 33 C0 50 50 50 50 50 50 50 50 8B 55 0C 8D 49 00 8A 02 0A C0 74 09 83 C2 01 0F AB 04 24 EB F1 8B 75 08 8B=pdb
___libm_sse2_log10f()=F3 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 0F DB=pdb
_wcsncat()=8B FF 55 8B EC 56 8B 75 08 33=pdb
_strncat()=8B 4C 24 0C 57 85 C9 0F ? ? ? ? ? 8B=pdb
_strncpy()=8B 4C 24 0C 57 85 C9 0F ? ? ? ? ? 56=pdb
call_wsetlocale()=8B FF 55 8B EC 51 83 7D 0C=pdb
_setlocale()=6A 1C 68 ? ? ? ? E8 ? ? ? ? FF=pdb
__strnicmp()=8B FF 55 8B EC A1 ? ? ? ? 56 85=pdb
__strnicmp_l()=8B FF 55 8B EC 83 EC 10 83 7D 10=pdb
___acrt_initialize_locks()=8B FF 56 57 BF=pdb
___acrt_uninitialize_locks()=8B FF 56 8B ? ? ? ? ? 85=pdb
___pctype_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 00=pdb
____lc_codepage_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 40 08=pdb
___acrt_locale_initialize_ctype()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 53 56=pdb
___strncnt()=8B FF 55 8B EC 8B 4D 08 33 C0 38=pdb
_strcspn()=55 8B EC 56 33 C0 50 50 50 50 50 50 50 50 8B 55 0C 8D 49 00 8A 02 0A C0 74 09 83 C2 01 0F AB 04 24 EB F1 8B 75 08 83=pdb
__CIpow_default()=83 EC 14 D9=pdb
__pow_default()=8D 54 24 0C E8 ? ? ? ? 8B=pdb
_test_whether_TOS_is_int()=D9 C0 D9 FC D8 D9 B1=pdb
_wcscpy_s()=8B FF 55 8B EC 8B 55 08 56 85 D2 74 13=pdb
x_ismbbtype_l()=8B FF 55 8B EC 83 EC 10 56 FF=pdb
__ismbblead()=8B FF 55 8B EC 6A 04 6A=pdb
__seh_filter_dll()=8B FF 55 8B EC B8 ? ? ? ? 39=pdb
__seh_filter_exe()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8=pdb
common_configure_argv_char_()=8B FF 55 8B EC 83 EC 0C 83=pdb
parse_command_line_char_()=8B FF 55 8B EC 51 8B 45 14=pdb
___acrt_allocate_buffer_for_argv()=8B FF 55 8B EC 56 8B 75 08 81=pdb
common_get_or_create_environment_nolock_char_()=A1 ? ? ? ? 85 C0 75 25 39=pdb
common_initialize_environment_nolock_char_()=83 ? ? ? ? ? ? 74 03 33=pdb
create_environment_char_()=8B FF 55 8B EC 51 51 53 56 57 8B 7D 08 33 D2=pdb
free_environment_wchar_t_()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 1F=pdb
initialize_environment_by_cloning_nolock_char_()=8B FF 57=pdb
___dcrt_uninitialize_environments_nolock()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? FF=pdb
_lambda_275893d493268fdec8709772e3fcec0e_::operator()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 8B C1=pdb
_lambda_4e60a939b0d047cfe11ddc22648dfba9_::operator()=8B FF 55 8B EC 83 EC 0C 8B C1=pdb
__crt_atexit()=8B FF 55 8B EC FF 75 08 68=pdb
__execute_onexit_table()=8B FF 55 8B EC 51 8D 45 08 89=pdb
__initialize_onexit_table()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 05=pdb
__register_onexit_function()=8B FF 55 8B EC 51 51 8D=pdb
initialize_c()=68 ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? E8=pdb
initialize_pointers_0()=A1 ? ? ? ? 56 6A 20 83=pdb
uninitialize_allocated_memory()=A1 ? ? ? ? 83 C9=pdb
___acrt_uninitialize_critical()=8B FF 55 8B EC FF 75 08 E8 ? ? ? ? 59 B0=pdb
__errcode()=8B FF 55 8B EC 8B 45 08 A8 20=pdb
__except1()=8B FF 53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 73 20=pdb
__handle_exc()=8B FF 55 8B EC 83 EC 10 53 8B 5D 08 56=pdb
__raise_exc()=8B FF 55 8B EC 6A 00 FF 75 1C=pdb
__raise_exc_ex()=8B FF 55 8B EC 8B 45 08 33 C9 53 33=pdb
__set_errno_from_matherr()=8B FF 55 8B EC 8B 45 08 83 F8 01=pdb
__umatherr()=8B FF 55 8B EC 8B 55 0C 83 EC=pdb
__initterm()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 45=pdb
__initterm_e()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08=pdb
_terminate()=6A 0C 68 ? ? ? ? E8 ? ? ? ? E8=pdb
_getch()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 6A 09=pdb
__getch_nolock()=6A 30 68 ? ? ? ? E8=pdb
__getextendedkeycode()=8B FF 55 8B EC 8B 55 08 56 8B=pdb
common_xtox_unsigned_long_char_()=8B FF 55 8B EC 8B 45 08 33 C9 53 8B=pdb
common_xtox_unsigned_long_wchar_t_()=8B FF 55 8B EC 8B 45 0C 8B 4D 08 53 56=pdb
common_xtox_s_unsigned_long_wchar_t_()=8B FF 55 8B EC 8B 4D 0C 56=pdb
_itoa()=8B FF 55 8B EC 51 83 7D 10=pdb
__itow_s()=8B FF 55 8B EC 51 83 7D 14=pdb
__ultoa_s()=8B FF 55 8B EC 6A 00 FF 75 14 FF=pdb
__close()=8B FF 55 8B EC 51 56 8B 75 08 83 FE FE 75 15=pdb
__close_nolock()=8B FF 55 8B EC 56 57 8B 7D 08 57=pdb
translate_text_mode_nolock_char_()=8B FF 55 8B EC 83 EC 18 8B 45 08 8B 4D 08 83 E0 3F 8B=pdb
translate_text_mode_nolock_wchar_t_()=8B FF 55 8B EC 83 EC 18 8B 45 08 8B 4D 08 83 E0 3F 53=pdb
translate_ansi_or_utf8_nolock()=8B FF 55 8B EC 51 51 53 FF=pdb
translate_utf16_from_console_nolock()=8B FF 55 8B EC 8B 45 10 56=pdb
__read_nolock()=8B FF 55 8B EC 83 EC 28 53=pdb
write_double_translated_ansi_nolock()=8B FF 55 8B EC 83 EC 38 A1=pdb
write_double_translated_unicode_nolock()=8B FF 55 8B EC 51 53 56 8B 75 08 33 C0=pdb
write_requires_double_translation_nolock()=8B FF 55 8B EC 51 56 8B 75 08 56=pdb
write_text_utf8_nolock()=8B FF 55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C 8B C1 C1 F8 06 83 E1 3F 6B C9 30 53 56=pdb
__write_nolock()=8B FF 55 8B EC 83 EC 30 A1 ? ? ? ? 33 C5 89 45 FC 8B 4D=pdb
__wcsnicmp()=8B FF 55 8B EC 51 A1 ? ? ? ? 57=pdb
__wcsnicmp_l()=8B FF 55 8B EC 83 EC 14 53 56 33=pdb
_strcpy_s()=8B FF 55 8B EC 8B 55 08 56 85 D2 74 11=pdb
construct_ptd()=8B FF 55 8B EC 51 51 8B 45 08=pdb
destroy_fls()=8B FF 55 8B EC 83 7D 08 00 74 12=pdb
destroy_ptd()=8B FF 55 8B EC 51 8B 45 08 8B 08=pdb
replace_current_thread_locale_nolock()=8B FF 55 8B EC 56 8B 75 08 83 7E=pdb
___acrt_freeptd()=A1 ? ? ? ? 83 F8 FF 74 21=pdb
___acrt_getptd()=8B FF 56 57 FF=pdb
___acrt_getptd_noexit()=8B FF 53 56 57 FF=pdb
___acrt_initialize_ptd()=68 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 83 F8=pdb
___acrt_uninitialize_ptd()=A1 ? ? ? ? 83 F8 FF 74 0D=pdb
__isctype_l()=8B FF 55 8B EC 83 EC 24 A1 ? ? ? ? 33 C5 89 45 FC 53=pdb
_lambda_2af78c5f5901b1372d98f9ab3177dfa6_::operator()=8B FF 55 8B EC 83 EC 14 56 57=pdb
_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_::operator()=8B FF 56 8B F1 8B 46 04 8B 00=pdb
___acrt_copy_locale_name()=8B FF 55 8B EC 83 7D 08 00 75 04 33 C0 5D C3 53=pdb
___acrt_set_locale_changed()=33 C0 B9 ? ? ? ? 40=pdb
___acrt_uninitialize_locale()=6A 08 68 ? ? ? ? E8 ? ? ? ? BE=pdb
___lc_lctowcs()=8B FF 55 8B EC 56 57 8B 7D 10 57 FF=pdb
___lc_wcstolc()=8B FF 55 8B EC 51 51 53 56 57 8B 7D 08 33 DB=pdb
_copytlocinfo_nolock()=8B FF 55 8B EC 56 8B 75 0C 85=pdb
__expandlocale()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 53 8B=pdb
__wcscats()=8B FF 55 8B EC 53 33=pdb
__wsetlocale()=8B FF 55 8B EC 83 EC 28 83=pdb
_wsetlocale_get_all()=8B FF 55 8B EC 83 EC 0C 53 56 33=pdb
_wsetlocale_nolock()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 53 56=pdb
_wsetlocale_set_cat()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C=pdb
__cintrindisp2()=55 8B EC 81 ? ? ? ? ? 53 9B ? ? ? ? ? ? 9B=pdb
__cintrindisp1()=55 8B EC 81 ? ? ? ? ? 53 9B ? ? ? ? ? ? 50=pdb
__ctrandisp2()=55 8B EC 81 ? ? ? ? ? 53 FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 FF=pdb
cintrinexit()=83 ? ? ? ? ? ? 75 4F DD=pdb
__ctrandisp1()=55 8B EC 81 ? ? ? ? ? 53 FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 9B=pdb
__fload()=55 8B EC 83 C4 F4 53=pdb
__rtnospopde()=E8 ? ? ? ? EB F6=pdb
__rtzeronpop()=DD D8 D9 EE C3=pdb
__rtzerospop()=DD D8 DD D8 D9 EE 84=pdb
__rtonenpop()=DD D8 D9 E8 C3=pdb
__tosnan1()=DB ? ? ? ? ? DB ? ? ? ? ? F6 ? ? ? ? ? ? 74 08=pdb
__nan2()=DB ? ? ? ? ? DB ? ? ? ? ? F6 ? ? ? ? ? ? 74 20=pdb
__rtindfpop()=DD D8 DD D8 DB ? ? ? ? ? 80=pdb
__rttosnpopde()=C6 ? ? ? ? ? ? 0A C9=pdb
__rtatan2inf()=DD D8 DD D8 DB ? ? ? ? ? 0A=pdb
__rtchsifneg()=0A C9 74 02=pdb
_iswctype()=8B FF 55 8B EC 51 51 66=pdb
try_get_CompareStringEx()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 01 E8=pdb
try_get_function_0()=8B FF 55 8B EC 8B 45 08 53=pdb
try_get_module_0()=8B FF 55 8B EC 8B 45 08 57=pdb
__acrt_AreFileApisANSI()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 00=pdb
__acrt_CompareStringEx(x,x,x,x,x,x,x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8 ? ? ? ? 8B=pdb
__acrt_EnumSystemLocalesEx(x,x,x,x)=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68=pdb
__acrt_FlsAlloc(x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 03=pdb
__acrt_FlsFree(x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 04=pdb
__acrt_FlsGetValue(x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 05=pdb
__acrt_FlsSetValue(x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 06=pdb
__acrt_GetFileInformationByHandleEx(x,x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0B=pdb
__acrt_GetLocaleInfoEx(x,x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0D=pdb
__acrt_GetSystemTimePreciseAsFileTime(x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0F=pdb
__acrt_GetUserDefaultLocaleName(x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 11=pdb
__acrt_InitializeCriticalSectionEx(x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 14=pdb
__acrt_IsValidLocaleName(x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 15=pdb
__acrt_LCIDToLocaleName(x,x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 17=pdb
__acrt_LCMapStringEx(x,x,x,x,x,x,x,x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 16=pdb
__acrt_LocaleNameToLCID(x,x)=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 18=pdb
___acrt_can_use_vista_locale_apis()=E8 ? ? ? ? F7 D8 1B C0 F7 D8 C3=pdb
___acrt_initialize_winapi_thunks()=A1 ? ? ? ? 57 6A 20=pdb
___acrt_is_packaged_app()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 8B ? ? ? ? ? 85=pdb
___vcrt_uninitialize_winapi_thunks_0()=55 8B EC 80 7D 08 00 75 27=pdb
__fcloseall()=6A 10 68 ? ? ? ? E8 ? ? ? ? 83=pdb
___acrt_stdio_free_buffer_nolock()=8B FF 55 8B EC 56 8B 75 08 57 8D=pdb
initialize_inherited_file_handles_nolock()=8B FF 55 8B EC 83 EC 48 8D=pdb
initialize_stdio_handles_nolock()=8B FF 53 56 57 33=pdb
___acrt_initialize_lowio()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 6A 07=pdb
___acrt_uninitialize_lowio()=8B FF 56 33 F6 8B=pdb
class __crt_stdio_stream __acrt_stdio_allocate_stream(void)=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 FF=pdb
void __acrt_stdio_free_stream(class __crt_stdio_stream)=8B FF 55 8B EC 8B 45 08 33 C9 89=pdb
find_or_allocate_unused_stream_nolock()=8B FF 55 8B EC 51 53 8B ? ? ? ? ? 56=pdb
common_openfile_char_()=8B FF 55 8B EC 83 EC 1C 56 57=pdb
__fileno()=8B FF 55 8B EC 8B 45 08 85 C0 75=pdb
common_refill_and_read_nolock_char_()=8B FF 55 8B EC 8B 45 08 56 85=pdb
common_lseek___int64_()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 8B=pdb
common_lseek_nolock___int64_()=8B FF 55 8B EC 51 51 56 8B 75 08 57 56 E8 ? ? ? ? 83=pdb
common_flush_and_write_nolock_char_()=8B FF 55 8B EC 57 FF=pdb
write_buffer_nolock_char_()=8B FF 55 8B EC 56 57 FF=pdb
___acrt_stdio_begin_temporary_buffering_nolock()=8B FF 55 8B EC 56 8B 75 08 56=pdb
___acrt_stdio_end_temporary_buffering_nolock()=8B FF 55 8B EC 80 7D 08 00 74=pdb
__mbtowc_l()=8B FF 55 8B EC 83 EC 10 53 56 8B 75 0C=pdb
_mbtowc()=8B FF 55 8B EC 6A 00 FF 75 10=pdb
__wctomb_s_l()=8B FF 55 8B EC 83 EC 14 53 8B=pdb
enum __acrt_fp_class __acrt_fp_classify(double const near &)=8B FF 55 8B EC 8B 45 08 B9=pdb
bool __acrt_fp_is_negative(double const near &)=8B FF 55 8B EC 8B 45 08 33 D2 8B=pdb
fp_format_a()=8B FF 55 8B EC 83 EC 30 53=pdb
fp_format_e()=8B FF 55 8B EC 83 EC 0C 8D=pdb
fp_format_e_internal()=8B FF 55 8B EC 83 EC 10 56 57 8B 7D 10=pdb
fp_format_f()=8B FF 55 8B EC 83 EC 0C 33=pdb
fp_format_f_internal()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 1C=pdb
fp_format_g()=8B FF 55 8B EC 83 EC 10 53 56 57 FF=pdb
fp_format_nan_or_infinity()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
shift_bytes()=8B FF 55 8B EC 8B 55 14=pdb
___acrt_fp_format()=8B FF 55 8B EC 51 51 56 57 8B 7D 0C=pdb
__get_printf_count_output()=8B ? ? ? ? ? 33 C0 83 C9=pdb
___libm_error_support()=8B FF 55 8B EC 83 EC 24 A1 ? ? ? ? 33 C5 89 45 FC 83=pdb
___acrt_initialize_sse2()=6A 0A E8 ? ? ? ? A3=pdb
___acrt_strtok_s_novalidation()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 8B 45 10=pdb
__acrt_LCMapStringA_stat()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 53=pdb
___acrt_LCMapStringA()=8B FF 55 8B EC 83 EC 10 FF 75 08 8D 4D F0 E8 ? ? ? ? FF 75 28=pdb
get_drive_number_from_path_0()=8B FF 55 8B EC 8B 4D 08 0F=pdb
__getdrive()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 57 33=pdb
common_fullpath_dynamic_buffer_wchar_t_()=8B FF 55 8B EC 57 33 FF 57 57 57 FF 75 08 FF ? ? ? ? ? 85 C0 75 11 FF ? ? ? ? ? 50 E8 ? ? ? ? 59 33 C0 EB 4A=pdb
common_fullpath_user_buffer_wchar_t_()=8B FF 55 8B EC 56 8B 75 10 85=pdb
__wfullpath()=8B FF 55 8B EC 8B 45 0C 85=pdb
_wcspbrk()=8B FF 55 8B EC 8B 45 08 33 C9 53 56=pdb
___acrt_copy_path_to_wide_string()=8B FF 55 8B EC 51 83 7D 08 00 75 17=pdb
___acrt_lowio_create_handle_array()=8B FF 55 8B EC 51 51 53 57=pdb
___acrt_lowio_destroy_handle_array()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 25=pdb
___acrt_lowio_ensure_fh_exists()=6A 14 68 ? ? ? ? E8 ? ? ? ? 81=pdb
___acrt_lowio_set_os_handle()=8B FF 55 8B EC 51 53 56 8B 75 08 85=pdb
__alloc_osfhnd()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 6A=pdb
__free_osfhnd()=8B FF 55 8B EC 53 56 8B 75 08 57=pdb
__get_osfhandle()=8B FF 55 8B EC 8B 4D 08 83 F9 FE 75 15=pdb
common_loctotime_t___int64_()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 53 8B=pdb
__strnicoll()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 06=pdb
__strnicoll_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 14=pdb
common_set_variable_in_environment_nolock_char_()=8B FF 55 8B EC 83 EC 0C 53 8B 5D 08 85=pdb
copy_environment_char_()=8B FF 55 8B EC 51 57=pdb
find_in_environment_nolock_char_()=8B FF 55 8B EC 53 56 57 8B ? ? ? ? ? 8B=pdb
__waccess_s()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08=pdb
_wcscat_s()=8B FF 55 8B EC 53 56 57 8B 7D=pdb
_mbstowcs_l_helper()=8B FF 55 8B EC 83 EC 18 53 8B 5D 10=pdb
__mbstowcs_s_l()=8B FF 55 8B EC 83 EC 10 53 8B 5D 10=pdb
common_tcsncpy_s_char_()=8B FF 55 8B EC 51 8B 55 14 8B 4D 08 56 85 D2 75 0D 85 C9 75 0D 39 4D 0C 75 21=pdb
__rmtmp()=6A 14 68 ? ? ? ? E8 ? ? ? ? 83 65=pdb
common_sopen_dispatch_char_()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 18=pdb
configure_text_mode()=8B FF 55 8B EC 51 8B 45 08 8B 55=pdb
create_file()=8B FF 55 8B EC 8B 45 20 0B=pdb
decode_open_create_flags()=8B FF 55 8B EC 8B 45 08 BA=pdb
decode_options()=8B FF 55 8B EC 51 53 8B 5D 0C=pdb
truncate_ctrl_z_if_present()=8B FF 55 8B EC 51 56 8B 75 08 8B=pdb
__sopen_nolock()=8B FF 55 8B EC 51 83 65 FC 00 8D 45 FC 50 FF=pdb
__sopen_s()=8B FF 55 8B EC 6A 01 FF 75 08 FF=pdb
__wsopen_nolock()=8B FF 55 8B EC 83 EC 44 53=pdb
__decomp()=8B FF 55 8B EC DD 45 08 D9=pdb
__set_exp()=8B FF 55 8B EC 51 51 8B 4D=pdb
__sptype()=8B FF 55 8B EC 81 ? ? ? ? ? ? 8B 45=pdb
__clrfp()=8B FF 55 8B EC 51 DD=pdb
__ctrlfp()=8B FF 55 8B EC 51 51 9B=pdb
__set_statfp()=8B FF 55 8B EC 8B 4D 08 83 EC=pdb
__statfp()=8B FF 55 8B EC 51 9B=pdb
__modf_default()=8B FF 55 8B EC 83 EC 10 53 56 57 6A=pdb
get_global_action_nolock()=8B FF 55 8B EC 8B 45 08 48=pdb
siglookup()=8B FF 55 8B EC 6B ? ? ? ? ? ? 8B=pdb
___acrt_get_sigabrt_handler()=8B FF 55 8B EC 51 8D 45 FF=pdb
___acrt_initialize_signal_handlers()=8B FF 55 8B EC FF 75 08 B9 ? ? ? ? E8 ? ? ? ? FF=pdb
___fpecode()=E8 ? ? ? ? 83 C0 08 C3=pdb
_raise()=6A 2C 68 ? ? ? ? E8=pdb
__commit()=8B FF 55 8B EC 51 56 8B 75 08 83 FE FE 75 0D=pdb
___acrt_LCMapStringW()=8B FF 55 8B EC 56 8B 75 14 85 F6 7E=pdb
_wcstombs_l_helper()=8B FF 55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53 8B=pdb
__wcstombs_s_l()=8B FF 55 8B EC 51 56 8B 75 0C 33 C0=pdb
___ascii_strnicmp()=55 8B EC 57 56=pdb
InternalGetLocaleInfoA()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 45=pdb
___acrt_GetLocaleInfoA()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 8B=pdb
___acrt_GetStringTypeA()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 4D=pdb
__copysign()=8B FF 55 8B EC 51 51 D9=pdb
__fpclass()=8B FF 55 8B EC 66 8B=pdb
__CIpow_pentium4()=55 8B EC 83 EC 10 83 E4=pdb
__fFEXP()=C6 ? ? ? ? ? ? 32 ED=pdb
__fFLN()=D9 ED D9 C9 D9 E4=pdb
_rtforexpinf()=0A C9 75 AF=pdb
__ffexpm1()=D9 C0 D9 E1 DB=pdb
_isintTOS()=D9 C0 D9 FC D8 D9 9B=pdb
__startTwoArgErrorHandling()=55 8B EC 83 C4 E0 89 45 E0 8B=pdb
__startOneArgErrorHandling()=55 8B EC 83 C4 E0 89 45 E0 DD=pdb
__twoToTOS()=D9 C0 D9 FC DC=pdb
__load_CW()=8B 54 24 04 81=pdb
__convertTOStoQNaN()=A9 ? ? ? ? 74 06 B8=pdb
__fload_withFB()=8B 42 04 25 ? ? ? ? 3D=pdb
__checkTOS_withFB()=8B 44 24 08 25 ? ? ? ? 3D=pdb
__fast_exit()=66 ? ? ? ? ? 74 03 D9 2C=pdb
__math_exit()=66 8B 04 24 66 3D 7F 02 74 1E=pdb
__check_overflow_exit()=83 EC 08 DD 14 24 8B 44 24 04 83 C4 08 25 ? ? ? ? EB=pdb
__check_range_exit()=83 EC 08 DD 14 24 8B 44 24 04 83 C4 08 25 ? ? ? ? 74=pdb
__d_inttype()=8B FF 55 8B EC 51 51 DD 45 08 51=pdb
__powhlp()=8B FF 55 8B EC DD 45 08 B9=pdb
common_expand_argv_wildcards_char_()=8B FF 55 8B EC 8B 45 0C 83=pdb
copy_and_add_argument_to_buffer_char_()=8B FF 55 8B EC 51 8B 4D 08 8D=pdb
expand_argument_wildcards_char_()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C 53=pdb
_lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c_::operator()=8B FF 56 8B F1 6A=pdb
CPtoLocaleName()=8B FF 55 8B EC 8B 45 08 2D=pdb
getSystemCP()=8B FF 55 8B EC 83 EC 10 8D 4D F0 6A=pdb
setSBCS()=8B FF 55 8B EC 53 8B 5D 08 56=pdb
setSBUpLow()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B 75 08 8D=pdb
setmbcp_internal()=8B FF 55 8B EC 83 EC 0C E8=pdb
___acrt_initialize_multibyte()=80 ? ? ? ? ? ? 75 12 6A=pdb
___acrt_update_thread_multibyte_data()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 F6 89 75 E4 E8=pdb
__setmbcp_nolock()=8B FF 55 8B EC 83 EC 20 A1=pdb
___acrt_initialize_command_line()=FF ? ? ? ? ? A3 ? ? ? ? FF ? ? ? ? ? A3=pdb
find_end_of_double_null_terminated_sequence()=8B FF 55 8B EC 8B 55 08 57=pdb
___dcrt_get_narrow_environment_from_os()=8B FF 55 8B EC 51 53 56 57=pdb
___acrt_initialize_heap()=FF ? ? ? ? ? 85 C0 A3=pdb
___acrt_execute_initializers()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 57=pdb
___acrt_execute_uninitializers()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 0C=pdb
___acrt_has_user_matherr()=A1 ? ? ? ? 8B C8 33 ? ? ? ? ? 83 E1 1F D3=pdb
___acrt_invoke_user_matherr()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B ? ? ? ? ? 8B CE 33 ? ? ? ? ? 83 E1 1F D3=pdb
__isatty()=8B FF 55 8B EC 8B 4D 08 83 F9 FE 75 0D=pdb
__putwch_nolock()=8B FF 55 8B EC 51 A1 ? ? ? ? 83=pdb
___acrt_add_locale_ref()=8B FF 55 8B EC 8B 45 08 F0=pdb
___acrt_free_locale()=8B FF 55 8B EC 51 53 56 8B 75 08 57 8B=pdb
___acrt_locale_add_lc_time_reference()=8B FF 55 8B EC 8B 4D 08 85 C9 74 16 81 ? ? ? ? ? 74 0E 33=pdb
___acrt_locale_free_lc_time_if_unreferenced()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 20=pdb
___acrt_locale_release_lc_time_reference()=8B FF 55 8B EC 8B 4D 08 85 C9 74 16 81 ? ? ? ? ? 74 0E 83=pdb
___acrt_release_locale_ref()=8B FF 55 8B EC 8B 45 08 85 C0 74 73=pdb
___acrt_update_thread_locale_data()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 E8=pdb
__updatetlocinfoEx_nolock()=8B FF 55 8B EC 56 8B 75 0C 57=pdb
___acrt_locale_free_monetary()=8B FF 55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 8B=pdb
___acrt_locale_initialize_monetary()=8B FF 55 8B EC 83 EC 18 53 8B 5D 08 33 C9=pdb
___acrt_locale_free_numeric()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 59=pdb
___acrt_locale_initialize_numeric()=8B FF 55 8B EC 83 EC 18 53 8B 5D 08 33 C0=pdb
free_crt_array_internal()=8B FF 55 8B EC 8B 45 0C 53=pdb
initialize_lc_time()=8B FF 55 8B EC 83 EC 14 8B=pdb
___acrt_locale_free_time()=8B FF 55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 6A=pdb
___acrt_locale_initialize_time()=8B FF 55 8B EC 56 57 8B 7D 08 83=pdb
common_tcsncpy_s_wchar_t_()=8B FF 55 8B EC 51 8B 55 14 8B 4D 08 56 85 D2 75 0D 85 C9 75 0D 39 4D 0C 75 26=pdb
_wcscspn()=8B FF 55 8B EC 51 8B 4D 08 33=pdb
GetLocaleNameFromDefault()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 8D=pdb
GetLocaleNameFromLangCountry()=8B FF 55 8B EC 51 53 56 8B 75 08 33 DB=pdb
GetLocaleNameFromLanguage()=8B FF 55 8B EC 53 56 8B 75 08 33 DB 57 6A=pdb
GetPrimaryLen()=8B FF 55 8B EC 8B 4D 08 33 D2 85=pdb
LangCountryEnumProcEx()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 57 8B 7D 08 E8 ? ? ? ? 8B F0 8D ? ? ? ? ? 6A 40=pdb
LanguageEnumProcEx()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 57 8B 7D 08 E8 ? ? ? ? 8B F0 8D ? ? ? ? ? 6A 78=pdb
TestDefaultCountry()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 56=pdb
TranslateName()=8B FF 55 8B EC 51 56 8B 75 0C 33 D2=pdb
___acrt_get_qualified_locale()=8B FF 55 8B EC 51 51 53 56 57 E8=pdb
GetLcidFromCountry()=8B FF 55 8B EC 56 57 E8 ? ? ? ? 8B D0=pdb
GetLcidFromLangCountry()=8B FF 55 8B EC 53 56 57 E8 ? ? ? ? 8B F0 33 DB 6A 02 5A 8B 4E 50 8D 79 02 66 8B 01 03 CA 66 3B C3 75 F6 2B CF 33 C0 D1 F9 83 F9 03 8B=pdb
GetLcidFromLanguage()=8B FF 55 8B EC 53 56 57 E8 ? ? ? ? 8B F0 33 DB 6A 02 5A 8B 4E 50 8D 79 02 66 8B 01 03 CA 66 3B C3 75 F6 2B CF 33 C0 D1 F9 83 F9 03 0F=pdb
GetPrimaryLen_0()=8B FF 55 8B EC 8B 4D 08 33 D2 0F=pdb
LcidFromHexString()=8B FF 55 8B EC 8B 55 08 56 33=pdb
TestDefaultCountry_0()=8B FF 55 8B EC 8B 4D 08 33 C0 66=pdb
TestDefaultLanguage()=8B FF 55 8B EC 51 56 57 E8 ? ? ? ? 8B 75=pdb
TranslateName_0()=8B FF 55 8B EC 53 56 8B 75 0C 33 DB 57 85=pdb
___acrt_get_qualified_locale_downlevel()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 8B 45=pdb
__87except()=8B FF 53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
__get_abstract_control_sse2()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 67=pdb
__get_abstract_control_x87()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 5D=pdb
__get_machine_control()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 5B=pdb
__get_machine_control_sse2()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 6A=pdb
__getfpcontrolword()=8B FF 55 8B EC 51 51 33 C0 21=pdb
__getfpstatusword()=8B FF 55 8B EC 51 51 33 C0 33=pdb
GetTableIndexFromLocaleName()=8B FF 55 8B EC 83 EC 10 53 56 57 33=pdb
___acrt_DownlevelLCIDToLocaleName()=8B FF 55 8B EC 8B 4D 08 53=pdb
___acrt_DownlevelLocaleNameToLCID()=8B FF 55 8B EC 83 7D 08 00 74 1D=pdb
___acrt_stdio_allocate_buffer_nolock()=8B FF 55 8B EC FF ? ? ? ? ? 53=pdb
___acrt_fp_strflt_to_string()=8B FF 55 8B EC 8B 55 08 56 85 D2 75=pdb
___acrt_fltout()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 18=pdb
__frnd()=8B FF 55 8B EC 51 51 DD 45 08 D9=pdb
InternalCompareStringA()=8B FF 55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53 56=pdb
___acrt_CompareStringA()=8B FF 55 8B EC 83 EC 10 FF 75 08 8D 4D F0 E8 ? ? ? ? FF 75 24=pdb
__setmode_nolock()=8B FF 55 8B EC 51 8B 45 08 53=pdb
__chsize_nolock()=8B FF 55 8B EC 83 EC 10 56 57 8B 7D 08=pdb
__mbsdec_l()=8B FF 55 8B EC 83 EC 10 83 7D 08 00 75 14=pdb
initialize_multibyte()=E8 ? ? ? ? 33 C9 84 C0 0F 94 C1 8B=pdb
_fegetenv()=8B FF 55 8B EC 56 E8 ? ? ? ? 8B 75=pdb
_fesetenv()=8B FF 55 8B EC 51 51 83 65 F8 00 83 65=pdb
_feholdexcept()=8B FF 55 8B EC 51 51 83 65 F8 00 8D=pdb
start_6()=52 9B D9 3C 24 74 4C 8B 44 24 0C 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? A9 ? ? ? ? 74 5E A9 ? ? ? ? 75 41 D9 EC=pdb
__clearfp()=8B FF 55 8B EC 83 EC 0C DD=pdb
CDmxElement::CDmxElement(char const near *)=55 8B EC 56 FF 75 08 8B F1 B9=pdb
void CDmxElement::Resort(void)const=55 8B EC 83 EC 0C 56 8B F1 F6 46 31=pdb
_sscanf_s()=55 8B EC 8D 45 10 50 6A=pdb
CDmxAttribute::CDmxAttribute(char const near *)=55 8B EC 56 FF 75 08 8B F1 8D 45=pdb
void CDmxAttribute::FreeDataMemory(void)=56 8B F1 8B 06 85 C0 0F=pdb
__FindPESection()=55 8B EC 8B 45 08 33 D2 53=pdb
__ValidateImageBase()=55 8B EC 8B 45 08 B9 ? ? ? ? 66=pdb
__aulldvrm()=56 8B 44 24 14 0B=pdb
__allrem()=53 57 33 FF 8B 44=pdb
__alldvrm()=57 56 55=pdb
__SEH_prolog4_GS()=68 ? ? ? ? 64 ? ? ? ? ? ? 8B 44 24 10 89 6C 24 10 8D 6C 24 10 2B E0 53 56 57 A1 ? ? ? ? 31 45 FC 33 C5 89=pdb
__SEH_epilog4_GS()=8B 4D E4 33 CD=pdb
_dynamic_atexit_destructor_for__g_EntityLists__()=56 57 BF ? ? ? ? BE ? ? ? ? 0F 1F 40 00 83=pdb
_dynamic_atexit_destructor_for__g_ExitStopper__()=80 ? ? ? ? ? ? 74 13 68=pdb
_dynamic_atexit_destructor_for__s_HLTVCamera__()=80 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 74=pdb
_dynamic_atexit_destructor_for__s_MoveHelperClient__()=B9 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? C7=pdb
_dynamic_atexit_destructor_for__s_ParticleSystemQuery__()=B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 85 D2=pdb
_dynamic_atexit_destructor_for__g_WeaponDatabase__()=B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 80=pdb
_dynamic_atexit_destructor_for__g_CSGOWorkshopMaps__()=B9 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 8B C1=pdb
_dynamic_atexit_destructor_for__g_VModuleLoader__()=B9 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C3=pdb
InitFunc_388()=55 8B EC 51 C7 ? ? ? ? ? ? FF 75=lumina
CryptoPP::_dynamic_initializer_for__AAD_CHANNEL___2()=B9 ? ? ? ? E8 ? ? ? ? 6A 03=lumina
Poco::URIRedirection::~URIRedirection()=56 8B F1 8B 46 14 83 F8 10 72 0E 6A 01 40 50 FF 36 E8 ? ? ? ? 83 C4 0C C7 ? ? ? ? ? ? 83 7E 14 10 C7 ? ? ? ? ? ? 72 07=lumina
string_operation()=55 8B EC 53 8B 5D 08 56 8B F1 8B 4D 0C 57 8B 43 10 3B C1 0F ? ? ? ? ? 8B 7D 10 2B C1 3B F8 0F 47 F8 3B F3 75 47=lumina
CMsgSteamDatagramLinkInstantaneousStats::Clear()=80 79 2C 00 74 38=lumina
CMsgGCCStrike15_v2_MatchmakingGC2ClientReserve::Clear()=56 8B F1 8B 46 30 84=lumina
CAchievementMgr::OnEvent()=55 8B EC 53 56 57 8B 7D 08 8B D9 85 FF 74=lumina=IMatchEventsSink=2
GetSequenceName()=85 C9 74 61 85 D2 78 22 8B 41 04 85 C0 75 0A 8B 01 8B ? ? ? ? ? EB 03 8B 40 14 3B D0 7D 0A 52 E8 ? ? ? ? 03 40 04=lumina
GetSequenceActivityName()=85 C9 74 61 85 D2 78 22 8B 41 04 85 C0 75 0A 8B 01 8B ? ? ? ? ? EB 03 8B 40 14 3B D0 7D 0A 52 E8 ? ? ? ? 03 40 08=lumina
CBaseAchievement::IncrementCount()=56 8B F1 57 8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 0F ? ? ? ? ? 8B 06=lumina
UTIL_TraceLine()=55 8B EC 83 E4 F0 83 EC 7C 56 52=lumina
UsingStandardWeaponsInVehicle()=56 57 8B F9 8B ? ? ? ? ? 83 FA FF 74 43=lumina
UpdateCollisionBounds()=56 57 8B F9 8B ? ? ? ? ? F6 ? ? ? ? ? ? 8B=lumina
SimulatePlayerSimulatedEntities()=56 8B F1 57 8B ? ? ? ? ? 83 EF 01 78 74=lumina
SelectItem()=55 8B EC 53 8B 5D 08 57 8B F9 85 DB 74 7B=lumina
CBasePlayer::CalcViewBob()=55 8B EC A1 ? ? ? ? 83 EC 10 56 8B F1 B9=lumina
PostThinkVPhysics()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 83 ? ? ? ? ? ? 0F=lumina
UpdateVPhysicsPosition()=55 8B EC 83 EC 10 57 8B F9 F3=lumina
__vfscanf_l()=55 8B EC 83 E4 F8 FF 75 0C 6A 00 52 51=lumina
OpenBSPFile()=55 8B EC 51 56 68 ? ? ? ? 6A=lumina
C_BaseAnimatingGameSystem::LevelShutdownPostEntity()=A1 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 85 C0 74 19 50=lumina=C_BaseAnimatingGameSystem=7
C_BaseAnimating::OnNewModel()=55 8B EC 83 EC 0C 53 57 8B F9 89 7D F4=lumina
LookupBone()=55 8B EC 53 56 8B F1 57 83 ? ? ? ? ? ? 75=lumina
GetBonePosition()=55 8B EC 83 E4 F8 56 8B F1 57 83=lumina
C_BaseAnimating::BuildTransformations()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 28=lumina
C_BaseAnimating::MaintainSequenceTransitions()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 F3=lumina
C_BaseAnimating::StandardBlendingRules()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 57 8B F9 85=lumina
C_BaseAnimating::SetupBones_AttachmentHelper()=55 8B EC 83 EC 48 53 8B 5D=lumina
C_BaseAnimating::ThreadedBoneSetup()=55 8B EC 8B ? ? ? ? ? 83 EC 24=lumina
C_BaseAnimating::ShouldSkipAnimationFrame()=57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 75 02=lumina
C_BaseAnimating::SetupBones()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 8B=lumina
C_BaseAnimating::FindFollowedEntity()=55 8B EC 83 EC 0C 53 8B D9 57 89=lumina
C_BaseAnimating::DrawModel()=55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 89=lumina
C_BaseAnimating::StudioFrameAdvance()=55 8B EC 83 E4 F8 83 EC 08 56 8B F1 57 80=lumina
FrameAdvance()=55 8B EC 83 E4 C0 83 EC 38 56 8B=lumina
DevMsgRT()=55 8B EC 8B ? ? ? ? ? 8B 01 8B 40 2C=lumina
C_BaseEntity::DrawBrushModel()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B=lumina
C_CSPlayer::ShouldInterpolate()=A1 ? ? ? ? 56 57 8B F9 8B 30 8D 4F 08=lumina
SetupMovement()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3=lumina
RestoreData()=55 8B EC 83 E4 F8 83 EC 44 53 56 8B 75 0C=lumina
OnPostRestoreData()=55 8B EC 51 53 56 6A=lumina
C_BaseEntity::GetToolRecordingState()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 8B 01 8B=lumina
CCSPlayer::PreThink()=55 8B EC 83 E4 F8 51 56 8B F1 8B 06=lumina
CBasePlayer::PostThink()=56 8B ? ? ? ? ? 57 8B F9 8B CE 8B 06 FF ? ? ? ? ? 8B 07=lumina
C_BasePlayer::GetToolRecordingState()=55 8B EC 83 EC 50 57 8B F9 8B=lumina
GetViewModel()=55 8B EC 8B 45 08 53 8B D9 56 8B=lumina
C_BasePlayer::PhysicsSimulate()=56 8B F1 8B ? ? ? ? ? 83 F9 FF 74 23=lumina
BeginViewModelRendering()=A1 ? ? ? ? 85 C0 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 0F=lumina
EndViewModelRendering()=55 8B EC 51 A1 ? ? ? ? 85 C0 0F=lumina
C_ParticlePerformanceMonitor::~C_ParticlePerformanceMonitor()=A1 ? ? ? ? 56 8B F1 FF ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=lumina
C_GameInstructor::DefineLesson()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 81=lumina
ChatPrintf()=55 8B EC 8B 4D 08 8D 55=lumina
C_RopeKeyframe::CreateFromKeyValues()=55 8B EC 83 EC 0C 53 56 57 8B C1=lumina
C_SceneEntity::LoadSceneFromFile()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 56 8B F1 B9=lumina
C_SoundscapeSystem::UpdateAudioParams()=55 8B EC 56 57 8B 7D 08 8B F1 8B ? ? ? ? ? 3B 47=lumina
C_BaseTeamObjectiveResource::OnDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8A ? ? ? ? ? 3A=lumina=C_Team=577
RecvProxy_Owner()=55 8B EC 8B 45 0C 56 8B 75 08 57=lumina
CVGuiScreenPanel::Init()=55 8B EC 51 53 56 8B 75 08 8B D9 57 68 ? ? ? ? 68=lumina
CBoundedCvar_Predict::GetFloat()=55 8B EC 51 80 ? ? ? ? ? ? 56 8B F1 75=lumina=CBoundedCvar_Predict=12
CHLClient::OnDemoPlaybackStart()=FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 5A=lumina=CHLClient=55
ScreenWidth()=55 8B EC 83 EC 08 8B ? ? ? ? ? 8D 55 F8 52 8D 55 FC 52 8B 01 FF ? ? ? ? ? 8B 45=lumina
_printf()=55 8B EC 51 8D 45 0C=lumina
CClientLeafSystem::AddShadowToRenderable()=55 8B EC 8B 45 0C 53 56 8B F1=lumina
ClientModeShared::FireGameEvent()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B ? ? ? ? ? 8B=lumina
CClientShadowMgr::CalculateRenderTargetsAndSizes()=55 8B EC 83 EC 08 53 56 8B F1 FF=lumina
CEffectsList::AddEffect()=55 8B EC 8B 55 08 85 D2 74 2D=lumina=CEffectsList=1
LoadFile()=55 8B EC 51 56 57 8B FA E8=lumina
SetCollisionBounds()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B 7B=lumina
CCollisionProperty::ComputeSurroundingBox()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 57 8B F9 8B 07=lumina
CCollisionProperty::MarkSurroundingBoundsDirty()=56 8B F1 8B 4E 04 83=lumina
CColorCorrectionMgr::SetColorCorrectionWeight()=55 8B EC 83 EC 10 8B 45 08 0F=lumina
CommentaryShowModelViewer()=55 8B EC 8B 45 08 83 38 02 7D=lumina
std::exception::exception()=55 8B EC 83 EC 08 8B 45 08 0F 57 C0 56 8B F1 89 45 F8 8D 56 04 C6 45 FC 01 52 8D 45 F8 C7 ? ? ? ? ? 50 66 0F D6 02 E8 ? ? ? ? 83 C4 08 8B=lumina
std::runtime_error::runtime_error()=55 8B EC 83 EC 08 8B 45 08 0F 57 C0 56 8B F1 89 45 F8 8D 56 04 C6 45 FC 01 52 8D 45 F8 C7 ? ? ? ? ? 50 66 0F D6 02 E8 ? ? ? ? 83 C4 08 C7=lumina
virtual bool std::error_category::equivalent()=55 8B EC 8B 01 8D 55 F8 83 EC 08 56=lumina
CDummyMaterialProxy::Init()=55 8B EC 8B 4D 08 8B 01 FF 10=lumina=CDummyMaterialProxy=0
CBaseEntityList::AddNonNetworkableEntity()=55 8B EC 51 53 8B ? ? ? ? ? 89 4D FC 56=lumina
C_WaterExplosionEffect::PlaySound()=55 8B EC 83 E4 F8 83 EC 24 56 8B F1 F6 46 24 04 75 6D=lumina=C_WaterExplosionEffect=1
CGamestatsData::AllocData()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B 3E=lumina
CBaseGameStats::Event_SaveGame()=83 ? ? ? ? ? ? B8 ? ? ? ? 0F ? ? ? ? ? ? 50 68 ? ? ? ? 51=lumina=CBaseGameStats=9
CGlowObjectManager::RenderGlowBoxes()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 60 56 57 8B F9 89=lumina
SetLastCmd()=55 8B EC 8B 55 08 3B CA=lumina
FindHudElement()=55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39=lumina
CHudChatFilterPanel::ApplySchemeSettings()=55 8B EC 83 EC 0C 53 56 57 8B F9 6A 00 6A=lumina=CHudChatFilterPanel=88
CPostCommentaryDialog::OnFinishedClose()=56 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 74 15=lumina=CHudChatHistory=128
CAsyncCaptionResourceManager::Init()=55 8B EC 83 EC 10 83 79=lumina=CAsyncCaptionResourceManager=1
cc_emit()=55 8B EC 56 8B 75 08 83 3E 02 74 0F 5E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 26=lumina
cc_findsound()=55 8B EC 56 8B 75 08 83 3E 02 74 0F 5E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 18=lumina
g15_reload()=FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 75 0F 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 C3 E8=lumina
CDescribeData::DescribeFields()=55 8B EC 53 56 57 8B 7D 14 33 F6 8B D9 85 FF 7E 41=lumina
CLocatorPanel::PerformLayout()=55 8B EC 83 EC 2C 53 8B D9 E8=lumina=CLocatorPanel=132
CAM_ToggleSnapto()=55 8B EC 8B 45 08 BA ? ? ? ? 85 C0 0F=lumina
CLessOrEqualProxy::Init()=55 8B EC 83 E4 F8 51 53 8B 5D 0C 56 57 68 ? ? ? ? 8B F1=lumina=CLessOrEqualProxy=0
CTextureTransformProxy::Init()=55 8B EC 83 E4 F8 51 53 8B 5D 0C 56 8B F1=lumina=CTextureTransformProxy=0
CMumbleSystem::Init()=C6 41 34 00 8D=lumina=CMumbleSystem=1
UpdateScreenEffectTexture()=55 8B EC 83 E4 F0 83 EC 48 8B 45 08 56 89=lumina
CNewParticleEffect::SetControlPoint()=55 8B EC 53 8B 5D 0C 56 8B F1 F6=lumina
CSimpleEmitter_Factory()=55 8B EC 51 BA=lumina
usrCmd_Start()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 8B ? ? ? ? ? 85 C0 6A 00 0F ? ? ? ? ? ? 8B=lumina
CBaseEntity::PhysicsSimulate()=55 8B EC 83 E4 F8 83 EC 0C 56 8B F1 8B ? ? ? ? ? 80=lumina
physics_run_think()=55 8B EC 83 EC 10 53 56 57 8B F9 8B ? ? ? ? ? C1=lumina
AddSurfacepropFile()=55 8B EC 83 EC 0C 53 8B 5D 08 56 57 68 ? ? ? ? 8B=lumina
C_PhysPropClientside::ParseAllEntities()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 57 8D ? ? ? ? ? E8=lumina
CPrecacheRegister::LevelInitPreEntity()=56 8B ? ? ? ? ? 68 ? ? ? ? FF D6 8B=lumina=CPrecacheRegister=4
CPredictedViewModel::AddViewModelBob()=55 8B EC A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 74 35=lumina
CValueChangeTracker::SetupTracking()=55 8B EC 80 ? ? ? ? ? ? B9 ? ? ? ? 56 57=lumina
CryptoPP::Algorithm::AlgorithmName()=55 8B EC 56 8B 75 08 8B CE 6A 07=lumina
CStickerSelectionProxy::Init()=55 8B EC 83 EC 0C 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 84 C0 75 09=lumina
CPupilProxy::Init()=55 8B EC 83 E4 F8 51 53 8B 5D 0C 56 57 68 ? ? ? ? 8B F9=lumina=CPupilProxy=0
CreateRagdoll()=55 8B EC 51 A1 ? ? ? ? 53 8B D9 56 8B 08 57 68 ? ? ? ? 8B=lumina
CRagdollLowViolenceManager::SetLowViolence()=55 8B EC 56 E8 ? ? ? ? A2=lumina
GetFullFrameFrameBufferTexture()=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 ? ? ? ? ? ? ? 0F=lumina
CPlayerInventory::CItemContainers::Add()=55 8B EC 56 8B F1 F6 46 15=lumina
CSoundEmitterSystem::StopSound()=55 8B EC 57 8B 7D 10=lumina
C_BaseEntity::GetSoundDuration()=56 8B F1 68 ? ? ? ? 56=lumina
CHltvReplaySystem::StopHltvReplay()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 25=lumina=CSoundControllerImp=5
CSoundControllerImp::SoundPlayEnvelope()=55 8B EC 83 EC 10 8B 01 0F=lumina=CSoundControllerImp=21
TextToSoundLevel()=57 8B F9 85 FF 75 05=lumina
CSteamWorksGameStatsUploader::WriteSessionRow()=55 8B EC 83 E4 F8 51 56 8B F1 E8 ? ? ? ? 89 46 78 85 C0 74=lumina
CWorkshopFileInfoManager::~CWorkshopFileInfoManager()=56 8B F1 57 8D ? ? ? ? ? E8 ? ? ? ? 8D 4E=lumina
UGCUtil_Init()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 75=lumina
WriteUserCmd()=55 8B EC 83 E4 F8 51 53 56 8B D9=lumina
CDebugOverlay::CDebugOverlay()=55 8B EC 83 EC 08 53 56 57 68 ? ? ? ? 6A 00 8B D9 E8 ? ? ? ? C7 ? ? ? ? ? 8D 55 FC 8B=lumina
CSplitScreenLetterBox::GetSettings()=55 8B EC 80 ? ? ? ? ? ? 0F ? ? ? ? ? 83=lumina
CLoadingDiscPanel::CLoadingDiscPanel()=55 8B EC 83 EC 18 53 56 57 68=lumina
CLoadingDisc::SetPausedVisible()=55 8B EC 51 8B 55 08 53 8B D9 84 D2 74 69=lumina=CLoadingDisc=3
CLoadingDisc::SetFastForwardVisible()=55 8B EC 51 8B 55 08 53 8B D9 84 D2 74 7B=lumina=CLoadingDisc=6
CMessageCharsPanel::CMessageCharsPanel()=55 8B EC 83 EC 10 53 56 57 68 ? ? ? ? 8B F1=lumina
CMessageCharsPanel::GetTextExtents()=55 8B EC 56 8B 75 08 85 F6 75 25=lumina=CMessageCharsPanel=212
drawtextfields()=55 8B EC 83 E4 F0 81 ? ? ? ? ? A1 ? ? ? ? 56 57 8B F9 B9 ? ? ? ? 8B 40 34 89 7C=lumina
CSlideshowDisplayScreen::ApplySchemeSettings()=55 8B EC 51 53 8B D9 8D 4D 08 56 8B=lumina=CSlideshowDisplayScreen=88
VideoPanel::ApplySchemeSettings()=55 8B EC 53 56 57 FF 75 08 8B D9 E8 ? ? ? ? 8B 03 8B CB 6A 00 6A 00 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B CB=lumina=VideoPanel=88
ConVar_Unregister()=55 8B EC 83 EC 18 53 8B D9 8B ? ? ? ? ? 89=lumina=VideoPanel=131
CViewRender::Shutdown()=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 08=lumina
spec_pos()=55 8B EC 83 E4 C0 83 EC 40=lumina
getpos()=55 8B EC 83 E4 C0 83 EC 34 8D=lumina
CViewRenderBeams::InitBeams()=53 56 57 8B D9 FF ? ? ? ? ? 6A FF=lumina=CViewRenderBeams=0
CViewAngleAnimation::SaveAsAnimFile()=55 8B EC 83 E4 C0 83 EC 74 53 56 57 8B ? ? ? ? ? FF=lumina
TestViewAnim()=55 8B EC 51 8B ? ? ? ? ? 83 ? ? ? ? ? ? 75=lumina
CBloomAddMaterialProxy::Init()=55 8B EC 51 56 8B F1 C6=lumina=CBloomAddMaterialProxy=0
CEnginePostMaterialProxy::Init()=55 8B EC 51 56 8B 75 08 57 8B F9 C6 45 FF 00 6A 00 8B 06 8D 4D FF 51 68 ? ? ? ? 8B CE FF 50 2C 6A=lumina=CEnginePostMaterialProxy=0
DumpTGAofRenderTarget()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B DA 6A=lumina
CMotionBlurMaterialProxy::Init()=55 8B EC 51 56 8B 75 08 57 8B F9 C6 45 FF 00 6A 00 8B 06 8D 4D FF 51 68 ? ? ? ? 8B CE FF 50 2C 80=lumina
CMotionBlurMaterialProxy::OnBind()=56 8B F1 8B 4E 04 85 C9 74 0C 8B 01 6A=lumina
DoDepthOfField()=55 8B EC 83 EC 24 53 56 8B F1 57 89 75 E0=lumina
toggleThreadedBuildRWList()=A1 ? ? ? ? B9 ? ? ? ? 53 FF 50 34 8B ? ? ? ? ? 85 C0 0F 94=lumina
ShouldDrawViewModel()=55 8B EC 80 7D 08 00 56 8B F1 75=lumina
UpdateRefractIfNeededByList()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 33=lumina
DrawRenderablesInList()=55 8B EC 83 EC 08 8B 45 08 53 56 8B D9=lumina
CViewRender::DrawViewModels()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 FF=lumina
PerformScreenOverlay()=55 8B EC 51 A1 ? ? ? ? 53 56 8B D9=lumina
DrawUnderwaterOverlay()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 56 57=lumina
CViewRender::RenderView()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 57 8B F9 89 7C=lumina
CConcurrentViewBuilder::QueueBuildWorldListJob()=55 8B EC 83 ? ? ? ? ? ? 75 12 68=lumina=CHLClient=92
SafeRelease()=56 57 8B F9 8B 37 85 F6 74 2B=lumina
__MsgFunc_RequestState()=51 56 8B ? ? ? ? ? 85 F6 74 3B=lumina
DoIncludeScript()=55 8B EC 8B 55 0C 81 ? ? ? ? ? 56 8B 75=lumina
VScriptRunScript()=83 ? ? ? ? ? ? 56 57 8B FA 8B F1 0F=lumina
script_execute_client()=55 8B EC 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 7C=lumina
inflate_blocks()=55 8B EC 83 EC 10 53 56 8B 75 10=lumina
inflate_trees_dynamic()=55 8B EC 83 EC 10 53 56 8B 75 20=lumina
FormatZipMessageU()=83 F9 01 56=lumina
send_bits()=55 8B EC 51 53 8B 5D 08 57 89 55=lumina
copy_block()=55 8B EC 51 53 56 57 89 55 FC 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 8D=lumina
lm_init()=55 8B EC 56 57 8B FA=lumina
CUserCmd::GetChecksum()=55 8B EC 51 56 8B 75 08 8D 45 FF=lumina
CCSBaseAchievement::ApplySettings()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 8B 4D 08 6A=lumina
CBaseCSGrenadeProjectile::CreateGrenadeTrail()=55 8B EC 83 E4 F8 83 EC 68 56 8B F1 8B 4D=lumina
CGlowObjectManager::AddGlowBox()=55 8B EC 53 56 8D=lumina
C_CSRagdoll::ApplyRandomTaserForce()=55 8B EC 83 E4 F8 83 EC 58 56 8B F1 57 8B=lumina
C_CSPlayer::DoExtraBoneProcessing()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 57 89 74 24 1C=lumina
C_CSPlayer::HasC4()=56 8B F1 85 F6 74 31=lumina
Helper_GetMouseEnableBindingName()=F7 ? ? ? ? ? ? ? ? ? 56 74=lumina
ClientModeCSNormal::DoPostScreenSpaceEffects()=55 8B EC 8B 49 18 56 8B=lumina
__MsgFunc_MatchEndConditions()=55 8B EC 51 8B 45 08 53 56 57 8B 48=lumina
__snprintf()=55 8B EC 83 E4 F8 8D 45 14 50 6A 00 FF 75 10 FF 75 0C FF 75 08 E8 ? ? ? ? 8B=lumina
C_CSGameRules::HasHalfTime()=8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 01 75 12=lumina
C_CSGameRules::IsPlayingGunGameProgressive()=8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 01 75 13 8B ? ? ? ? ? 8B 01 FF 50 24 83 F8 02=lumina
EconWear_ToIntCategory()=A1 ? ? ? ? 85 C0 75 49=lumina
CUiComponent_Inventory::UiComponentFunction_SetCraftTarget()=55 8B EC 83 EC 0C 56 FF 75 14=lumina
ShowGlobalServerStats()=55 8B EC 51 56 8B ? ? ? ? ? 57 68=lumina
CQueueMatchServerListListener::ShouldPingStartMatchmaking()=55 8B EC 51 56 8B ? ? ? ? ? 83 7E=lumina
C_CSPlayer::WeaponShootPosition()=55 8B EC 56 8B 75 08 57 8B F9 56 8B 07 FF ? ? ? ? ? 80=lumina
ClampBonesInBBox()=55 8B EC 83 E4 F8 83 EC 70 56 57 8B F9 89 7C 24 38=lumina
CSGOWorkshopMaps::UnsubscribeFromMap()=55 8B EC 8B ? ? ? ? ? 56 57 85 C9=lumina
CCommunityMapRequest::OnLoaded()=55 8B EC 83 E4 F8 51 56 8B 75 08 8B C1=lumina=CCommunityMapRequest=1
CCommunityMapRequest::OnError()=55 8B EC 83 E4 F8 83 EC 08 83 7D=lumina=CCommunityMapRequest=0
CCSGOPlayerAnimState::Update()=55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3=lumina
CCSGOPlayerAnimState::ModifyEyePosition()=55 8B EC 83 E4 F8 83 EC 70 56 57 8B F9 89 7C 24 14=lumina
CCSGOPlayerAnimState::DoProceduralFootPlant()=55 8B EC 83 E4 F0 83 EC 78 56 8B F1 57 8B=lumina
CCSGOPlayerAnimState::SetUpLean()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3=lumina
CCSGOPlayerAnimState::SetUpWholeBodyAction()=55 8B EC 83 EC 08 56 57 8B F9 8B 77=lumina
CCSGOPlayerAnimState::SetUpWeaponAction()=55 8B EC 51 53 56 57 8B F9 8B 77 60=lumina
CCSGOPlayerAnimState::SetUpMovement()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B ? ? ? ? ? 8B F1=lumina
CCSGOPlayerAnimState::SetUpAimMatrix()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 8B D9 8B=lumina
CCSGOPlayerAnimState::SetUpVelocity()=55 8B EC 83 E4 F8 83 EC 30 56 57 8B ? ? ? ? ? 8B=lumina
CCSGOPlayerAnimState::CacheSequences()=55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 57 8B=lumina
GameTypes::GetMap_Internal()=55 8B EC 83 EC 40 57 8B F9 83=lumina
GameTypes::SetCustomBotDifficulty()=55 8B EC 56 8B 75 08 85 F6 78 2A=lumina=GameTypes=53
GameTypes::GetGameModeAndTypeFromStrings()=55 8B EC 51 8B 45 10 53 8B 5D 14 56=lumina
CSteamWorksGameStatsClient::FireGameEvent()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 0F ? ? ? ? ? 8B 06 8B CE 53 FF 50 04 8B D8 B9 ? ? ? ? 8B D3 E8 ? ? ? ? 85 C0 75 10=lumina=CModelCombiner=464
CSteamWorksGameStatsClient::WriteSessionRow()=55 8B EC 83 E4 F8 51 56 8B F1 E8 ? ? ? ? 89 46 78 85 C0 0F=lumina=CSteamWorksGameStatsClient=18
VGUI_CreateClientDLLRootPanel()=A1 ? ? ? ? 56 57 68 ? ? ? ? 8B 08 8B 01 FF 50 04 8B F0=lumina
CBaseSaveGameDialog::OnPanelSelected()=56 8B F1 6A 01 68 ? ? ? ? 8B=lumina
CCreateMultiplayerGameServerPage::LoadMapList()=51 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? E8=lumina
CCreateMultiplayerGameServerPage::OnCheckButtonChecked()=56 57 8B F9 8B ? ? ? ? ? 8B 37 8B=lumina=CCreateMultiplayerGameServerPage=241
CGameUI::SendConnectedToGameMessage()=56 57 8B F9 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 10 68 ? ? ? ? 8B C8 E8 ? ? ? ? 8B F0 EB 02 33 F6 53 8B 5F 0C=lumina
CLoadingScreenScaleform::DisplayLoggedInElsewhereError()=55 8B EC 83 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 74=lumina=CGameUI=24
CGameUI::SetProgressLevelName()=55 8B EC 83 ? ? ? ? ? ? 74 5F=lumina=CGameUI=16
CInfoDescription::WriteScriptHeader()=55 8B EC 83 EC 68 66 ? ? ? ? ? 66 89 45 FC A0 ? ? ? ? 88 45 FE 8D 45 D8 56 50 8B=lumina=CInfoDescription=0
CInfoDescription::WriteFileHeader()=55 8B EC 83 EC 68 66 ? ? ? ? ? 66 89 45 FC A0 ? ? ? ? 88 45 FE 8D 45 D8 56 50 FF=lumina=CInfoDescription=1
COptionsSubAudio::OnCommand()=55 8B EC 53 8B 5D 08 BA ? ? ? ? 56 8B=lumina=COptionsSubAudio=96
COptionsSubKeyboard::OnKeyCodeTyped()=55 8B EC 8B 45 08 83 F8 40 75 10=lumina=COptionsSubKeyboard=122
COptionsSubKeyboard::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? A1=lumina=COptionsSubKeyboard=96
AdvancedCrosshairImagePanel::AdvancedCrosshairImagePanel()=55 8B EC 51 56 68 ? ? ? ? FF=lumina
COptionsSubMultiplayer::OnCommand()=55 8B EC 53 56 8B 75 08 8B D9 BA ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B ? ? ? ? ? 83=lumina=COptionsSubMultiplayer=96
COptionsSubMultiplayer::ConvertTGAToVTF()=55 8B EC 83 E4 F8 83 EC 54 53 56 57 68=lumina
COptionsSubVoice::OnThink()=55 8B EC 83 EC 10 53 8B D9 E8=lumina=COptionsSubVoice=101
CPlayerListDialog::OnItemSelected()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 E8 ? ? ? ? 8B=lumina=CPlayerListDialog=279
CRunGameEngine::AddTextCommand()=55 8B EC 56 8B 75 08 85 F6 74 1F BA=lumina=CRunGameEngine=2
IntersectRayWithRay()=55 8B EC 83 EC 1C 8B 55 08=lumina
VControlsListPanel::VControlsListPanel()=55 8B EC 56 57 68 ? ? ? ? FF 75 08 8B F1=lumina
VControlsListPanel::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8B CB 8B=lumina=VControlsListPanel=88
CVGuiSystemModuleLoader::GetModuleLabel()=55 8B EC 8B 45 08 68 ? ? ? ? 68=lumina=CVGuiSystemModuleLoader=2
CBenchmarkResultsDialog::Activate()=55 8B EC 83 E4 C0 83 EC 38 56 57 8B F9=lumina=CBenchmarkResultsDialog=238
CBonusMapsDialog::CreateBonusMapsList()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 0F 68=lumina
CChangeGameDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B 75 08 57 8B F9 8B CE E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B ? ? ? ? ? 8B=lumina=CChangeGameDialog=96
CCSGOMapPublishDialog::SetFile()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B 7D 08 57 8B 06 8B ? ? ? ? ? FF D0 8B=lumina
CCSGOStickerPublishDialog::SetImageFile()=55 8B EC 53 8B D9 8B 4D 08 56 85=lumina
CLoadCommentaryDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B F1 8B 4D 08 E8=lumina=CLoadCommentaryDialog=96
CLoadGameDialogXbox::UpdateFooterOptions()=56 57 8B F9 8B ? ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 83 ? ? ? ? ? ? 74 58=lumina=CLoadGameDialogXbox=286
CLoadGameDialogXbox::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 75 71=lumina=CLoadGameDialogXbox=96
AccumulateWeaponPreviewSettingsFloatValue()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 57 6A=lumina
GetWorkshopWorkbenchKeyValuesFromFile()=53 8B ? ? ? ? ? 56 57 8B F9 FF D3 6A 24 8B C8 8B 10 FF 52 04 85 C0 74=lumina
CFilePublishDialog::DownloadPreviewImage()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 80 ? ? ? ? ? ? 75=lumina
ExplainErrorNum()=83 C1 F7=lumina
CFilePublishDialog::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 3B=lumina
CFilePublishDialog::FileExists()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 85 F6 74 59=lumina
DisplayZipError()=56 8B ? ? ? ? ? 57 8B F9 8B C7=lumina
CPublishedFileBrowserDialog::OnRadioButtonChecked()=56 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 6A=lumina=CPublishedFileBrowserDialog=282
CSaveGameDialogXbox::UpdateFooterOptions()=56 57 8B F9 8B ? ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 83 ? ? ? ? ? ? 74 2F=lumina=CSaveGameDialogXbox=286
CGameMenu::ApplySchemeSettings()=55 8B EC 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06 8B CE 8B 3B 68 ? ? ? ? FF 50 04=lumina=CGameMenu=88
CBaseModPanel::CreateGameMenu()=55 8B EC 83 EC 0C 53 56 8B F1 57 89 75 F8 FF=lumina
CSaveBeforeQuitQueryDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B 75 08 57 8B F9 8B CE E8 ? ? ? ? 85 C0 74=lumina=CSaveBeforeQuitQueryDialog=96
CBaseModPanel::InTeamLobby()=8B ? ? ? ? ? 85 C9 74 35 8B 01 FF 50 34=lumina
CBaseModPanel::OnMakeGamePublic()=8B ? ? ? ? ? 56 57 8B 01 FF 50 34=lumina
CBaseModPanel::LoadVersionNumbers()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85=lumina
CBaseModPanel::LoadVersionNumber()=55 8B EC 8B ? ? ? ? ? 83 EC 08 83=lumina
CMessageDialogHandler::CreateMessageDialog()=55 8B EC 83 EC 08 8B 45 08 53 56 57 8B F9=lumina
CMainMenuGameLogo::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 56 8B 01 FF 50 14 6A=lumina=CMainMenuGameLogo=89
CHudScope::Init()=56 8B F1 8B ? ? ? ? ? 6A 00 8B=lumina
void ceng::ui::CWindowWidget::OnDragBy()=55 8B EC F3 ? ? ? ? 83 EC 08 F3 ? ? ? ? ? F3=lumina=CCSGO_MapOverview=19
headshot_skull_get()=55 8B EC 8B 4D 0C 83 F9=lumina
team_color()=55 8B EC 83 EC 10 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 83=lumina
default_hex()=53 8B D9 85 DB 79=lumina
CUiComponent_FriendsList::GetFriendStatusBucket()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B 75 08 57 8B F9 89=lumina
Helper_TagFromString()=55 8B EC 51 53 8B 5D 08 56 33 F6 89=lumina
GetStatForRound()=55 8B EC 51 56 57 8B FA C7=lumina
CHltvReplaySystem::SetDemoPlaybackFadeBrackets()=55 8B EC 83 EC 08 56 8B 75 08 8B CE 6A 00 FF 75 0C 8B 06 8B 40 14 FF D0 DD 5D F8 F2 ? ? ? ? 85=lumina
CUiComponent_News::UiComponentFunction_IsNewClientAvailable()=55 8B EC 51 8B ? ? ? ? ? 56 8B 01 FF 50=lumina
Helper_ComputeProPlayerMatchFantasyScore()=55 8B EC 81 ? ? ? ? ? 56 57 FF=lumina
CMsgSOMultipleObjects::Clear()=55 8B EC 51 8B 55 08 8B C1 89=lumina
GetGlyphOutlineA()=55 8B EC 6A 00 FF 75 20=lumina
int AfxOleRegisterServerClass()=55 8B EC 6A 00 FF 75 28=lumina
CC4Panel::ApplySchemeSettings()=55 8B EC 51 53 8B D9 8D 4D 08 56 57=lumina=CC4Panel=88
CViewC4Panel::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 89 4D FC 85 DB 74=lumina=CViewC4Panel=88
CalcViewModelBobHelper()=55 8B EC 83 E4 F8 83 EC 30 A1 ? ? ? ? 56=lumina
AddViewModelBobHelper()=55 8B EC A1 ? ? ? ? 83 EC 18 53 57 8B F9 8B DA=lumina
CIronSightController::PrepareScopeEffect()=55 8B EC 83 EC 38 53 56 57 E8=lumina
CIronSightController::RenderScopeEffect()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 E8=lumina
CCSEconUI::ApplySchemeSettings()=55 8B EC 53 56 57 FF 75 08 8B F1=lumina=CCSEconUI=88
CCSEconUI::ApplySettings()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 57=lumina=CCSEconUI=89
CCSEconUI::OnSelectionReturned()=55 8B EC 83 E4 F8 51 53 8B 5D 08 56 57 8B F9 85=lumina=CCSEconUI=284
DllMain()=55 8B EC 8B 45 0C 83 EC 24 83=lumina
CCSItemSelectionPanel::ApplySchemeSettings()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 8B 07=lumina=CCSItemSelectionPanel=88
CCSItemSelectionPanel::ApplySettings()=55 8B EC 53 8B 5D 08 56 57 53 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 53=lumina=CCSItemSelectionPanel=89
CEconTool_WrappedGift::GetUseCommandLocalizationToken()=55 8B EC 8B 4D 08 E8 ? ? ? ? 84=lumina=CEconTool_WrappedGift=7
cc_dump_particlemanifest()=56 57 8B ? ? ? ? ? 68 ? ? ? ? FF D7 8B=lumina
GetCustomParticleEffectId()=55 8B EC 83 EC 08 53 8B 5D 08 56 33=lumina
CEconItemDescription::Generate_QualityDesc()=55 8B EC 56 8B F1 8B 4D 0C 8B=lumina=CEconItemDescription=12
CEconItemDescription::Generate_ScorecardDesc_BravoPhoenix()=55 8B EC 56 57 8B 7D 08 8B F1 83 3F 00 0F ? ? ? ? ? 83 7E 0C 00 75 7C=lumina
CEconItemDescription::Generate_ScorecardDesc_PostPhoenix()=55 8B EC 83 E4 F8 83 EC 34 53 56 57 8B D9=lumina=CEconItemDescription=24
CSteamWorksGameStatsUploader::WriteFloatToTable()=55 8B EC 83 EC 08 33 C0 56 8B F1=lumina
CGCDev_NewItemRequestResponse::BYieldingRunGCJob()=55 8B EC 83 E4 F8 51 56 8B 75 08 8B CE 8B 06 FF 50 14 8B 06 8B CE FF 50 10 8B=lumina=CGCDev_NewItemRequestResponse=5
CEconTool_Gift::CEconTool_Gift()=55 8B EC 56 57 8B 7D 10 8B F1 57 6A 00 6A 00 FF 75 0C FF 75 08 E8 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7=lumina
CEconColorDefinition::BInitFromKV()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 85 DB 74 1F=lumina
CEconGraffitiTintDefinition::BInitFromKV()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 6A 00 8B F9 8B CB 68 ? ? ? ? E8 ? ? ? ? 89=lumina
static_attrib_t::BInitFromKV_MultiLine()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 0C 89=lumina
CItemLevelingDefinition::BInitFromKV()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D9 85 FF 74 1D=lumina
CEconSharedToolSupport::CanCollect()=55 8B EC 83 EC 18 57 8B F9 89 55=lumina
CEconTool_StatTrakSwap::SetItems()=53 56 8B D9 57 8B FA 85 DB 74=lumina
C_EconItemView::GetQualityParticleType()=55 8B EC 83 E4 F8 51 A1 ? ? ? ? 56 8B F1 A8 01 75 21=lumina
CExButton::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 68=lumina
CBasePlayerAnimState::ShouldResetMainSequence()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 8B=lumina
CExImageButton::ApplySettings()=55 8B EC 83 E4 F8 83 EC 18 56 8B 75 08 57 56=lumina=CExImageButton=89
CExLabel::SetColorStr()=55 8B EC 8B 45 08 8B D0 56=lumina
CExRichText::ApplySettings()=55 8B EC 83 E4 F8 51 53 8B 5D 08 56 57 53=lumina
CExRichText::ApplySchemeSettings()=55 8B EC 53 56 57 8B D9 E8=lumina
CEconItemDetailsRichText::ApplySettings()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B 75 08 8B C1 57 56=lumina=CEconItemDetailsRichText=89
CExplanationPopup::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 0E=lumina=CExplanationPopup=96
CItemModelPanelToolTip::ShowTooltip()=55 8B EC 53 8B D9 83 7B 2C=lumina=CItemModelPanelToolTip=2
CStorePreviewItemIcon::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? FF ? ? ? ? ? 6A=lumina=CStorePreviewItemIcon=88
CStorePreviewItemIcon::OnCursorEntered()=56 8B F1 8B 06 FF ? ? ? ? ? C6 ? ? ? ? ? ? FF=lumina=CStorePreviewItemIcon=103
CStorePreviewItemIcon::OnCursorExited()=56 8B F1 80 ? ? ? ? ? ? 8B 06=lumina=CStorePreviewItemIcon=104
CStoreItemControlsPanel::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 74 36=lumina=CStoreItemControlsPanel=96
CStorePricePanel::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B 37=lumina
CStorePage::ApplySettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 53 8B F1=lumina=CStorePage=89
CStorePage::UpdateFilterComboBox()=57 8B F9 8B ? ? ? ? ? 85 C9 74 7C=lumina=CStorePage=257
CStorePanel::ApplySchemeSettings()=55 8B EC 53 56 57 FF 75 08 8B D9 E8 ? ? ? ? 8B 03 8B CB 6A 00 6A 00 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 6A=lumina=CStorePanel=88
CStorePanel::ShowPanel()=55 8B EC 53 8B 5D 08 56 8B F1 C6=lumina=CStorePanel=287
OpenStoreStatusDialog()=55 8B EC 53 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 6A=lumina
CStorePreviewItemPanel::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 74 42=lumina=CStorePreviewItemPanel=96
CStoreViewCartPanel::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B=lumina=CPreviewRotButton=467
CStoreViewCartPanel::ShowPanel()=55 8B EC 53 8B 5D 08 57 8B F9 84=lumina=CPreviewRotButton=658
CBaseViewport::CBackGroundPanel::CBackGroundPanel()=57 51 6A 01 68 ? ? ? ? 6A 00 8B F9 E8 ? ? ? ? C7 ? ? ? ? ? 8B=lumina
CBaseViewport::AddNewPanel()=55 8B EC 83 EC 08 53 8B 5D 08 89 4D F8 85 DB 75=lumina
CClientScoreBoardDialog::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 56 8B 01 FF 50 14 68 ? ? ? ? 68 ? ? ? ? 8B CE E8 ? ? ? ? 8B=lumina=CClientScoreBoardDialog=89
CClientScoreBoardDialog::AddHeader()=55 8B EC 51 53 8B D9 56 57 6A 00 8B ? ? ? ? ? 68=lumina=CClientScoreBoardDialog=243
showinfo()=55 8B EC 51 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 56 8B=lumina
judeg_str()=55 8B EC 8B 4D 10 85 C9 75=lumina
C_Embers::C_Embers()=A1 ? ? ? ? 56 57 8B F9 8B 08 68 ? ? ? ? 8B 01 FF 50 04 8B F0 85 F6 74 32=lumina
CSnowFallManager::CreateSnowParticlesSphere()=55 8B EC 83 EC 18 56 57 83=lumina
TE_BeamSpline()=55 8B EC 8B 01 FF 75 08 8B 40 04 FF D0 84 C0 75 13=lumina=C_TempEntsSystem=10
C_TempEntsSystem::Explosion()=55 8B EC 8B 01 83 EC 18=lumina=C_TempEntsSystem=20
CClientSteamContext::Shutdown()=55 8B EC 8B 01 FF 75 08 8B 40 04 FF D0 84 C0 75 4B=lumina=C_TempEntsSystem=31
RecordBloodSprite()=55 8B EC 83 EC 0C 53 8B D9 89 55 F4 8B=lumina
C_TEExplosion::RecordExplosion()=55 8B EC 51 57 8B F9 8B ? ? ? ? ? 85 C9 0F=lumina
C_TEShatterSurface::RecordShatterSurface()=55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 85=lumina
RecordGlowSprite()=55 8B EC 83 EC 0C 53 8B D9 F3 ? ? ? ? 8B=lumina
CPlayerLogoProxy::Init()=55 8B EC 51 56 8B 75 08 57 8B F9 C6 45 FF 00 6A 01=lumina
RecordSprite()=55 8B EC 83 EC 08 53 8B D9 F3 ? ? ? ? 8B ? ? ? ? ? 56 8B=lumina
RecordWorldDecal()=55 8B EC 83 EC 08 57 8B F9 89 55=lumina
FX_RicochetSound()=55 8B EC 83 EC 38 F3=lumina
DrawSmokeFogOverlay()=55 8B EC F3 ? ? ? ? ? ? ? 81 ? ? ? ? ? 0F=lumina
ClipRayToHitbox()=55 8B EC 83 E4 F8 F3 ? ? ? ? 81 ? ? ? ? ? 0F=lumina
InitPose()=55 8B EC 83 EC 10 53 8B D9 89 55 F8=lumina
C_BaseFlex::StandardBlendingRules()=55 8B EC 83 EC 08 8B 45 08 56 57 8B F9 8D=lumina
CIKContext::UpdateTargets()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 33 D2 89=lumina
CIKContext::SolveDependencies()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B ? ? ? ? ? 56 57 89=lumina
CDmxSerializerKeyValues2::UnserializeElement()=55 8B EC 83 EC 34 83 65 F8=lumina
GCSDK::CJobMgr::RecordOrphanedMessage()=55 8B EC 51 56 57 6A 00 FF ? ? ? ? ? 8B=lumina
GCSDK::CJobMgr::TimeoutJob()=55 8B EC 83 EC 08 53 8B 5D 08 56 8B F1 57 83=lumina
CRTime::UpdateRealTime()=55 8B EC 83 EC 14 56 8B ? ? ? ? ? 6A=lumina
CRTime::RTime32ToString()=55 8B EC 83 EC 2C 56 57 8B F1=lumina
GCSDK::CSharedObjectTypeCache::Dump()=56 57 8B F9 FF 77 18 FF=lumina
GCSDK::CGCClientSharedObjectTypeCache::BCreateFromMsg()=55 8B EC 83 EC 50 53 56 57 6A 08 FF 75 0C=lumina
_jpeg_destroy()=56 8B F1 8B 46 04 85=lumina
_jpeg_stdio_src()=53 57 8B F9 8B DA 83 7F 18=lumina
deflateInit2_()=55 8B EC 51 8B 45 20=lumina
putShortMSB()=56 57 8B F9 8B CA=lumina
deflateEnd()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 8B 46 1C=lumina
_tr_init()=8D ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 89 ? ? ? ? ? 8D ? ? ? ? ? 89=lumina
bi_flush()=56 8B F1 8B ? ? ? ? ? 83 F8 10=lumina
CPotteryWheelPanel::GetWireframeMaterial()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 57=lumina
CColorPickerPanel::SetInitialColor()=55 8B EC 83 EC 10 8B 45 08 8B D0=lumina
CColorPickerPanel::OnColorSelected()=55 8B EC 83 EC 14 56 8D 45 FC=lumina=CColorPickerPanel=239
CColorPickerButton::OnCancelled()=55 8B EC 83 EC 08 56 57 8B F9 6A=lumina=CColorPickerButton=288
CProceduralTexturePanel::Init()=55 8B EC 8B 55 0C 81 ? ? ? ? ? 80=lumina
CParticleSystemMgr::ReadParticleConfigFile()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B 75 08 80=lumina
GetParticleManifest()=55 8B EC 83 E4 F8 83 EC 1C 53 56 8B ? ? ? ? ? 57 89=lumina
CParticleSnapshot::ValidateAttributeMapping()=55 8B EC 51 8B 45 0C 53 8B D9 56 8B=lumina
GCSDK::CGCClientSharedObjectCache::NotifyCreated()=8B 41 5C BA ? ? ? ? 3B C2 7F 0B 85 C0 79 04 33 C0 EB 06 83 F8 3F 0F 4F C2 89 41 5C 8B 41 68=lumina=C_INIT_InitFromCPSnapshot=37
C_OP_RenderSprites::InitializeContextData()=55 8B EC 56 8B 75 0C C7 ? ? ? ? ? C7=lumina=C_OP_RenderSprites=2
int Scaleform::SFstrcmp()=8A 01 3A 02 75 19=lumina
Q_stristr()=55 8B EC 53 57 8B 7D 08 85 FF 0F=lumina
V_snprintf()=55 8B EC 51 56 8B 75 0C 8D 45 14 57 8B 7D 08 8B D6 50 51 FF 75 10 8B CF E8 ? ? ? ? 83 C4 0C 85 C0 78 08 85 F6 7E 0C=lumina
CreateInterface_0()=55 8B EC 56 8B ? ? ? ? ? 57 85 F6 74 38=lumina
C_SDK::Hash::CRC32::ProcessBuffer()=55 8B EC 53 8B D9 56 57 8B 7D 08 8B F2 8B 03=lumina
CUtlBuffer::Put()=55 8B EC 56 57 8B 7D 0C 8B F1 85 FF 74 57=lumina
Unserialize()=56 8B F1 57 8B FA 80 7E=lumina
CExpressionEvaluator::MakeExpression()=55 8B EC 8A 55 0C=lumina
CExpressionEvaluator::MakeFactor()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8A=lumina
C_EconItemView::Update()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 BF=lumina
CMergedMDL::SetupBonesForAttachmentQueries()=55 8B EC 83 EC 14 83 ? ? ? ? ? ? 53=lumina
CKeyBindingsMgr::AddPanelToContext()=55 8B EC 56 8B 75 0C 8B CE 8B 06 FF 50 48=lumina
vgui::Panel::Init()=53 56 57 8B D9 6A 01=lumina
CColorOperationListPanel::OnReadFileFromDisk()=55 8B EC 83 EC 10 56 8B 75 08 57 56=lumina
vgui::Panel::OnKeyCodePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 6A 53=lumina
vgui::Panel::AddPropertyConverter()=55 8B EC 83 EC 10 56 57 89=lumina
vgui::Panel::InitPropertyConverters()=51 80 ? ? ? ? ? ? 0F ? ? ? ? ? BA=lumina
CParticleEffectBinding::GetActiveParticleList()=55 8B EC 53 8B D9 66=lumina
vgui::Panel::OnContinueDragging()=55 8B EC 83 EC 10 53 8B D9 8B 43 28=lumina
vgui::AnimationController::LoadScriptFile()=55 8B EC 83 EC 08 89 4D FC 8B ? ? ? ? ? 56=lumina
Helper_CanUseSprays()=55 8B EC 56 8B ? ? ? ? ? 57 85 F6 74 2C=lumina
vgui::Frame::Frame()=55 8B EC 56 8B 75 08 57 68=lumina
vgui::FrameButton::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 07 8D 4D 08 56 68=lumina=vgui::FrameButton=88
vgui::Frame::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 8B D9 57 6A 01=lumina
vgui::Frame::GetSysMenu()=53 56 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? A1=lumina
vgui::Button::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 68=lumina
vgui::Button::ApplySettings()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 68=lumina
C_OP_LerpScalar::Operate()=55 8B EC 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 74 0D=lumina
vgui::TextEntry::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 53=lumina
vgui::TextEntry::GetDropContextMenu()=55 8B EC 56 57 8B 7D 08 8B F1 6A 00 56=lumina
vgui::RichText::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8B=lumina
vgui::PropertyDialog::ActivateBuildMode()=55 8B EC 83 EC 10 53 8B D9 80 ? ? ? ? ? ? 74=lumina
vgui::CheckButton::ApplySchemeSettings()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 8B F1 53 89 75 FC=lumina
vgui::ToggleButton::DoClick()=53 56 57 8B F9 8B 07 8B ? ? ? ? ? FF=lumina
vgui::ToggleButton::ApplySchemeSettings()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? FF 75 08 8B=lumina=vgui::ToggleButton=88
vgui::MenuBar::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 03 8B CB 8B 37 68 ? ? ? ? FF 50 08 50 8B CF FF ? ? ? ? ? 8B 3F=lumina=vgui::MenuBar=88
vgui::ComboBox::OnMenuItemSelected()=55 8B EC 51 56 8B F1 81=lumina=vgui::CvarToggleCheckButton<class ConVarRef>=128
vgui::ScrollBar::ApplySchemeSettings()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 57 56 E8=lumina=vgui::ScrollBar=88
vgui::ScrollBar::SetButton()=55 8B EC 56 57 8B 7D 0C 8B F1 8B ? ? ? ? ? ? 85=lumina
C_INIT_SequenceLifeTime::InitNewParticlesScalar()=55 8B EC 53 8B 5D 08 8B CB 56 57 8B=lumina
vgui::Menu::ApplySchemeSettings()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 53=lumina
vgui::Menu::SetCurrentlySelectedItem()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 3B FA=lumina
vgui::Panel::InternalMouseFocusTicked()=55 8B EC 53 8B D9 83 ? ? ? ? ? ? 75 5D=lumina
vgui::ExpandButton::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8D 4D 08 57=lumina=vgui::ExpandButton=88
ColumnButton::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 8B F1 53=lumina=ColumnButton=88
vgui::ListPanel::RBTreeLessFunc()=55 8B EC 56 8B 75 0C 57 8B 7D 08 FF=lumina
vgui::ListPanel::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B F9 6A=lumina=vgui::ListPanel=88
vgui::MenuButton::OnKillFocus()=55 8B EC 56 57 6A 00 8B F1 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? 85 C0 74 0B 80 78 10 04 75 05 8B 78=lumina
CIronSightController::IncreaseDotBlur()=55 8B EC 83 EC 18 53 8B D9 E8 ? ? ? ? 83=lumina
vgui::RadioButton::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 07=lumina=vgui::RadioButton=88
vgui::RadioButton::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 07 8B=lumina=vgui::RadioButton=89
vgui::RadioButton::GetDescription()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 68=lumina=vgui::RadioButton=92
vgui::URLLabel::OnMousePressed()=55 8B EC 83 7D 08 6B 75 1B=lumina=vgui::URLLabel=105
vgui::URLLabel::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 8B C1 56 57 89 45 FC 8B=lumina=vgui::URLLabel=88
vgui::TreeView::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 03 8B CB 8B 37 68 ? ? ? ? FF 50 08 50 8B CF FF ? ? ? ? ? 8B 37=lumina=vgui::TreeView=88
vgui::TreeView::ClearSelection()=56 8B F1 C7 ? ? ? ? ? ? ? ? ? FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 1B=lumina=vgui::TreeView=223
vgui::ListViewItem::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8D=lumina=vgui::ListViewItem=88
CLessOrEqualProxy::OnBind()=56 8B F1 57 33 FF 39 ? ? ? ? ? 7E 76=lumina=vgui::ListViewPanel=227
vgui::ListViewPanel::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 33 8D 45 08 57 68 ? ? ? ? 50 8B CB FF ? ? ? ? ? 8B CB FF 30 FF ? ? ? ? ? 8B 07=lumina=vgui::ListViewPanel=88
setuiname()=68 ? ? ? ? 51 68 ? ? ? ? E8=lumina
vgui::PanelListPanel::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A 01 68=lumina=vgui::PanelListPanel=89
vgui::Slider::RecomputeNobPosFromValue()=55 8B EC 83 EC 10 53 56 8B F1 8D=lumina
vgui::Slider::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A 00=lumina
vgui::CConsolePanel::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 8B F9 53=lumina=vgui::CConsolePanel=88
vgui::QueryBox::OnKeyCodeTyped()=55 8B EC 8B 45 08 83 F8 46 75 10=lumina
vgui::FileOpenDialog::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 8B=lumina=vgui::FileOpenDialog=88
vgui::CItemButton::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03=lumina=vgui::CItemButton=88
vgui::CItemButton::OnMousePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F=lumina=vgui::CItemButton=105
vgui::CItemButton::OnMouseDoublePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 80 ? ? ? ? ? ? 74=lumina=vgui::CItemButton=106
vgui::SectionedListPanel::ApplySettings()=55 8B EC 53 56 8B 75 08 8B D9 56 E8 ? ? ? ? 6A=lumina
CMessageDialog::ApplySettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B ? ? ? ? ? 8B CF=lumina=CMessageDialog=89
vgui::TextImage::SetUseAsianWordWrapping()=80 ? ? ? ? ? ? 56 57 8B F9 75=lumina
vgui::TextTooltip::TextTooltip()=55 8B EC 83 EC 14 53 8B D9 56 57 6A=lumina
vgui::BuildGroup::SaveControlSettings()=55 8B EC 81 ? ? ? ? ? 32 C0 56=lumina=vgui::BuildGroup=4
vgui::BuildModeDialog::OnCommand()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 56 57 8B D9=lumina
vgui::BuildModeDialog::OnCreateNewControl()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 74 52=lumina=vgui::BuildModeDialog=295
vgui::ScrollBarSlider::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 37=lumina=vgui::ScrollBarSlider=88
vgui::ContextLabel::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 56=lumina=vgui::ContextLabel=88
vgui::PageTab::ApplySettings()=55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C1=lumina=vgui::PageTab=89
CUtlRBTree<char const*,int,bool ()=55 8B EC 83 EC 10 53 56 8B D9 57 89 5D F0=lumina
GetModEncryptionKey()=56 8B F1 B9 ? ? ? ? 6A=lumina
SocketWouldBlock()=55 8B EC 53 56 8B F1 57 FF=lumina
unsigned int CryptoPP::BitPrecision<unsigned int>()=8B 44 24 04 57 8B 38 85 FF 75 04 33 C0 5F C3 56 33 F6 BA ? ? ? ? 8D 0C 32 8B C7 D1 E9 D3 E8 85 C0 74 04 8B F1 EB 02 8B D1 8B CA 2B CE 83 F9 01=lumina
CryptoPP::Algorithm::Algorithm()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 56 50=lumina
CryptoPP::BitBucket::AlgorithmName()=51 56 8B 74 24 0C 8B CE 6A 09=lumina=CryptoPP::BitBucket=2
virtual bool CryptoPP::PK_Verifier::Verify()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 53 56 A1=lumina=CryptoPP::TF_VerifierImpl<struct CryptoPP::TF_SignatureSchemeOptions<class CryptoPP::TF_SS<struct CryptoPP::PKCS1v15,class CryptoPP::SHA1,struct CryptoPP::RSA,int>,struct CryptoPP::RSA,class CryptoPP::PKCS1v15_SignatureMessageEncodingMethod,class CryptoPP::SHA1>>=11
virtual bool CryptoPP::PK_Verifier::VerifyMessage()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B=lumina
memcpy_s_0()=56 8B 74 24 14 85=lumina
unsigned int CryptoPP::BytePrecision<unsigned int>()=8B 44 24 04 57 8B 38 85 FF 75 04 33 C0 5F C3 56 33 F6 BA ? ? ? ? 8D 0C 32 8B C7 D1 E9 D3 E8 85 C0 74 04 8B F1 EB 02 8B D1 8B CA 2B CE 83 F9 08=lumina
virtual void CryptoPP::Integer::BERDecode()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F9=lumina=CryptoPP::Integer=1
int CryptoPP::Baseline_Add()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 F7 ? ? ? ? ? 74 05 83 E9 02 EB 17 E3 32 8B 34 88 13=lumina
void CryptoPP::Baseline_Multiply2()=53 55 8B 6C 24 14 33=lumina
void CryptoPP::Baseline_Multiply4()=53 55 8B 6C 24 14 56=lumina
void CryptoPP::Baseline_Multiply8()=53 8B 5C 24 0C 55 8B 6C=lumina
void CryptoPP::Baseline_MultiplyBottom2()=53 8B 5C 24 0C 56 8B 74=lumina
void CryptoPP::Baseline_MultiplyTop2()=53 8B 5C 24 0C 55 56 57 8B 03 8B=lumina
void CryptoPP::Baseline_MultiplyTop4()=83 EC 08 8B 44 24 14 53 8B 5C 24 14 55 8B 28 56 8B 43 08=lumina
void CryptoPP::Baseline_MultiplyTop8()=83 EC 08 8B 44 24 14 53 8B 5C 24 14 55 8B 28 56 8B 43 18=lumina
int CryptoPP::Baseline_Sub()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 F7 ? ? ? ? ? 74 05 83 E9 02 EB 17 E3 32 8B 34 88 1B=lumina
CryptoPP::Decrement()=57 8B 7C 24 08=lumina
CryptoPP::EvenWordCount()=8B 44 24 08 85 C0 74 1D=lumina
CryptoPP::Increment()=8B 54 24 04 8B 44=lumina
bool CryptoPP::Integer::IsUnit()=8B 41 08 8B 51 0C 85 C0 74 13 8D 48 FF 8D 0C 8A 83 39 00 75 08 83 E9 04 83 E8 01 75 F3 83=lumina
void CryptoPP::RecursiveMultiplyBottom()=57 8B 7C 24 18 3B=lumina
void CryptoPP::RecursiveSquare()=51 8B 44 24 14=lumina
CryptoPP::RoundupSize()=8B 44 24 04 83 F8 08=lumina
int CryptoPP::SSE2_Add()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 0F EF D2 74 73 F7 ? ? ? ? ? 74 05 83 E9 02 EB 2F 0F 6E 04 88 0F 6E 0C 8F 0F D4=lumina
void CryptoPP::SSE2_Square4()=55 8B EC 53 56 57 8B 45 0C 8B 4D 08 8D ? ? ? ? ? 8B F4 83 E4 F0 8D 7C 24 C0=lumina
void CryptoPP::SSE2_Square8()=55 8B EC 53 56 57 8B 45 0C 8B 4D 08 8D ? ? ? ? ? 8B F4 83 E4 F0 8D 7C 24 80=lumina
int CryptoPP::SSE2_Sub()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 0F EF D2 74 73 F7 ? ? ? ? ? 74 05 83 E9 02 EB 2F 0F 6E 04 88 0F 6E 0C 8F 0F FB=lumina
virtual unsigned int CryptoPP::Filter::CopyRangeTo2()=8B 01 FF ? ? ? ? ? FF 74 24 18 8B C8 FF=lumina
virtual bool CryptoPP::Store::GetNextMessage()=56 8B F1 80 7E 10 00 75=lumina
CryptoPP::ByteQueue::IsolatedInitialize()=51 56 8B F1 C7 ? ? ? ? ? ? ? 8B 4C=lumina
virtual unsigned int CryptoPP::ByteQueue::Peek()=8B 41 14 8B 50=lumina
unsigned int CryptoPP::BytePrecision<unsigned __int64>()=8B 44 24 04 55=lumina
CryptoPP::BERGeneralDecoder::BERGeneralDecoder()=53 56 6A 00 8B F1=lumina
void CryptoPP::BERDecodeNull()=51 56 8B 74 24 0C 8D 4C 24 0C=lumina
void CryptoPP::DEREncodeNull()=51 56 8B 74 24 0C 8D 4C 24 04=lumina
static void CryptoPP::OID::EncodeValue()=83 EC 08 53 8B 5C=lumina
CScriptedIconLesson::PreReadLessonsFromFile()=83 EC 34 A1 ? ? ? ? 33 C4=lumina
virtual bool CryptoPP::MessageQueue::AnyRetrievable()=83 EC 0C 8D 04 24 83 C1 38 50=lumina=CryptoPP::MessageQueue=16
virtual bool CryptoPP::MessageQueue::GetNextMessage()=83 EC 18 56 8B F1 8B 06 FF 50=lumina=CryptoPP::MessageQueue=25
_png_set_oFFs()=55 8B EC 83 7D 08 00 74 20 8B 4D 0C 85 C9 74 19 8B 45 10 81 ? ? ? ? ? ? 89 41 64=lumina
_png_set_pHYs()=55 8B EC 83 7D 08 00 74 20 8B 4D 0C 85 C9 74 19 8B 45 10 81 ? ? ? ? ? ? 89 41 70=lumina
_png_save_int_32()=55 8B EC 8B 55 0C 8B C2 8B 4D 08 C1 F8=lumina
_png_save_uint_32()=55 8B EC 8B 55 0C 8B C2 8B 4D 08 C1 E8=lumina
CChoreoEvent::FindRelativeTag()=55 8B EC 56 8B 75 08 85 F6 74 25 57=lumina
_UNITY_png_get_uint_31()=55 8B EC 8B 4D 0C 0F B6 11 0F=lumina
vgui::FileData_t::FileData_t()=55 8B EC 53 8B 5D 0C 8B CB 56 57 8B 03 FF 50 44=lumina
ceng::CBitMask<int>::~CBitMask<int>()=55 8B EC 51 56 8B F1 8B 06 50=lumina
AutoReleaseThreadContext::~AutoReleaseThreadContext()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 09 85=lumina
ReslistLogLessFunc()=55 8B EC 51 56 E8 ? ? ? ? 8B=lumina
CCoreDispInfo::CalcMinMaxBoundingBoxAtNode()=55 8B EC 8B 45 08 33 C9 56=lumina
google::protobuf::io::Tokenizer::NextChar()=8B D1 8A 42=lumina
_ldexpf()=55 8B EC 51 FF 75 0C D9=lumina
common_strtod_l_float_char_()=8B FF 55 8B EC 83 EC 18 56=lumina
_anonymous_namespace_::argument_list_wchar_t_::append_0()=8B FF 55 8B EC 56 57 8B F1=lumina
AccumulatePose()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1=lumina
AddEconItem()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 57 8B F9 8B=lumina
CAM_Think()=55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 85=lumina
CBaseAchievement::EnsureComponentBitSetAndEvaluate()=55 8B EC 51 56 8B F1 57 8B 46=lumina
CBaseAchievement::FireGameEvent()=55 8B EC 56 8B F1 8B 06 8B 40 28=lumina
CBaseAchievement::OnComponentEvent()=55 8B EC 51 8B C1 53 56 33 F6 89 45 FC 8B 58 50=lumina
CHLClient::FrameStageNotify()=55 8B EC 8B 0D ? ? ? ? 8B 01 8B 80 ? ? ? ? FF D0 A2=lumina=CHLClient=37
CClientShadowMgr::InitDepthTextureShadow()=55 8B EC 83 EC 54 53 8B D9 8B 0D ? ? ? ? 89=lumina
CEffectsList::DrawEffects()=55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 8B=lumina=CEffectsList=2
CGlowObjectManager::RenderGlowEffects()=55 8B EC A1 ? ? ? ? 83 EC 18 57=lumina
CMergedMDL_Constructor()=53 8B D9 56 57 8D 4B 04 C7 03 ? ? ? ? E8 ? ? ? ? 6A=lumina
C_BaseCombatWeapon::DrawModel()=55 8B EC 51 56 8B F1 8B 0D ? ? ? ? 57 8B B9=lumina
C_BaseEntity::EmitSound()=55 8B EC 83 EC 4C 53 8B D9 8B=lumina
C_CSPlayer::InvalidatePhysicsRecursive()=55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3=lumina
C_GameInstructor::Update()=55 8B EC 83 EC 10 53 8B D9 8B 0D ? ? ? ? 8B=lumina=C_GameInstructor=14
CalcAbsolutePosition()=55 8B EC 83 E4 F0 83 EC 68 80=lumina
CalcAbsoluteVelocity()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7=lumina
CalcPlayerView()=84 C0 75 08 57=lumina
CalculateView()=55 8B EC 83 EC 14 53 56 57 FF 75 18=lumina=C_CSPlayer=277
ClearDeathNotices()=55 8B EC 83 EC 0C 53 56 8B 71=lumina
CreateAnimationState()=55 8B EC 56 8B F1 B9 ? ? ? ? C7=lumina
GetSequenceActivity()=55 8B EC 53 8B 5D 08 56 8B F1 83=lumina
GetSequenceLinearMotion()=55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14=lumina
GetShotgunSpread()=55 8B EC 83 EC 10 56 8B 75 08 8D=lumina
GetToolRecordingState()=55 8B EC 83 EC 08 53 56 8B F1 8B 0D ? ? ? ? 57 85=lumina
GetUserCmd()=55 8B EC 8B 45 08 56 57 8B F9 83=lumina
GetWeaponMoveAnimation()=53 56 57 8B F9 33 F6 8B 4F 60=lumina
GloweEffectSpectator()=55 8B EC 83 EC 14 53 8B 5D 0C 56 57 85 DB 74=lumina=C_PlayerAddonModel=297
InterpolateServerEntities()=55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53=lumina
IsEntityBreakable()=55 8B EC 51 56 8B F1 85 F6 74 ? 83=lumina
KeyDown()=56 57 8B FA 83 C8=lumina
LineGoesThroughSmoke()=55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F=lumina
OnLand()=55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B=lumina
PutString()=55 8B EC 56 57 8B F9 8A=lumina
RunSimulation()=55 8B EC 83 EC 08 53 8B 5D 10 56=lumina
SetAbsAngles()=55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1=lumina
WriteUserCmdDeltaToBuffer()=55 8B EC 83 EC 68 53 56 8B D9 C7=lumina
_enc_textbss_begin()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 4D 18=partial pdb
CBitWriteMasksInit::CBitWriteMasksInit()=55 8B EC 51 53 56 57 33=partial pdb
void google::protobuf::GoogleOnceInit()=55 8B EC 8B 4D 08 83 EC 0C 8B 01=partial pdb
virtual void CMsgReplayUploadedToYouTube::Clear()=80 79 1C 00 74 55=partial pdb
virtual void CGCMsgSystemStatsSchema::CopyFrom()=55 8B EC 56 8B F1 39 75 08 74 0F 8B 06 FF 50 0C 8B=partial pdb
float C_CSGameRules::GetWarmupPeriodEndTime()=55 8B EC 51 A1 ? ? ? ? 56 8B ? ? ? ? ? 85 C0 75 0A E8 ? ? ? ? A1 ? ? ? ? 8B ? ? ? ? ? 89 46 20=partial pdb
void std::allocator<char>::deallocate()=55 8B EC 6A 01 FF 75 0C=partial pdb
void std::_Func_class<void,>::_Set()=55 8B EC 8B 45 08 89 41 24=partial pdb
virtual int CMsgGCBannedWordListRequest::ByteSize()=56 57 8B F9 33 F6 80 7F 14 00 74 47=partial pdb
virtual int CMsgAMSendEmailResponse::ByteSize()=56 57 8B F9 33 F6 80 7F 10 00 74 21=partial pdb
virtual CMsgHttpResponse::~CMsgHttpResponse()=56 57 8B F9 8B 4F 18 C7=partial pdb
virtual void CCSUsrMsg_VoteSetup::Clear()=33 D2 39 51 04=partial pdb
virtual void CMsgGCStorePurchaseInitResponse::Clear()=8B 41 28 84 C0 74 38=partial pdb
virtual int CSVCMsg_Broadcast_Command::ByteSize()=56 57 8B F9 33 F6 80 7F 10 00 74 2B=partial pdb
virtual int CMsgInvitationCreated::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 1C 00 74 23=partial pdb
virtual int CMsgPartyInviteResponse::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 20 00 74 74=partial pdb
virtual int CSOItemCriteriaCondition::ByteSize()=56 57 8B F9 33 F6 80 7F 20 00 0F ? ? ? ? ? F6 47 20 01 74 26 8B 47 0C=partial pdb
virtual void CSOItemRecipe::Clear()=56 8B F1 57 8B 46 74 84=partial pdb
virtual void CMsgIncrementKillCountAttribute::Clear()=80 79 24 00 74 2A=partial pdb
virtual int CMsgGC_GlobalGame_Play::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 1C 00 74 64=partial pdb
virtual int CMsgApplyStatTrakSwap::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 24 00 74=partial pdb
virtual int CMsgApplyPennantUpgrade::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 1C 00 74 31=partial pdb
virtual int CSOEconItem::ByteSize()=55 8B EC 83 E4 F8 51 53 56 8B F1 C7 ? ? ? ? ? ? ? 57 33 FF 80 7E 78=partial pdb
virtual void CMsgAdjustItemEquippedState::Clear()=80 79 20 00 74 20 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
virtual int CMsgAdjustItemEquippedState::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 20 00 74 71=partial pdb
virtual int CMsgStoreGetUserData::ByteSize()=56 57 8B F9 33 F6 8B 4F 14 84 C9 74 3D=partial pdb
virtual void CMsgStoreGetUserDataResponse::Clear()=8B 41 20 84 C0 74 5E C1 E8 02 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? A8=partial pdb
virtual int CMsgUseItem::ByteSize()=55 8B EC 83 E4 F8 51 53 56 8B F1 C7 ? ? ? ? ? ? ? 57 33 FF 80 7E 38=partial pdb
virtual int CMsgGCReportAbuse::ByteSize()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 33 FF 8B=partial pdb
virtual int CMsgGCNameItemNotification::ByteSize()=56 57 8B F9 33 F6 8B 4F 1C 84 C9 74 65=partial pdb
virtual int CMsgGCStorePurchaseCancel::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 14=partial pdb
virtual void CMsgGCMsgMasterSetDirectory::Clear()=56 8B F1 57 80 7E 20 00 74 07=partial pdb
virtual int OperationalStatisticElement::ByteSize()=55 8B EC 51 53 56 8B F1 C7 ? ? ? ? ? ? 33 DB 38 5E 1C=partial pdb
virtual void OperationalStatisticsPacket::Clear()=56 8B F1 57 80 7E 24 00 74 0E=partial pdb
virtual int OperationalStatisticsPacket::ByteSize()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 24 00 74 5D=partial pdb
virtual void ServerHltvInfo::Clear()=8B 41 68 84=partial pdb
virtual int PlayerQuestData_QuestItemData::ByteSize()=55 8B EC 83 E4 F8 56 57 8B F9 33 F6 80 7F 1C 00 74 7A=partial pdb
virtual int PlayerQuestData::ByteSize()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 5C=partial pdb
virtual void CMsgGC_ServerQuestUpdateData::Clear()=56 8B F1 57 8B 46 28 A9 ? ? ? ? 74 3F=partial pdb
virtual int CMsgGC_ServerQuestUpdateData::ByteSize()=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 8B 47 28=partial pdb
virtual void CMsgAMGetLicensesResponse::Clear()=56 8B F1 8B 46 24 84 C0 74 29=partial pdb
virtual int WatchableMatchInfo::ByteSize()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 33 FF 80 7E 58=partial pdb
CEconItemPreviewDataBlock::CEconItemPreviewDataBlock()=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? 8B CE C7=partial pdb
virtual void CEconItemPreviewDataBlock::Clear()=56 8B F1 57 8B 46 64 84 C0 74=partial pdb
virtual void CDataGCCStrike15_v2_MatchInfo::Clear()=56 8B F1 57 8B 46 30 84 C0 74 3E=partial pdb
virtual void CMsgGCCStrike15_v2_MatchList::Clear()=56 8B F1 57 8B 46 3C 84 C0 74 28=partial pdb
virtual int CMsgCStrike15Welcome::ByteSize()=55 8B EC 83 E4 F8 56 8B F1 57 33 FF 80 7E 30=partial pdb
virtual int CSOPersonaDataPublic::ByteSize()=56 57 8B F9 33 F6 80 7F 18 00 74 77=partial pdb
virtual int CGCMsgSystemStatsSchema::ByteSize()=56 57 8B F9 33 F6 80 7F 14 00 74 53=partial pdb
virtual void PlayerDecalDigitalSignature::Clear()=80 79 64 00 74=partial pdb
virtual int PlayerDecalDigitalSignature::ByteSize()=55 8B EC 51 8B D1 53 33=partial pdb
virtual int CGCMsgSQLStatsResponse::ByteSize()=56 57 8B F9 33 F6 80 7F 30 00 0F ? ? ? ? ? F6 47 30 01 74 1B=partial pdb
virtual int CCSUsrMsg_CloseCaptionDirect::ByteSize()=56 57 8B F9 33 F6 80 7F 18 00 74 5F=partial pdb
virtual int CCSUsrMsg_KeyHintText::ByteSize()=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 33 DB 8B 77 0C 85 F6 7E 3C=partial pdb
virtual void CCSUsrMsg_SendPlayerItemFound::Clear()=56 8B F1 80 7E 14 00 74 19=partial pdb
virtual int CCSUsrMsg_SendPlayerItemFound::ByteSize()=56 57 8B F9 33 F6 80 7F 14 00 74 68=partial pdb
virtual int CCSUsrMsg_DesiredTimescale::ByteSize()=56 57 8B F9 33 F6 8B 57 1C=partial pdb
virtual int CCSUsrMsg_CurrentTimescale::ByteSize()=56 57 8B F9 8B 4F 04 80 7F 10 00 8D 57 04 0F 95 C0 22 47 10 0F B6 F0 F7 DE 1B F6 83 E6 05=partial pdb
virtual int CCSUsrMsg_PlayerStatsUpdate::ByteSize()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 80 7F 28 00 0F ? ? ? ? ? F6 47 28 01 74 26=partial pdb
virtual void PlayerQuestData::Clear()=56 8B F1 57 80 7E 48=partial pdb
virtual int CMsgGCGetPersonaNames::ByteSize()=56 57 8B F9 8D 57 04 8B 47 0C 8D 34 C0=partial pdb
virtual CNETMsg_SignonState::~CNETMsg_SignonState()=56 57 8B F9 8B 4F 20=partial pdb
virtual int CCLCMsg_FileCRCCheck::ByteSize()=56 57 8B F9 33 F6 80 7F 38=partial pdb
virtual void CSVCMsg_ServerInfo::Clear()=8B 41 60 84=partial pdb
virtual void CSVCMsg_SendTable_sendprop_t::Clear()=8B 41 30 84 C0 74 72=partial pdb
virtual int CSVCMsg_SendTable_sendprop_t::ByteSize()=56 57 8B F9 33 F6 8B 4F 30=partial pdb
virtual int CSVCMsg_GameEvent_key_t::ByteSize()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 33 FF 80 7E 38=partial pdb
virtual int CSVCMsg_TempEntities::ByteSize()=56 57 8B F9 33 F6 8B 47 18 84 C0 74 69=partial pdb
virtual int GlobalStatistics::ByteSize()=53 56 57 8B F9 33 F6 80 7F 4C=partial pdb
virtual int CSVCMsg_EncryptedData::ByteSize()=56 57 8B F9 33 F6 80 7F 14 00 74 5C=partial pdb
virtual bool CPlayerRankManager::Init()=55 8B EC 83 E4 F8 56 57 8B F9 8B ? ? ? ? ? 68=partial pdb
void CCloseCaptionItem::AddWork()=55 8B EC 83 EC 18 53 56 57 8B F9 89 7D FC E8=partial pdb
virtual void CAchievementMgr::LevelInitPreEntity()=55 8B EC 83 EC 14 53 8B D9 8B ? ? ? ? ? 57=partial pdb
void C_HLTVCamera::SetMode()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 8B 01=partial pdb
char const near * COM_GetModDirectory()=55 8B EC 51 B9 ? ? ? ? 8D=partial pdb
bool CAchievementMgr::IsAchievementAllowedInGame()=55 8B EC 83 ? ? ? ? ? ? 74 2A A1=partial pdb
void CPlayerRankManager::OnAchievementEarned()=55 8B EC 83 EC 10 53 8B 5D 08 56 8B F1 53=partial pdb
bool CAchievementMgr::CheckAchievementsEnabled()=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 0F ? ? ? ? ? 8B ? ? ? ? ? 85=partial pdb
void CAchievementMgr::OnMapEvent()=55 8B EC 51 53 8B 5D 08 85 DB 74=partial pdb
void CAchievementMgr::Steam_OnUserStatsStored()=55 8B EC 8B 45 08 83 EC 0C 8B=partial pdb
CSteamID::CSteamID()=55 8B EC 8B 45 08 8B 55 14 89 01 83 E2 0F 8A 45 10 88 41 07 8B 41 04 25 ? ? ? ? C1 E2 14 0B D0 8B 45 0C 25 ? ? ? ? 0B D0 8B=partial pdb
CVProfScope::CVProfScope()=55 8B EC A1 ? ? ? ? 56 8B F1 83 ? ? ? ? ? ? 0F=partial pdb
CUtlBinaryBlock::CUtlBinaryBlock()=55 8B EC 8B 55 0C 8B 45 08 56 8B F1 C7=partial pdb
bool StringLessThan()=55 8B EC 8B 45 08 8B 08 85 C9 75 04 32 C0 5D C3 8B 45 0C 8B 00=partial pdb
int CAmmoDef::MaxCarry()=55 8B EC 8B 55 08 83 FA 01 7C=partial pdb
virtual void CAnimatedOffsetTextureProxy::OnBind()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 0F=partial pdb
virtual bool CAnimateSpecificTexture::Init()=55 8B EC 57 68 ? ? ? ? 8B=partial pdb
int ExtractBbox()=55 8B EC 56 57 8B F9 8B F2 85=partial pdb
enum Animevent EventList_RegisterPrivateEvent()=55 8B EC 83 EC 08 53 8B D9 85=partial pdb
struct mstudioseqdesc_t near & CStudioHdr::pSeqdesc()=55 8B EC 83 79 04 00 75=partial pdb
int _V_UTF8ToUnicode()=55 8B EC 57 8B FA=partial pdb
virtual void CBasePlayerAnimState::Update()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B F1 57 8B 06=partial pdb
virtual void CBasePlayerAnimState::ComputeSequences()=56 8B F1 E8 ? ? ? ? 8B 06 8B CE 8B 40=partial pdb
void CBasePlayerAnimState::ComputeMainSequence()=55 8B EC 83 EC 0C 53 56 57 8B F9 8B 47 1C=partial pdb
virtual void C_BaseEntity::PhysicsSimulate()=55 8B EC 83 EC 0C 56 8B F1 8B 46 1C=partial pdb
void CBasePlayerAnimState::AnimStateLog()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8D 45 10=partial pdb
void CBasePlayerAnimState::DebugShowAnimStateFull()=55 8B EC A1 ? ? ? ? 56 8B F1 FF 70=partial pdb
void CBaseAchievement::EvaluateNewAchievement()=56 8B F1 57 8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 75=partial pdb
void CBaseAchievement::ShowProgressNotification()=57 8B F9 8B 07 8B 40 18=partial pdb
virtual void CBaseAchievement::PostRestoreSavedGame()=55 8B EC 51 53 8B ? ? ? ? ? 57 8B F9 85=partial pdb
virtual bool CBaseAchievement::ShouldSaveWithGame()=56 8B F1 F6 46 0C 40=partial pdb
virtual bool CBaseAchievement::IsActive()=56 8B F1 8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 74=partial pdb
virtual void CBaseAchievement::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 8B D9 57 6A 00=partial pdb
virtual void CBaseAchievement::ClearAchievementData()=F6 41 18 20=partial pdb
virtual void CBaseAnimatedTextureProxy::OnBind()=55 8B EC 51 56 8B F1 8B 4E 04 8A=partial pdb
virtual bool C_BaseCombatCharacter::Weapon_Switch()=55 8B EC 57 8B 7D 08 8B D1 85 FF 75=partial pdb
int C_BaseCombatCharacter::GetAmmoCount()=55 8B EC 56 8B 75 08 57 8B F9 83 FE FF 75=partial pdb
virtual bool C_BaseCombatCharacter::IsLookingTowards()=55 8B EC F3 ? ? ? ? 83 EC 0C 53 8B 5D 08=partial pdb
virtual bool C_BaseCombatCharacter::IsInFieldOfView()=55 8B EC 83 E4 F8 51 56 8B F1 85=partial pdb
void Ray_t::Init()=55 8B EC 8B 45 0C 8B 55 08 F3=partial pdb
void RecvProxy_EffectFlagsWeaponWorldmodel()=55 8B EC 8B 4D 0C 85 C9 74 14=partial pdb
virtual int C_BaseWeaponWorldModel::DrawModel()=55 8B EC F6 45 08 01 56 8B F1 74 1F=partial pdb
virtual void C_BaseWeaponWorldModel::OnDataChanged()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 8B ? ? ? ? ? 83 F9=partial pdb
virtual bool C_BaseWeaponWorldModel::SetupBones()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 FA FF 74 7C=partial pdb
void C_BaseWeaponWorldModel::ValidateParent()=53 56 57 8B F9 8B ? ? ? ? ? 83 F8 FF 0F ? ? ? ? ? 0F B7 F0=partial pdb
bool C_BaseWeaponWorldModel::HasDormantOwner()=8B ? ? ? ? ? 56 83 F9 FF 0F=partial pdb
virtual void C_BaseWeaponWorldModel::FireEvent()=55 8B EC 83 7D 10 2F=partial pdb
virtual bool C_BaseWeaponWorldModel::ShouldDraw()=55 8B EC 51 56 8B F1 57 89=partial pdb
virtual void C_BaseCombatWeapon::Spawn()=53 56 8B F1 57 8B 06 FF ? ? ? ? ? 6A=partial pdb
virtual void C_BaseCombatWeapon::Precache()=56 8B F1 83 ? ? ? ? ? ? 74 0A C7 ? ? ? ? ? ? ? ? ? 8B=partial pdb
virtual bool C_BaseCombatWeapon::HasAmmo()=56 8B F1 83 ? ? ? ? ? ? 75 0D=partial pdb
virtual void C_BaseCombatWeapon::MakeTracer()=55 8B EC 83 EC 0C 56 57 8B F9 8B ? ? ? ? ? 83=partial pdb
void CFlashlightEffect::UpdateLightTopDown()=55 8B EC 83 E4 F0 83 EC 18 56 57 68 ? ? ? ? 8B=partial pdb
virtual int C_BaseCombatWeapon::UpdateClientData()=55 8B EC 56 8B F1 8B 4D 08 8B 01 FF ? ? ? ? ? 3B=partial pdb
virtual void C_BaseCombatWeapon::SendViewModelAnim()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 76=partial pdb
virtual void C_BaseCombatWeapon::SetViewModel()=57 8B F9 8B ? ? ? ? ? 83 FA FF 74 6C=partial pdb
virtual void C_BaseCombatWeapon::SetWeaponVisible()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 83 F9 FF 0F=partial pdb
virtual bool C_BaseCombatWeapon::IsWeaponVisible()=56 57 8B F9 8B ? ? ? ? ? 83 FA FF 74 75=partial pdb
virtual bool C_BaseCombatWeapon::DefaultDeploy()=55 8B EC 83 E4 F0 83 EC 18 56 8B F1 57 8B 06=partial pdb
virtual void C_BaseCombatWeapon::ItemPostFrame()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B F1 57 8B ? ? ? ? ? 83 F9=partial pdb
virtual void C_BaseCombatWeapon::HandleFireOnEmpty()=56 8B F1 80 ? ? ? ? ? ? 74 14 8B 06=partial pdb
virtual void C_BaseCombatWeapon::StopWeaponSound()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 FF=partial pdb
virtual void C_BaseCombatWeapon::CheckReload()=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
virtual void C_BaseCombatWeapon::PrimaryAttack()=55 8B EC 83 E4 F8 83 EC 78 56 57 8B F9 8B 07=partial pdb
bool C_BaseCombatWeapon::SetIdealActivity()=55 8B EC 53 56 8B ? ? ? ? ? 57 8B F9=partial pdb
void CHandle<class CBaseEntity>::Set()=55 8B EC 56 8B F1 8B 4D 08 85 C9 74 0E=partial pdb
virtual char std::ctype<char>::do_widen()=55 8B EC 8A 45 08 5D=partial pdb
virtual void C_EconEntity::SetOriginalOwnerXuid()=55 8B EC 8B 45 08 39 ? ? ? ? ? 74 06 89 ? ? ? ? ? 8B=partial pdb
bool C_BaseAnimating::GetAttachment()=55 8B EC 56 57 FF 75 0C 8B F9 8B=partial pdb
virtual void CVRenderView::GetColorModulation()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? F3 0F 11=partial pdb
void CCollisionProperty::RemoveSolidFlags()=55 8B EC 8B 45 08 53 8B D9 F7=partial pdb
CStudioHdr::~CStudioHdr()=51 56 57 8B F9 8B 4F 08=partial pdb
void CCustomMaterialOwner::ClearCustomMaterials()=55 8B EC 51 53 56 8B F1 33 DB 39 5E 10=partial pdb
virtual void C_BaseViewModel::RemoveEffects()=55 8B EC 53 8B 5D 08 8B C3 56 8B=partial pdb
void C_BasePlayer::IncrementEFNoInterpParity()=55 8B EC 8B 45 08 53 56 8B F1 57 8B=partial pdb
void C_BaseEntity::ParseMapData()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 57 8B 7D 08=partial pdb
virtual bool C_BaseEntity::KeyValue()=55 8B EC F3 ? ? ? ? 8D=partial pdb
virtual bool C_BaseEntity::GetKeyValue()=55 8B EC 83 E4 C0 83 EC 34 BA ? ? ? ? 53 56 8B 75 08 57 8B F9 8B CE E8 ? ? ? ? 85 C0 0F=partial pdb
virtual bool C_BaseEntity::ShouldCollide()=55 8B EC 83 ? ? ? ? ? ? 75 0F=partial pdb
virtual char const near * C_BaseEntity::DamageDecal()=55 8B EC 8A ? ? ? ? ? 3C 04=partial pdb
void ()=55 8B EC 51 8B 45 0C F3=partial pdb
void C_BaseEntity::VPhysicsSetObject()=55 8B EC 56 8B F1 57 8B 7D 08 83 ? ? ? ? ? ? 74=partial pdb
void C_BaseEntity::VPhysicsSwapObject()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 75 40=partial pdb
void C_BaseEntity::ComputeTracerStartPosition()=55 8B EC 83 EC 1C 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
void C_BaseEntity::TraceBleed()=55 8B EC 81 ? ? ? ? ? 56 8B F1 F3 ? ? ? ? 8B=partial pdb
void C_BaseEntity::SetEffectEntity()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 FA FF 74 19=partial pdb
void C_BaseEntity::ApplyAbsVelocityImpulse()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? F3=partial pdb
void C_BaseEntity::CollisionRulesChanged()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 8B F1 83=partial pdb
void CCollisionProperty::AddSolidFlags()=55 8B EC 53 8B D9 0F B7=partial pdb
class Vector near & AllocTempVector()=55 8B EC 83 E4 F8 A1 ? ? ? ? 56 57 A8=partial pdb
C_BaseGrenade::C_BaseGrenade()=55 8B EC 83 E4 F8 83 EC 14 56 8B F1 E8=partial pdb
virtual class Vector C_BasePlayer::EyePosition()=55 8B EC 57 8B F9 8B ? ? ? ? ? 83 F9=partial pdb
void C_BasePlayer::CacheVehicleView()=A1 ? ? ? ? 56 8B F1 8B ? ? ? ? ? 3B=partial pdb
void C_BasePlayer::EyePositionAndVectors()=55 8B EC 83 EC 0C 56 8B F1 8B ? ? ? ? ? 83 F9=partial pdb
virtual void C_BasePlayer::UpdateStepSound()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 58 83=partial pdb
virtual void C_BasePlayer::PlayStepSound()=55 8B EC 8B 45 18 81=partial pdb
virtual void C_BasePlayer::SetStepSoundTime()=55 8B EC 8B 45 08 56 8B F1 83 F8 03=partial pdb
virtual void C_BasePlayer::Weapon_Drop()=55 8B EC 53 56 8B F1 32 DB 8B=partial pdb
virtual bool C_BasePlayer::Weapon_Switch()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B 07=partial pdb
virtual bool C_BasePlayer::Weapon_ShouldSelectItem()=55 8B EC 8B 01 FF ? ? ? ? ? 33 C9 39 45=partial pdb
virtual void C_BasePlayer::SelectItem()=55 8B EC 56 8B F1 8B 4D 08 85 C9 74 71=partial pdb
virtual void C_BasePlayer::ViewPunch()=55 8B EC A1 ? ? ? ? 83 EC 14 56 8B=partial pdb
virtual void C_BasePlayer::CalcView()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 83 F9 FF 74 40=partial pdb
virtual void C_BasePlayer::CalcViewModelView()=55 8B EC 53 8B 5D 0C 56 57 8B F9 33 F6 0F 1F 00 56=partial pdb
virtual void C_BasePlayer::CalcObserverView()=55 8B EC 56 8B F1 8B 06 FF ? ? ? ? ? 48=partial pdb
virtual float CBasePlayer::CalcRoll()=55 8B EC 83 EC 24 8B 4D 08 8D 45 E8=partial pdb
virtual void C_BasePlayer::DoMuzzleFlash()=56 57 8B F9 33 F6 56=partial pdb
virtual void C_BasePlayer::MakeTracer()=55 8B EC 56 8B F1 8B 06 FF ? ? ? ? ? 8B CE 85=partial pdb
virtual void C_BasePlayer::SharedSpawn()=55 8B EC 83 EC 08 53 8B D9 56 6A 02=partial pdb
bool C_BasePlayer::SetFOV()=55 8B EC 51 8B 55 08 F3 ? ? ? ? 56=partial pdb
void C_BasePlayer::UpdateUnderwaterState()=56 8B F1 80 ? ? ? ? ? ? 75 15 80=partial pdb
void C_BasePlayer::RemoveSplitScreenPlayer()=55 8B EC 56 57 8B F9 8B 4D 08 85 C9 74 0C 8B 01 FF 50 08 8B 00 89 45 08 EB 07 C7 ? ? ? ? ? ? 8D 45 08 50 8D ? ? ? ? ? E8 ? ? ? ? 8B=partial pdb
virtual void C_BasePlayer::VPhysicsShadowUpdate()=55 8B EC 83 E4 F8 A1 ? ? ? ? 81 ? ? ? ? ? 8B=partial pdb
bool C_BasePlayer::IsRideablePhysics()=55 8B EC 51 56 8B F1 8B 4D 08 85 C9 74=partial pdb
void C_BasePlayer::SetVCollisionState()=55 8B EC 8B 45 10 56 8B F1 8B=partial pdb
virtual void C_BaseViewModel::Spawn()=55 8B EC 83 EC 18 56 8B F1 8B 06=partial pdb
RecvProxy_Weapon()=55 8B EC 53 56 8B 75 0C 8B CE 57 8B 06 FF ? ? ? ? ? 8B F8=partial pdb
void RecvProxy_ViewmodelSequenceNum()=55 8B EC 53 8B 5D 08 57 8B 7D 0C 8B=partial pdb
virtual bool C_BaseViewModel::GetAttachment()=55 8B EC 51 FF 75 0C FF 75 08 E8 ? ? ? ? 8B=partial pdb
void RecvProxy_Beam_ScrollSpeed()=55 8B EC 8B 45 08 8B 4D 0C F3 ? ? ? ? 0F 5A=partial pdb
virtual void C_Beam::SetModel()=55 8B EC 56 8B 75 08 57 8B F9 8B ? ? ? ? ? 56 8B 01 FF 50 08 8B ? ? ? ? ? 50 8B 11 FF 52 04 85 C0 74 20=partial pdb
void C_Beam::SetAbsEndPos()=55 8B EC 83 E4 F8 83 EC 34 56 8B F1 8B ? ? ? ? ? 83 F9=partial pdb
void C_Beam::PointsInit()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 0A=partial pdb
virtual bool C_Beam::OnPredictedEntityRemove()=55 8B EC 56 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF 75 0C=partial pdb
virtual int C_Beam::DrawModel()=55 8B EC 53 8B D9 80 ? ? ? ? ? ? 0F=partial pdb
virtual bool C_Beam::Simulate()=55 8B EC 83 EC 18 53 56 8B F1 32=partial pdb
void C_Beam::ComputeBounds()=55 8B EC 83 EC 48 53 56 57 8B D9=partial pdb
class C_BaseViewModel near * ToBaseViewModel()=85 C9 75 03 33 C0 C3 8B 01 56 FF=partial pdb
class CEngineSprite near * Draw_SetSpriteTexture()=55 8B EC 53 56 57 8B FA 51=partial pdb
void DrawSegs()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B 4D 08 89 54=partial pdb
void CalcSegOrigin()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 8B 43 1C=partial pdb
void DrawTeslaSegs()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 0F 28 C3=partial pdb
virtual void CNewGameDialog::FinishScroll()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B 4D 0C=partial pdb
void DrawBeamQuadratic()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 89=partial pdb
int CMeshBuilder::IndicesFromVertices()=55 8B EC 8B 45 08 83 C0 FC=partial pdb
void CIndexBuilder::GenerateIndices()=55 8B EC 56 8B F1 83 7E 0C 00 0F ? ? ? ? ? 8B=partial pdb
void CMeshBuilder::End()=55 8B EC 57 8B F9 80 ? ? ? ? ? ? 74 23=partial pdb
void CVertexBuilder::AttachBegin()=55 8B EC 8B 45 08 8B D1 53 8B=partial pdb
void CMeshBuilder::Begin()=55 8B EC 51 53 8B 5D 08 8D=partial pdb
CMatRenderContextPtr::CMatRenderContextPtr()=55 8B EC 56 8B F1 8B 4D 08 8B 01 FF ? ? ? ? ? 89=partial pdb
void CBoneMergeCache::Init()=55 8B EC 8B 45 08 56 8B F1 89 06 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=partial pdb
void CBoneMergeCache::UpdateCache()=55 8B EC 83 EC 14 53 56 57 8B F9 8B 37=partial pdb
void CBoneMergeCache::MergeMatchingBones()=55 8B EC 53 56 57 8B F1 E8 ? ? ? ? 83=partial pdb
bool CBoneMergeCache::GetAimEntOrigin()=55 8B EC 83 E4 F8 83 EC 60 56 57 8B F9=partial pdb
bool CBoneMergeCache::GetRootBone()=55 8B EC 56 8B F1 E8 ? ? ? ? 83=partial pdb
void CVarBitVecBase<unsigned short>::Resize()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 C6 45 FF 00 8D 47 1F 99 83 E2 1F 03 C2 0F=partial pdb
void CVarBitVecBase<unsigned short>::ReallocInts()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 75 23=partial pdb
CTakeDamageInfo::CTakeDamageInfo()=55 8B EC 56 8B F1 6A 01 C7 ? ? ? ? ? C7=partial pdb
void CSplitString::Construct()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B D9 8B F7=partial pdb
virtual void C_AI_BaseNPC::OnDataChanged()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 85 F6 75 53=partial pdb
int CJob::Execute()=57 8B F9 8B 47 0C 83 F8 01=partial pdb
void InitC_BaseAnimatingScriptDesc()=55 8B EC 83 EC 10 80 ? ? ? ? ? ? 56=partial pdb
virtual void C_ClientRagdoll::ImpactTrace()=55 8B EC 83 EC 18 56 57 8B F9 8B ? ? ? ? ? 85=partial pdb
void C_ClientRagdoll::HandleAnimatedFriction()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 85=partial pdb
virtual float C_ClientRagdoll::LastBoneChangedTime()=55 8B EC 51 8B ? ? ? ? ? 85 C0 74=partial pdb
void cc_cl_interp_all_changed()=55 8B EC 83 EC 0C 53 56 57 8B F1 E8 ? ? ? ? C7=partial pdb
virtual int C_BaseAnimating::VPhysicsGetObjectList()=55 8B EC 57 8B F9 8B ? ? ? ? ? 85 C9 74 4F=partial pdb
void C_BaseAnimating::LockStudioHdr()=55 8B EC 51 53 8B D9 56 57 8D ? ? ? ? ? FF=partial pdb
void C_BaseAnimating::GetBoneTransform()=55 8B EC 56 8B F1 57 83 ? ? ? ? ? ? 75=partial pdb
void C_BaseAnimating::CalcBoneMerge()=55 8B EC 83 EC 08 56 8B F1 8A=partial pdb
void CSoftbody::UpdateCtrlOffsets()=55 8B EC 83 EC 0C 56 8B F1 83 ? ? ? ? ? ? 74=partial pdb
void C_BaseAnimating::CreateUnragdollInfo()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 83 ? ? ? ? ? ? 75 14=partial pdb
bool C_BaseAnimating::PutAttachment()=55 8B EC 8B 45 08 8B D1 83 F8 01 0F=partial pdb
virtual void C_BaseAnimating::InvalidateAttachments()=33 D2 39 ? ? ? ? ? 7E 21 56=partial pdb
virtual bool C_BaseAnimating::CalcAttachments()=A1 ? ? ? ? 83 C1 04=partial pdb
virtual bool C_BaseAnimating::GetAttachment()=55 8B EC 56 8B 75 08 57 8B F9 83 FE 01 7C 6D=partial pdb
virtual void C_BaseAnimating::CalculateIKLocks()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 89 7C 24 18=partial pdb
void C_BaseAnimating::MarkForThreadedBoneSetup()=55 8B EC 51 80 ? ? ? ? ? ? 56 8B F1 0F=partial pdb
virtual bool C_BaseAnimating::UpdateBlending()=55 8B EC 83 EC 0C F6 45=partial pdb
void C_BaseAnimating::DrawSkeleton()=55 8B EC 83 EC 1C 53 8B 5D 08 89=partial pdb
bool C_BaseAnimating::HitboxToWorldTransforms()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 3B ? ? ? ? ? 0F=partial pdb
virtual bool C_BaseAnimating::GetRenderData()=55 8B EC 8B 45 0C 83 E8 00 74 20=partial pdb
virtual void C_BaseAnimating::DoAnimationEvents()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 83=partial pdb
void MaterialFootstepSound()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 F3 ? ? ? ? 8B 47=partial pdb
virtual void C_BaseAnimating::EjectParticleBrass()=55 8B EC A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? 57=partial pdb
virtual void C_BaseAnimating::FireEvent()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B 4D=partial pdb
virtual void C_BaseAnimating::FireObsoleteEvent()=55 8B EC 83 E4 F8 8B 55 10 81 ? ? ? ? ? 53 56 57=partial pdb
virtual bool C_BaseAnimating::Interpolate()=55 8B EC 83 EC 20 56 8B F1 83=partial pdb
virtual void C_BaseAnimating::GetRenderBounds()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 89=partial pdb
virtual void C_BaseAnimating::VPhysicsUpdate()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 1D=partial pdb
virtual void C_BaseAnimating::NotifyShouldTransmit()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 24=partial pdb
virtual void C_BaseAnimating::PostDataUpdate()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 FF 75 08 8B D9=partial pdb
void C_BaseAnimating::ForceSetupBonesAtTime()=55 8B EC 83 EC 10 80 ? ? ? ? ? ? 0F 28=partial pdb
void C_BaseAnimating::CopySequenceTransitions()=55 8B EC 53 8B 5D 08 56 57 8D ? ? ? ? ? C7=partial pdb
virtual void C_BaseAnimating::OnDataChanged()=55 8B EC 83 EC 08 83 7D 08 00 53 56=partial pdb
virtual int C_BaseAnimating::LookupAttachment()=55 8B EC 83 ? ? ? ? ? ? 56 8D 71 FC=partial pdb
virtual bool C_BaseAnimating::Simulate()=53 56 8B F1 57 80 ? ? ? ? ? ? 0F 94=partial pdb
virtual bool C_BaseAnimating::TestCollision()=55 8B EC 8B 55 08 8A 42 44=partial pdb
virtual bool C_BaseAnimating::TestHitboxes()=55 8B EC 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8B D9 8B=partial pdb
virtual float C_BaseAnimating::GetSequenceCycleRate()=55 8B EC 53 57 8B 7D 08 8B D9 85 FF 75=partial pdb
virtual float C_WeaponBaseItem::GetUseTimerDuration()=55 8B EC 83 EC 18 53 56 8B F1 57 83=partial pdb
void C_BaseFlex::ProcessSceneEvents()=55 8B EC 83 EC 08 56 8B F1 83 ? ? ? ? ? ? 75=partial pdb
virtual void CCSPlayerAnimState::DebugShowAnimState()=55 8B EC 51 53 56 57 8B F9 83 ? ? ? ? ? ? 8B=partial pdb
int C_BaseAnimating::LookupPoseParameter()=55 8B EC 57 8B 7D 08 85 FF 75 08=partial pdb
void C_BaseAnimating::ClearRagdoll()=56 8B F1 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 8B 01 6A=partial pdb
void C_BaseEntity::SetLocalOriginDim()=55 8B EC 56 57 8B F9 83 ? ? ? ? ? ? 75=partial pdb
char const near * C_BaseAnimating::GetSequenceName()=55 8B EC 83 7D 08 FF=partial pdb
void C_BaseAnimating::SetModelScale()=55 8B EC 51 F3 ? ? ? ? ? ? ? 8B=partial pdb
virtual void C_BaseAnimating::SetCustomMaterial()=55 8B EC 83 EC 0C 53 8B 5D 08 8B C1 89 45 FC=partial pdb
virtual bool C_BoneFollower::TestCollision()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 8B=partial pdb
virtual void C_BaseAnimating::AttachEntityToBone()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 83=partial pdb
virtual void C_BaseAnimating::NotifyBoneAttached()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 F9 FF 74=partial pdb
void C_BaseAnimating::DestroyBoneAttachments()=56 8B F1 83 ? ? ? ? ? ? 74 4B=partial pdb
void C_BaseAnimating::MoveBoneAttachments()=55 8B EC 83 EC 18 53 8B 5D 08 56 8B=partial pdb
bool Studio_SeqMovement()=55 8B EC 83 EC 14 53 8B 5D 0C 56 8B=partial pdb
void CInterpolatedVarArrayBase<float,1>::SetMaxCount()=55 8B EC 51 8B 55 08 53 56 8B F1 F3=partial pdb
void CUtlMemory<struct AI_Waypoint_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 6D 8B 4B 04 56 57 8B 7D 08 03 F9 6A 30=partial pdb
bool CBitVecT<class CFixedBitVecBase<1>>::IsAllClear()=83 21 01 33=partial pdb
bool CInterpolatedVarArrayBase<float,1>::NoteChanged()=55 8B EC 83 EC 08 53 57 8B F9 F3 ? ? ? ? F3 ? ? ? ? B3 01 66 ? ? ? ? 74 6E=partial pdb
virtual void CCustomMaterialOwner::SetCustomMaterial()=55 8B EC 53 8B D9 8B 4D 0C=partial pdb
void C_AnimationLayer::SetSequence()=55 8B EC 56 8B F1 57 8B 4E 30=partial pdb
void RecvProxy_SequenceChanged()=55 8B EC 56 8B 75 0C 57 8B 7D 08 8B 4E 30 85 C9 74 0C=partial pdb
void RecvProxy_WeightDeltaRateChanged()=55 8B EC 8B 45 08 8B 48 08 8B 45 0C 89 48 24=partial pdb
void RecvProxy_PlaybackRateChanged()=55 8B EC 8B 45 08 8B 48 08 8B 45 0C 89 48 28=partial pdb
void RecvProxy_OrderChanged()=55 8B EC 8B 45 08 56 57 8B 7D 0C 8B 70=partial pdb
void C_BaseAnimatingOverlay::SetNumAnimOverlays()=55 8B EC 53 56 8B 75 08 57 8B F9 8B ? ? ? ? ? 3B=partial pdb
float C_BaseAnimating::ClampCycle()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 57 8B F9 89=partial pdb
class C_AnimationLayer LoopingLerp()=55 8B EC 81 ? ? ? ? ? 8B 45 10 8B 55=partial pdb
class C_AnimationLayer Lerp_Hermite()=55 8B EC 83 EC 08 53 56 57 F3 ? ? ? ? 8B DA=partial pdb
void Lerp_Clamp()=8B 41 18 83 F8=partial pdb
C_BaseCombatCharacter::C_BaseCombatCharacter()=55 8B EC 83 EC 08 56 57 8B F1 E8 ? ? ? ? C7=partial pdb
virtual void C_BaseCombatCharacter::DoMuzzleFlash()=56 8B F1 8B 06 FF ? ? ? ? ? 85 C0 74 0B=partial pdb
virtual void C_BaseCombatCharacter::OnDataChanged()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 08 8B D9=partial pdb
virtual void C_BaseCombatWeapon::SetDormant()=55 8B EC 56 8B F1 8B 46 08 8D=partial pdb
virtual void C_GameInstructor::FireGameEvent()=55 8B EC 51 53 56 57 8B F9 8B 47 F8=partial pdb
bool C_BaseCombatWeapon::IsFirstPersonSpectated()=55 8B EC 53 8B D9 8B 4D 04 57=partial pdb
virtual void CRecordingList::RemoveFromList()=55 8B EC 8D 45 08 83 C1 04=partial pdb
void RecvProxy_AnimTime()=55 8B EC 8B 45 08 8B 4D 0C 53 83 C1 08 56 8B 70 08 57 8B 01 FF 50 28 8B ? ? ? ? ? 99 F7=partial pdb
void RecvProxy_SimulationTime()=55 8B EC 8B 45 08 8B 4D 0C 53 83 C1 08 56 8B 70 08 57 8B 01 FF 50 28 8B ? ? ? ? ? 99 8B=partial pdb
static void C_BaseEntity::RecvProxy_CellBits()=55 8B EC 8B 45 08 56 8B 75 0C 8B 48 08 39=partial pdb
static void C_BaseEntity::RecvProxy_CellX()=55 8B EC 8B 45 08 56 8B 75 0C 8B 48 08 8B 45 10 89 08 8B CE 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 23=partial pdb
static void C_BaseEntity::RecvProxy_CellOrigin()=55 8B EC 56 8B 75 0C 8B CE 57 8B 7D=partial pdb
void RecvProxy_LocalVelocity()=55 8B EC 83 EC 08 8B 45 08 56 8B 75=partial pdb
void SpewInterpolatedVar()=55 8B EC 83 E4 F8 83 EC 68 0F=partial pdb
void C_BaseEntity::Interp_SetupMappings()=55 8B EC 83 EC 08 53 8B 5D 08 89 4D F8 85 DB 74 52=partial pdb
void C_BaseEntity::Interp_RestoreToLastNetworked()=55 8B EC 83 EC 20 57 8B F9 8B=partial pdb
int C_BaseEntity::Interp_Interpolate()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 0F=partial pdb
virtual C_BaseEntity::~C_BaseEntity()=55 8B EC 51 56 8B F1 8D 4E 70=partial pdb
virtual void C_BaseEntity::Clear()=55 8B EC 51 53 56 8B F1 B8=partial pdb
virtual bool C_BaseEntity::InitializeAsClientEntity()=55 8B EC 8B 55 08 56 57 8B F9 85 D2 74 1B=partial pdb
void C_BaseEntity::RemoveFromLeafSystem()=53 56 57 8B F1 E8 ? ? ? ? 8B CE E8 ? ? ? ? 8B CE=partial pdb
virtual void C_BaseEntity::SetRefEHandle()=55 8B EC 8B 45 08 8B 00 89 ? ? ? ? ? 5D=partial pdb
void C_BaseEntity::SetGlobalFadeScale()=55 8B EC 51 57 8B F9 0F 28=partial pdb
virtual int C_BaseEntity::VPhysicsGetObjectList()=55 8B EC 8B ? ? ? ? ? 85 C9 74 14=partial pdb
float C_BaseEntity::HealthFraction()=55 8B EC 51 56 8B F1 8B 06 FF ? ? ? ? ? 85=partial pdb
void C_BaseEntity::UpdateVisibility()=55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B F9 8D=partial pdb
virtual bool C_BaseEntity::ShouldDraw()=56 8B F1 80 ? ? ? ? ? ? 75 04 32=partial pdb
virtual void C_BaseEntity::ReceiveMessage()=55 8B EC 51 53 56 8B 75 0C 8B D9 57 89=partial pdb
virtual bool C_BaseEntity::GetShadowCastDistance()=55 8B EC F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F=partial pdb
virtual void C_BaseEntity::GetRenderBounds()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 77=partial pdb
virtual void C_BaseEntity::SetModelPointer()=55 8B EC 56 8B F1 57 8B 7D 08 3B 7E 6C=partial pdb
virtual bool C_BaseEntity::IsTransparent()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 76 6C=partial pdb
virtual bool C_BaseEntity::GetSoundSpatialization()=55 8B EC 83 EC 18 56 57 8B F9 8B 47 08 8D=partial pdb
virtual bool C_BaseEntity::GetAttachment()=55 8B EC 8B 41 FC 56 57 8D 79 FC 8B CF FF 50=partial pdb
virtual int C_BaseEntity::DrawModel()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 75 07 33=partial pdb
virtual void C_BaseEntity::UpdatePartitionListEntry()=56 57 8B F9 8B 07 FF ? ? ? ? ? BE=partial pdb
virtual void C_BaseEntity::NotifyShouldTransmit()=55 8B EC 57 8B F9 8B 07 FF 50 28=partial pdb
virtual void C_BaseEntity::PreDataUpdate()=55 8B EC 56 8B 75 08 8B D6 57 8B F9 8D=partial pdb
void C_BaseEntity::LinkChild()=55 8B EC 51 53 8B 5D 08 56 8B 75 0C 57 8B F9 89=partial pdb
void C_BaseEntity::SetParent()=55 8B EC 83 E4 F8 83 EC 28 56 57 8B 7D 08 8B=partial pdb
void C_BaseEntity::UnlinkFromHierarchy()=57 8B F9 83 ? ? ? ? ? ? 74 2F=partial pdb
virtual void C_BaseEntity::PostDataUpdate()=55 8B EC 53 56 8B F1 57 80 ? ? ? ? ? ? 74 0A=partial pdb
void C_BaseEntity::OnSimulationTimeChanging()=55 8B EC 83 EC 10 56 8B F1 F3 ? ? ? ? F3=partial pdb
virtual void C_BaseEntity::OnDataUnchangedInPVS()=56 8B F1 8B ? ? ? ? ? 83 FA FF 74 19 0F B7 C2 C1 E0 04 05 ? ? ? ? 74 0C C1 EA 10 39 50 04 75 04 8B 00 EB 02 33 C0 50=partial pdb
void C_BaseEntity::CheckInitPredictable()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 64=partial pdb
void C_BaseEntity::OnStoreLastNetworkedValue()=55 8B EC 83 EC 2C 53 56 8B F1 C6=partial pdb
void C_BaseEntity::Remove()=55 8B EC 51 56 8B F1 F3 ? ? ? ? 80=partial pdb
int C_BaseEntity::BaseInterpolatePart1()=55 8B EC 51 8B 45 14 56=partial pdb
void C_BaseEntity::BaseInterpolatePart2()=55 8B EC 8B D1 8B 4D 08 F3=partial pdb
virtual bool C_BaseEntity::IsSubModel()=56 8B F1 8B 56 6C=partial pdb
void C_BaseEntity::MoveToLastReceivedPosition()=55 8B EC 51 53 56 8B F1 32 DB 8B 06=partial pdb
static void C_BaseEntity::ProcessInterpolatedList()=0F ? ? ? ? ? ? 3D ? ? ? ? 74 3F=partial pdb
virtual bool C_BaseEntity::IsFollowingEntity()=F6 ? ? ? ? ? ? 74 31 80=partial pdb
virtual void C_BaseEntity::OnDataChanged()=55 8B EC 56 8B F1 57 8D 4E F8=partial pdb
virtual void C_BaseEntity::GetColorModulation()=55 8B EC 0F B6 41 6C=partial pdb
void C_BaseEntity::AddStudioDecal()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 78 80=partial pdb
float CalcViewModelBobHelper()=55 8B EC 83 EC 10 A1 ? ? ? ? 56 8B F1 B9=partial pdb
bool C_BaseEntity::SnatchModelInstance()=55 8B EC 51 8B C1 33=partial pdb
virtual bool C_BaseEntity::InSameTeam()=55 8B EC 57 8B F9 8B 4D 08 85 C9 75 07 32 C0 5F 5D C2 04=partial pdb
void C_BaseEntity::SetAbsOrigin()=55 8B EC 83 E4 F8 51 53 56 57 8B F1 E8 ? ? ? ? 8B 7D=partial pdb
void C_BaseEntity::SetLocalAngularVelocity()=55 8B EC 8B 55 08 F3 0F 10 0A=partial pdb
virtual void C_BaseEntity::Teleport()=55 8B EC 53 56 8B F1 8B 4D 08 57 8B=partial pdb
void C_BaseEntity::MoveToAimEnt()=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 83=partial pdb
virtual void C_BaseEntity::BoneMergeFastCullBloat()=55 8B EC 8B 4D 14 8B 45 10 F3=partial pdb
dlight_debug()=55 8B EC 8B ? ? ? ? ? 83 EC 78=partial pdb
void C_BaseEntity::AllocateIntermediateData()=55 8B EC 51 53 8B D9 89 5D FC 83=partial pdb
void C_BaseEntity::ShiftIntermediateDataForward()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 8D=partial pdb
void C_BaseEntity::ShiftIntermediateData_TickAdjust()=55 8B EC 81 ? ? ? ? ? 56 8B F1 89 75 FC 8D=partial pdb
class C_BaseEntity near * FindEntityInFrontOfLocalPlayer()=55 8B EC 8B 4D 04 81 ? ? ? ? ? 56 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 0F ? ? ? ? ? 6A=partial pdb
RemoveDecals_f()=56 E8 ? ? ? ? 8B F0 85 F6 74 2F=partial pdb
void C_BaseEntity::SetRenderMode()=55 8B EC 53 8B 5D 08 56 8B F1 0F=partial pdb
void C_BaseEntity::SetRenderFX()=55 8B EC 0F ? ? ? ? ? ? 53 56=partial pdb
virtual void C_BaseEntity::InitPredictable()=55 8B EC 83 E4 F8 83 EC 40 56 8B 75 0C=partial pdb
virtual int C_BaseEntity::Restore()=55 8B EC 56 57 8B F9 8B 07 FF 50=partial pdb
void C_BaseEntity::SetToolRecording()=55 8B EC 8A 45 08 56 8B F1 84 C0 51=partial pdb
void C_BaseEntity::AddToEntityList()=55 8B EC 53 8B 5D 08 B8 ? ? ? ? 57 8B F9 66 ? ? ? ? ? ? ? 75=partial pdb
void C_BaseEntity::RemoveFromEntityList()=55 8B EC 8B 55 08 0F ? ? ? ? ? ? ? 53=partial pdb
void C_BaseEntity::AddVar()=55 8B EC 83 EC 0C 53 8B D9 56 33=partial pdb
static void C_BaseEntity::SimulateEntities()=55 8B EC A1 ? ? ? ? 83 EC 14 B9=partial pdb
static void C_BaseEntity::PreRenderEntities()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 89 4D=partial pdb
void CTSQueue<class CFunctor near *,0>::PushItem()=55 8B EC 83 E4 F8 56 57 8B F9 8D 4F=partial pdb
struct TSLNodeBase_t near * CTSListBase::Push()=55 8B EC 83 E4 F8 56 57 8B F9 8B 4D 08=partial pdb
struct TSLNodeBase_t near * CTSListBase::Detach()=55 8B EC 83 E4 F8 56 57 8B F9 66=partial pdb
void C_BaseEntity::ClearEffects()=53 56 8B F1 8B ? ? ? ? ? C1=partial pdb
class Vector const near & C_BaseEntity::ScriptGetUp()=A1 ? ? ? ? A8 01 75 08 83 C8 01 A3 ? ? ? ? 8B 01 68=partial pdb
virtual void C_BaseFlex::InitPhonemeMappings()=51 53 56 57 8B D9 68=partial pdb
bool C_BaseAnimating::InitAsClientRagdoll()=55 8B EC FF 75 18 F3 ? ? ? ? 51=partial pdb
virtual bool C_BaseFlex::GetSoundSpatialization()=55 8B EC 83 EC 18 53 56 8B 75 08 57 56=partial pdb
virtual bool CFlexSceneFileManager::InitRecursive()=55 8B EC 8B 45 08 81 ? ? ? ? ? 85 C0 53=partial pdb
void CFlexSceneFileManager::DeleteSceneFiles()=56 8B F1 83 7E 18 00 7E=partial pdb
virtual void C_ClientRagdoll::OnRestore()=55 8B EC 53 56 57 8B F9 83 ? ? ? ? ? ? 75=partial pdb
void C_BaseFlex::ComputeBlendedSetting()=55 8B EC 8B 45 08 0F 28=partial pdb
bool C_BaseFlex::SetupEmphasisBlend()=55 8B EC 83 EC 0C 53 8B 5D 0C 56 8B 75 08 57 33=partial pdb
void CBoneSnapshot::PlaybackSnapshot()=55 8B EC 83 EC 0C 53 8B D9 F3 ? ? ? ? 56=partial pdb
void C_BaseFlex::ProcessVisemes()=55 8B EC 83 EC 14 53 8B D9 56 57 0F=partial pdb
virtual bool C_BaseFlex::UsesFlexDelayedWeights()=83 ? ? ? ? ? ? 74 14 A1=partial pdb
virtual void C_BaseFlex::SetupWeights()=55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B F9 89 7C 24 10=partial pdb
void C_BaseFlex::StartChoreoScene()=55 8B EC 8B ? ? ? ? ? 33 C0 56 57 8D=partial pdb
void C_BaseFlex::ClearSceneEvents()=55 8B EC 51 56 8B F1 8B 4D 08 85 C9 75=partial pdb
float C_BaseFlex::GetFlexWeight()=55 8B EC 51 56 57 8B 7D 08 8B F1 85=partial pdb
int C_BaseFlex::FlexControllerLocalToGlobal()=55 8B EC 83 EC 0C 53 8B 5D 08 56 57 8B F9=partial pdb
CSceneEventInfo::CSceneEventInfo()=55 8B EC 8B 55 08 8B 02 89 01 8B 42 04 89 41 04 8B 42 08 89 41 08 8B 42 0C 89 41 0C 0F=partial pdb
void CUtlMemory<class CSceneEventInfo,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 67 8B 4B 04 56 57 8B 7D 08 03 F9 6A 4C=partial pdb
CIconLesson::CIconLesson()=55 8B EC 56 57 FF 75 14 8B F1=partial pdb
CGameInstructorSymbol::CGameInstructorSymbol()=55 8B EC 56 FF 75 08 8B F1 B8=partial pdb
CBaseLesson::CBaseLesson()=55 8B EC 56 8B F1 B9 ? ? ? ? FF=partial pdb
void CBaseLesson::AddPrerequisite()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 81=partial pdb
virtual void CBaseLesson::TakePlaceOf()=55 8B EC 8B 55 08 8A 42 64=partial pdb
bool CBaseLesson::DoDelayedPlayerSwaps()=53 56 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 0F=partial pdb
virtual void CIconLesson::Start()=55 8B EC 51 56 8B F1 E8 ? ? ? ? 84=partial pdb
virtual void C_BaseFlex::GetToolRecordingState()=55 8B EC 83 EC 14 56 8B F1 89 75 F8=partial pdb
virtual void CIconLesson::TakePlaceOf()=55 8B EC 8B 55 08 56 57 6A=partial pdb
virtual CScriptedIconLesson::~CScriptedIconLesson()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 10=partial pdb
virtual void CIconLesson::SwapOutPlayers()=55 8B EC 53 8B 5D 0C 56 8B 75 08 57 53 56 8B F9 E8 ? ? ? ? 8B=partial pdb
void CSaveGameBrowserDialog::AnimateSelectionPanels()=55 8B EC 83 EC 08 53 56 8B F1 C7 ? ? ? ? ? ? 8B=partial pdb
class ITexture near * GetFullFrameFrameBufferTexture()=55 8B EC 8B 45 08 81 ? ? ? ? ? 83=partial pdb
void CFlashlightEffectManager::TurnOnFlashlight()=55 8B EC 51 8B 45 08 0F 28 C3=partial pdb
vgui::PanelListPanel::PanelListPanel()=55 8B EC 83 EC 14 53 56 57 8B F9 E8 ? ? ? ? C7 ? ? ? ? ? 8D=partial pdb
void CBaseModPanel::NotifySignInCancelled()=55 8B EC 83 E4 F0 83 EC 1C 56 83 EC 08=partial pdb
bool C_BasePlayer::AudioStateIsUnderwater()=55 8B EC 56 8B F1 8B 06 FF ? ? ? ? ? 85 C0 74 21=partial pdb
virtual void C_BasePlayer::SetObserverTarget()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 83 F8 FF 74=partial pdb
virtual void C_BasePlayer::SetVehicleRole()=55 8B EC 8B ? ? ? ? ? 83 EC 40=partial pdb
virtual void C_BasePlayer::OnPreDataChanged()=56 57 8B F9 33 F6 83=partial pdb
void C_BasePlayer::CheckForLocalPlayer()=55 8B EC 51 56 57 8B 7D 08 8B F1 83=partial pdb
virtual void C_BasePlayer::PostDataUpdate()=55 8B EC 83 E4 F8 83 EC 2C 53 56 57 83=partial pdb
virtual void C_BasePlayer::ReceiveMessage()=55 8B EC 56 8B F1 8B 06 FF 50 08 8B 4D 08 3B 48 14 74 0B=partial pdb
void ActivateVguiScreen()=55 8B EC 83 EC 14 56 8B F1 89 75 FC=partial pdb
virtual bool C_BasePlayer::CreateMove()=55 8B EC 56 8B F1 57 8B 7D 0C 8B=partial pdb
virtual int C_BasePlayer::DrawModel()=55 8B EC 56 57 8B F9 8B 4D 04 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74 5B=partial pdb
void C_BasePlayer::CalcChaseCamView()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 57 8B 06=partial pdb
virtual void C_BasePlayer::CalcRoamingView()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8D=partial pdb
virtual void C_BasePlayer::CalcFreezeCamView()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 57 8B 06=partial pdb
void C_BasePlayer::CalcInEyeCamView()=55 8B EC 83 EC 1C 56 57 8B F9 8B 07=partial pdb
virtual bool C_BasePlayer::Simulate()=55 8B EC 83 EC 10 56 57 8B F9 85=partial pdb
void C_BasePlayer::SetAimPunchAngle()=55 8B EC 56 57 8B 7D 08 8D ? ? ? ? ? F3=partial pdb
virtual float C_BasePlayer::GetFOV()=55 8B EC 83 EC 08 56 8B F1 57 8B 06 FF ? ? ? ? ? 83=partial pdb
void C_BasePlayer::OnObserverModeChange()=55 8B EC 83 E4 F8 51 53 8A=partial pdb
void C_BasePlayer::NotePredictionError()=55 8B EC 83 EC 0C 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75=partial pdb
virtual void C_BasePlayer::GetRagdollInitBoneArrays()=55 8B EC 56 8B F1 85 F6 0F=partial pdb
void C_BasePlayer::GetPredictionErrorSmoothingVector()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=partial pdb
virtual bool C_BasePlayer::ShouldShowVOIPIcon()=56 8B F1 8B ? ? ? ? ? 85 C9 74 41 8B=partial pdb
void C_BasePlayer::FogControllerChanged()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 F9 FF 0F=partial pdb
virtual bool C_BasePlayer::PreRender()=55 8B EC 51 56 8B F1 B8 ? ? ? ? 66=partial pdb
void CC_DumpClientSoundscapeData()=55 8B EC 83 E4 C0 83 EC 34 8B 4D=partial pdb
fogplayerparams_t::fogplayerparams_t()=56 8B F1 57 8D 7E 04 C7 ? ? ? ? ? C7 ? ? ? ? ? 8B=partial pdb
class Vector C_BaseToggle::PredictPosition()=55 8B EC 83 ? ? ? ? ? ? 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F 57=partial pdb
void C_BaseViewModel::UpdateParticles()=55 8B EC 83 EC 08 56 8B F1 57 8B 06 FF ? ? ? ? ? 8B F8 85 FF 0F=partial pdb
virtual bool C_BaseViewModel::Simulate()=56 51 8B F1 E8 ? ? ? ? A1=partial pdb
virtual bool C_BaseViewModel::Interpolate()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B F1 57 83=partial pdb
virtual bool C_BaseViewModel::ShouldDraw()=55 8B EC 80 ? ? ? ? ? ? 56 57 8B F9=partial pdb
virtual void C_BaseViewModel::GetBoneControllers()=53 8B D9 56 8B 03=partial pdb
virtual void C_BaseViewModel::OnDataChanged()=55 8B EC 83 7D 08 00 56 8B F1 75 0D=partial pdb
virtual void C_BaseViewModel::PostDataUpdate()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 46=partial pdb
void C_BaseViewModel::RemoveViewmodelStickers()=51 56 57 8B F9 33 F6 39 ? ? ? ? ? 7E 38=partial pdb
class Vector C_BaseEntity::Forward()=55 8B EC 56 8B F1 E8 ? ? ? ? 8B 45 08 8B ? ? ? ? ? 8B=partial pdb
virtual void C_BeamSpotLight::ClientThink()=55 8B EC 83 EC 10 A1 ? ? ? ? 56 8B F1 F3=partial pdb
virtual void C_BeamSpotLight::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 0C 8B ? ? ? ? ? 89=partial pdb
void C_BeamSpotLight::SpotlightCreate()=55 8B EC 83 EC 18 53 56 57 8D=partial pdb
void C_BeamSpotLight::SpotlightDestroy()=56 8B F1 8B ? ? ? ? ? 83 FA FF 74 5F=partial pdb
class Vector C_BeamSpotLight::SpotlightCurrentPos()=55 8B EC 83 EC 70 56=partial pdb
class Vector Pickup_DefaultPhysGunLaunchVelocity()=55 8B EC 8B 4D 0C F3 ? ? ? ? 8B=partial pdb
virtual void C_ColorCorrection::Update()=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 81=partial pdb
virtual void C_DynamicLight::OnDataChanged()=55 8B EC 83 7D 08 00 57 8B F9 75 2A=partial pdb
virtual void C_DynamicLight::Release()=8B ? ? ? ? ? 56 8B ? ? ? ? ? 85 D2 74=partial pdb
virtual void C_DynamicLight::ClientThink()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B 47 F4=partial pdb
virtual void C_EntityDissolve::GetRenderBounds()=55 8B EC 8B ? ? ? ? ? 83 FA FF 74 49=partial pdb
virtual void C_EntityDissolve::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 71=partial pdb
void AngleIMatrix()=55 8B EC 83 E4 F8 83 EC 3C 8B 4D=partial pdb
float C_EntityDissolve::GetFadeOutPercentage()=55 8B EC A1 ? ? ? ? 83 EC 08 F3 ? ? ? ? 57=partial pdb
void C_EntityDissolve::SetupEmitter()=55 8B EC 51 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? BA=partial pdb
virtual int C_EntityDissolve::DrawModel()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 56 57 8B F9 B9=partial pdb
void C_EntityFlame::StopEffect()=56 8B F1 8B ? ? ? ? ? 85 C0 74 38=partial pdb
virtual void C_EntityFreezing::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 14=partial pdb
virtual void CFleckParticles::RenderParticles()=55 8B EC 83 EC 18 57 8B 7D=partial pdb
void CParticleRenderIterator::TestFlushBatch()=55 8B EC 83 EC 10 57 8B F9 89=partial pdb
void CountdownTimer::Start()=55 8B EC 83 EC 10 A1 ? ? ? ? 0F=partial pdb
void CCascadeLightManager::CFullCSMState::Clear()=56 68 ? ? ? ? 8B F1 6A 00 56 E8 ? ? ? ? 8D=partial pdb
float CViewSetup::ComputeViewMatrices()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 8B F1=partial pdb
DebugRenderWireframeFrustum3D()=55 8B EC 83 EC 38 53 8A=partial pdb
CDebugPrimRenderer2D::CDebugPrimRenderer2D()=56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 06 C7 ? ? ? ? ? ? 89 46 10 81=partial pdb
void CDebugPrimRenderer2D::AddScreenspaceLine2D()=55 8B EC 83 EC 1C 56 8B F1 F3=partial pdb
void VectorPerpendicularToVector()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 33=partial pdb
virtual C_CSGameRules::~C_CSGameRules()=55 8B EC 8B ? ? ? ? ? 83 EC 08 56=partial pdb
void CCascadeLightManager::DeinitRenderTargets()=57 8B F9 80 ? ? ? ? ? ? 74 3E=partial pdb
void CCascadeLightManager::Draw3DDebugInfo()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC A1 ? ? ? ? 81=partial pdb
void CFrustum::BuildShadowFrustum()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 56=partial pdb
void CCascadeLightManager::RenderViews()=55 8B EC 81 ? ? ? ? ? 53 56 57 33 FF=partial pdb
float VectorNormalize()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 2C=partial pdb
virtual void CCrossHairColorProxy::OnBind()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9=partial pdb
void CCascadeLightManager::DumpStatus()=55 8B EC 83 E4 C0 A1 ? ? ? ? 83 EC 3C B9=partial pdb
virtual void C_EnvDOFController::OnDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 74 26=partial pdb
virtual void C_EnvParticleScript::OnDataChanged()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 85 F6 75 64=partial pdb
void C_EnvParticleScript::CreateParticle()=55 8B EC 83 EC 10 57 FF=partial pdb
void C_EnvParticleScript::DestroyAllParticles()=55 8B EC 53 56 57 8B F9 0F=partial pdb
virtual void C_EnvParticleScript::FireEvent()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 4D 10=partial pdb
void GCSDK::CJobMgr::PauseJob()=55 8B EC 83 EC 10 53 8B 5D 08 56 8B F1 57=partial pdb
void C_EnvProjectedTexture::ShutDownLightHandle()=56 8B F1 57 BF ? ? ? ? 0F ? ? ? ? ? ? 66 3B C7 74 32=partial pdb
void C_EnvProjectedTexture::UpdateLight()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 89 ? ? ? ? ? ? E8=partial pdb
virtual void C_EnvScreenOverlay::PostDataUpdate()=55 8B EC 56 57 FF 75 08 8B F1 E8 ? ? ? ? 80=partial pdb
virtual void C_EnvScreenEffect::ReceiveMessage()=55 8B EC 57 8B F9 8B 07 FF 50 08=partial pdb
virtual int C_FireSprite::DrawModel()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? F3=partial pdb
virtual int C_FireFromAboveSprite::DrawModel()=55 8B EC 53 56 8B F1 57 F3=partial pdb
void RecvProxy_Scale()=55 8B EC 8B 45 08 8B 4D 0C F3 ? ? ? ? F3 ? ? ? ? ? ? ? 0F 2E C1 F3=partial pdb
virtual C_FireSmoke::~C_FireSmoke()=55 8B EC 51 53 8B D9 56 8B ? ? ? ? ? C7=partial pdb
void C_FireSmoke::Start()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 56=partial pdb
virtual void C_SlideshowDisplay::Spawn()=56 8B F1 83 EC 08 C7=partial pdb
virtual void C_Fish::ClientThink()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC A1 ? ? ? ? 83 EC 38=partial pdb
virtual void C_Fish::OnDataChanged()=55 8B EC 83 7D 08 00 75 49=partial pdb
virtual int C_FuncAreaPortalWindow::DrawModel()=55 8B EC 51 53 8B D9 80 ? ? ? ? ? ? 75=partial pdb
virtual void C_BreakableSurface::OnRestore()=55 8B EC 51 53 57 6A 07=partial pdb
virtual void C_BreakableSurface::OnPreDataChanged()=55 8B EC 83 EC 08 83 7D 08 00 56=partial pdb
virtual void C_BreakableSurface::OnDataChanged()=55 8B EC 83 EC 18 53 8B 5D 08 56 57 8B F9 53=partial pdb
virtual int C_BreakableSurface::DrawModel()=55 8B EC 57 8B F9 80 ? ? ? ? ? ? 74 58=partial pdb
void C_BreakableSurface::UpdateEdgeType()=55 8B EC 83 EC 10 53 8B 5D 08 56 8B F1 3B=partial pdb
int C_BreakableSurface::FindFirstRenderTexture()=55 8B EC 0F ? ? ? ? ? ? B8 ? ? ? ? 53 56 57 66 3B D0 74 3D=partial pdb
void C_BreakableSurface::DrawSolidBlocks()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89=partial pdb
virtual bool CBreakableSurfaceProxy::Init()=55 8B EC 56 8B F1 8D 55 0B 8B 4D 08 6A 00 52 68 ? ? ? ? 8B 01 FF 50 2C 89=partial pdb
virtual void CBreakableSurfaceProxy::OnBind()=55 8B EC 56 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF 75 08 8B F1 E8 ? ? ? ? 83 C4 14 85 C0 74 0E=partial pdb
virtual bool CConveyorMaterialProxy::Init()=55 8B EC 56 68 ? ? ? ? 8B F1 8B=partial pdb
virtual void CTextureScrollMaterialProxy::OnBind()=55 8B EC 83 E4 F8 83 EC 58 56 57 8B F9 8B 4D=partial pdb
virtual void CDustEffect::RenderParticles()=55 8B EC 83 EC 1C 57 8B 7D=partial pdb
virtual void CDustEffect::SimulateParticles()=55 8B EC 83 EC 10 8B ? ? ? ? ? 89 4D FC=partial pdb
virtual void C_FuncSmokeVolume::Update()=55 8B EC 83 E4 F8 83 EC 70 56 8B=partial pdb
virtual void C_FuncSmokeVolume::RenderParticles()=55 8B EC 83 EC 28 F3 ? ? ? ? ? ? ? 0F=partial pdb
void C_FuncSmokeVolume::FillVolume()=55 8B EC 81 ? ? ? ? ? 56 8B F1 33=partial pdb
virtual void C_FuncTrackTrain::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 0F=partial pdb
void GameInstructorEnable_ChangeCallback()=55 8B EC F3 ? ? ? ? 0F ? ? ? ? ? ? 56 9F=partial pdb
virtual bool C_GameInstructor::Init()=55 8B EC 83 E4 F8 56 57 8B F9 33 C0=partial pdb
void C_GameInstructor::SaveGameBlock()=55 8B EC 51 A1 ? ? ? ? 53 8B D9 B9=partial pdb
bool C_GameInstructor::ReadSaveData()=55 8B EC 81 ? ? ? ? ? 57 8B F9 89 7D F4 FF=partial pdb
bool C_GameInstructor::OpenOpportunity()=55 8B EC 83 EC 10 56 57 8B 7D 08 8B C1=partial pdb
gameinstructor_dump_open_lessons()=55 8B EC 51 53 8B ? ? ? ? ? 56 57 68 ? ? ? ? 68=partial pdb
void C_GameInstructor::UpdateInactiveLesson()=55 8B EC 8B ? ? ? ? ? 53 57 8B ? ? ? ? ? 85=partial pdb
void C_GameInstructor::ReadLessonsFromFile()=55 8B EC 83 EC 50 53 56 57 8B F9 E8=partial pdb
?Grow@?$CUtlMemory@UVoiceCommandMenuItem_t@@H@@QAEXH@Z_0()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 6D 8B 4B 04 56 57 8B 7D 08 03 F9 6A 48=partial pdb
_C_EntityFlame_CreateObject()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 E8=partial pdb
void CreateHairballCallback()=55 8B EC 83 EC 30 56 57 33=partial pdb
void CUtlMemory<struct touchevent_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 6D 8B 4B 04 56 57 8B 7D 08 03 F9 6A 24=partial pdb
virtual void C_InfoOverlayAccessor::OnDataChanged()=55 8B EC 83 7D 08 00 57 8B F9 75 24=partial pdb
virtual bool C_KeyValueSaver::Init()=33 C0 81 ? ? ? ? ? 74=partial pdb
bool C_KeyValueSaver::WriteDirtyKeyValues()=55 8B EC 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 06=partial pdb
virtual void C_LightGlow::OnDataChanged()=55 8B EC 83 EC 20 56 57 FF 75 08=partial pdb
virtual void C_MaterialModifyControl::OnDataChanged()=55 8B EC 83 7D 08 00 56 8B F1 75 2B=partial pdb
virtual bool CMaterialModifyProxy::Init()=55 8B EC 8B 45 08 89 41 14 B0=partial pdb
virtual void CMaterialModifyProxy::OnBind()=55 8B EC 53 8B D9 8B 4D 08 85 C9 0F=partial pdb
virtual void CMaterialModifyAnimatedProxy::OnBind()=55 8B EC 83 EC 0C 56 8B F1 8B 4E=partial pdb
virtual void C_MovieDisplay::ReceiveMessage()=55 8B EC 56 8B F1 8B 06 FF 50 08 8B 4D 08 3B 48 14 74 10=partial pdb
virtual void C_ParticleSystem::PreDataUpdate()=55 8B EC 8A ? ? ? ? ? 88 ? ? ? ? ? 5D=partial pdb
virtual void C_ParticleSystem::PostDataUpdate()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 85 F6 0F ? ? ? ? ? 80=partial pdb
void StartParticleEffect()=55 8B EC 83 EC 34 80 ? ? ? ? ? ? 53 56 57 8B=partial pdb
void ParticleEffectStopCallback()=55 8B EC 56 8B 75 08 57 8B 4E=partial pdb
virtual bool C_PhysicsProp::GetRenderData()=55 8B EC 8B 45 0C 57 8B F9=partial pdb
void CPixelVisibilityQuery::ResetOcclusionQueries()=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B 4F=partial pdb
void CPixelVisibilitySystem::DeleteUnusedQueries()=55 8B EC 51 8B 45 08 56 89=partial pdb
virtual bool CTraceFilterGlow::ShouldHitEntity()=55 8B EC 53 56 57 8B 7D 08 8B D9 8B CF 8B 07 FF 50 0C=partial pdb
COcclusionQuerySet::COcclusionQuerySet()=57 FF ? ? ? ? ? 8B F9 E8=partial pdb
void COcclusionQuerySet::BeginQueryDrawing()=55 8B EC 51 8B 01 53 8B 5D 08 56 8B 48=partial pdb
void COcclusionQuerySet::EndQueryDrawing()=55 8B EC 53 8B 19=partial pdb
void RecvProxy_PlasmaScale()=55 8B EC 8B 45 08 8B 4D 0C F3 ? ? ? ? F3 ? ? ? ? ? ? ? 0F 2E C1 9F=partial pdb
void RecvProxy_PlasmaScaleTime()=55 8B EC 8B 45 08 8B 55 0C F3=partial pdb
virtual void C_Plasma::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 08 8D 4F F8 E8 ? ? ? ? F6=partial pdb
virtual void C_PlayerResource::OnDataChanged()=55 8B EC 51 53 57 8B F9 8D=partial pdb
virtual void C_PlayerResource::ClientThink()=8B ? ? ? ? ? 53 56 BE ? ? ? ? 8B=partial pdb
int C_CSGameRules::GetNextGunGameWeapon()=55 8B EC 56 8B 75 08 83 FE 40=partial pdb
virtual void C_PlayerResource::UpdatePlayerName()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8B D9 8D=partial pdb
virtual int C_PlayerResource::GetDeaths()=55 8B EC 56 8B F1 57 8B 7D 08 57 8B 06 8B=partial pdb
virtual bool C_PlayerResource::IsHLTV()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 81=partial pdb
virtual bool C_PlayerResource::IsFakePlayer()=55 8B EC 83 E4 F8 8B 01 81 ? ? ? ? ? FF=partial pdb
void C_PlayerResource::FillXuidText()=55 8B EC 8B ? ? ? ? ? 83 EC 08 53 8B=partial pdb
virtual void C_PlayerResource::DeviceReset()=81 ? ? ? ? ? E8 ? ? ? ? C2=partial pdb
virtual void C_Fish::Spawn()=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=partial pdb
virtual void C_PointCamera::GetToolRecordingState()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? A1 ? ? ? ? A8=partial pdb
bool IsNodeUnderCrosshair()=55 8B EC 81 ? ? ? ? ? 56 8B F1 C7 ? ? ? ? ? ? 8D=partial pdb
virtual void CHudCommentary::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 74 10=partial pdb
virtual void CHudCommentary::Paint()=55 8B EC 83 EC 24 53 8B D9 56 89=partial pdb
virtual void C_DynamicProp::OnDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8D 4E F8=partial pdb
C_PostProcessController::C_PostProcessController()=56 57 8B F9 E8 ? ? ? ? 6A=partial pdb
virtual void C_PostProcessController::PostDataUpdate()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 74 08=partial pdb
virtual void C_Prop_Hallucination::OnDataChanged()=56 8B F1 80 ? ? ? ? ? ? 75 32=partial pdb
virtual int C_Prop_Hallucination::DrawModel()=55 8B EC 83 EC 08 83 ? ? ? ? ? ? 57 8B F9 75 1F=partial pdb
virtual float CPhysicsPropMultiplayer::GetMass()=D9 41 08=partial pdb
virtual bool CPhysicsPropMultiplayer::IsAsleep()=80 79 E0=partial pdb
C_PlantedC4::C_PlantedC4()=55 8B EC 83 EC 0C 56 8B F1 E8 ? ? ? ? 83=partial pdb
bool C_DynamicProp::TestBoneFollowers()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 8D 45=partial pdb
virtual bool C_DynamicProp::TestCollision()=55 8B EC 8A ? ? ? ? ? 24=partial pdb
void C_DynamicProp::UpdateGlow()=55 8B EC 83 E4 F8 83 EC 20 56 57 8B F9 89 7C 24 10=partial pdb
virtual void C_DynamicProp::GetRenderBounds()=55 8B EC 57 8B F9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 07=partial pdb
virtual void CClientTools::RemoveClientRenderable()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 74 0F 83 7D 08 00 8D 56 F8 0F 94 C1 E8 ? ? ? ? 8D=partial pdb
virtual void C_BasePropDoor::PostDataUpdate()=55 8B EC 83 7D 08 00 53 8B=partial pdb
virtual bool C_BasePropDoor::TestCollision()=55 8B EC 83 EC 08 53 8B D9 89 5D FC 83 ? ? ? ? ? ? 75=partial pdb
void CGlowObject::SetColor()=55 8B EC 56 8B 31 57=partial pdb
virtual void CRopeManager::DrawRenderCache()=55 8B EC 83 E4 F0 83 EC 78 56 57 8B F9 89=partial pdb
void LockNodeDirection()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 F3 ? ? ? ? ? ? ? 8B=partial pdb
C_RopeKeyframe::C_RopeKeyframe()=51 56 57 8B F9 E8 ? ? ? ? 8D ? ? ? ? ? C7=partial pdb
void C_RopeKeyframe::ShakeRope()=55 8B EC 51 8B ? ? ? ? ? C6=partial pdb
virtual void C_RopeKeyframe::OnDataChanged()=55 8B EC 81 ? ? ? ? ? 53 57 FF 75 08 8B F9 E8=partial pdb
void C_RopeKeyframe::RunRopeSimulation()=53 56 8B F1 57 33 FF 39 ? ? ? ? ? 7E 25=partial pdb
virtual bool C_RopeKeyframe::GetAttachment()=55 8B EC 8B 45 08 8B D1 83 EC=partial pdb
void C_BaseViewModel::AddViewmodelStatTrak()=55 8B EC 8B 45 08 83 EC 18 57=partial pdb
bool C_RopeKeyframe::DidEndPointMove()=55 8B EC 83 EC 10 8B D1 B8=partial pdb
bool C_RopeKeyframe::DetectRestingState()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 56 57 8B 7B=partial pdb
bool C_RopeKeyframe::GetEndPointPos()=55 8B EC 56 8B F1 F6 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
bool C_RopeKeyframe::GetEndPointAttachment()=55 8B EC 56 57 8B F9 F6 ? ? ? ? ? ? 0F=partial pdb
void C_RopeKeyframe::CalcLightValues()=55 8B EC 83 EC 50 8B C1 57=partial pdb
virtual void C_RopeKeyframe::ReceiveMessage()=55 8B EC 53 8B D9 8B 03 FF 50=partial pdb
CEffectData::CEffectData()=55 8B EC 8B 55 08 F3 0F 7E 02 66 0F D6 01 8B 42 08 89 41 08 F3 ? ? ? ? 66 ? ? ? ? 8B 42 14 89 41 14 F3=partial pdb
virtual void vgui::ListViewPanel::ApplyItemChanges()=55 8B EC 8B 55 08 85 D2 0F=partial pdb
void RecvProxy_ForcedClientTime()=55 8B EC 8B 45 08 8B 48 08 8B 45 10 89 08 8B 4D 0C 8B=partial pdb
char const near * C_SceneEntity::GetSceneFileName()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? FF 50 24=partial pdb
void C_SceneEntity::ResetActorFlexesForScene()=55 8B EC 83 EC 0C 8B ? ? ? ? ? 53 56 33=partial pdb
void C_RecipientFilter::UsePredictionRules()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 85 C9 74 69=partial pdb
virtual void C_SceneEntity::SetupClientOnlyScene()=55 8B EC 83 E4 F8 8A 45 10=partial pdb
virtual void C_SceneEntity::PostDataUpdate()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B F1 57=partial pdb
virtual void C_SceneEntity::ClientThink()=83 ? ? ? ? ? ? 56 8D 71 F4=partial pdb
void C_SceneEntity::CheckQueuedEvents()=55 8B EC 83 EC 18 8B C1 C7=partial pdb
bool C_SceneEntity::GetHWMorphSceneFileName()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 0C 8B F1 68=partial pdb
int CStudioHdr::iRelativeAnim_Internal()=55 8B EC 8B 51 04 85=partial pdb
virtual void C_SlideshowDisplay::OnDataChanged()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 85 FF 75=partial pdb
virtual void C_SoundscapeSystem::LevelInitPostEntity()=83 ? ? ? ? ? ? 75 15 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 44 A3 ? ? ? ? 83=partial pdb
virtual void C_SoundscapeSystem::Shutdown()=53 56 8B F1 57 8B ? ? ? ? ? 83 EF 01 78 2F=partial pdb
playsoundscape()=55 8B EC 8B 4D 08 83 EC 08 8B 11 83=partial pdb
void C_SoundscapeSystem::UpdateLoopingSounds()=55 8B EC 83 E4 F8 83 EC 18 8B D1 F3=partial pdb
void C_SoundscapeSystem::StartNewSoundscape()=55 8B EC 83 E4 F8 83 EC 2C 53 8B D9 8B=partial pdb
void C_SoundscapeSystem::UpdateLoopingSound()=55 8B EC 8B ? ? ? ? ? 83 EC 6C=partial pdb
void C_SoundscapeSystem::UpdateRandomSounds()=55 8B EC 83 EC 08 57 8B F9 F3 ? ? ? ? F3=partial pdb
virtual void C_SpatialEntity::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 0C 8B 47=partial pdb
virtual void C_SpatialEntity::InitSpatialEntity()=56 8B F1 51 C7 ? ? ? ? ? ? 8B 06 FF ? ? ? ? ? 8B=partial pdb
virtual void C_SpatialEntity::ClientThink()=55 8B EC 83 E4 F8 83 EC 0C 0F 57 C9=partial pdb
virtual void C_SpotlightEnd::OnDataChanged()=55 8B EC 83 7D 08 00 75 14=partial pdb
virtual void C_SpotlightEnd::ClientThink()=55 8B EC 51 56 8B F1 0F 57=partial pdb
virtual void C_Sun::OnDataChanged()=55 8B EC 83 EC 20 53 56 FF=partial pdb
virtual void C_SunlightShadowControl::ClientThink()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 57 80 ? ? ? ? ? ? 0F=partial pdb
void RecvProxy_PlayerList()=55 8B EC 8B 55 08 8B 45 10 56 8B=partial pdb
void RecvProxy_Owner()=55 8B EC 8B 45 08 8B ? ? ? ? ? FF 70 08 8B 00 8B 40=partial pdb
void RecvProxy_CappingTeam()=55 8B EC 8B 45 08 8B ? ? ? ? ? FF 70 08 8B 00 8B 11=partial pdb
void RecvProxy_CapLayout()=55 8B EC 8D ? ? ? ? ? 56 8D 70=partial pdb
virtual void C_Tesla::ReceiveMessage()=55 8B EC 83 EC 40 53 56 8B 75=partial pdb
virtual void C_Tesla::ClientThink()=56 57 8B F9 8B ? ? ? ? ? 83 F8 FF 74 26=partial pdb
void UntouchAllTriggerSoundOperator()=56 33 F6 80 ? ? ? ? ? ? 74=partial pdb
C_PropJeep::C_PropJeep()=55 8B EC 83 E4 F8 83 EC 0C 56 8B F1 E8=partial pdb
virtual bool C_PropJeep::Simulate()=55 8B EC 83 EC 3C 56 8B F1 57=partial pdb
virtual void C_PropJeep::UpdateViewAngles()=55 8B EC 83 E4 F8 83 EC 40 56 57 8B F9 8B=partial pdb
void C_Func_Dust::AttemptSpawnNewParticle()=55 8B EC 83 EC 28 56 57 BA=partial pdb
class KeyValues near * CacheKeyValuesForFile()=55 8B EC 83 EC 0C 57 8B F9 85=partial pdb
virtual void C_VGuiScreen::OnDataChanged()=55 8B EC 53 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 85=partial pdb
void C_VGuiScreen::CreateVguiScreen()=55 8B EC 83 EC 0C 53 8B D9 56 83 ? ? ? ? ? ? 74=partial pdb
bool C_VGuiScreen::IsVisibleToTeam()=55 8B EC 8B ? ? ? ? ? D1=partial pdb
bool C_VGuiScreen::IsBackfacing()=55 8B EC 83 EC 14 56 8B F1 8B 06 FF=partial pdb
void C_VGuiScreen::DrawScreenOverlay()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89=partial pdb
virtual int C_VGuiScreen::DrawModel()=55 8B EC 81 ? ? ? ? ? 57 8B F9 89 7D E8=partial pdb
static void C_VoteController::RecvProxy_VoteType()=55 8B EC 8B 45 08 8B 4D 0C 8B 40 08 39 ? ? ? ? ? 74=partial pdb
static void C_VoteController::RecvProxy_VoteOption()=55 8B EC 8B 4D 08 56 8B 75=partial pdb
void _CallMemberFunction0()=55 8B EC 8B 4D 08 FF 55=partial pdb
virtual void BlankImage::GetContentSize()=55 8B EC 8B 45 08 C7 ? ? ? ? ? 8B=partial pdb
virtual void C_WaterBullet::OnDataChanged()=55 8B EC 53 56 8B 75 08 8B D9 56 E8 ? ? ? ? 85=partial pdb
virtual void C_WaterLODControl::OnDataChanged()=56 8B F1 8B ? ? ? ? ? 51 8B 01 F3=partial pdb
virtual void CCamoMaterialProxy::OnBind()=55 8B EC 56 8B F1 8B 4E 0C 85 C9 74 22=partial pdb
virtual float CBoundedCvar_InterpRatio::GetFloat()=55 8B EC A1 ? ? ? ? 83 EC 0C 56 8B F1 A8 01 75 22=partial pdb
float clamp<float>()=55 8B EC A1 ? ? ? ? 83 EC 08 56 8B F1 A8 01 75 22=partial pdb
CFunctorJob::CFunctorJob()=56 8B F1 C7 ? ? ? ? ? ? 8D 4E 14 C7=partial pdb
bool ns_address::SetFromString()=55 8B EC 83 EC 0C 33 C0 53 56 8B=partial pdb
bool BoneSetupCompare()=55 8B EC 8B 45 08 8B ? ? ? ? ? 8B 45=partial pdb
virtual int CHLClient::Init()=55 8B EC 51 53 8B ? ? ? ? ? 56 68=partial pdb
virtual void CHLClient::HudUpdate()=55 8B EC 83 E4 C0 83 EC 3C A1=partial pdb
virtual bool CHLClient::IN_IsKeyDown()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? FF 75=partial pdb
virtual bool CHLClient::GetPlayerView()=55 8B EC 8B ? ? ? ? ? 6A FF 8B=partial pdb
void ConfigureCurrentSystemLevel()=55 8B EC 8B ? ? ? ? ? 83 EC 2C 53=partial pdb
virtual void CHLClient::LevelShutdown()=55 8B EC 83 E4 F8 83 EC 30 C6=partial pdb
virtual void CHLClient::InitSprite()=55 8B EC 8B 4D 08 85 C9 74 08 FF=partial pdb
virtual void CHLClient::ShutdownSprite()=55 8B EC 8B 4D 08 85 C9 74 05=partial pdb
void OnEffectStringTableChanged()=55 8B EC 8B ? ? ? ? ? 6A 01 6A=partial pdb
void CHLClient::PrecacheMaterial()=55 8B EC 53 56 8B 75 08 8D 4E=partial pdb
void ProcessOnDataChangedEvents()=55 8B EC 51 8B ? ? ? ? ? 53 56 57 8B 01 6A=partial pdb
virtual void CHLClient::RenderView()=55 8B EC FF 75 10 8B ? ? ? ? ? FF 75 0C=partial pdb
virtual int CHLClient::GetSpectatorTarget()=55 8B EC 8B 45 08 85 C0 74 06 C7 ? ? ? ? ? E8=partial pdb
virtual void CHLClient::MarkEntitiesAsTouching()=55 8B EC 8B 4D 08 83 EC 54=partial pdb
CAIHintVector::CAIHintVector()=55 8B EC 53 56 8B F1 57 C7=partial pdb
virtual void CKeyBindingListenerMgr::RemoveListener()=55 8B EC 51 53 8B C1 BB=partial pdb
void CHudSaveStatus::SaveStarted()=56 68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 8B F0 85 F6 74 21=partial pdb
void UTIL_ReplaceKeyBindings()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 85 F6 0F ? ? ? ? ? 66=partial pdb
CMatStubHandler::CMatStubHandler()=56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74 4A=partial pdb
virtual char const near * CClassMap::Lookup()=55 8B EC A1 ? ? ? ? 83 EC 34=partial pdb
void CClientThinkList::SetNextClientThink()=55 8B EC 83 EC 08 0F 28 C2=partial pdb
void CClientThinkList::RemoveThinkable()=55 8B EC 8B 45 08 56 51=partial pdb
void CClientThinkList::PerformThinkFunction()=55 8B EC 51 56 8B 75 08 57 51=partial pdb
void CClientThinkList::PerformThinkFunctions()=55 8B EC 83 EC 1C 53 8B D9 56 57 0F=partial pdb
void CClientThinkList::CleanUpDeleteList()=55 8B EC 51 53 8B D9 56 57 33 FF 8B 73 2C=partial pdb
virtual void CClientAlphaProperty::SetDesyncOffset()=55 8B EC 66 8B 45 08 66 89 41=partial pdb
virtual void CClientAlphaProperty::SetFade()=55 8B EC F3 ? ? ? ? F3 ? ? ? ? 0F 2F CA=partial pdb
int CClientAlphaProperty::ComputeRenderEffectBlend()=55 8B EC 51 56 57 8B F9 0F=partial pdb
virtual int CClientEntityList::NumberOfEntities()=55 8B EC 80 7D 08 01 75 0A=partial pdb
void CClientEntityList::RemovePVSNotifier()=55 8B EC 83 EC 10 56 8B 75 08 57 8B F9 8B CE=partial pdb
virtual void CClientEntityList::OnAddEntity()=55 8B EC 51 8B 45 0C 53 56 8B F1 57=partial pdb
class C_BaseEntity near * C_BaseEntityIterator::Next()=53 56 8B F1 BB ? ? ? ? 57 66=partial pdb
virtual void CClientLeafSystem::LevelInitPreEntity()=55 8B EC 83 EC 10 53 56 8B F1 57 81=partial pdb
virtual void CClientLeafSystem::DisableCSMRendering()=55 8B EC 66 8B 45 08 BA ? ? ? ? 66 3B C2 74 4E 0F B7 C0 53 8A 5D 0C 56 8D 14 80 C1 E2 04 03 51 24 0F B7 72 18 8B C6 C0 E8 02=partial pdb
virtual void CClientLeafSystem::SetModelType()=55 8B EC 51 53 8B 5D 08 B8 ? ? ? ? 8B=partial pdb
virtual void CClientLeafSystem::EnableRendering()=55 8B EC 66 8B 45 08 BA ? ? ? ? 66 3B C2 74 24 0F B7 C0 8D 04 80 C1 E0 04 03 41 24 80 7D 0C 00 74 0D=partial pdb
virtual void CClientLeafSystem::EnableBloatedBounds()=55 8B EC 8B 55 08 B8 ? ? ? ? 56 8B F1 66=partial pdb
virtual void CClientLeafSystem::RenderWithViewModels()=55 8B EC 53 57 8B 7D 08 B8 ? ? ? ? 8B D9 66 3B F8 0F ? ? ? ? ? 0F B7 C7 56 8D 34 80 C1 E6 04 03 73 24 80 7D 0C 00 0F B7 46 16 74 32=partial pdb
virtual void CClientLeafSystem::RemoveRenderable()=55 8B EC 83 EC 08 53 8B D9 56 57 8D=partial pdb
virtual int CClientLeafSystem::GetRenderableLeaves()=55 8B EC 53 8B 5D 08 57 8B F9 0F B7=partial pdb
virtual bool CClientLeafSystem::GetRenderableLeaf()=55 8B EC 8B 55 08 56 8B F1 0F B7 C2=partial pdb
virtual bool CClientLeafSystem::IsRenderableInPVS()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 4D 08=partial pdb
virtual unsigned short CClientLeafSystem::AddShadow()=55 8B EC 53 56 57 8D=partial pdb
virtual void CClientLeafSystem::RemoveShadow()=55 8B EC 53 56 8B 75 08 57 8B F9 56 8D=partial pdb
void CClientLeafSystem::AddShadowToLeaf()=55 8B EC 56 57 FF 75 0C 8B 7D 08 8B F1 57 8D=partial pdb
void CClientLeafSystem::AddRenderableToLeaf()=55 8B EC 53 8B 5D 08 57 FF 75 0C 8B F9 53=partial pdb
void CClientLeafSystem::AddRenderableToLeaves()=55 8B EC 53 56 57 8B 7D 0C 33 F6=partial pdb
virtual bool CClientLeafSystem::EnumerateLeaf()=55 8B EC 56 8B F1 FF ? ? ? ? ? 84=partial pdb
void CClientLeafSystem::InsertIntoTree()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 45 08 53 56=partial pdb
virtual void CClientLeafSystem::RenderableChanged()=55 8B EC 56 57 8B F9 8D ? ? ? ? ? FF=partial pdb
int CClientLeafSystem::ExtractDuplicates()=55 8B EC 53 33 D2=partial pdb
virtual void CClientLeafSystem::ComputeAllBounds()=55 8B EC 83 E4 F8 83 EC 08 56 8B ? ? ? ? ? 57=partial pdb
void DrawCrosshairRect()=55 8B EC 51 A1 ? ? ? ? B9 ? ? ? ? 53 56 57=partial pdb
virtual void CClientLeafSystem::BuildRenderablesList()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B 5D 08 56=partial pdb
virtual void ClientModeShared::ReloadSchemeWithRoot()=55 8B EC 51 8B 55 08 56 8B F1 85 D2 74=partial pdb
virtual bool ClientModeShared::CreateMove()=55 8B EC 56 8D 75 04 8B 0E E8 ? ? ? ? 8B=partial pdb
virtual void ClientModeShared::Update()=55 8B EC A1 ? ? ? ? 53 56 8B F1 B9=partial pdb
GetFogColor()=55 8B EC 83 E4 C0 A1 ? ? ? ? 83 EC 34 53 56 57 A8 01 75 14=partial pdb
virtual void ClientModeShared::LevelInit()=55 8B EC 83 E4 F8 83 EC 20 56 57 8B F9 8B 4F=partial pdb
virtual void ClientModeShared::EnableWithRootPanel()=55 8B EC 8B 55 08 56 8B F1 85 D2 74 0C=partial pdb
virtual void ClientModeShared::Disable()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 10 85 C0 74 0D=partial pdb
virtual float ClientModeShared::GetViewModelFOV()=55 8B EC 8B 4D 04 83 EC 08 57=partial pdb
void CTextureAllocator::Reset()=55 8B EC 83 EC 0C 56 8B F1 57 89=partial pdb
unsigned short CTextureAllocator::AllocateTexture()=55 8B EC 53 56 8B 75 08 57 83 FE=partial pdb
void CTextureAllocator::DeallocateTexture()=55 8B EC 8B 45 08 8B D1 0F=partial pdb
void CTextureAllocator::MarkUsed()=55 8B EC 83 EC 10 0F ? ? ? ? ? ? 0F=partial pdb
static bool CDefOps<unsigned short>::LessFunc()=55 8B EC 8B 45 08 66 8B 08=partial pdb
float CVisibleShadowList::ComputeScreenArea()=55 8B EC 51 8B ? ? ? ? ? 56 F3=partial pdb
virtual void CVisibleShadowList::EnumShadow()=55 8B EC 83 EC 2C 53 89=partial pdb
void OnShadowFromWorldLights()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 8A ? ? ? ? ? 85=partial pdb
virtual void CClientShadowMgr::InitRenderTargets()=55 8B EC 83 EC 10 56 8B F1 57 6A=partial pdb
void CClientShadowMgr::ShutdownDepthTextureShadows()=56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 4E=partial pdb
void CClientShadowMgr::InitRenderToTextureShadows()=55 8B EC 83 EC 0C 57 8B F9 80=partial pdb
virtual void CClientShadowMgr::SetShadowColor()=55 8B EC 51 F3 ? ? ? ? ? ? ? 53 8A=partial pdb
virtual void CClientShadowMgr::LevelInitPreEntity()=55 8B EC 83 EC 14 56 8B F1 6A=partial pdb
void CClientShadowMgr::UpdateAllShadows()=53 56 8B F1 BB ? ? ? ? 57 0F B7 46 38=partial pdb
void CS_MuzzleFlashCallback()=55 8B EC 83 EC 68 0F=partial pdb
virtual void CClientShadowMgr::SetFalloffBias()=55 8B EC 0F B7 45 08 53 8B=partial pdb
void CClientShadowMgr::RemoveShadowFromDirtyList()=55 8B EC 53 8B D9 8D 45=partial pdb
virtual void CClientShadowMgr::DestroyShadow()=55 8B EC 51 53 56 8B F1 57 80=partial pdb
void CClientShadowMgr::QueueShadowForDestruction()=55 8B EC 53 8B D9 33 C0=partial pdb
void C_Inferno::DrawFire()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8D=partial pdb
void vgui::RichText::SetText()=55 8B EC 81 ? ? ? ? ? 8B 4D 0C 8D=partial pdb
bool CClientShadowMgr::ShouldUseParentShadow()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 28=partial pdb
void CClientShadowMgr::UpdateDirtyShadowsHalfRate()=55 8B EC 83 EC 14 53 56 57 8B F9 BB=partial pdb
virtual void CClientShadowMgr::AddToDirtyShadowList()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? B8=partial pdb
void CClientShadowMgr::UpdateShadow()=55 8B EC 83 EC 08 8B 45 08 53 56 0F=partial pdb
bool CClientShadowMgr::DrawRenderToTextureShadow()=55 8B EC 83 EC 1C 53 56 57 8B 7D 0C 8B F1=partial pdb
void CClientShadowMgr::DrawRenderToTextureShadowLOD()=55 8B EC A1 ? ? ? ? 53 8B D9 B9=partial pdb
int CClientShadowMgr::BuildActiveFlashlightList()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B C1 56 57 89 45 FC=partial pdb
virtual void CClientShadowMgr::DrawVolumetrics()=8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B ? ? ? ? ? 8B 01=partial pdb
virtual void CClientShadowMgr::GetFrustumExtents()=55 8B EC 83 E4 F8 83 EC 58 0F=partial pdb
bool CClientShadowMgr::IsFlashlightTarget()=55 8B EC 0F B7 45 08 56 69=partial pdb
int vgui::Dar<unsigned long>::AddElement()=55 8B EC 56 57 8B F9 8B 77 0C=partial pdb
void FourVectors::TransformBy()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 40=partial pdb
void FX_Dust()=55 8B EC 83 EC 18 53 56 8B F1 8B=partial pdb
bool AsyncCaption_t::LoadFromFile()=55 8B EC 83 EC 48 53 8B D9 8B=partial pdb
RecvProxy_SolidFlags()=55 8B EC 8B 45 08 53 8B 5D 0C 56 0F=partial pdb
void CCollisionProperty::Init()=55 8B EC 8B 45 08 56 57 8B F9 8D=partial pdb
void CCollisionProperty::SetSolid()=55 8B EC 53 8B 5D 08 56 57 8B F9 0F B6 47=partial pdb
void CCollisionProperty::CollisionAABBToWorldAABB()=55 8B EC 83 E4 F0 83 EC 2C 56 8B F1 F6=partial pdb
void VectorRotate()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 20 8B 43=partial pdb
bool IntersectRayWithBox()=55 8B EC 51 8B 45 0C 0F=partial pdb
float ComputeScreenSize()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B=partial pdb
static void CGlowOverlay::DrawOverlays()=55 8B EC 51 8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B=partial pdb
??0ContinuousProgressBar@vgui@@QAE@PAVPanel@1@PBD@Z_0()=55 8B EC 57 51 6A 01 68 ? ? ? ? 6A=partial pdb
virtual void CCommentaryModelViewer::OnCommand()=55 8B EC 56 8B 75 08 BA ? ? ? ? 57 8B F9 8B CE E8 ? ? ? ? 85 C0 74 0C 8B ? ? ? ? ? 56 8B 01 FF 50 1C 8B=partial pdb
void CCommentaryModelViewer::HandleMovementInput()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 6A=partial pdb
virtual bool CConVarMaterialProxy::Init()=55 8B EC 83 E4 F8 51 53 56 57 68 ? ? ? ? 8B F1=partial pdb
virtual void CConVarMaterialProxy::OnBind()=55 8B EC 83 EC 14 56 8B F1 8B 46=partial pdb
??_Ebad_cast@std@@UAEPAXI@Z_0()=55 8B EC 56 8B F1 8D 46 04 C7 ? ? ? ? ? 50 E8 ? ? ? ? 83 C4 04 F6 45 08 01 74 0B 6A 0C=partial pdb
_wmemset()=55 8B EC 8B 4D 10 85 C9 74 1B=partial pdb
std::locale::id::operator unsigned int()=55 8B EC 51 56 8B F1 83 3E 00 75 24=partial pdb
class LessonVariableInfo const near * GetLessonVariableInfo()=55 8B EC 83 EC 20 53 8B 5D 08 0F 57 C0=partial pdb
unknown_libname_2()=55 8B EC FF 71 14 8B=partial pdb
unknown_libname_3()=55 8B EC FF 71 10 8B 4D 08 E8=partial pdb
virtual void CCycleMaterialProxy::OnBind()=55 8B EC 83 E4 F8 83 EC 18 56 8B F1 8B=partial pdb
virtual void C_HostageCarriableProp::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 22=partial pdb
virtual int C_WeaponCSBase::GetRecoilMagnitude()=55 8B EC 56 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? F3=partial pdb
void NDebugOverlay::Text()=55 8B EC 83 EC 6C 56 8B F1 8B=partial pdb
void CHud::Init()=55 8B EC 83 E4 F8 83 EC 44 53 56 8B ? ? ? ? ? 8B D9=partial pdb
void FastSpriteX4_t::ReplicateFirstEntryToOthers()=8B D1 56 BE=partial pdb
virtual bool CDetailModel::GetAttachment()=55 8B EC 8B 55 0C 56 8B F1 8B=partial pdb
virtual void CDetailModel::GetRenderBounds()=55 8B EC 83 E4 F8 56 57 8B F9 F6=partial pdb
virtual int CDetailModel::DrawModel()=55 8B EC 8B 45 0C 56 8B F1 8A=partial pdb
void CDetailModel::InitShapedSprite()=55 8B EC A1 ? ? ? ? 56 8B F1 68 ? ? ? ? 8B 08 8B 01 FF 50 04 89=partial pdb
void CDetailModel::DrawTypeShapeCross()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 8D=partial pdb
void CDetailModel::DrawTypeShapeTri()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8D 55 B4=partial pdb
void CDetailObjectSystem::DestroyCachedSpriteMeshes()=57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 56=partial pdb
virtual CDetailObjectSystem::~CDetailObjectSystem()=55 8B EC 51 56 8B F1 8B 56 68=partial pdb
void CDetailObjectSystem::UnserializeModelDict()=55 8B EC 81 ? ? ? ? ? 8D 45 08=partial pdb
void CDetailObjectSystem::UnserializeDetailSprites()=55 8B EC 83 EC 0C 8D 45 FC 53 56 57=partial pdb
static bool CDetailObjectSystem::SortLessFunc()=55 8B EC 8B 45 08 8B 48 04 8B 45=partial pdb
UTIL_MeshBuildSpriteQuad()=55 8B EC 56 8B F1 57 8B FA 8B=partial pdb
static float float16::Convert16bitFloatTo32bits()=55 8B EC 51 8B C1 BA=partial pdb
class RecvProp RecvPropInt()=55 8B EC 51 53 56 57 89 55 FC 8B D9=partial pdb
void RecvProxy_FloatToFloat()=55 8B EC 8B 45 08 8B 48 08 8B 45 10 89 08 5D=partial pdb
void RecvProxy_Int32ToInt8()=55 8B EC 8B 45 08 8A 48 08 8B 45 10=partial pdb
void RecvProxy_Int32ToInt16()=55 8B EC 8B 45 08 66 8B 48 08 8B 45 10 66 89=partial pdb
void RecvProxy_StringToString()=55 8B EC 8B 55 08 8B 02 8B 48 0C=partial pdb
void RecvProxy_UtlVectorElement()=55 8B EC 56 57 8B 7D 08 8B 07=partial pdb
void RecvProxy_UtlVectorElement_DataTable()=55 8B EC 8B 45 10 56 8B 75 08 57 FF=partial pdb
void DataTableRecvProxy_LengthProxy()=55 8B EC 8B 45 08 56 8B 75 10 8B 40=partial pdb
C_BaseCSGrenade::C_BaseCSGrenade()=55 8B EC 83 EC 4C 53 56 8B F2=partial pdb
virtual void CDummyMaterialProxy::OnBind()=55 8B EC FF 75 08 68 ? ? ? ? 6A=partial pdb
RecvProxy_EntIndex()=55 8B EC 8B 45 08 8B 40 08 85=partial pdb
void CBaseEntityList::CEntInfoList::AddToTail()=55 8B EC 8B 55 0C 56 8B 72=partial pdb
EntityParticleTrailInfo_t::EntityParticleTrailInfo_t()=55 8B EC 83 EC 08 53 56 8B F1 C7 ? ? ? ? ? ? 8D=partial pdb
cl_tree_sway_dir()=55 8B EC 8B ? ? ? ? ? 83 EC 0C 8B 01 56 FF=partial pdb
void CEnvWindShared::Init()=55 8B EC 51 8B 45 08 56 8B F1 57 8D=partial pdb
void CEnvWindShared::ComputeWindVariation()=55 8B EC 51 56 8B F1 0F 28 C1 F3 ? ? ? ? 0F=partial pdb
void CEnvWindShared::UpdateTreeSway()=55 8B EC 83 EC 10 56 57 8B F9 0F=partial pdb
float CEnvWindShared::WindThink()=55 8B EC 83 EC 1C 56 0F=partial pdb
virtual CClientShadowMgr::~CClientShadowMgr()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 51 53=partial pdb
char const near * ParseFile()=55 8B EC 51 56 8B F1 57 8B FA 85=partial pdb
virtual void C_BasePlayer::GetFlashlightOffset()=55 8B EC 8B ? ? ? ? ? 83 EC 14 81=partial pdb
void C_FuncLadder::SetEndPoints()=55 8B EC 8B 55 08 83 EC 0C F3=partial pdb
bool CFloatInput::Init()=55 8B EC 81 ? ? ? ? ? 56 57 8B F1 8B=partial pdb
virtual bool CResultProxy::Init()=55 8B EC 81 ? ? ? ? ? 53 56 57 68 ? ? ? ? 8B D9=partial pdb
virtual float CBloodSprayEmitter::UpdateRoll()=55 8B EC 8B 45 08 F3 ? ? ? ? F3 ? ? ? ? F3 0F 59=partial pdb
virtual void CBloodSprayEmitter::UpdateVelocity()=55 8B EC 83 E4 F8 56 8B 75 08 57 8B F9 F6=partial pdb
void FX_BloodSpray()=55 8B EC 81 ? ? ? ? ? 53 8B DA F3=partial pdb
void FX_BloodBulletImpact()=55 8B EC 83 EC 48 53 8B DA=partial pdb
void BloodImpactCallback()=55 8B EC 83 EC 14 33 C9=partial pdb
virtual class Vector CExplosionParticle::UpdateColor()=55 8B EC 56 8B 75 0C F3 ? ? ? ? F3 ? ? ? ? F3=partial pdb
virtual void C_BaseExplosionEffect::Create()=55 8B EC 51 8B 55 08 56 8B F1 8D=partial pdb
virtual void CGameMovement::WaterMove()=55 8B EC 83 EC 4C 57=partial pdb
virtual float CWaterExplosionParticle::UpdateAlpha()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? F3 ? ? ? ? F3 ? ? ? ? F3 0F 5C C8 F3 ? ? ? ? ? ? ? 0F=partial pdb
virtual void C_WaterExplosionEffect::CreateCore()=55 8B EC 81 ? ? ? ? ? 56 8B F1 F6=partial pdb
virtual void C_WaterExplosionEffect::CreateDebris()=55 8B EC 83 EC 50 57 8B F9 89=partial pdb
virtual void CWarpOverlay::Draw()=55 8B EC 83 EC 24 53 8B D9 F6=partial pdb
virtual void CFleckParticles::Setup()=55 8B EC F3 ? ? ? ? 83 EC 14 8B=partial pdb
SetImpactControlPoint()=55 8B EC 83 EC 18 53 8B 5D 0C 8D=partial pdb
void PlayImpactSound()=55 8B EC 83 EC 38 56 57 8B F9 8B F2 8B=partial pdb
float RemapAngleRange()=8B 41 10 0F 28=partial pdb
CFXStaticLine::CFXStaticLine()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? C6 46 08 01 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 68=partial pdb
virtual unsigned int C_OP_NoiseEmitter::Emit()=55 8B EC 83 E4 F8 81 ? ? ? ? ? F2 ? ? ? ? 56 57 8B F9 83 EC 08 89 7C 24 24=partial pdb
class Vector GetTracerOrigin()=55 8B EC 83 EC 18 53 56 8B F2 8B D9 57=partial pdb
void TracerCallback()=55 8B EC 83 EC 50 B8=partial pdb
void ParticleTracerCallback()=55 8B EC 83 E4 F8 81 ? ? ? ? ? B8 ? ? ? ? 53=partial pdb
void UTIL_GetNormalizedColorTintAndLuminosity()=55 8B EC 8B 45 08 85 C0 74 32=partial pdb
void FX_WaterRipple()=55 8B EC 83 EC 74 56 57 8B F9 8B=partial pdb
virtual void CSplashParticle::UpdateVelocity()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? F3 ? ? ? ? 0F=partial pdb
virtual float CSplashParticle::UpdateAlpha()=55 8B EC 83 EC 0C 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 55=partial pdb
virtual void CGameMovement::TracePlayerBBox()=55 8B EC 83 E4 F0 83 EC 5C 56 8B=partial pdb
void CClientShadowMgr::UpdateBrushShadow()=55 8B EC 51 56 8B F1 8B 4D 08 57 89=partial pdb
virtual void CGameMovement::UnlockTraceFilter()=55 8B EC 8B 45 08 FF ? ? ? ? ? C7=partial pdb
virtual unsigned int CGameMovement::PlayerSolidMask()=55 8B EC 80 7D 08 00 B8 ? ? ? ? B9=partial pdb
virtual int CGameMovement::GetCheckInterval()=55 8B EC 8B 45 08 83 F8 03 0F=partial pdb
float CGameMovement::ComputeConstraintSpeedFactor()=55 8B EC 8B 51 08 83=partial pdb
virtual void CGameMovement::CheckParameters()=55 8B EC 83 EC 20 0F=partial pdb
virtual void CGameMovement::SetupMovementBounds()=55 8B EC 83 EC 40 56 8B F1 8B ? ? ? ? ? 85=partial pdb
virtual void CGameMovement::CheckWaterJump()=55 8B EC 81 ? ? ? ? ? 57 8B F9 0F=partial pdb
virtual void CGameMovement::WaterJump()=8B D1 8B 42 04=partial pdb
virtual void CGameMovement::StepMove()=55 8B EC 83 EC 38 53 57 8B F9=partial pdb
virtual void CGameMovement::Accelerate()=55 8B EC 56 8B F1 8B 06 8B 40 6C=partial pdb
virtual void CGameMovement::StayOnGround()=55 8B EC 83 EC 70 53 56 8B=partial pdb
virtual void CCSGameMovement::PreventBunnyJumping()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 C7 ? ? ? ? ? ? 8D=partial pdb
virtual void CGameMovement::FullWalkMove()=55 8B EC 83 E4 F8 56 8B F1 57 8B 06=partial pdb
void CGameMovement::FullObserverMove()=55 8B EC 83 E4 F0 83 EC 48 56 8B F1 57 8B 4E=partial pdb
virtual bool CGameMovement::CheckJumpButton()=55 8B EC 51 56 8B F1 8B 4E 04 80=partial pdb
virtual int CGameMovement::TryPlayerMove()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 33=partial pdb
virtual bool CGameMovement::OnLadder()=55 8B EC 56 8B 75 08 F7=partial pdb
virtual bool CHudChat::MsgFunc_SayText2()=55 8B EC 81 ? ? ? ? ? 57 8B F9 C7 ? ? ? ? ? ? 89=partial pdb
void CGameMovement::PushEntity()=55 8B EC 83 EC 10 8B 45 08 53 56 57 8B 79=partial pdb
virtual int CGameMovement::ClipVelocity()=55 8B EC 8B 55 0C 33=partial pdb
virtual bool CGameMovement::IsMovingPlayerStuck()=80 ? ? ? ? ? ? 74 1C 80 ? ? ? ? ? ? 75 13 8B=partial pdb
int CGameMovement::CheckStuck()=55 8B EC A1 ? ? ? ? 83 EC 7C=partial pdb
int CGameMovement::GetWaterContentsForPointCached()=55 8B EC 53 56 8B F1 57 8B 4E 04=partial pdb
virtual void CGameMovement::GetWaterCheckPosition()=55 8B EC 83 EC 08 56 8B F1 57 8B 46=partial pdb
virtual bool CGameMovement::CheckWater()=55 8B EC 83 EC 0C 56 8B F1 8D 4D F4 51 6A=partial pdb
virtual void CGameMovement::CategorizePosition()=55 8B EC 83 E4 F8 83 EC 7C 53 56 57 8B F9 C7=partial pdb
virtual void CGameMovement::FixPlayerCrouchStuck()=55 8B EC 83 EC 70 53 57=partial pdb
virtual bool CGameMovement::CanUnduck()=55 8B EC 83 EC 74 56 57 8B F9 C7=partial pdb
virtual void CGameMovement::FinishUnDuck()=55 8B EC 83 EC 24 56 57 8B F9 8B 47=partial pdb
virtual void CGameMovement::FinishUnDuckJump()=55 8B EC 83 EC 24 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual void CGameMovement::FinishDuck()=55 8B EC 83 EC 18 57 8B F9 8B 47=partial pdb
virtual void CGameMovement::StartUnDuckJump()=55 8B EC 83 EC 0C 56 57 8B F9 6A=partial pdb
virtual void CGameMovement::SetDuckedEyeOffset()=55 8B EC 83 EC 3C F3=partial pdb
virtual bool CGameMovement::CanUnDuckJump()=55 8B EC 83 EC 64 53 8B 59=partial pdb
virtual void CGameMovement::PlayerMove()=55 8B EC 83 EC 08 57 8B F9 8B 07=partial pdb
virtual bool CGameRules::ShouldCollide()=55 8B EC 8B 4D 08 8B 55 0C 3B CA 7E=partial pdb
virtual float C_GameRules::GetAmmoDamage()=55 8B EC 56 E8 ? ? ? ? 8B 4D 08 8B=partial pdb
void CFpsSelectiveHistogram::Fire()=55 8B EC 8B 45 08 8B D1 39=partial pdb
unknown_libname_4()=55 8B EC 8B 45 08 5D C2 08=partial pdb
unsigned char CFpsHistory::Update()=0F ? ? ? ? ? ? 72 23=partial pdb
void CBaseGameStats::StatsLog()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 56 8B 75=partial pdb
virtual void CBaseGameStats::Event_MapChange()=55 8B EC FF 75 0C 68 ? ? ? ? 51=partial pdb
bool PhysModelParseSolidByIndex()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 57 89 74 24 10=partial pdb
COptionsScaleform::OptionBind_t::OptionBind_t()=55 8B EC 8B 45 0C 83 EC 5C=partial pdb
float CBaseGameStats_Driver::AverageStat<float>()=55 8B EC 53 8B 5D 08 0F 57 D2=partial pdb
float CBaseGameStats_Driver::StdDevStat<float>()=55 8B EC 53 8B 5D 08 0F 57 C9=partial pdb
virtual void CHudGeiger::Paint()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 8B 46=partial pdb
void CPrediction::RunSimulation()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 33 D2 56=partial pdb
void CGlowOverlay::UpdateGlowObstruction()=55 8B EC 81 ? ? ? ? ? 80 7D 0C 00 56=partial pdb
void CGlowOverlay::Activate()=53 56 8B F1 BB ? ? ? ? B8 ? ? ? ? 66=partial pdb
void CDebugPrimRenderer2D::RenderDebugLines2D()=55 8B EC A1 ? ? ? ? 83 EC 30 53 8B D9 B9=partial pdb
void HintClear()=55 8B EC 8B 4D 04 56 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74 32=partial pdb
void C_HLTVCamera::CalcChaseCamView()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B F1 57 83 7E 3C=partial pdb
int C_HLTVCamera::GetMode()=55 8B EC 56 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 8B=partial pdb
void C_HLTVCamera::CalcInEyeCamView()=55 8B EC 83 EC 18 53 56 57 6A 00 68 ? ? ? ? 68=partial pdb
void C_HLTVCamera::CalcChaseOverview()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 70=partial pdb
void C_HLTVCamera::CalcRoamingView()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B ? ? ? ? ? 83=partial pdb
void C_HLTVCamera::CalcFixedView()=55 8B EC 8B 55 08 83 EC 40=partial pdb
void C_HLTVCamera::CalcView()=55 8B EC 83 EC 08 53 56 8B F1 57 80 7E 68=partial pdb
void C_HLTVCamera::SpecNextPlayer()=55 8B EC 83 E4 F8 83 EC 0C 8B ? ? ? ? ? 8B=partial pdb
void C_HLTVCamera::SpecPlayerByAccountID()=55 8B EC 83 E4 F8 83 EC 0C 8B ? ? ? ? ? 53 56 57 8B 42=partial pdb
void C_HLTVCamera::Update()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 C6 45 E8=partial pdb
void C_HLTVCamera::SetAutoDirector()=55 8B EC 83 E4 F8 83 EC 1C 53 56 8B 75 08 8B D9=partial pdb
bool RenderGroupLessFunc()=55 8B EC 8B 45 08 56 57 8B 08 8B 45 0C 8B=partial pdb
CHudElement::CHudElement()=55 8B EC C6 41 08=partial pdb
virtual bool CHudElement::ShouldDraw()=55 8B EC 51 53 56 57 8B F9 8B 4F 3C=partial pdb
void CHudTexture::DrawSelf()=55 8B EC 8B ? ? ? ? ? 2B ? ? ? ? ? 51=partial pdb
void CHud::RemoveHudElement()=55 8B EC 56 57 8B F9 33 F6 8B 4F=partial pdb
bool CHud::IsHidden()=55 8B EC 83 EC 10 80 79=partial pdb
bool CHud::LockRenderGroup()=55 8B EC 83 EC 08 53 56 8B F1 8D 45=partial pdb
bool CHud::IsRenderGroupLockedFor()=55 8B EC 83 EC 0C 53 56 8B F1 8D 45 F8 57 8B 7D 0C=partial pdb
int CHud::AddHudRenderGroup()=55 8B EC 51 56 8B F1 8D 45 08=partial pdb
void CHudIcons::Init()=55 8B EC 83 EC 28 8B C1 89=partial pdb
class CHudTexture near * CHudIcons::GetIcon()=55 8B EC 8B 45 08 83 EC 08 56 8B F1 85 C0 74 25 89 45 F8 8D 4E 04=partial pdb
void CHudIcons::SetupNewHudTexture()=55 8B EC 51 56 57 8B 7D 08 80=partial pdb
virtual void CHudAnimationInfo::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 07 8B CF 6A 01=partial pdb
void CHudAnimationInfo::PaintString()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 8B 01 FF ? ? ? ? ? FF=partial pdb
virtual void CBaseHudChatEntry::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 83 F8 40 74=partial pdb
wchar_t near * ReadLocalizedString()=55 8B EC 53 56 8B 75 10 8B D9 57=partial pdb
CMovieDisplayScreen::CMovieDisplayScreen()=55 8B EC 56 68 ? ? ? ? FF 75 08 8B F1 E8 ? ? ? ? C7=partial pdb
virtual void CBaseHudChatLine::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 07 8B CF 6A 00=partial pdb
virtual void CBaseHudChatLine::PerformFadeout()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 53 56 8B=partial pdb
CBaseHudChatInputLine::CBaseHudChatInputLine()=55 8B EC 8B 45 08 8B D0 53=partial pdb
virtual void CHudChatFilterButton::DoClick()=53 56 8B F1 E8 ? ? ? ? 8B 06=partial pdb
virtual void CBaseHudChat::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B D9 6A=partial pdb
virtual bool CBaseHudChat::MsgFunc_SayText()=55 8B EC 83 E4 F8 8B 45 08 83 EC 20 8B=partial pdb
virtual int CBaseHudChat::GetFilterForString()=55 8B EC 8B 4D 08 BA ? ? ? ? E8=partial pdb
virtual void CBaseHudChat::MsgFunc_VoiceSubtitle()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 89=partial pdb
virtual void CBaseHudChat::StartMessageMode()=55 8B EC 83 EC 10 53 8B D9 56 8B 75=partial pdb
void CBaseHudChat::FadeChatHistory()=55 8B EC A1 ? ? ? ? 83 EC 1C 53 56 8B=partial pdb
virtual class Color CBaseHudChat::GetClientColor()=55 8B EC 83 7D 0C 00 75=partial pdb
virtual void CBaseHudChatLine::InsertAndColorizeText()=55 8B EC 83 EC 14 56 8B F1 57 8B ? ? ? ? ? 85=partial pdb
CPropData::CPropData()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 56 57 68 ? ? ? ? 8B=partial pdb
void CBaseHudChat::Send()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 8D=partial pdb
static bool AsyncCaption_t::BlockInfo_t::Less()=55 8B EC 8B 55 08 56 8B 75 0C 8B 02 8B 0E 3B C1 75 06=partial pdb
virtual void C_BaseAnimating::ResetLatched()=55 8B EC 51 8A 45 14=partial pdb
CCloseCaptionItem::~CCloseCaptionItem()=56 8B F1 83 ? ? ? ? ? ? 7E 63=partial pdb
void AsyncCaptionData_t::DestroyResource()=56 8B F1 8A 46 10=partial pdb
virtual void CAsyncCaptionResourceManager::Shutdown()=55 8B EC 51 53 57 8B D9=partial pdb
virtual void CHudCloseCaption::OnTick()=55 8B EC 83 EC 08 53 56 57 8B F9 8D 4F=partial pdb
void CHudCloseCaption::Process()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 80 7D=partial pdb
CAsyncCaption::~CAsyncCaption()=55 8B EC 51 56 8B F1 57 33 FF 8B=partial pdb
bool CAsyncCaption::GetStream()=55 8B EC 83 EC 0C 8B 45 08 33=partial pdb
void CPrediction::StorePredictionResults()=55 8B EC 83 EC 0C 56 57 8B 7D 08 33=partial pdb
void CHudCloseCaption::ProcessAsyncWork()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 0F=partial pdb
bool CHudCloseCaption::AddAsyncWork()=55 8B EC 83 EC 08 53 56 57 8B F9 F3 ? ? ? ? 8B ? ? ? ? ? 81=partial pdb
void CHudCloseCaption::ProcessSentenceCaptionStream()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 81=partial pdb
void CHudCloseCaption::_ProcessCaption()=55 8B EC 83 EC 1C 53 56 57 8D=partial pdb
bool CHudCloseCaption::AddFileToCaptionDictionary()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 8B=partial pdb
cc_flush()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 0F 8B ? ? ? ? ? 6A=partial pdb
cc_showblocks()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 10=partial pdb
void CHudCloseCaption::LoadColorMap()=55 8B EC 81 ? ? ? ? ? 83 65=partial pdb
void CHudCloseCaption::SetUseAsianWordWrapping()=80 ? ? ? ? ? ? 56 8B F1 75 67=partial pdb
void CUtlMemory<struct AsyncCaption_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 67 8B 4B 04 56 57 8B 7D 08 03 F9 6A 54=partial pdb
virtual void CHudHintDisplay::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 33 8D 45 08 57=partial pdb
virtual void CHudHintDisplay::FireGameEvent()=55 8B EC 56 57 8B F9 8B 4D 08 68=partial pdb
void CHudHintDisplay::LocalizeAndDisplay()=55 8B EC 8B 55 08 33 C0 66=partial pdb
virtual void CHudHintKeyDisplay::OnThink()=55 8B EC 83 EC 10 53 8B D9 33 C9 56 57 89=partial pdb
virtual void CLCDItemAggregate::Wipe()=55 8B EC 53 8B 5D 08 56 57 53 8B F1 E8 ? ? ? ? 33=partial pdb
virtual void CLCDItemText::Create()=55 8B EC 56 8B F1 57 8B 7D 08 8B CF FF 76 18=partial pdb
void CLCD::ParseIconMappings()=55 8B EC 81 ? ? ? ? ? 57 8B 7D 08 85 FF 0F ? ? ? ? ? 8B=partial pdb
void CDescribeData::Describe()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B 45 10 BA=partial pdb
void CLCD::LookupToken()=55 8B EC 8B 4D 0C 81=partial pdb
void CLCD::BuildUpdatedText()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 8D ? ? ? ? ? 80=partial pdb
void CLCD::UpdateChat()=55 8B EC 83 EC 24 56 8B F1 57=partial pdb
void CLCD::DoGlobalReplacements()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 C7 ? ? ? ? ? ? 89=partial pdb
virtual void near * CParticleSystemQuery::GetModel()=55 8B EC 83 EC 14 8B 45 08 56 C7=partial pdb
void CLocatorTarget::Update()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 80 7E=partial pdb
void CLocatorTarget::SetCaptionText()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 0C 33=partial pdb
void CLocatorTarget::UpdateVguiTarget()=55 8B EC 51 53 8B D9 B9 ? ? ? ? 56 57 66=partial pdb
char const near * CLocatorTarget::UseBindingImage()=55 8B EC 56 8B 71 3C 85=partial pdb
virtual C_Plasma::~C_Plasma()=53 8B D9 C7 ? ? ? ? ? ? ? ? ? 56 57 BF=partial pdb
void CLocatorPanel::AnimateIconAlpha()=55 8B EC 83 EC 0C 53 8B 5D 08 F3=partial pdb
bool CLocatorPanel::ValidateTargetTextures()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? F3=partial pdb
bool CLocatorPanel::IconsAreIntersecting()=55 8B EC 53 8B 5D 08 57 8B 7D 0C 8A=partial pdb
virtual void CLocatorPanel::PaintTarget()=55 8B EC 51 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 84 C0 0F=partial pdb
void CLocatorPanel::DrawPointerBackground()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 81=partial pdb
void CLocatorPanel::DrawStaticIcon()=55 8B EC 83 E4 F8 83 EC 38 56 57 8B F9 8B=partial pdb
virtual void C_ShadowControl::OnDataChanged()=55 8B EC 83 EC 10 83 ? ? ? ? ? ? 53=partial pdb
void CLocatorPanel::DrawIndicatorArrow()=55 8B EC 83 E4 F8 83 EC 54 66=partial pdb
virtual void CPDumpPanel::ApplySettings()=55 8B EC 56 8B F1 6A 00 8B=partial pdb
CleanupZeros()=56 57 8B F9 8B F2 8A=partial pdb
void CPDumpPanel::PredictionDumpColor()=55 8B EC 80 7D 08 00 75 2E 80=partial pdb
FovChanged_Callback()=55 8B EC 8B 45 08 85 C0 8B ? ? ? ? ? 56 BE ? ? ? ? 0F 45 F0 8B 01 8B=partial pdb
void CHud::DoElementThink()=55 8B EC 83 EC 0C 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual void CHudSaveStatus::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B=partial pdb
virtual void CHudSaveStatus::OnThink()=55 8B EC 51 56 8B F1 83 ? ? ? ? ? ? 74 3E=partial pdb
virtual void vgui::CConsolePanel::PerformLayout()=55 8B EC 83 EC 08 53 56 57 8B D9 E8 ? ? ? ? 8B 03=partial pdb
static bool IGameSystem::InitAllSystems()=55 8B EC 51 53 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
unsigned char near * ImgUtl_ReadJPEGAsRGBA()=55 8B EC 81 ? ? ? ? ? 53 56 57 68 ? ? ? ? 51=partial pdb
CUtlCharConversion::CUtlCharConversion()=55 8B EC 83 EC 28 53 56 57 6A 08=partial pdb
unsigned char near * ImgUtl_ReadBMPAsRGBA()=55 8B EC 83 EC 34 53 56 57 68=partial pdb
virtual void CLoadingScreenScaleform::OnEvent()=55 8B EC 83 EC 18 53 56 57 6A 00 6A=partial pdb
bool ImgUtl_WriteRGBAToJPEG()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 83 65=partial pdb
cam_command()=55 8B EC 8B 4D 08 8B 01 83 F8 02 7D 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 83 F8 01 7F=partial pdb
virtual bool CInput::CAM_IsThirdPersonOverview()=55 8B EC 80 ? ? ? ? ? ? 75 06 32 C0 5D C2 04=partial pdb
void ImageLoader::NormalizeNormalMapRGBA8888()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 85=partial pdb
virtual void CGameMovement::AirMove()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 40 F3 ? ? ? ? ? ? ? 0F=partial pdb
virtual void CInput::Joystick_Advanced()=55 8B EC 83 EC 08 53 56 57 33=partial pdb
virtual void CInput::Joystick_Querry()=55 8B EC 51 8B 01 8D 55 FF=partial pdb
virtual void CInput::JoyStickSampleAxes()=55 8B EC 83 E4 F0 83 EC 58 56 0F=partial pdb
void CInput::MotionControllerMove()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 89=partial pdb
virtual void CInput::JoyStickMove()=55 8B EC 83 E4 F8 83 EC 20 83 ? ? ? ? ? ? 56 57 8B F1 0F ? ? ? ? ? 80=partial pdb
virtual void CInput::JoyStickApplyMovement()=55 8B EC 83 E4 F8 8B 01 81 ? ? ? ? ? 6A=partial pdb
float CInput::UpdateAndGetQuickTurnYaw()=55 8B EC 83 EC 08 56 8B F1 F3 ? ? ? ? 0F 57=partial pdb
void IN_CenterView_f()=55 8B EC A1 ? ? ? ? 83 EC 0C A8 01 75 19=partial pdb
virtual struct kbutton_t near * CInput::FindKey()=55 8B EC 56 8B 71 3C 57=partial pdb
CHltvReplaySystem::CHltvReplaySystem()=55 8B EC 83 EC 1C 53 56 8B F1 8D 4D E4 57 68=partial pdb
void CRumbleEffects::Init()=55 8B EC 83 EC 14 56 8B F1 0F 57=partial pdb
virtual int CInput::KeyEvent()=55 8B EC 83 EC 10 83 7D 08 00 53=partial pdb
virtual float CInput::KeyState()=55 8B EC 51 56 8B 75 08 0F=partial pdb
void CInput::ComputeSideMove()=55 8B EC 83 E4 F8 83 EC 10 56 8B F1 57 6A FF 8B 06 FF ? ? ? ? ? 85 C0 74=partial pdb
void CInput::ComputeUpwardMove()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 57 81=partial pdb
virtual void C_FireTrail::Update()=55 8B EC A1 ? ? ? ? 83 EC 0C 56 8B F1 A8 01 75 29=partial pdb
virtual void CInput::CheckSplitScreenMimic()=55 8B EC 8B ? ? ? ? ? 83 EC 18 81=partial pdb
virtual void CInput::CheckPaused()=55 8B EC 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 26=partial pdb
virtual void CInput::DecodeUserCmdFromBuffer()=55 8B EC 83 EC 64 56 8B F1 C7=partial pdb
virtual int CInput::GetButtonBits()=55 8B EC 51 53 8A 5D=partial pdb
virtual void CInput::Shutdown_All()=56 57 8B F9 8B 07 FF 50 60=partial pdb
virtual void CInput::ActivateMouse()=56 8B F1 80 7E 0E=partial pdb
virtual void CInput::DeactivateMouse()=57 8B F9 80 7F 0E 00 74=partial pdb
void CInput::Init_Mouse()=56 57 8B ? ? ? ? ? 8B F1 FF D7=partial pdb
virtual void CInput::GetWindowCenter()=55 8B EC 83 EC 08 8B ? ? ? ? ? 8D 55 F8 52 8D 55 FC 52 8B 01 FF 50=partial pdb
virtual void CInput::AccumulateMouse()=55 8B EC A1 ? ? ? ? 83 EC 10 57=partial pdb
void CInput::MouseMove()=55 8B EC 83 E4 F8 83 EC 1C 8D=partial pdb
virtual void CInput::GetFullscreenMousePos()=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=partial pdb
void C_BaseEntity::SetLocalAnglesDim()=55 8B EC F3 ? ? ? ? 56 57 8B 7D=partial pdb
void CChoreoEvent::OffsetTime()=55 8B EC 8B 45 08 F3 ? ? ? ? F3 ? ? ? ? F3 ? ? ? ? F3=partial pdb
bool CLCD::ExtractArrayIndex()=55 8B EC 8D ? ? ? ? ? 81 ? ? ? ? ? 8B D0 2B CA 8A 14 01 84 D2 74 0A 88 10 40 8D 55 F7=partial pdb
void Interpolator_CurveInterpolate()=55 8B EC 83 E4 F8 83 EC 24 0F=partial pdb
virtual bool CProxyHealth::Init()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 84 C0 75 05 5E 5D C2 08 00 51 C7 ? ? ? ? ? ? 8D 4E 0C=partial pdb
void JiggleData::Init()=55 8B EC 8B 55 0C 8B 45 08 56 8B F1 8B=partial pdb
virtual bool CLampBeamProxy::Init()=55 8B EC 56 57 8B 7D 08 8B F1 6A 01 8D=partial pdb
bool MapEntity_ExtractValue()=53 56 8B DA 8B F1 57 33=partial pdb
bool CEntityMapData::GetNextKey()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8D ? ? ? ? ? 56 8B=partial pdb
virtual void CMaterialProxyDict::Add()=55 8B EC 56 57 FF 75 08 8D=partial pdb
virtual bool CSubtractProxy::Init()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 84 C0 74 0D=partial pdb
virtual void CMultiplyProxy::OnBind()=55 8B EC 83 EC 2C 57 8D 45 F8 8B F9 50 8D 45 FC 50 E8 ? ? ? ? 8B 45 FC 83 E8 00 0F ? ? ? ? ? 56 83 E8 02 74 37=partial pdb
virtual void CDivideProxy::OnBind()=55 8B EC 83 EC 2C 57 8D 45 F8 8B F9 50 8D 45 FC 50 E8 ? ? ? ? 8B 45 FC 83 E8 00 0F ? ? ? ? ? 56 83 E8 02 74 69=partial pdb
virtual void CClampProxy::OnBind()=55 8B EC 83 EC 1C 57 8D=partial pdb
virtual void CSineProxy::OnBind()=55 8B EC 83 EC 0C 56 8B F1 8D 4E=partial pdb
virtual void CIntProxy::OnBind()=55 8B EC 83 EC 14 57 8D 45 FC 8B F9 50 8D 45 F8 50 E8 ? ? ? ? 8B 45 F8 83 E8 00 74 7E=partial pdb
virtual void CLinearRampProxy::OnBind()=55 8B EC 51 56 8B F1 8D 4E 0C E8 ? ? ? ? A1=partial pdb
virtual void CUniformNoiseProxy::OnBind()=55 8B EC 51 A1 ? ? ? ? 56 57 8B F9 8B 30=partial pdb
virtual void CAbsProxy::OnBind()=55 8B EC 51 56 8B F1 8B 4E 0C 8B=partial pdb
virtual void CRemapValClampedProxy::OnBind()=55 8B EC 83 EC 14 56 8D 45 F0=partial pdb
virtual bool CMatrixRotateProxy::Init()=55 8B EC 53 8B 5D 0C 56 57 8B F1=partial pdb
Handler()=FF ? ? ? ? ? 84 C0 74 01 CC FF ? ? ? ? ? 6A=partial pdb
virtual void CHudMenu::Init()=55 8B EC 83 E4 F8 51 56 83 EC 08 8B F1 8B C4 8D ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? C6=partial pdb
virtual void CHudMenu::Paint()=55 8B EC 83 EC 30 53 8B D9 89=partial pdb
void CHudMenu::SelectMenuItem()=55 8B EC 83 EC 20 56 8B 75 08 57 8B F9 85=partial pdb
void CHudMenu::ProcessText()=55 8B EC 83 EC 28 53 56 8D=partial pdb
bool CHudMenu::MsgFunc_ShowMenu()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 56 57 8B F9=partial pdb
int CHudMessage::XPosition()=55 8B EC 83 EC 08 0F ? ? ? ? ? ? 8B ? ? ? ? ? 56=partial pdb
void CHudMessage::MessageDrawScan()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B 58=partial pdb
bool CHudMessage::MsgFunc_HudMsg()=55 8B EC 51 53 56 57 8B 7D 08 B8=partial pdb
virtual int CHudMessage::GetFontInfo()=55 8B EC 51 57 8B 7D 0C 85=partial pdb
virtual void CHudMessage::AddChar()=55 8B EC 81 ? ? ? ? ? E8 ? ? ? ? 8B=partial pdb
virtual void CHudMessage::GetTextExtents()=55 8B EC A1 ? ? ? ? 56 FF 75 10=partial pdb
int CModelRenderSystem::ComputeParentDepth()=55 8B EC 56 8B 75 08 85 F6 75 07 33 C0 5E 5D C2 04 00 57=partial pdb
static bool CModelRenderSystem::SortLessFunc()=55 8B EC 8B 55 08 56 8B 75 0C 0F=partial pdb
void CModelRenderSystem::SetupStandardLighting()=55 8B EC 83 EC 20 53 56 57 8B 7D 08 89 4D E8=partial pdb
void MatrixCopy()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B 7D 10=partial pdb
virtual void CMoveHelperClient::SetHost()=55 8B EC 8B 45 08 89 41 18 8B=partial pdb
virtual void CMoveHelperClient::ProcessImpacts()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B F1 57 8B 4E=partial pdb
virtual bool CMoveHelperClient::IsWorldEntity()=55 8B EC 83 ? ? ? ? ? ? 74 14=partial pdb
virtual bool C_MultiplayRules::Damage_NoPhysicsForce()=55 8B EC 8B 01 FF 50 54=partial pdb
void COptionsVideoScaleform::SetAAMode()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B ? ? ? ? ? 56=partial pdb
virtual void CMumbleSystem::LevelInitPostEntity()=83 ? ? ? ? ? ? 75 4F 68=partial pdb
void PerformObstaclePushaway()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 8B F1 57 89 74 24 20=partial pdb
CStringPool::CStringPool()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
virtual void CBaseSimpleCollision::Setup()=55 8B EC 83 EC 0C F3 ? ? ? ? 56=partial pdb
virtual void CBaseSimpleCollision::TraceLine()=55 8B EC 51 53 8B C1 56 33 F6 89 45 FC 57 39 70 64=partial pdb
virtual void CBaseSimpleCollision::ConsiderPlane()=55 8B EC 8B 55 08 53 8B D9 56 57=partial pdb
bool CParticleProperty::IsValidEffect()=55 8B EC 8B 55 08 8B C1 85 D2 75=partial pdb
void UpdateRefractTexture()=55 8B EC 83 EC 18 A1 ? ? ? ? 53 56 89=partial pdb
CParticleEffectBinding::CParticleEffectBinding()=56 8B F1 0F 57 C9 57=partial pdb
virtual void CParticleEffectBinding::GetRenderBounds()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 24=partial pdb
void CClientShadowMgr::SetupRenderToTextureShadow()=55 8B EC 83 EC 18 56 8B F1 F6=partial pdb
bool CParticleEffectBinding::EnlargeBBoxToContain()=55 8B EC 66 ? ? ? ? ? ? ? 8B 55=partial pdb
void CParticleEffectBinding::DetectChanges()=56 8B F1 B8 ? ? ? ? 0F B7 4E 08=partial pdb
int CParticleEffectBinding::GetActiveParticleList()=55 8B EC 51 0F ? ? ? ? ? ? 33=partial pdb
void CParticleEffectBinding::RenderStart()=55 8B EC 83 EC 44 53 8B D9 56 57 F6=partial pdb
void CParticleEffectBinding::DoBucketSort()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? B9=partial pdb
bool CParticleEffectBinding::RecalculateBoundingBox()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B F1 57 66=partial pdb
void CRendering3dView::Setup()=55 8B EC 8B 55 08 53 8B D9 57=partial pdb
void CParticleMgr::Term()=55 8B EC 56 57 8B F9 0F B7=partial pdb
void CParticleMgr::AddEffect()=55 8B EC 8B 41 44=partial pdb
void CParticleMgr::RemoveEffect()=55 8B EC 53 56 8B 75 08 8B D9 85 F6 74 7D=partial pdb
void CParticleMgr::IncrementFrameCode()=66 ? ? ? ? 75 40 0F=partial pdb
ProcessPSystem()=55 8B EC 83 E4 F8 56 8B 75 08 57 8B 06=partial pdb
CompareFunction()=55 8B EC 8B 45 08 0F 57 C9 F3 ? ? ? ? 8B 45 0C F3 ? ? ? ? 0F 2E=partial pdb
void CParticleMgr::SpewActiveParticleSystems()=55 8B EC 83 EC 54 53 56 57 83=partial pdb
void CParticleMgr::RepairPMaterial()=55 8B EC 51 56 57 8B 7D 08 8B F1 89=partial pdb
void DrawParticleSingletons()=55 8B EC 51 56 0F B6=partial pdb
void CNewParticleEffect::Construct()=56 8B F1 C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8A=partial pdb
virtual CNewParticleEffect::~CNewParticleEffect()=56 8B F1 F6 ? ? ? ? ? ? C7=partial pdb
void CNewParticleEffect::SetControlPointEntity()=55 8B EC 53 56 8B F1 57 8B 7D 0C F6=partial pdb
void CNewParticleEffect::RecordCreation()=56 8B F1 83 7E 58=partial pdb
virtual void CNewParticleEffect::GetRenderBounds()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 75 41=partial pdb
void CNewParticleEffect::DetectChanges()=56 8B F1 B8 ? ? ? ? 0F B7 4E 0C=partial pdb
void BasisToQuaternion()=55 8B EC 83 EC 3C 8B 45 0C F3=partial pdb
void CParticleCollection::SetControlPointOrientation()=55 8B EC 51 53 8B 5D 10 56 8B F1 57=partial pdb
void CParticleCollection::SetControlPoint()=55 8B EC 53 8B 5D 0C 56 8B F1 57 8B 7D 08 8B 56 64 3B FA 7D 41=partial pdb
CEnvWindShared::~CEnvWindShared()=55 8B EC 51 56 8B F1 83 ? ? ? ? ? ? C7=partial pdb
virtual void CParticleEffect::NotifyDestroyParticle()=66 ? ? ? ? ? ? ? 75 1E 83=partial pdb
void CParticleEffect::SetSortOrigin()=55 8B EC 56 8B F1 F6 ? ? ? ? ? ? 74 31=partial pdb
void CParticleEffectBinding::SetParticleCullRadius()=55 8B EC F3 ? ? ? ? ? ? ? F3 ? ? ? ? 0F 2E C1 9F F6 C4 44 7B 27=partial pdb
virtual float CSimpleEmitter::UpdateAlpha()=55 8B EC 8B 4D 08 F3 ? ? ? ? F3 ? ? ? ? 0F B6 41 33=partial pdb
virtual float CSimpleEmitter::UpdateScale()=55 8B EC 8B 4D 08 F3 ? ? ? ? F3 ? ? ? ? 0F B6 41 35=partial pdb
virtual void CSimpleEmitter::UpdateVelocity()=55 8B EC 8B 55 08 83 EC 0C F6=partial pdb
virtual float CSimpleEmitter::UpdateRoll()=55 8B EC 8B 45 08 D9 40 38=partial pdb
virtual class Vector CSimpleEmitter::UpdateColor()=55 8B EC A1 ? ? ? ? A8 01 75 08=partial pdb
virtual class Vector CEmberEffect::UpdateColor()=55 8B EC 8B 55 0C F3=partial pdb
virtual float CFireSmokeEffect::UpdateAlpha()=55 8B EC 56 8B 75 08 F3 ? ? ? ? F3=partial pdb
virtual bool CParticleSystemQuery::IsPointInSolid()=55 8B EC 8B ? ? ? ? ? 8B 01 8B 40 68 FF D0 84 C0 74 1E=partial pdb
virtual void CParticleSystemQuery::DebugDrawLine()=55 8B EC 8B ? ? ? ? ? F3 ? ? ? ? 51 F3 ? ? ? ? FF=partial pdb
virtual void CParticleSystemQuery::PostSimulate()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 8D 5F 08=partial pdb
virtual int CParticleSystemQuery::GetActivityNumber()=55 8B EC 8B 55 08 81 ? ? ? ? ? 85 D2 74=partial pdb
void CPerfVisualBenchmark::Start()=56 8B F1 8B ? ? ? ? ? 8B 11 0F=partial pdb
virtual void CPerfVisualBenchmark::PreRender()=55 8B EC 81 ? ? ? ? ? 56 8B F1 80 7E=partial pdb
void physicssound::PlayImpactSounds()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B 59=partial pdb
virtual bool CCollisionEvent::ShouldFreezeObject()=55 8B EC 8B 4D 08 8B 01 FF ? ? ? ? ? 85=partial pdb
void PhysicsLevelInit()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 8B 01 8B=partial pdb
FindPhysicsBlocker()=55 8B EC 83 EC 10 53 56 57 8B F9 89 7D F0 8B 07=partial pdb
virtual int CCollisionEvent::ShouldCollide()=55 8B EC 83 EC 08 8B C1 53 56 8B=partial pdb
virtual void CPhysicsSystem::LevelShutdownPostEntity()=8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 85 D2 74 0C=partial pdb
void CCollisionEvent::ObjectSound()=55 8B EC 53 8B 5D 08 56 57 8B 7D 0C 8B 34=partial pdb
virtual void CCollisionEvent::PostCollision()=55 8B EC 56 57 8B 7D 08 8B F1 FF=partial pdb
void CCollisionEvent::UpdateTouchEvents()=55 8B EC 83 EC 5C 83=partial pdb
void CCollisionEvent::AddTouchEvent()=55 8B EC 83 7D 08 00 74 61=partial pdb
void CCollisionEvent::FindOrAddPenetrateEvent()=55 8B EC 53 8B 5D 0C 33 D2 56 57=partial pdb
void PhysFrictionSound()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 85=partial pdb
float PhysGetSyncCreateTime()=55 8B EC 83 EC 08 8B ? ? ? ? ? 8B 01=partial pdb
void VPhysicsShadowDataChanged()=55 8B EC 51 56 8B F2 84=partial pdb
void C_BaseEntity::PhysicsCheckSweep()=55 8B EC 83 EC 0C 53 56 57 8B F9 8B 07=partial pdb
void C_BaseEntity::PhysicsPushEntity()=55 8B EC 83 EC 0C 56 8B F1 57 8B 06=partial pdb
void C_BaseEntity::PhysicsCustom()=55 8B EC 81 ? ? ? ? ? 56 6A 00 8B=partial pdb
virtual void C_BaseEntity::Touch()=55 8B EC 8B C1 8B 50=partial pdb
void C_BaseEntity::PhysicsDispatchThink()=55 8B EC 83 E4 C0 83 EC 3C 56 8B F1 8B ? ? ? ? ? 81=partial pdb
int CWatcherList::GetCallbackObjects()=55 8B EC 83 EC 0C 8B C1 89 45 FC=partial pdb
void C_BaseEntity::PhysicsCheckForEntityUntouch()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? D1=partial pdb
static void C_BaseEntity::PhysicsRemoveToucher()=56 8B F2 F6 46=partial pdb
void C_BaseEntity::PhysicsTouch()=55 8B EC 8B 55 08 85 D2 74 1E=partial pdb
void CBaseEntity::PhysicsMarkEntitiesAsTouching()=55 8B EC 53 56 8B 75 0C 57 8B F9 B9=partial pdb
void C_BaseEntity::UpdateWaterState()=55 8B EC 83 EC 18 56 8B F1 8D 45=partial pdb
void C_BaseEntity::PhysicsCheckVelocity()=55 8B EC 83 E4 F8 83 EC 20 56 57 8B F9 8B 07=partial pdb
void C_BaseEntity::PhysicsAddGravityMove()=55 8B EC 83 E4 F8 83 EC 20 56 57 8B F1 E8 ? ? ? ? F3=partial pdb
void C_BaseEntity::PhysicsToss()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 6A=partial pdb
static bool CThinkSyncTester::ThinkLessFunc()=55 8B EC 8B 45 0C 8B 4D 08 F3 0F 10 00=partial pdb
unknown_libname_5()=55 8B EC 8B 45 08 8B 08 8B 45 0C 3B 08 0F 94=partial pdb
virtual void CPhysSaveRestoreBlockHandler::Save()=55 8B EC 83 EC 14 A1 ? ? ? ? 89=partial pdb
virtual void CPhysSaveRestoreBlockHandler::PostSave()=56 8B F1 C7 ? ? ? ? ? ? 83 7E 10 00 7C 22 8B 56 08 85 D2 74 14 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
virtual void CPhysSaveRestoreBlockHandler::Restore()=55 8B EC 83 EC 40 57 8B F9 80=partial pdb
virtual void CPhysObjSaveRestoreOps::MakeEmpty()=55 8B EC 8B 4D 08 8B 41 08=partial pdb
virtual bool CClassPtrSaveRestoreOps::IsEmpty()=55 8B EC 8B 45 08 8B 10 8B 40=partial pdb
virtual void CSolidSetDefaults::SetDefaults()=55 8B EC 8B 4D 08 0F ? ? ? ? ? ? 0F=partial pdb
void GlassImpactCallback()=55 8B EC 81 ? ? ? ? ? 8B C1 8D ? ? ? ? ? 53=partial pdb
void PhysDestroyObject()=A1 ? ? ? ? 56 57 8B F1=partial pdb
void PhysCreateVirtualTerrain()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 8B D9 57 89 5D FC=partial pdb
virtual bool CPhysicsGameTrace::VehiclePointInWater()=55 8B EC 8B ? ? ? ? ? 6A 00 68 ? ? ? ? FF=partial pdb
void CSoftbodyEnvironment::Step()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? 83 EC 08=partial pdb
virtual float C_PhysPropClientside::GetDmgModBullet()=D9 41 20=partial pdb
virtual float C_PhysPropClientside::GetDmgModClub()=D9 41 24=partial pdb
bool C_BaseEntity::HasDataObjectType()=55 8B EC 8B D1 B8 ? ? ? ? 8B 4D 08 D3=partial pdb
virtual void C_PhysPropClientside::SetPhysicsMode()=55 8B EC 83 79 08=partial pdb
virtual void C_PhysPropClientside::StartTouch()=55 8B EC A1 ? ? ? ? 56 8B F1 F3=partial pdb
virtual void C_PhysPropClientside::HitSurface()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 83 EC=partial pdb
bool C_Sprite::InitializeClientside()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 6A=partial pdb
virtual void C_PhysPropClientside::Spawn()=55 8B EC 83 EC 14 56 57 8B F9 C7 ? ? ? ? ? ? 0F=partial pdb
virtual void C_PhysPropClientside::Break()=55 8B EC 83 E4 F8 83 EC 50 56 8B F1 57 6A=partial pdb
virtual void C_PoseController::OnDataChanged()=56 8B F1 57 8D 4E F4 E8 ? ? ? ? F3=partial pdb
void C_PoseController::UpdateModulation()=55 8B EC 83 E4 F8 51 56 8B F1 8B ? ? ? ? ? 83 F8=partial pdb
void C_PoseController::SetCurrentPose()=55 8B EC 83 EC 1C 53 8B C1=partial pdb
void SFMapOverview::PositionRadarViewpoint()=55 8B EC 83 EC 30 53 0F=partial pdb
virtual void C_PredictedViewModel::CalcViewModelLag()=55 8B EC 83 EC 50 56 8B F1 8B=partial pdb
bool CPrediction::ShouldDumpEntity()=55 8B EC 8B ? ? ? ? ? 56 57 81=partial pdb
void CPrediction::ShowPredictionListEntry()=55 8B EC 83 E4 F8 83 EC 44 53 8B 5D 10=partial pdb
virtual void CPrediction::CheckMovingGround()=55 8B EC 83 EC 0C 56 8B 75 08 F6=partial pdb
void CPredictionCopy::DumpWatchField()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 8B 06=partial pdb
void CPredictionCopy::DetermineWatchField()=55 8B EC 8B 45 08 57 8B F9 C7=partial pdb
BuildFlattenedChains_R()=55 8B EC 83 EC 10 53 8B 5D 10 56 8B=partial pdb
BuildPackedFlattenedOffsets()=55 8B EC 83 EC 08 56 57 33=partial pdb
BuildDataRuns()=55 8B EC 83 EC 30 53 8B C1=partial pdb
DescribeRuns()=55 8B EC 83 EC 0C 53 8D=partial pdb
void CPredictionCopy::ErrorCheckFlatFields_NoSpew()=55 8B EC 83 EC 2C 8B 45 0C 53 56 57 8D=partial pdb
void CPredictionCopy::TransferDataErrorCheckNoSpew()=55 8B EC 51 53 8B D9 56 57 BE=partial pdb
void CPredictionCopy::TransferDataDescribe()=55 8B EC 83 EC 1C 8B C1=partial pdb
void CUtlMemory<struct typedescription_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 75 8B 4B 04 56 57 8B 7D 08 03 F9 6A 3C=partial pdb
void CPropData::ParsePropDataFile()=53 8B D9 56 8B 73 20=partial pdb
char const near * CPropData::GetRandomChunkModel()=55 8B EC 80 ? ? ? ? ? ? 75 06 33=partial pdb
virtual void CEntityMaterialProxy::OnBind()=55 8B EC 56 8B F1 8B 4D 08 85 C9 74 17=partial pdb
virtual bool CWeaponLabelTextProxy::Init()=55 8B EC 56 8B 75 08 57 51=partial pdb
virtual void CConveyorMaterialProxy::OnBind()=55 8B EC 83 E4 F0 83 EC 58 8B C1 56 57 89=partial pdb
virtual void CPlayerPositionProxy::OnBind()=55 8B EC 83 EC 10 56 8B F1 8B 4D 04=partial pdb
virtual void CEntitySpeedProxy::OnBind()=55 8B EC 56 8B F1 8B 4D 08 85 C9 74 50=partial pdb
virtual void CEntityRandomProxy::OnBind()=55 8B EC 57 8B F9 8B 4D 08 85 C9 74 38=partial pdb
virtual bool CIronSightAmountProxy::Init()=55 8B EC 83 EC 0C 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 84 C0 75 07=partial pdb
virtual void CStickerSelectionProxy::OnBind()=56 8B F1 8B 06 FF 50 18 F3=partial pdb
virtual bool CCrossHairColorProxy::Init()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 84 C0 75 05 5E 5D C2 08 00 C7=partial pdb
virtual void CPupilProxy::OnBind()=55 8B EC 83 EC 28 56 57 8B 7D 08 8B F1 85=partial pdb
void CRagdoll::BuildRagdollBounds()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 A1=partial pdb
virtual CRagdoll::~CRagdoll()=55 8B EC 83 EC 08 56 8D 41=partial pdb
virtual void CRagdoll::VPhysicsUpdate()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 0C 53 8B D9 56 57 F3=partial pdb
virtual bool CRagdoll::TransformVectorToWorld()=55 8B EC 53 56 8B 75 08 83=partial pdb
void CRagdoll::CheckSettleStationaryRagdoll()=55 8B EC 83 EC 1C 56 8B F1 8B ? ? ? ? ? 8B=partial pdb
virtual void CRagdoll::DrawWireframe()=55 8B EC 83 E4 F8 83 EC 34 53 56 57 8B F9 8B=partial pdb
virtual C_ServerRagdoll::~C_ServerRagdoll()=56 57 8B F9 8D ? ? ? ? ? 8B CE C7 ? ? ? ? ? E8=partial pdb
virtual void C_PhysicsProp::OnDataChanged()=55 8B EC 53 56 57 FF 75 08 8B F9 E8 ? ? ? ? A1=partial pdb
virtual bool C_ServerRagdollAttached::SetupBones()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 83 FA FF 0F=partial pdb
virtual void C_ServerRagdollAttached::OnDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
ParseRagdollIntoCache()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC B8 ? ? ? ? E8 ? ? ? ? 89=partial pdb
void RagdollSetupCollisions()=55 8B EC 83 EC 10 53 56 8B F2=partial pdb
void RagdollDestroy()=53 8B D9 8B 03 85=partial pdb
void TransformAABB()=55 8B EC 51 8B 45 08 56 8B F1 89 55=partial pdb
void RagdollComputeApproximateBbox()=55 8B EC 83 EC 2C F3 ? ? ? ? ? ? ? F3=partial pdb
void RagdollSolveSeparation()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B F1 89=partial pdb
bool ShouldRemoveThisRagdoll()=55 8B EC 83 EC 54 80=partial pdb
virtual void CRagdollLRURetirement::Update()=55 8B EC 83 EC 10 53 56 8B F1 57 89=partial pdb
virtual void CRecordingList::AddToList()=55 8B EC 8B 45 08 56 57 8B F9 8B ? ? ? ? ? 83=partial pdb
void C_BaseAnimating::TransferDissolveFrom()=55 8B EC 51 8B 45 08 56 57 8B F1=partial pdb
void RecvProxy_IntSubOne()=55 8B EC 8B 45 08 8B 48 08 8B 45 10 49=partial pdb
void RecvProxy_ShortSubOne()=55 8B EC 8B 45 08 66 8B 48 08 8B 45 10 66 49=partial pdb
void RecvProxy_IntToEHandle()=55 8B EC 8B 45 08 8B 40 08 3D ? ? ? ? 75 0B 8B 45 10 C7 ? ? ? ? ? 5D=partial pdb
void RecvProxy_InterpolationAmountChanged()=55 8B EC 8B 55 08 33 C9 56=partial pdb
virtual void CRenderToRTHelper::StartRenderToRT()=55 8B EC 83 EC 0C 56 57 8B 7D 08 83=partial pdb
virtual bool CRenderToRTHelper::Process()=55 8B EC 83 E4 F8 83 EC 3C 53 56 57 8B F9 32=partial pdb
void CBaseRopePhysics::ResetSpringLength()=55 8B EC 8B 41 0C=partial pdb
virtual void CBaseRopePhysics::ApplyConstraints()=55 8B EC F3 ? ? ? ? ? ? ? 0F 57 ED=partial pdb
void CGameSaveRestoreInfo::InitEntityTable()=55 8B EC 8B 45 08 33 D2 56 8B F1=partial pdb
unsigned short CSaveRestoreSegment::FindCreateSymbol()=55 8B EC 8B 45 08 83 EC 0C 33=partial pdb
virtual void CSave::WriteShort()=55 8B EC 8B 45 0C 03=partial pdb
virtual void CSave::WriteVector()=55 8B EC 6A 0C FF=partial pdb
virtual void CSave::WriteQuaternion()=55 8B EC 8B 45 0C C1 E0 04=partial pdb
virtual void CSave::WriteBool()=55 8B EC 51 53 8B 5D 10 33=partial pdb
void CSave::WriteVMatrixWorldspace()=55 8B EC 83 E4 F8 83 EC 50 56 57 8B 7D=partial pdb
bool CSave::ShouldSaveField()=55 8B EC 83 EC 10 56 57 8B 7D 0C 8B D1=partial pdb
virtual int CSave::WriteFields()=55 8B EC 83 EC 10 53 8B D9 8D 4D FC 56 57 6A=partial pdb
virtual void CSave::StartBlock()=55 8B EC 51 56 FF 75 08 8B F1 C7=partial pdb
void CSave::WriteMatrix3x4Worldspace()=55 8B EC 56 8B F1 57 8B 7D 0C FF=partial pdb
virtual void CSave::WritePositionVector()=55 8B EC 83 EC 18 8B 45 0C F3=partial pdb
virtual void CSave::WriteEntityPtr()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 57 8B 7D 10=partial pdb
virtual void CSave::WriteEdictPtr()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B 55 10=partial pdb
virtual void CSave::WriteEHandle()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B 5D 10=partial pdb
struct typedescription_t near * CRestore::FindField()=55 8B EC 8B 55 08 53 8B 5D 14=partial pdb
virtual void CRestore::EmptyFields()=55 8B EC 83 EC 10 83 7D 10 00 8B=partial pdb
virtual void CRestore::StartBlock()=55 8B EC 51 56 8B F1 8D 4D FC 51 8B CE 8B 06 FF 50=partial pdb
virtual int CRestore::ScanAheadForHammerID()=55 8B EC 83 EC 0C 53 56 57 8B F9 8B 47 18=partial pdb
virtual void CRestore::ReadHeader()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 19=partial pdb
virtual int CRestore::ReadString()=55 8B EC 83 EC 08 8B D1 53 56 57=partial pdb
virtual int CRestore::ReadEntityPtr()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 FF 75 10 8B F1 8D ? ? ? ? ? FF 75 0C 89 75 FC 51 8B 06 8B CE FF 50 3C 8B D8 89 5D F8 85 DB 7E 51=partial pdb
virtual int CRestore::ReadEHandle()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 FF 75 10 8B F1 8D ? ? ? ? ? FF 75 0C 89 75 FC 51 8B 06 8B CE FF 50 3C 8B D8 89 5D F8 85 DB 7E 53=partial pdb
virtual int CRestore::ReadPositionVector()=55 8B EC 8B 01 6A 0C=partial pdb
virtual void CEntitySaveRestoreBlockHandler::Save()=55 8B EC 83 EC 0C 53 8B 5D 08 8B CB=partial pdb
virtual void C_SmokeStack::SimulateParticles()=55 8B EC 8B 4D 08 83 EC 1C 8B=partial pdb
class CSaveRestoreData near * SaveInit()=A1 ? ? ? ? 85 C9 56=partial pdb
virtual void CSaveRestoreBlockSet::PreSave()=55 8B EC 51 53 56 57 8B F9 8D 77 40=partial pdb
virtual void CSaveRestoreBlockSet::Save()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 8B=partial pdb
virtual void CSaveRestoreBlockSet::WriteSaveHeaders()=55 8B EC 83 EC 2C 53 57=partial pdb
virtual void CSaveRestoreBlockSet::Restore()=55 8B EC 53 8B 5D 08 56 8B F1 8B CB 57 8B 03 FF 10=partial pdb
int CRestore::ReadSimple<short>()=55 8B EC 51 8B 45 0C 8B D1 56 57 8B 7D 10 89 55 FC 8D 34 00=partial pdb
int CRestore::ReadSimple<class Vector>()=55 8B EC 51 8B 45 0C 8B D1 56 57 8B 7D 10 8D=partial pdb
int CRestore::ReadSimple<class Quaternion>()=55 8B EC 51 56 8B 75 0C 8B D1 57 8B 7D 10 C1 E6 04=partial pdb
int CRestore::ReadSimple<class VMatrix>()=55 8B EC 51 56 8B 75 0C 8B D1 57 8B 7D 10 C1 E6 06=partial pdb
virtual void CSceneTokenProcessor::Error()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
virtual bool CSceneTokenProcessor::TokenAvailable()=8B 49 04 8A 01=partial pdb
virtual void CExampleEffect::Render()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B 07=partial pdb
float CSentence::GetIntensity()=55 8B EC 83 EC 44 56 8B F1 8B 46=partial pdb
void CUtlBuffer::GetTypeBin<unsigned short>()=55 8B EC 56 6A 02=partial pdb
EmitSound_t::EmitSound_t()=55 8B EC 8B 55 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
virtual void CSoundEmitterSystem::TraceEmitSound()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 81 ? ? ? ? ? 75 0F=partial pdb
void CSoundEmitterSystem::TraceEmitSoundEntry()=55 8B EC 51 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74 3E=partial pdb
void ImageLoader::ConvertImageFormat_RGB323232F_To_BGRA8888()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 57 E8=partial pdb
void CSoundEmitterSystem::StopSoundByHandle()=55 8B EC 51 53 8B 5D 10 56 83=partial pdb
virtual int C_BaseEntity::DrawBrushModel()=55 8B EC 51 56 57 8B F9 8B 47 08=partial pdb
virtual bool CCopyRecipientFilter::IsReliable()=8B 41 04 D1=partial pdb
virtual bool CCopyRecipientFilter::AddRecipient()=55 8B EC 56 57 8B F9 8B 4D 08 83=partial pdb
CSoundPatch::CSoundPatch()=55 8B EC 51 FF ? ? ? ? ? 56=partial pdb
bool COptionsScaleform::ActionsAreTheSame()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 0C 8B F1 85=partial pdb
void CSoundPatch::FadeOut()=55 8B EC 51 56 8B F1 0F 28 D1=partial pdb
bool SoundCommandLessFunc()=55 8B EC 8B 45 08 8B 08 8B 45 0C F3=partial pdb
void CSimpleEmitter::SetNearClip()=55 8B EC 8B 45 08 F3 ? ? ? ? F3 ? ? ? ? ? ? ? 5D=partial pdb
void CSoundControllerImp::ProcessCommand()=55 8B EC 57 8B 7D 08 8B 47=partial pdb
virtual void CSoundControllerImp::Play()=55 8B EC F3 ? ? ? ? F3 ? ? ? ? ? ? ? 56=partial pdb
virtual void CSoundControllerImp::SystemUpdate()=55 8B EC 83 EC 08 A1 ? ? ? ? 53 56 8B F1=partial pdb
virtual void CSoundControllerImp::CommandClear()=55 8B EC 56 8B 71 30 83=partial pdb
virtual void CSoundControllerImp::SoundChangePitch()=55 8B EC 8B 4D 08 0F 57 E4=partial pdb
virtual void CSoundControllerImp::SoundChangeVolume()=55 8B EC F3 ? ? ? ? 0F 57 E4=partial pdb
virtual int CSoundControllerImp::SoundGetGuid()=55 8B EC 8B 45 08 8B 40 20=partial pdb
virtual float CSoundControllerImp::SoundGetPitch()=55 8B EC 8B 45 08 D9 00=partial pdb
virtual void CSoundControllerImp::SoundFadeOut()=55 8B EC F3 ? ? ? ? 0F 57 C0 53=partial pdb
virtual void C_Sprite::Spawn()=55 8B EC 83 EC 14 53 57 8B F9 6A=partial pdb
virtual void C_Sprite::SetModel()=55 8B EC 56 8B 75 08 57 8B F9 8B ? ? ? ? ? 56 8B 01 FF 50 08 8B ? ? ? ? ? 50 8B 11 FF 52 04 85 C0 74 2A=partial pdb
virtual void C_Sprite::GetRenderBounds()=55 8B EC 51 F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F=partial pdb
virtual void C_Sprite::OnDataChanged()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 85 F6 75 2A=partial pdb
virtual void C_Sprite::ClientThink()=F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F 2E C8 53=partial pdb
bool CEngineSprite::Init()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8D 43=partial pdb
void CEngineSprite::GetTexCoordRange()=55 8B EC 53 8B 5D 14 B8=partial pdb
class IMaterial near * CEngineSprite::GetMaterial()=55 8B EC 8B 45 08 56 8B F1 83 F8 0A=partial pdb
virtual void C_SpriteTrail::OnDataChanged()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? 83 7D 08 00 75 19=partial pdb
virtual void CSteamWorksGameStatsUploader::Reset()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
void CSteamWorksGameStatsUploader::EndSession()=55 8B EC 83 E4 F0 83 EC 1C 56 8B F1 8B ? ? ? ? ? 85=partial pdb
char const near * CStringRegistry::GetStringForKey()=55 8B EC 56 66 8B 75 08 57=partial pdb
CStringRegistry::CStringRegistry()=A1 ? ? ? ? 56 8B F1 6A 1C 8B 08 8B 01 FF 50 04 8B=partial pdb
CStudioHdr::CStudioHdr()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
void CStudioHdr::Init()=55 8B EC 8B 45 08 56 8B F1 89 06 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 85=partial pdb
int CStudioHdr::GetActivityListVersion()=55 8B EC 56 8B F1 57 85=partial pdb
void CStudioHdr::SetActivityListVersion()=53 8B ? ? ? ? ? 57 8B F9 8B 07=partial pdb
class CSoftbody near * CStudioHdr::InitSoftbody()=55 8B EC 83 EC 08 53 8B D9 56 57 83=partial pdb
float CCaptionSequencer::GetAlpha()=55 8B EC 83 EC 10 56 8B F1 80 7E 01=partial pdb
virtual void CSubtitlePanel::OnThink()=55 8B EC 51 53 56 8B F1 C7 ? ? ? ? ? ? 57 8D=partial pdb
void CTakeDamageInfo::Init()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 0E=partial pdb
virtual void C_HandleTest::OnDataChanged()=8B ? ? ? ? ? 83 FA FF 74 19 0F B7 C2 C1 E0 04 05 ? ? ? ? 74 0C C1 EA 10 39 50 04 75 04 8B 00 EB 02 33 C0 50 0F=partial pdb
virtual char near * CHudTextMessage::LookupString()=55 8B EC 56 8B 75 08 85 F6 75 0A=partial pdb
virtual bool CPupilProxy::Init()=55 8B EC 53 57 8B 7D 0C 8B D9 68=partial pdb
PublishedFileInfo_t::PublishedFileInfo_t()=55 8B EC 51 8B D1 B9 ? ? ? ? 53 8B 5D 08 56 57 8D 7A 08=partial pdb
bool UGCOperationsLessFunc()=55 8B EC 8B 45 08 56 8B 10 8B 45 0C 8B 30=partial pdb
void CUGCFileRequestManager::Update()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 89 5C 24 14 83=partial pdb
bool UGCUtil_TimestampFile()=55 8B EC 81 ? ? ? ? ? 53 56 57 68 ? ? ? ? 8D ? ? ? ? ? 8B F1=partial pdb
void V_strncpy()=55 8B EC 56 57 51 8B F9 E8 ? ? ? ? 8D=partial pdb
void CUGCFileRequest::UpdateUnzip()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 80=partial pdb
enum UGCFileRequestStatus_t CUGCFileRequest::Update()=55 8B EC 83 E4 C0 83 EC 3C 56 8B F1 8B ? ? ? ? ? 83=partial pdb
void CConcurrentViewBuilder::Purge()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 C7=partial pdb
WriteUserCmdDeltaVec3Coord()=55 8B EC 83 EC 08 0F 28 C3=partial pdb
void ReadUsercmd()=55 8B EC 83 EC 08 53 8B 5D 08 8B C2=partial pdb
void CUserMessages::BindMessage()=55 8B EC 51 56 8B F1 8B 4D 08 57 85 C9 74=partial pdb
bool CUserMessages::UnbindMessage()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 85=partial pdb
virtual bool CTraceFilterSimpleList::ShouldHitEntity()=55 8B EC 8B 55 08 33 C0 56 57=partial pdb
virtual bool CTraceFilterEntity::ShouldHitEntity()=55 8B EC 53 8B 5D 08 56 8B F1 8B CB 57 8B 03 FF 50 1C=partial pdb
void UTIL_BloodDrips()=55 8B EC 83 E4 F8 83 EC 6C 53 8B 5D 08 89=partial pdb
void UTIL_TrimEmptyWhitespaceFromHTML()=55 8B EC 53 56 8B 75 08 57 8B F9 66=partial pdb
float SimpleSplineRemapVal()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B 75 18=partial pdb
virtual void CAvatarImage::GetContentSize()=55 8B EC 8B 45 08 8B 51 14=partial pdb
CAvatarImage::CAvatarImage()=55 8B EC 83 EC 08 56 8B F1 C7 ? ? ? ? ? ? B9=partial pdb
void CAvatarImage::LoadAvatarImage()=55 8B EC 83 EC 0C 53 56 8B F1 57 80=partial pdb
void CAvatarImage::UpdateFriendStatus()=56 57 8B F9 8D 4F 34 E8=partial pdb
void CAvatarImage::InitFromRGBA()=55 8B EC 56 8B F1 8B 56 08 85 D2 79=partial pdb
virtual void CAvatarImagePanel::PaintBackground()=56 8B F1 80 ? ? ? ? ? ? 74 05 E8 ? ? ? ? 8B=partial pdb
virtual void CAvatarImagePanel::ApplySettings()=55 8B EC 57 6A 00 8B F9 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? FF 75 08 85 C0 8B CF 0F=partial pdb
CBitmapButton::CBitmapButton()=53 56 57 6A 00 6A 00 68=partial pdb
virtual void CBitmapButton::ApplySettings()=55 8B EC 83 EC 10 53 56 57 FF 75 08 8B D9 E8 ? ? ? ? C7=partial pdb
virtual void CBitmapButton::Paint()=55 8B EC 83 EC 08 53 56 8B F1 33 DB 8B 06 8B=partial pdb
virtual void CBitmapButton::OnMouseDoublePressed()=55 8B EC 57 FF 75 08 8B F9 8B 07 FF=partial pdb
virtual BitmapImage::~BitmapImage()=55 8B EC 56 8B F1 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 18=partial pdb
bool BitmapImage::Init()=55 8B EC 8B 45 08 56 8B F1 83 7E=partial pdb
void BitmapImage::DoPaint()=55 8B EC 83 E4 F8 56 8B F1 8B ? ? ? ? ? 57 8B 01 FF 76 18=partial pdb
virtual void BitmapImage::GetSize()=55 8B EC A1 ? ? ? ? FF 75 0C FF 75 08 8B 10 FF 71=partial pdb
virtual void CBitmapPanel::ApplySettings()=55 8B EC 83 E4 F8 83 EC 14 53 8B 5D 08 56 57 53=partial pdb
virtual void CBitmapPanel::Paint()=55 8B EC 8B ? ? ? ? ? 83 EC 08 85 D2=partial pdb
virtual void CBitmapPanel::SetImage()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 10=partial pdb
int CBannedWords::CensorBannedWordsInplace()=55 8B EC 83 EC 0C 53 56 57 8B F9 8B DA 85=partial pdb
void CCenterStringLabel::ComputeSize()=55 8B EC 83 EC 0C 53 8B D9 89 5D F8 8B=partial pdb
virtual void CCenterStringLabel::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 6A 00 68 ? ? ? ? FF 50 0C 8B 17=partial pdb
virtual void CCenterStringLabel::SetTextColor()=55 8B EC 8A 45 08 88 45=partial pdb
virtual void CCenterStringLabel::Print()=55 8B EC 56 8B F1 6A 00 FF 75 08 8B 06=partial pdb
virtual void CCenterPrint::SetTextColor()=55 8B EC 8B 49 04 85 C9 74 09=partial pdb
virtual void CDebugOverlay::ApplySchemeSettings()=55 8B EC 51 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06=partial pdb
void VGui_PreRender()=55 8B EC 8B ? ? ? ? ? 83 EC 18 8B 01 8B 40 70=partial pdb
void IterateRemoteSplitScreenViewSlots_Push()=55 8B EC 51 A1 ? ? ? ? B9 ? ? ? ? 53 56 C6=partial pdb
void IterateRemoteSplitScreenViewSlots_Pop()=55 8B EC 83 EC 34 A1 ? ? ? ? 8D=partial pdb
DrawRoundedBackground()=55 8B EC 83 EC 10 53 89=partial pdb
virtual unsigned int CLoadingDisc::GetLoadingVPANEL()=8B 49 04 85 C9 74 0E=partial pdb
void CMessageCharsPanel::Reset()=53 8B D9 56 57 BF ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8D=partial pdb
virtual int CMessageChars::DrawStringForTime()=55 8B EC 81 ? ? ? ? ? 8D 45 34=partial pdb
virtual int CMessageChars::DrawString()=55 8B EC 8B 45 08 8D 55 30=partial pdb
virtual void CMessageChars::GetStringLength()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 83=partial pdb
void CMovieDisplayScreen::SetupMovie()=53 8B D9 80 ? ? ? ? ? ? 0F ? ? ? ? ? E8=partial pdb
virtual void CMovieDisplayScreen::OnTick()=56 8B F1 8B ? ? ? ? ? 83 F8 FF 74 51=partial pdb
bool CMovieDisplayScreen::BeginPlayback()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 85 C9 75=partial pdb
void CNetGraphPanel::DrawColoredText()=55 8B EC 8B 45 14 8B C8=partial pdb
void CNetGraphPanel::OnFontChanged()=55 8B EC 81 ? ? ? ? ? 53 8B D9 83=partial pdb
virtual void CNetGraphPanel::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 6A 00 68 ? ? ? ? FF 50 0C 89 ? ? ? ? ? 8B CE=partial pdb
void CNetGraphPanel::DrawTimes()=55 8B EC 83 EC 20 A1 ? ? ? ? 53=partial pdb
void CNetGraphPanel::GetFrameData()=55 8B EC 83 EC 0C 8B 45 0C 53 56=partial pdb
int CNetGraphPanel::GraphValue()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 80 ? ? ? ? ? ? 74=partial pdb
void CNetGraphPanel::GraphGetXY()=55 8B EC 8B ? ? ? ? ? 53 56 8B 75 08 57 8B 7D=partial pdb
void CNetGraphPanel::DrawServerType()=55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 8B 01=partial pdb
void CNetGraphPanel::DrawLargePacketSizes()=55 8B EC 83 EC 24 53 57 8B D9 33=partial pdb
virtual void C_PhysPropClientside::Clone()=55 8B EC 83 EC 38 53 56 0F=partial pdb
virtual VideoPanel::~VideoPanel()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9=partial pdb
virtual void VideoPanel::OnTick()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 85 C0 7E=partial pdb
virtual void VideoPanel::OnKeyCodePressed()=55 8B EC 53 56 8B F1 8B 4D 08 E8=partial pdb
virtual void VideoPanel::OnClose()=55 8B EC 83 E4 C0 A1 ? ? ? ? 83 EC 38=partial pdb
float VideoPanel::DrawMovieFrame()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 B8=partial pdb
playvideo_end_level_transition()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8B 06 83 F8 02 0F ? ? ? ? ? B9 ? ? ? ? 7E 06 8B ? ? ? ? ? E8=partial pdb
GetPos()=55 8B EC F3 ? ? ? ? ? ? ? 53 8B 5D 08 56 57 8B FA=partial pdb
bool ComputeBeamEntPosition()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 89 55 FC=partial pdb
virtual void CDispInfo::GetBoundingBox()=55 8B EC 8B 55 08 56 8B F1 8B 4D 0C 8B 46=partial pdb
virtual int Beam_t::DrawModel()=80 ? ? ? ? ? ? 53 56 57 8B D9 75 11=partial pdb
class Beam_t near * CViewRenderBeams::BeamAlloc()=55 8B EC 56 57 8B F9 8B 77 08=partial pdb
virtual void CViewRenderBeams::KillDeadBeams()=55 8B EC 51 53 8B D9 56 57 33 FF 8B 73 04=partial pdb
void CViewRenderBeams::SetupBeam()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B ? ? ? ? ? 56=partial pdb
int CViewRenderBeams::CullBeam()=55 8B EC 8B 4D 08 83 EC 18=partial pdb
void CViewRenderBeams::UpdateBeam()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 20 56 8B 73=partial pdb
virtual void CViewRenderBeams::UpdateTempEntBeams()=55 8B EC 83 EC 08 56 8B 71 04=partial pdb
void CViewRenderBeams::DrawBeamFollow()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 56 8B 73=partial pdb
virtual void CViewRenderBeams::DrawBeam()=55 8B EC 83 E4 F8 83 EC 28 89=partial pdb
virtual void CViewRenderBeams::UpdateBeamInfo()=55 8B EC 8B 55 0C 8B 4D 08 8B 42=partial pdb
bool CViewRenderBeams::RecomputeBeamEndpoints()=55 8B EC 51 56 8B 75 08 57 8B 4E=partial pdb
void CViewRenderBeams::ClipBeam()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 43 08 83=partial pdb
virtual void CViewEffects::CalcShake()=55 8B EC 83 E4 C0 83 EC 34 53 56 8B F1 0F=partial pdb
void CViewEffects::CalcShake_Basic()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 08 56 8B 73 08 57 8B ? ? ? ? ? 89=partial pdb
virtual void CViewEffects::ApplyShake()=55 8B EC F3 ? ? ? ? 8B 45 08=partial pdb
virtual void CViewEffects::CalcTilt()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 C7 ? ? ? ? ? ? C7=partial pdb
virtual void CViewEffects::Shake()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 85 C0 74 09=partial pdb
virtual void CViewEffects::Tilt()=55 8B EC 56 57 8B 7D 08 8B F1 8B 07 85=partial pdb
virtual void CViewEffects::Fade()=55 8B EC 51 A1 ? ? ? ? 56 57 8B F9 8B 08 6A 14=partial pdb
virtual void CViewEffects::FadeCalculate()=55 8B EC 83 EC 08 53 56 8B F1 57 8B 5E=partial pdb
virtual void CViewEffects::GetFadeParams()=55 8B EC 8B ? ? ? ? ? 56 8B F1 85 D2 74 45=partial pdb
void UpdateFullScreenDepthTexture()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 83 EC 14=partial pdb
virtual CViewAngleAnimation::~CViewAngleAnimation()=56 57 8B F9 8B ? ? ? ? ? 83 EE 01 C7=partial pdb
virtual void CViewAngleAnimation::Spawn()=55 8B EC 83 EC 10 8D 55=partial pdb
virtual void CLightmapDebugView::Draw()=55 8B EC 83 EC 64 53 8B D9 8B ? ? ? ? ? 56 57 8B=partial pdb
OverlayShowTexture()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 F3 ? ? ? ? 8B ? ? ? ? ? 6A=partial pdb
r_screenoverlay()=55 8B EC 8B 45 08 83 38 02 75 72=partial pdb
virtual bool CLumCompareMaterialProxy::Init()=55 8B EC 51 8B ? ? ? ? ? 56 6A 00=partial pdb
virtual bool CDownsampleMaterialProxy::Init()=55 8B EC 51 56 8B 75 08 8D 4D=partial pdb
SetRenderTargetAndViewPort()=53 8B D9 8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B=partial pdb
void CHistogramBucket::IssueQuery()=55 8B EC 83 EC 78 53 56=partial pdb
void CTonemapSystem::IssueAndReceiveBucketQueries()=55 8B EC 83 EC 0C 53 56 57 8B F9 E8 ? ? ? ? FF=partial pdb
float CTonemapSystem::ComputeTargetTonemapScalar()=55 8B EC 83 EC 0C 56 57 8B F9 8B ? ? ? ? ? 81=partial pdb
GetExposureRange()=55 8B EC 51 80 ? ? ? ? ? ? 0F 57=partial pdb
void CTonemapSystem::UpdateBucketRanges()=55 8B EC 83 E4 F8 83 EC 1C 53 56 8B F1 8B=partial pdb
void UpdateMaterialSystemTonemapScalar()=55 8B EC 83 EC 14 56 57 8B F9 8B ? ? ? ? ? 8B 01=partial pdb
void ResetToneMapping()=55 8B EC 83 EC 18 A1 ? ? ? ? 0F=partial pdb
void CTonemapSystem::SetTonemapScale()=55 8B EC 83 EC 08 F3 ? ? ? ? 0F 28 FB=partial pdb
virtual void CEnginePostMaterialProxy::OnBind()=56 8B F1 57 8B 4E 04 85 C9 74=partial pdb
void OnRenderStart()=55 8B EC 8B ? ? ? ? ? 83 EC 08 8B 01=partial pdb
DebugOverlayNumActiveCustomMaterialsGraph()=55 8B EC 83 EC 18 8B 01 53 56 57 89 4D F4=partial pdb
bool DoEnginePostProcessing()=55 8B EC 83 EC 4C 80=partial pdb
virtual void CTeamIdMaterialProxy::OnBind()=55 8B EC 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 75 11=partial pdb
virtual class VPlane near * CViewRender::GetFrustum()=8B ? ? ? ? ? 85 C0 74 07 8B ? ? ? ? ? C3 8D=partial pdb
void CWorldListCache::Flush()=55 8B EC 51 0F ? ? ? ? ? ? BA=partial pdb
BuildEngineDrawWorldListFlags()=53 8B D9 8B D3=partial pdb
SetClearColorToFogColor()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 8B 01 56=partial pdb
virtual void CSimpleRenderExecutor::AddView()=55 8B EC 56 57 8B F9 E8 ? ? ? ? 8B 47=partial pdb
virtual bool CViewRender::ShouldDrawBrushModels()=8B ? ? ? ? ? 85 C9 74 0C 8B 01 FF 50 34 85 C0 75=partial pdb
virtual void CViewRender::GetScreenFadeDistances()=55 8B EC 8B ? ? ? ? ? 56 8B 75 08 57 8B 7D=partial pdb
GetFogColorTransition()=55 8B EC 85 C9 0F ? ? ? ? ? A1=partial pdb
void CSkyboxView::Enable3dSkyboxFog()=55 8B EC 8B 4D 04 83 EC 10 56=partial pdb
void CViewRender::SetupMain3DView()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 14 89=partial pdb
void CViewRender::CleanupMain3DView()=53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 8B ? ? ? ? ? 8B=partial pdb
virtual void CViewRender::QueueOverlayRenderView()=55 8B EC 56 FF 75 08 8B F1 8D ? ? ? ? ? C6=partial pdb
void ParticleUsageDemo()=55 8B EC 8B ? ? ? ? ? 83 EC 14 53=partial pdb
bool DoesViewPlaneIntersectWater()=55 8B EC 81 ? ? ? ? ? 53 8B C2 F3=partial pdb
CRendering3dView::CRendering3dView()=55 8B EC 56 8B F1 8D 4E 08 C7 ? ? ? ? ? ? E8=partial pdb
DrawClippedDepthBox()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 42=partial pdb
DrawRenderable()=55 8B EC 51 A1 ? ? ? ? 53 56 57 8B FA=partial pdb
virtual bool C_Plasma::Simulate()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 55 FC 85=partial pdb
virtual int C_Inferno::DrawModel()=55 8B EC 81 ? ? ? ? ? 53 56 57 E8 ? ? ? ? 8B D8=partial pdb
void CRendering3dView::DrawTranslucentRenderables()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 8B D9 57 89 5D E4=partial pdb
int C_CSPlayer::GetIDTarget()=55 8B EC 8B ? ? ? ? ? 83 EC 0C 8B 01 53 56 57 FF=partial pdb
bool CSkyboxView::Setup()=55 8B EC 53 8B D9 B9 ? ? ? ? 56 8B 75 08 57 8B FB 8D 43 08 F7 DF 1B FF 23 F8 F3 A5 8B CB E8 ? ? ? ? 8B=partial pdb
virtual bool CBaseWorldView::AdjustView()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? A8=partial pdb
void CBaseWorldView::DrawSetup()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 8B ? ? ? ? ? 57=partial pdb
virtual void CAboveWaterView::Draw()=55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 8B=partial pdb
void CAboveWaterView::CReflectionView::Setup()=55 8B EC 51 53 8B D9 B9 ? ? ? ? 56 57 8B=partial pdb
virtual void CAboveWaterView::CReflectionView::Draw()=55 8B EC 83 EC 1C 53 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual void CAboveWaterView::CRefractionView::Draw()=55 8B EC 83 EC 18 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual void CUnderWaterView::Draw()=55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 56 89=partial pdb
virtual void CReflectiveGlassView::Draw()=53 56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 A1=partial pdb
void CConcurrentViewBuilder::SequentialJobs::AddJob()=55 8B EC 56 8D 71 48=partial pdb
void CMatRenderContextPtr::GetFrom()=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 0F=partial pdb
bool CVoiceBanMgr::Init()=55 8B EC 83 EC 24 53 57 8B D9 E8=partial pdb
void CVoiceBanMgr::SaveState()=55 8B EC 83 EC 08 53 57 8B F9 8B ? ? ? ? ? 83 C1=partial pdb
void CVoiceStatus::LevelShutdown()=55 8B EC 83 EC 08 A1 ? ? ? ? 53 56 C7=partial pdb
void CVoiceStatus::UpdateServerState()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 80 ? ? ? ? ? ? 53 56 8B=partial pdb
void CVoiceStatus::SetPlayerBlockedState()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 81=partial pdb
bool VScriptClientInit()=55 8B EC 51 83 ? ? ? ? ? ? 56 0F ? ? ? ? ? BE=partial pdb
virtual void CVScriptGameSystem::LevelInitPreEntity()=C6 41 0C 01 E9=partial pdb
virtual void CVScriptGameSystem::LevelInitPostEntity()=C6 41 0C 00 C3=partial pdb
virtual void CWaterLODMaterialProxy::OnBind()=55 8B EC 83 EC 08 56 8B F1 83 7E 04=partial pdb
CBaseHudWeaponSelection::UserCmd_Slot3()=56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 83=partial pdb
virtual void CBaseHudWeaponSelection::UserCmd_Slot5()=8B 01 6A 05 FF ? ? ? ? ? C3=partial pdb
virtual void CBaseHudWeaponSelection::UserCmd_Slot6()=8B 01 6A 06 FF=partial pdb
virtual void CBaseHudWeaponSelection::UserCmd_Slot7()=8B 01 6A 07=partial pdb
virtual void CBaseHudWeaponSelection::UserCmd_Slot8()=8B 01 6A 08 FF=partial pdb
virtual void CBaseHudWeaponSelection::UserCmd_Slot10()=8B 01 6A 0A FF ? ? ? ? ? C3=partial pdb
int inflate_flush()=55 8B EC 83 EC 10 53 56 57 8B F9 8B C2=partial pdb
int inflate_codes()=55 8B EC 83 EC 20 53 8B D9 8B C2=partial pdb
int inflate_blocks_free()=56 8B F1 57 8B FA 8B 06 83=partial pdb
_adler32_0()=55 8B EC 56 8B 75 08 57 8B 7D 0C 0F B7=partial pdb
int inflate()=55 8B EC 51 53 56 8B F1 57 85=partial pdb
struct LUFILE near * lufopen()=55 8B EC 83 EC 0C 57 8B 7D=partial pdb
unsigned int lufread()=55 8B EC 51 53 56 57 8B 7D 0C 8B DA=partial pdb
unsigned long unzlocal_SearchCentralDir()=55 8B EC 83 EC 14 57 8B F9 8B ? ? ? ? ? 80=partial pdb
int unzClose()=56 8B F1 85 F6 75 05 8D 41 9A=partial pdb
int unzOpenCurrentFile()=55 8B EC 83 EC 0C 57 8B F9 C7=partial pdb
int unzReadCurrentFile()=55 8B EC 83 EC 10 53 56 57 33 C0=partial pdb
int unzCloseCurrentFile()=53 57 8B D9 33 FF 85=partial pdb
void EnsureDirectory()=55 8B EC 81 ? ? ? ? ? 85 D2 0F=partial pdb
float Helper_RandomFloat()=55 8B EC 83 EC 24 56 8B F1 8D=partial pdb
bool CWeaponDatabase::LoadWeaponDataFromFile()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 8B 75 0C=partial pdb
bool CAchievementMgr::HasAchieved()=55 8B EC FF 75 0C 8B 49=partial pdb
virtual void CSnowFallManager::ClientThink()=A1 ? ? ? ? 56 8B F1 57 F3 ? ? ? ? 51=partial pdb
virtual int C_BaseCSGrenadeProjectile::DrawModel()=55 8B EC 53 56 57 8B F9 8B 4D 04 E8 ? ? ? ? 8B ? ? ? ? ? 8D=partial pdb
static void C_CHostage::RecvProxy_Rescued()=55 8B EC 8B 45 08 8B 4D 0C 8B 40 08 85=partial pdb
static void C_CHostage::RecvProxy_Jumped()=55 8B EC 8B 45 08 53 56 8B 75 0C 8B 40=partial pdb
C_CHostage::C_CHostage()=55 8B EC 83 EC 08 53 56 57 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8D=partial pdb
virtual void C_CHostage::Spawn()=55 8B EC 83 EC 08 56 8B F1 C7 ? ? ? ? ? ? 57=partial pdb
virtual void C_CHostage::UpdateClientSideAnimation()=55 8B EC 83 EC 10 57 8B F9 8B 47 08=partial pdb
virtual void C_CHostage::ClientThink()=55 8B EC 8B ? ? ? ? ? 53 83 C0=partial pdb
class C_EntityDissolve near * DissolveEffect()=55 8B EC 83 EC 0C 56 8B F1 57 8B ? ? ? ? ? 83 FA=partial pdb
virtual void C_CHostage::OnDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8A ? ? ? ? ? 0F=partial pdb
virtual void C_CHostage::ImpactTrace()=55 8B EC A1 ? ? ? ? 56 8B F1 A8 01 75 22=partial pdb
static void C_BasePlayer::RecvProxy_LocalVelocityZ()=55 8B EC 83 EC 08 B9 ? ? ? ? C7 ? ? ? ? ? ? E8 ? ? ? ? 89=partial pdb
void RemoveSmokeGrenadeHandle()=55 8B EC 51 53 8B ? ? ? ? ? 56 33 F6 85=partial pdb
virtual void C_TEPlayerAnimEvent::PostDataUpdate()=57 8B F9 8B 47 0C 83 F8 FF=partial pdb
virtual void C_CSRagdoll::OnDataChanged()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 75 1E=partial pdb
void RecvProxy_NightVision()=55 8B EC 8B 45 08 8B 50 08 85=partial pdb
void RecvProxy_FlashTime()=55 8B EC 8B 45 08 0F 57 C9 56=partial pdb
static void C_CSPlayer::RecvProxy_CycleLatch()=55 8B EC 83 E4 C0 83 EC 38 56 57 8B 7D=partial pdb
C_CSPlayer::C_CSPlayer()=55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 89 7C 24 0C=partial pdb
virtual bool C_PlayerFootContactShadow::ShouldDraw()=53 57 8B F9 6A 00 8B=partial pdb
void UTIL_clipwalls_debugline()=F3 ? ? ? ? ? ? ? 56 8B F1 0F 2F 46 2C 77 31=partial pdb
static void C_BaseEntity::CalcAimEntPositions()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 83=partial pdb
virtual void C_PoseController::Spawn()=55 8B EC 8B 4D 04 56 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74 19=partial pdb
ForwardEndMatchVoteNextMapToServer()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 75 56=partial pdb
GlowEffectHLTVReplay()=55 8B EC 83 ? ? ? ? ? ? 56 0F ? ? ? ? ? A1=partial pdb
GlowEffectGunGameLeader()=55 8B EC 51 53 8B 5D 0C 85=partial pdb
void C_CSPlayer::RecordAmmoForRound()=57 8B F9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 74=partial pdb
virtual void C_CSPlayer::OnSetDormant()=55 8B EC 83 E4 F8 80 7D 08 00 56 57 8B F1=partial pdb
virtual void C_PlantedC4::Spawn()=55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? 53 56 8B D9=partial pdb
virtual void C_ServerRagdoll::GetRenderBounds()=55 8B EC 83 7D 10 01=partial pdb
virtual void C_CSPlayer::GetRenderBounds()=55 8B EC 56 57 8B 7D 0C 8B F1 57 FF=partial pdb
virtual bool C_CSPlayer::GetShadowCastDirection()=55 8B EC 8B 45 0C 83 F8 01=partial pdb
virtual bool C_CSPlayer::ShouldShowRadioHeadIcon()=8B ? ? ? ? ? 85 C9 74 11 8B 01 8B ? ? ? ? ? FF=partial pdb
virtual void C_CSPlayer::ClientThink()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B 47 F8=partial pdb
virtual void C_CHostage::OnPreDataChanged()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 0F=partial pdb
virtual void C_CSPlayer::SetModelPointer()=55 8B EC 83 EC 08 53 56 57 8B F9 89 7D F8 8B 47 04=partial pdb
class C_CSPlayer near * GetHudPlayer()=55 8B EC 8B 4D 04 56 57 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74 57=partial pdb
virtual enum ShadowType_t C_CSPlayer::ShadowCastType()=55 8B EC 51 B8 ? ? ? ? 66=partial pdb
virtual bool C_CSPlayer::Weapon_CanSwitchTo()=55 8B EC 56 57 8B 7D 08 8B F1 8B CF 8B 07 8B=partial pdb
virtual void C_CSPlayer::UpdateClientSideAnimation()=55 8B EC 51 56 8B F1 80 ? ? ? ? ? ? 74 36=partial pdb
virtual void C_CSPlayer::ProcessMuzzleFlashEvent()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B 07=partial pdb
virtual bool C_CSPlayer::GetAttachment()=55 8B EC 56 8B F1 8B ? ? ? ? ? D1=partial pdb
void C_CSPlayer::ReevauluateAnimLOD()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 30 56 57 8B F9 8B ? ? ? ? ? 8B 01=partial pdb
virtual bool C_CSPlayer::SetupBones()=55 8B EC 57 8B F9 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=partial pdb
virtual void C_CSPlayer::NotifyOnLayerChangeSequence()=55 8B EC 8B 45 08 85 C0 74 1C=partial pdb
void CBoneSnapshot::Update()=55 8B EC 53 56 8B F1 0F=partial pdb
void CBoneSnapshot::CaptureSnapshot()=55 8B EC 51 57 8B F9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 0F=partial pdb
void CBoneSnapshot::InitWeightList()=53 8B D9 8B 0B 85=partial pdb
virtual void C_CSPlayer::FireEvent()=55 8B EC 83 E4 F8 8B 55 10 81 ? ? ? ? ? 53 56 8B=partial pdb
void C_CSPlayer::SetSpecWatchingGrenade()=55 8B EC 51 80 7D 0C 00 53 56 8B D9 57 89 5D FC 74 6D=partial pdb
virtual void C_CSPlayer::CalcObserverView()=55 8B EC 56 8B F1 E8 ? ? ? ? 8B 06=partial pdb
bool C_CSPlayer::ShouldInterpolateObserverChanges()=55 8B EC A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 75 05=partial pdb
virtual void C_CSPlayer::SetObserverTarget()=55 8B EC 8B 45 08 83 EC 0C 56=partial pdb
int C_BasePlayer::GetUserID()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 56 74=partial pdb
virtual void C_CSPlayer::UpdateRadioHeadIcon()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B 07=partial pdb
GetSkyboxFogEnd()=55 8B EC 51 A1 ? ? ? ? 56 8B F1 A8 01 75 19=partial pdb
void C_CSPlayer::UpdateFreezeCamFlashlightEffect()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 F3=partial pdb
virtual void CBaseModPanel::CloseBaseDialogs()=55 8B EC 83 E4 F8 83 EC 58 56 8B F1 57 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
virtual int C_BulletHitModel::DrawModel()=55 8B EC 53 57 8B F9 83=partial pdb
void CStartOfRoundAudioPlayback::Update()=55 8B EC 83 EC 2C 53 56 57 8B F9 80=partial pdb
_anonymous_namespace_::GripPanel::moved()=55 8B EC 83 E4 C0 A1 ? ? ? ? 83 EC 34 53 56 57 A8 01 75 19=partial pdb
CSoftbodyEnvironment::CSoftbodyEnvironment()=55 8B EC 51 56 8B F1 E8 ? ? ? ? 8D ? ? ? ? ? E8=partial pdb
void CRendering3dView::BuildWorldRenderLists()=55 8B EC 8B 45 0C 83 EC 08 83 F8=partial pdb
bool CVoiceStatus::ShouldHideCommunicationFromPlayer()=55 8B EC 51 53 89=partial pdb
C_CSRootPanel::C_CSRootPanel()=55 8B EC 83 EC 08 53 56 57 FF 75 10 8B D9 6A=partial pdb
virtual C_PlantedC4::~C_PlantedC4()=55 8B EC 83 EC 08 53 8B D9 8D 45=partial pdb
bool C_PlantedC4::CreateDefuserRopes()=55 8B EC 83 EC 14 53 56 57 8B D9 E8 ? ? ? ? 8B ? ? ? ? ? 8D=partial pdb
SetBuyData()=55 8B EC 81 ? ? ? ? ? 8B C1 89 45 FC F7=partial pdb
virtual void CCSModeManager::LevelInit()=55 8B EC 8B ? ? ? ? ? 6A 00 6A 00 68=partial pdb
cl_steamscreenshots()=55 8B EC 83 EC 0C 8B 45 08 53 B3=partial pdb
virtual ClientModeCSNormal::~ClientModeCSNormal()=56 8B F1 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? E8=partial pdb
float CFeModel::RelaxQuad0()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 C7=partial pdb
virtual void SFMapOverview::ProcessInput()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F1 E8=partial pdb
void ClientModeCSNormal::UpdatePostProcessingEffects()=55 8B EC 51 53 56 57 8B F9 8B 4D 04 E8 ? ? ? ? 8B=partial pdb
void BlackBox_Record()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 89=partial pdb
virtual bool ClientModeCSNormal::ShouldDrawViewModel()=55 8B EC 51 57 E8=partial pdb
void V_SafeComposeFilename()=55 8B EC 8B ? ? ? ? ? 56 57 8B 01=partial pdb
virtual bool C_Knife::Deploy()=56 8B F1 E8 ? ? ? ? 84 C0 75 02 5E C3 8B CE=partial pdb
void C_Inferno::SynchronizeDrawables()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 33=partial pdb
SRoundData::SRoundData()=55 8B EC 83 EC 08 56 8B F1 C6=partial pdb
virtual void CCSGameStats::SubmitGameStats()=55 8B EC A1 ? ? ? ? 56 57 33=partial pdb
void CCSClientGameStats::RetrieveSteamStats()=55 8B EC 83 EC 08 8B C1 8B=partial pdb
void CCSClientGameStats::UpdateSteamStats()=53 8B ? ? ? ? ? 85 DB 74 53=partial pdb
void CCSClientGameStats::UpdateLastMatchStats()=53 8B D9 56 57 33 FF 8D ? ? ? ? ? 0F 1F 00 83 7E=partial pdb
virtual float CCSGameMovement::LadderDistance()=8B 41 04 80 ? ? ? ? ? ? 75=partial pdb
virtual void CCSGameMovement::CheckParameters()=55 8B EC 83 E4 F8 83 EC 48 56 57 8B F9 89=partial pdb
virtual float CCSGameMovement::ClimbSpeed()=8B 41 08 F7 ? ? ? ? ? ? 75=partial pdb
void SFHudRadar::SetIconPackagePosition()=55 8B EC 83 E4 F8 83 EC 58 56 57 8B F9 8B ? ? ? ? ? 80=partial pdb
void CCSGameMovement::HandleDuckingSpeedCrop()=55 8B EC 51 56 8B F1 F3 ? ? ? ? 8B 4E 04=partial pdb
virtual bool CCSGameMovement::CanUnduck()=55 8B EC 81 ? ? ? ? ? 57 8B F9 8B ? ? ? ? ? 80=partial pdb
virtual void CCSGameMovement::Duck()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B 57=partial pdb
virtual void C_BaseEntity::VPhysicsUpdate()=55 8B EC 83 E4 F8 83 EC 30 56 8B F1=partial pdb
int CompareHintsByDisplayCount()=55 8B EC 8B 45 08 8B 00 8B 48 08=partial pdb
virtual bool C_CSGameRules::IgnorePlayerKillCommand()=56 8B F1 80 7E 74 00 74=partial pdb
int C_CSGameRules::GetCurrentGunGameWeapon()=55 8B EC 8B 55 08 85 D2 78 35 83=partial pdb
bool C_CSGameRules::CanSpendMoneyInMap()=55 8B EC 83 EC 0C 56 8B F1 8B ? ? ? ? ? 81=partial pdb
bool C_CSGameRules::IsBuyTimeElapsed()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 20 83 F8 02 74 41=partial pdb
virtual float C_CSGameRules::GetNextRespawnWave()=55 8B EC 51 56 57 8B 7D 0C 8B F1 85 FF 75 12=partial pdb
void C_SoundscapeSystem::AddSoundScapeFile()=55 8B EC 83 EC 08 53 8B D9 33 D2=partial pdb
bool C_CSGameRules::IsPlayingCooperativeGametype()=8B ? ? ? ? ? 8B 01 FF 50 20 33 C9 83 F8 04=partial pdb
virtual void CAchievementCS_PistolMaster::Init()=55 8B EC 83 E4 F8 83 EC 10 56 57 68=partial pdb
void PlayMusicSelection()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F2=partial pdb
virtual float AshDebrisEffect::UpdateRoll()=55 8B EC 83 EC 24 F3 ? ? ? ? F3=partial pdb
void EnforceCompetitiveCVar()=55 8B EC 83 E4 C0 83 EC 3C 56 6A=partial pdb
virtual void CCompetitiveCvarManager::Shutdown()=56 57 33 FF 8B ? ? ? ? ? 85 F6 75=partial pdb
virtual int C_PlayerResource::GetAssists()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8D ? ? ? ? ? 57=partial pdb
void StatsCollection_t::Aggregate()=55 8B EC 8B 55 08 56 57 33=partial pdb
virtual void CHudChat::CreateChatLines()=8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 56 6A 00 68=partial pdb
virtual void C_World::OnDataChanged()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 05 8B 01 FF 50 14=partial pdb
virtual C_BreakableSurface::~C_BreakableSurface()=55 8B EC 51 53 8B D9 56 57 8D ? ? ? ? ? C7 ? ? ? ? ? C7=partial pdb
void CUtlStringList::CopyAndAddToTail()=55 8B EC 83 EC 28 56 57 8B F9 BA=partial pdb
int CPlayerRankManager::CountAchievedInCategory()=55 8B EC 8B 45 08 83 F8 05=partial pdb
GetSkyboxFogColor()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B 75 08 8D=partial pdb
void CPlayerRankManager::OnSeasonCoinLeveledUp()=55 8B EC 83 E4 F8 8B 45 08 83 EC 0C 53 56 8B=partial pdb
bool CPlayerRankManager::CheckCategoryRankLevelUp()=55 8B EC 83 EC 0C 83 7D 08 05=partial pdb
void CCSInventoryManager::UpdateUnacknowledgedItems()=55 8B EC 83 EC 14 53 56 57 8B ? ? ? ? ? 68=partial pdb
void CCSPlayer::GetBulletTypeParameters()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 83 F8 01=partial pdb
bool CCSPlayer::IsPrimaryOrSecondaryWeapon()=55 8B EC 8B 45 08 83 F8 01 74 1F=partial pdb
void AddCoolLine()=55 8B EC 83 E4 F0 81 ? ? ? ? ? F3 ? ? ? ? 8D=partial pdb
virtual void C_CSPlayer::CalcFreezeCamView()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B 07=partial pdb
virtual class QAngle C_CSPlayer::GetAimPunchAngle()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=partial pdb
bool C_CSPlayer::CanMove()=56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 06 FF=partial pdb
void SFHudInfoPanel::ModifyPriorityTextWindow()=55 8B EC 83 EC 0C A1 ? ? ? ? 56 57 8B F9 F3 ? ? ? ? 8D=partial pdb
void SFUniqueAlerts::ProcessMissionPanelGuardian()=55 8B EC 83 EC 18 8B 45 10 85=partial pdb
class C_WeaponCSBase near * C_CSPlayer::GetCSWeapon()=55 8B EC 53 56 57 8B D9 33=partial pdb
bool C_CSPlayer::UpdateLayerWeaponDispatch()=55 8B EC 56 57 8B F9 8B 07 FF ? ? ? ? ? 85=partial pdb
virtual float C_CSPlayer::GetLayerSequenceCycleRate()=55 8B EC 56 57 FF 75 0C 8B 7D 08 8B F1 57 E8=partial pdb
vgui::FocusNavGroup::~FocusNavGroup()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 57 89 74 24 20=partial pdb
CCSPlayerAnimState::CCSPlayerAnimState()=E8 ? ? ? ? A1 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
virtual void CCSPlayerAnimState::ModifyTauntDuration()=55 8B EC F3 ? ? ? ? ? ? ? 0F 57 DB 0F=partial pdb
void FX_BuildTeslaZap()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8B CE E8=partial pdb
virtual void CCSPlayerAnimState::DoAnimationEvent()=55 8B EC 51 53 8B D9 56 57 8B ? ? ? ? ? 8B 01 FF 10=partial pdb
virtual bool CCSPlayerAnimState::IsThrowingGrenade()=80 ? ? ? ? ? ? 74 15 F3 ? ? ? ? ? ? ? 33=partial pdb
bool CCSPlayerAnimState::IsOuterGrenadePrimed()=8B 49 1C 8B 01 FF=partial pdb
void CCSPlayerAnimState::ComputeGrenadeSequence()=55 8B EC 83 EC 0C 53 56 8B F1 80=partial pdb
int CCSPlayerAnimState::CalcGrenadePrimeSequence()=8B D1 8B 42 78 3D ? ? ? ? 7F 2D=partial pdb
int CCSPlayerAnimState::CalcGrenadeThrowSequence()=55 8B EC 8B D1 8B 42 78=partial pdb
void CCSPlayerAnimState::ComputeFlashedSequence()=55 8B EC 83 EC 08 56 57 6A 00 68 ? ? ? ? 8B F1 68 ? ? ? ? 6A 00 FF 76 1C E8 ? ? ? ? 8B F8 83 C4 14 85=partial pdb
void CCSPlayerAnimState::ComputeTauntSequence()=55 8B EC 83 EC 08 56 6A 00 68=partial pdb
virtual int CCSPlayerAnimState::CalcAimLayerSequence()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF 10=partial pdb
int CCSPlayerAnimState::CalcFireLayerSequence()=55 8B EC 81 ? ? ? ? ? 53 57 8B F9 8B ? ? ? ? ? 8B 01 FF 10=partial pdb
virtual void CCSPlayerAnimState::ComputeSequences()=57 8B F9 E8 ? ? ? ? 8B 07 8B CF 8B=partial pdb
void CCSPlayerAnimState::ComputeFireSequence()=55 8B EC 83 EC 14 56 8B F1 8B ? ? ? ? ? 83 F9=partial pdb
int CCSPlayerAnimState::CalcDeployLayerSequence()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 FF 10=partial pdb
virtual void CLabeledCommandComboBox::DeleteAllItems()=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 5E=partial pdb
void CCSViewRender::PerformNightVisionEffect()=55 8B EC 51 8B 4D 04 56 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 0F ? ? ? ? ? 8B 06 8B CE 57=partial pdb
void ComputeScreenSizeInfo()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 56 57=partial pdb
void CCSViewRender::PerformFlashbangEffect()=55 8B EC 83 EC 48 53 56 89=partial pdb
void WeaponRecoilData::GenerateRecoilTable()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 81 ? ? ? ? ? 75 0C=partial pdb
virtual unsigned short C_BaseEntity::GetShadowHandle()=53 56 57 8B F9 33 C0 33 F6 BB ? ? ? ? 66 3B 47 08 73 49=partial pdb
void CCSGOPlayerAnimState::Reset()=56 6A 01 68 ? ? ? ? 8B F1=partial pdb
bool C_BaseCombatWeapon::DefaultReload()=55 8B EC 83 EC 14 57 8B F9 8B 07=partial pdb
float Gain()=55 8B EC 83 EC 48 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
sv_cs_dump_econ_item_stringtable()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? C7=partial pdb
float C_CSGameRules::GetRespawnWaveMaxLength()=55 8B EC 83 E4 F8 83 EC 14 8D=partial pdb
cl_avatar_convert_rgb()=55 8B EC 83 EC 08 8B ? ? ? ? ? 8D 55 FC C7=partial pdb
void CreateHolidayLight()=55 8B EC A1 ? ? ? ? 83 EC 1C 53 57=partial pdb
void RopesHolidayLightColor()=55 8B EC 56 8B 75 08 8B 06 83 F8 05=partial pdb
void KnifeSlash()=55 8B EC 81 ? ? ? ? ? 53 57 8B 7D 08 8D=partial pdb
void C_RopeKeyframe::AddRopeFlags()=55 8B EC 51 53 56 8B 75 08 8B D9 89 5D FC 85 F6 74=partial pdb
virtual bool GameTypes::SetGameTypeAndMode()=55 8B EC 83 EC 08 56 8B F1 C7 ? ? ? ? ? ? 8D=partial pdb
virtual bool GameTypes::ApplyConvarsForCurrentMode()=55 8B EC 81 ? ? ? ? ? 8B C1 53 89 45 EC=partial pdb
virtual void ClientModeCSFullscreen::OnEvent()=55 8B EC 83 EC 08 56 8B F1 E8 ? ? ? ? 85 C0=partial pdb
virtual char const near * GameTypes::GetFirstMap()=55 8B EC 8B 45 08 85 C0 75 06 33=partial pdb
virtual char const near * GameTypes::GetRandomMap()=55 8B EC 8B 45 08 57 8B F9 85 C0 75=partial pdb
virtual char const near * GameTypes::GetNextMap()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 56 68=partial pdb
virtual bool GameTypes::IsValidMapGroupName()=55 8B EC 8B 45 08 85 C0 74 14 80 38=partial pdb
virtual bool GameTypes::IsValidMapInMapGroup()=55 8B EC 83 EC 40 56 8B F1 57 8B=partial pdb
virtual bool GameTypes::ApplyConvarsForMap()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 85 C0 74=partial pdb
virtual bool GameTypes::GetMapInfo()=55 8B EC FF 75 08 E8 ? ? ? ? 85 C0 75 06=partial pdb
CCascadeLightManager::CCascadeLightManager()=55 8B EC 51 53 56 8B 75 08 57 56=partial pdb
virtual bool GameTypes::IsWorkshopMapGroup()=55 8B EC FF 75 08 E8 ? ? ? ? 85 C0 74 0F=partial pdb
virtual void CModelCombiner::LevelShutdownPostEntity()=56 57 8B F9 33 F6 39 77 18=partial pdb
void C_Inferno::UpdateParticles()=55 8B EC 83 EC 30 53 56 8B F1 57 89=partial pdb
virtual void C_Inferno::GetRenderBounds()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 7F=partial pdb
virtual void C_Inferno::GetRenderBoundsWorldspace()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 3F=partial pdb
void C_CSPlayer::PlayReloadEffect()=55 8B EC 83 EC 10 57 8B F9 8B ? ? ? ? ? 89=partial pdb
void CSaveGamePanel::SetSaveGameInfo()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 8B 5D=partial pdb
static int CBaseSaveGameDialog::SaveGameSortFunc()=55 8B EC 8B 55 08 56 8B 75 0C 8B ? ? ? ? ? 8B=partial pdb
int SaveReadNameAndComment()=55 8B EC 83 EC 24 53 56 8B F1 8B DA 8B=partial pdb
virtual void CBitmapImagePanel::PaintBackground()=55 8B EC 83 EC 0C 53 8B D9 80=partial pdb
virtual bool CCreateMultiplayerGameDialog::OnOK()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50=partial pdb
virtual void CServerDescription::WriteFileHeader()=55 8B EC 83 EC 6C 66 ? ? ? ? ? 66 89 45 F8 A0 ? ? ? ? 88=partial pdb
void CCreateMultiplayerGameServerPage::EnableBots()=55 8B EC 83 EC 40 53 56 57 8B 7D 08 8B D9=partial pdb
void CCreateMultiplayerGameServerPage::SetMap()=55 8B EC 56 57 8B F9 33 F6 8B ? ? ? ? ? 8B=partial pdb
virtual void CCvarNegateCheckButton::Paint()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 85 C0 74 70=partial pdb
void CCvarNegateCheckButton::Reset()=55 8B EC 83 EC 0C 56 8B F1 8D 4D F8 6A 00 FF=partial pdb
void UTIL_TraceLine()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 0C 56=partial pdb
void CCvarSlider::SetupSlider()=55 8B EC 83 E4 C0 83 EC 78 56 57 8B F9=partial pdb
virtual void CCvarSlider::GetSettings()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 80=partial pdb
virtual void CCvarSlider::Paint()=55 8B EC 83 EC 08 56 8B F1 8D 4D F8 6A=partial pdb
void CCvarSlider::SetSliderValue()=55 8B EC 51 0F 28 C1 F3=partial pdb
void CCvarSlider::Reset()=55 8B EC 83 EC 0C 56 8B F1 8D 4D F8 6A 00 8D=partial pdb
bool CCvarSlider::HasBeenModified()=56 8B F1 8B 06 FF ? ? ? ? ? 3B ? ? ? ? ? 74=partial pdb
void CCvarToggleCheckButton::ApplyChanges()=55 8B EC 83 EC 0C 56 8B F1 8B ? ? ? ? ? 85=partial pdb
void ragdoll_memory_list_t::AddToList()=55 8B EC F6 45 08 01 56 8B F1 C6=partial pdb
virtual void CGameConsoleDialog::OnCommandSubmitted()=55 8B EC 8B ? ? ? ? ? 6A 01 FF=partial pdb
virtual void CGameUI::SetLoadingBackgroundDialog()=55 8B EC 8B 45 08 A3 ? ? ? ? 5D C2=partial pdb
virtual void CGameUI::RunFrame()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B D9 8D=partial pdb
virtual void CGameUI::OLD_OnConnectToServer()=55 8B EC 8B 45 10 8B 11 50=partial pdb
virtual void CGameUI::OnConnectToServer2()=55 8B EC 8B 45 0C 89=partial pdb
virtual void CGameUI::OnLevelLoadingStarted()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF ? ? ? ? ? 80=partial pdb
virtual bool CGameUI::UpdateSecondaryProgressBar()=55 8B EC F3 ? ? ? ? 56 8B F1 51=partial pdb
void CGameUI::HideLoadingBackgroundDialog()=83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 8B 01 8B 40 68=partial pdb
virtual bool vgui::PropertySheet::RequestFocusNext()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 28=partial pdb
SplitScreenConVarRef::SplitScreenConVarRef()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B F1 8B 4D 08 85=partial pdb
vgui::ProgressBar::ProgressBar()=55 8B EC 83 EC 10 56 57 6A 00 6A 06=partial pdb
bool CModInfo::AdvCrosshair()=53 8B D9 56 57 66 ? ? ? ? ? ? ? 75=partial pdb
void CMultiplayerAdvancedDialog::DestroyControls()=53 8B D9 56 8B ? ? ? ? ? 85 F6 74 43=partial pdb
void CMultiplayerAdvancedDialog::SaveValues()=56 57 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74 6B=partial pdb
virtual void COptionsSubDifficulty::OnApplyChanges()=55 8B EC 83 EC 08 56 6A 00 8B F1 8D 4D F8 68 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
int GetJoystickForCode()=83 F9 72 7C 08 81 ? ? ? ? ? 7E 11=partial pdb
void COptionsSubKeyboard::ClearBindItems()=53 8B D9 56 33 F6 8B ? ? ? ? ? 8B=partial pdb
void COptionsSubKeyboard::RemoveKeyFromBindItems()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B 75 0C 8B=partial pdb
virtual int ClientModeShared::KeyInput()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 33=partial pdb
virtual void COptionsSubKeyboard::OnThink()=55 8B EC 51 56 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
virtual void COptionsSubKeyboard::OnKeyCodePressed()=55 8B EC 83 EC 10 53 56 8B F1 8B ? ? ? ? ? 8B=partial pdb
virtual void COptionsSubMouse::OnResetData()=55 8B EC 83 E4 F8 83 EC 08 56 8B F1 57 8B ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 85 C0 74 3A=partial pdb
virtual void COptionsSubMouse::OnApplyChanges()=55 8B EC 83 E4 F8 83 EC 08 56 8B F1 57 8B ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 85 C0 74 3D=partial pdb
virtual void COptionsSubMouse::OnControlModified()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 FF=partial pdb
virtual void COptionsSubMouse::OnTextChanged()=55 8B EC 8B 45 08 83 EC 40 56=partial pdb
void CrosshairImagePanel::UpdateCrosshair()=55 8B EC 8B 45 08 8D 55 0C=partial pdb
virtual void CrosshairImagePanel::Paint()=55 8B EC 83 EC 14 53 8B D9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 56=partial pdb
void AdvancedCrosshairImagePanel::UpdateCrosshair()=55 8B EC 8B 45 08 F3 ? ? ? ? 56 8B=partial pdb
virtual void AdvancedCrosshairImagePanel::Paint()=55 8B EC 83 EC 1C 8D 45 F4=partial pdb
virtual void COptionsSubMultiplayer::OnFileSelected()=55 8B EC 81 ? ? ? ? ? 57 8B 7D 08 89=partial pdb
enum ConversionErrorType ImgUtl_StretchRGBAImage()=55 8B EC 83 EC 30 56 8B 75 08 85=partial pdb
virtual void COptionsSubMultiplayer::OnTextChanged()=56 8B F1 E8 ? ? ? ? 8B CE E8 ? ? ? ? 8B=partial pdb
virtual void CGammaDialog::OnGammaChanged()=55 8B EC 8B ? ? ? ? ? 39 4D=partial pdb
virtual void CClientShadowMgr::SetShadowDirection()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 39=partial pdb
virtual void COptionsSubVideoAdvancedDlg::Activate()=53 56 57 8B D9 E8 ? ? ? ? 8B ? ? ? ? ? 8B CB 8B 03 8B 3E FF 10 50 8B CE FF 57 50 80=partial pdb
virtual void CClientShadowMgr::RenderShadowTexture()=55 8B EC 81 ? ? ? ? ? 57 8B F9 80 ? ? ? ? ? ? 0F=partial pdb
virtual void COptionsSubVideo::OnApplyChanges()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 8B 06 8B=partial pdb
virtual void COptionsSubVideo::OnTextChanged()=55 8B EC 51 8B 45 08 56 8B F1 3B ? ? ? ? ? 75 6F=partial pdb
virtual void COptionsSubVoice::OnResetData()=55 8B EC 83 E4 F8 83 EC 08 56 8B F1 57 8B ? ? ? ? ? 85 C0 0F=partial pdb
virtual void COptionsSubVoice::OnCheckButtonChecked()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 8B 01 8B=partial pdb
virtual void COptionsSubVoice::OnApplyChanges()=55 8B EC 83 E4 F8 51 56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
void COptionsSubVoice::UseCurrentVoiceParameters()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 51=partial pdb
virtual int CPanelListPanel::AddItem()=55 8B EC 56 8B F1 57 6A 00 6A 00 8B=partial pdb
virtual void CPanelListPanel::PerformLayout()=55 8B EC 83 EC 24 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void CPlayerListDialog::Activate()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B D9 E8 ? ? ? ? 8B=partial pdb
void CPlayerListDialog::RefreshPlayerProperties()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 57 89 74 24 14 33=partial pdb
void vgui::Panel::UpdateSiblingPin()=55 8B EC 51 53 8B D9 56 57 83=partial pdb
char near * CleanFloat()=51 A1 ? ? ? ? 40=partial pdb
void CDescription::WriteToConfig()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 56=partial pdb
virtual void BaseModUI::CUIGameData::OnEvent()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D9 85 FF 74 1F=partial pdb
virtual void vgui::URLButton::Paint()=55 8B EC 83 EC 18 53 56 8B D9 57 89 5D F4=partial pdb
virtual void vgui::URLButton::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 07 8D 4D 08 56 C7=partial pdb
virtual void vgui::URLButton::SetMouseClickEnabled()=55 8B EC 8B 45 08 40=partial pdb
virtual void vgui::URLButton::ApplySettings()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 68=partial pdb
virtual void vgui::URLButton::OnMousePressed()=53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 0F ? ? ? ? ? 83 ? ? ? ? ? ? 8B=partial pdb
virtual void vgui::URLButton::OnMouseReleased()=57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 74 0D 8B ? ? ? ? ? 6A 00 8B 01 FF 50 08 83 ? ? ? ? ? ? 74=partial pdb
virtual void vgui::URLButton::OnKeyCodePressed()=55 8B EC 8B 45 08 56 8B F1 83 F8 41=partial pdb
virtual void CInlineEditPanel::Paint()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 FC 57 50 8D 45 F8 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B ? ? ? ? ? 68 ? ? ? ? 6A 00 68=partial pdb
virtual void VControlsListPanel::StartCaptureMode()=55 8B EC 53 8B D9 56 57 FF ? ? ? ? ? 8B=partial pdb
virtual void VControlsListPanel::EndCaptureMode()=55 8B EC 53 8B D9 56 57 6A 00 C6=partial pdb
virtual bool CVGuiSystemModuleLoader::ActivateModule()=55 8B EC 8B 45 08 8B D1 85 C0 78 1A=partial pdb
bool CVGuiSystemModuleLoader::PostMessageToModule()=55 8B EC 8B 45 08 85 C0 78 48=partial pdb
void CBonusMapPanel::SetBonusMapInfo()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 0C 56 8B F1 57=partial pdb
virtual void CCommentaryItemPanel::OnPanelSelected()=55 8B EC 83 7D 08 00 56 57 8B F9 74 1E=partial pdb
bool CBonusMapsDialog::ImportZippedBonusMaps()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 8B C3=partial pdb
int CBonusMapsDialog::GetSelectedChallenge()=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 75 05=partial pdb
void CBonusMapsDialog::RefreshDialog()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 2D 80=partial pdb
void CBonusMapsDialog::RefreshCompletionPercentage()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 8B D9 8B=partial pdb
virtual void CGameMovement::ProcessMovement()=55 8B EC 51 56 8B 75 08 57 8B F9 C7=partial pdb
void CCreateMultiplayerGameServerPage::LoadMaps()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B CE E8 ? ? ? ? 8B=partial pdb
virtual void CBonusMapsDialog::OnFileSelected()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 35=partial pdb
virtual void CCommentaryDialog::OnKeyCodePressed()=55 8B EC 8B 45 08 83 F8 46 74=partial pdb
virtual void CPostCommentaryDialog::OnFinishedClose()=80 ? ? ? ? ? ? 75 45 C6=partial pdb
virtual void CPostCommentaryDialog::OnKeyCodePressed()=55 8B EC 8B 45 08 56 8B F1 83 F8 46=partial pdb
virtual void CCommentaryExplanationDialog::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 5B=partial pdb
virtual void SFWeaponSelection::FireGameEvent()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D1=partial pdb
void CBaseSaveGameDialog::ScanSavedGames()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 57 68=partial pdb
virtual void CLoadGameDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 75 79=partial pdb
void CLoadGameDialogXbox::DeleteSaveGame()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 8B=partial pdb
void RecvProxy_WeaponWorldmodel()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 FF 75 08 8B D9=partial pdb
bool CExpressionCalculator::Parse3ArgFunc()=55 8B EC 83 E4 F8 83 EC 24 89=partial pdb
ChapterSortFunc()=55 8B EC A1 ? ? ? ? A8 01 75 14=partial pdb
virtual void CSelectionOverlayPanel::OnMousePressed()=56 8B F1 8B 06 FF ? ? ? ? ? 8B C8 8B 10 8B=partial pdb
void CViewAngleAnimation::AddKeyFrame()=55 8B EC 81 ? ? ? ? ? 53 56 57 51=partial pdb
virtual void CNewGameDialog::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 83 ? ? ? ? ? ? 74=partial pdb
void CNewGameDialog::UpdateBonusSelection()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 33 C0=partial pdb
void CNewGameDialog::SetSelectedChapterIndex()=55 8B EC 83 EC 08 53 8B 5D 08 56 8B F1 57 33=partial pdb
void CNewGameDialog::ScrollBonusSelection()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 23=partial pdb
virtual void CNewGameDialog::StartGame()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 85=partial pdb
virtual void CNewGameDialog::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 38=partial pdb
void COptionsSubKeyboard::ParseActionDescriptions()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 57=partial pdb
void CMultiplayerAdvancedDialog::CreateControls()=55 8B EC 83 EC 0C 53 56 8B D9 57 89 5D F4=partial pdb
void vgui::MenuItem::CloseCascadeMenu()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 0F 56=partial pdb
virtual void COptionsSubVideoAdvancedDlg::OnCommand()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8D 54 24 04 53=partial pdb
virtual void CSaveGameDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B CE E8 ? ? ? ? 85=partial pdb
virtual void CSaveGameDialog::OnScanningSaveGames()=55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? F3 ? ? ? ? ? ? ? 56 89=partial pdb
static void CSaveGameDialog::FindSaveSlot()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 33=partial pdb
void CSaveGameDialogXbox::SaveCompleted()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 83=partial pdb
virtual void CSaveGameDialogXbox::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 27=partial pdb
void C_KeyValueSaver::WriteAllDirtyKeyValues()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 89 7C 24 0C=partial pdb
virtual void CGameMenu::OnCommand()=55 8B EC 56 8B F1 BA ? ? ? ? 8B 4D 08 E8 ? ? ? ? 8B CE 85 C0 75 16=partial pdb
virtual void CGameMenu::OnKeyCodePressed()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 56=partial pdb
void CGameMenu::UpdateMenuItemState()=55 8B EC 83 EC 10 53 56 57 8B F1 FF=partial pdb
virtual void CGameMenu::OnCursorEnteredMenuItem()=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 68 50 FF 75 08 8B CE FF ? ? ? ? ? 8B F0 85 F6 74 10=partial pdb
virtual int CHLClient::Connect()=55 8B EC 83 EC 08 53 56 57 68 ? ? ? ? 6A 00 8B D9 E8 ? ? ? ? C7 ? ? ? ? ? E8=partial pdb
void CBaseModPanel::UpdateBackgroundState()=55 8B EC 83 EC 44 53 8B D9 56 57 83=partial pdb
void CBaseModPanel::SetBackgroundRenderState()=55 8B EC 56 8B F1 57 8B 7D 08 3B ? ? ? ? ? 0F=partial pdb
virtual void CBaseModPanel::StartExitingProcess()=55 8B EC 51 56 8B F1 FF ? ? ? ? ? D9=partial pdb
void CBaseModPanel::DrawBackgroundImage()=55 8B EC 83 EC 14 53 8B D9 80 ? ? ? ? ? ? 0F=partial pdb
void CBaseModPanel::UpdateGameMenus()=55 8B EC 83 EC 08 A1 ? ? ? ? 56 8B F1 B9=partial pdb
void CBaseModPanel::CompleteStartScreenSignIn()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE C6=partial pdb
void BaseModUI::CUIGameData::RunFrame()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B D9 57=partial pdb
void CBaseModPanel::CreateStartScreenIfNeeded()=56 8B F1 80 ? ? ? ? ? ? 74 2C 6A=partial pdb
virtual void CPlayerRankManager::FireGameEvent()=55 8B EC 83 E4 F8 83 EC 74 BA=partial pdb
virtual void C_OP_NoiseEmitter::SkipToTime()=55 8B EC 53 57 8B F9 8B ? ? ? ? ? 85=partial pdb
CUtlStreamBuffer::CUtlStreamBuffer()=55 8B EC 57 FF 75 10 8B F9 68=partial pdb
void CBaseModPanel::ShowMessageDialog()=55 8B EC 8B 45 0C 8B D1 85 C0 0F=partial pdb
void CMessageDialogHandler::CloseAllMessageDialogs()=55 8B EC 8B 55 08 33 C0 F6=partial pdb
void CBaseModPanel::ShowMainMenu()=55 8B EC 53 8B 5D 08 57 8B F9 38=partial pdb
bool WriteBonusMapSavedData()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 83 ? ? ? ? 8D 44=partial pdb
void GetBooleanStatus()=55 8B EC 51 8B C2 89=partial pdb
void GetChallengeMedals()=55 8B EC 56 8B ? ? ? ? ? 89 32=partial pdb
bool CBonusMapsDatabase::ReadBonusMapSaveData()=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 7E=partial pdb
virtual void CGameUI::OnGameUIActivated()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D9 85 FF 74=partial pdb
virtual void CGameSavePanel::ApplySchemeSettings()=55 8B EC 83 EC 1C 53 56 8B 75 08 8B D9=partial pdb
void CGameSavePanel::SetDescription()=55 8B EC 81 ? ? ? ? ? 53 8B D9 B9=partial pdb
void CSaveGameBrowserDialog::LayoutPanels()=55 8B EC 83 EC 18 53 8B D9 89 5D F0=partial pdb
virtual void CSaveGameBrowserDialog::ApplySettings()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 8B F1 53 89 75 F4 E8 ? ? ? ? 6A 14=partial pdb
void CNewGameDialog::UpdateMenuComponents()=55 8B EC 51 8B 45 08 56 8B F1 89 75 FC 57=partial pdb
void CSaveGameBrowserDialog::SetSelectedSaveIndex()=55 8B EC 57 8B F9 8B 4D 08 83=partial pdb
virtual void CSaveGameBrowserDialog::FinishDelete()=56 8B F1 8B ? ? ? ? ? 83 F9 01=partial pdb
virtual void CSaveGameBrowserDialog::FinishScroll()=55 8B EC 83 EC 3C 53 56 8B F1 57=partial pdb
virtual void CSaveGameBrowserDialog::PaintBackground()=55 8B EC 83 EC 10 53 56 8B ? ? ? ? ? 8D 45 F4=partial pdb
void CSaveGameBrowserDialog::ScanSavedGames()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 80 ? ? ? ? ? ? 8D=partial pdb
void CHltvReplaySystem::PurgeRagdollBoneCache()=53 8B ? ? ? ? ? 85 DB 0F ? ? ? ? ? 8B ? ? ? ? ? 56 57=partial pdb
bool CHltvReplaySystem::PrepareHltvReplayCountdown()=55 8B EC 83 EC 08 53 56 8B F1 32=partial pdb
void CHltvReplaySystem::CacheRagdollBones()=55 8B EC 83 EC 24 53 56 8B C1=partial pdb
virtual class Color CHudChat::GetTextColorForClient()=55 8B EC 8B 45 0C 53 8B D9 56 57 83 E8 03 74 63=partial pdb
virtual void CHudScope::Paint()=55 8B EC 83 E4 F8 83 EC 78 56 89=partial pdb
virtual void CHudWeaponSelection::SetSelectedWeapon()=55 8B EC 56 8B F1 8B 4D 08 85 C9 74 0F 8B 01 FF 50=partial pdb
virtual void CHudWeaponSelection::SwitchToLastWeapon()=55 8B EC 8B 4D 04 83 EC 08 53=partial pdb
virtual void CHudWeaponSelection::SelectWeapon()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 8B 07=partial pdb
virtual void CRadioStatus::LevelShutdownPreEntity()=56 6A 01 8B F1 E8 ? ? ? ? 68=partial pdb
virtual void CRotationManipulator::UpdateTransform()=55 8B EC 83 EC 0C 56 8B F1 F3 ? ? ? ? 8D=partial pdb
CClient_Precipitation::CClient_Precipitation()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 6A=partial pdb
bool CIKTarget::IsActive()=8B ? ? ? ? ? 85 C9 75 03 32 C0 C3 A1 ? ? ? ? F3=partial pdb
virtual bool CBaseHudChat::MsgFunc_SayText2()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 8B=partial pdb
cl_soundscape_flush()=55 8B EC 83 EC 10 56 8B F1 C7 ? ? ? ? ? C7=partial pdb
GCSDK::CMessageList::CMessageList()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 8B D3=partial pdb
void SFMapOverview::Show()=55 8B EC 53 8A 5D 08 56 8B F1 80=partial pdb
void SFHudRadar::UpdateAllPlayerNumbers()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 69 ? ? ? ? ? 57=partial pdb
void SFMapOverview::UpdateAllDefusers()=55 8B EC 83 EC 10 53 8B D9 89 5D F8=partial pdb
virtual void vgui::MenuItem::OnCursorEntered()=55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 56 8B=partial pdb
CC_GameMenuCommand()=55 8B EC 56 8B 75 08 83 3E 02 7D=partial pdb
virtual void SFHudInfoPanel::ProcessInput()=55 8B EC 8B ? ? ? ? ? 83 EC 0C 53=partial pdb
KeyValues::AutoDelete::AutoDelete()=55 8B EC 56 8B F1 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 13=partial pdb
void CUtlMemory<struct template_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 75 8B 4B 04 56 57 8B 7D 08 03 F9 6A 44=partial pdb
virtual void CBenchmarkResultsDialog::Activate()=55 8B EC 83 E4 F0 83 EC 28 56 8B F1 57=partial pdb
virtual void CLabeledCommandComboBox::AddItem()=55 8B EC 53 8B D9 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
void CCSTeamMenuScaleform::UpdateSpectatorOption()=55 8B EC 83 E4 F8 83 EC 64 53 56 8B ? ? ? ? ? 57=partial pdb
virtual void CHudChatHistory::ApplySchemeSettings()=55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8D=partial pdb
bool CPotteryWheelPanel::WarpMouse()=55 8B EC 83 EC 14 53 8B D9 8B ? ? ? ? ? 56=partial pdb
void CColorCorrectionMgr::UpdateColorCorrection()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B 01=partial pdb
virtual void C_LocalTempEntity::Prepare()=55 8B EC 56 8B 75 0C 57 8B F9 B9 ? ? ? ? 89=partial pdb
void QuaternionSlerpNoAlign()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC F3 ? ? ? ? ? ? ? 83=partial pdb
void C_BaseAnimating::SetCycle()=55 8B EC 57 8B F9 80 7F 44=partial pdb
C_BaseWeaponWorldModel::C_BaseWeaponWorldModel()=56 8B F1 80 7E 08 00 74 14 8B ? ? ? ? ? 85 C9 74 06 8B 01 56 FF 50 14 C6 46 08 00 8D 4E EC C7=partial pdb
int isbreakablewspace()=55 8B EC E8 ? ? ? ? 84 C0 75=partial pdb
virtual void CHudAnimationInfo::Paint()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B ? ? ? ? ? 85=partial pdb
void VGui_GetHudBounds()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 E8=partial pdb
SFHudInfoPanel::SFHudInfoPanel()=55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B D9 6A 00 FF 75 0C 89=partial pdb
void SFHudRadar::SFHudRadarIconPackage::SetIsDead()=55 8B EC 8A 55 08 53 8A ? ? ? ? ? 8A C3 C0=partial pdb
void SFHudRadar::SFHudRadarIconPackage::SetIsSpotted()=55 8B EC A1 ? ? ? ? F3 ? ? ? ? 0F 28=partial pdb
void SFHudRadar::FlashUpdateMapLayer()=55 8B EC 83 EC 10 56 8B F1 F6=partial pdb
CTGAImagePanel::CTGAImagePanel()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 8B F1 57 89 74 24 18 8D=partial pdb
virtual bool SFHudRadar::PreUnloadFlash()=83 ? ? ? ? ? ? 53 56 57 8B F1 74 68=partial pdb
virtual void CBaseViewport::Start()=55 8B EC 53 56 8B F1 33 DB 57=partial pdb
void SFHudRadar::LazyCreatePlayerIcons()=56 8B F1 F6 ? ? ? ? ? ? 0F ? ? ? ? ? FF ? ? ? ? ? 8D ? ? ? ? ? 50 E8 ? ? ? ? FF ? ? ? ? ? C0 E0 02=partial pdb
virtual void SFHudRadar::FireGameEvent()=55 8B EC 83 EC 08 53 57 8B 7D 08 8B D9 8B=partial pdb
void SFHudRadar::WorldToRadar()=55 8B EC 83 EC 0C 56 8B F1 80 7E=partial pdb
void SFHudRadar::PlaceGoalIcons()=55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? F3 ? ? ? ? ? ? ? 56 8B=partial pdb
static void C_BaseFlex::InvalidateFlexCaches()=55 8B EC 83 E4 F8 83 EC 60 A1 ? ? ? ? 56 57=partial pdb
virtual bool SFHudReticle::ShouldDraw()=55 8B EC 57 8B F9 E8 ? ? ? ? 84 C0 74 05 32 C0 5F 5D C3 8B 4D 04 56 E8 ? ? ? ? 8B ? ? ? ? ? 85 F6 74=partial pdb
virtual void C_CSPlayer::DropPhysicsMag()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B 73 0C=partial pdb
void CUtlMemory<class CMDLAttachmentData,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 67 8B 4B 04 56 57 8B 7D 08 03 F9 6A 34=partial pdb
buymenu()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 51 8B=partial pdb
void SFHudTeamCounter::UpdateMiniScoreboard()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 8B F1 57 89 75 E0=partial pdb
virtual void CTextWindow::ShowURL()=55 8B EC 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8B D9 85=partial pdb
Create_SFHudAutodisconnect()=55 8B EC A1 ? ? ? ? 56 6A 60 8B 08 8B 01 FF 50 04 6A=partial pdb
static int SFHudTeamCounter::GGProgSortFunction()=55 8B EC 8B 4D 08 85 C9 74 53=partial pdb
static int SFHudTeamCounter::DMSortFunction()=55 8B EC 8B 45 08 85 C0 74 2A=partial pdb
int SFHudTeamCounter::GetPlayerEntIndexInSlot()=55 8B EC 83 EC 08 53 56 8B F1 57 80 7E 21=partial pdb
void CCSTeamMenuScaleform::HandleForceSelect()=55 8B EC 83 E4 C0 83 EC 34 53 56 57 8B F9 32=partial pdb
virtual bool SFUniqueAlerts::ShouldDraw()=83 ? ? ? ? ? ? 53 56 8B F1 74=partial pdb
OverlayWaterTextures()=55 8B EC 81 ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? 53=partial pdb
virtual void C_GameInstructor::Shutdown()=53 57 8B F9 8D 5F=partial pdb
void SFHudDeathNoticeAndBotStatus::PushNotice()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57=partial pdb
virtual void ClientModeCSFullscreen::FireGameEvent()=55 8B EC 53 56 57 8B 7D 08 8B D9 8B CF 8B 07 FF 50 04=partial pdb
void CCaptionSequencer::Reset()=56 8D 71 EC 6A=partial pdb
void HunterDamageCallback()=83 C1 EC E9 ? ? ? ? CC ? ? ? ? ? ? ? 55 8B EC 83=partial pdb
virtual void ClientModeShared::FireGameEvent()=55 8B EC 81 ? ? ? ? ? 53 56 57 89 4D FC E8=partial pdb
bool FClassnameIs()=55 8B EC 8B 4D 04 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74 39=partial pdb
float C_BasePlayer::GetTimeBase()=55 8B EC 51 F3 ? ? ? ? F3 ? ? ? ? 8B=partial pdb
CPlayerRankManager::CPlayerRankManager()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 0C 8B D9 FF 75 08 89 5D FC E8 ? ? ? ? C7 ? ? ? ? ? 8D 73 20 A1 ? ? ? ? 8D 7B=partial pdb
class CChoreoActor near * CChoreoScene::AllocActor()=55 8B EC 83 EC 1C 53 56 57 6A=partial pdb
void CInterpolatedValue::Init()=55 8B EC 83 E4 F8 83 EC 3C 53 56 8B F1 57 8B 06=partial pdb
virtual void CTextWindow::SetData()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 75=partial pdb
void AddDataToKV()=55 8B EC FF 75 10 8B 4D 08 FF 75 0C E8 ? ? ? ? 5D C3=partial pdb
void GCSDK::EmitError()=55 8B EC 8B 45 14 8B 4D=partial pdb
void COptionsVideoScaleform::SelectResolution()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B ? ? ? ? ? 8D 54 24 0C=partial pdb
void CHltvReplaySystem::StopFades()=56 8B F1 E8 ? ? ? ? 8B CE E8 ? ? ? ? C7=partial pdb
void C_EconEntity::SetParticleSystemsVisible()=55 8B EC 83 EC 60 8B 45 0C=partial pdb
void ClearKeyValuesCache()=55 8B EC 8B ? ? ? ? ? 83 EC 68=partial pdb
AssetInfo::AssetInfo()=55 8B EC 83 EC 08 56 8B F1 57 8D 7E=partial pdb
void CLocatorPanel::DeactivateAllTargets()=56 57 8B F9 6A 00 C7 ? ? ? ? ? 8D 4F 10 C7 ? ? ? ? ? ? C6 47 0C 00 C7 ? ? ? ? ? ? E8 ? ? ? ? C7=partial pdb
void CTempEnts::TempEntFree()=55 8B EC 51 53 8B 5D 08 89 4D FC 85 DB 75 0C B8 ? ? ? ? 5B 8B E5 5D C2 04 00 A1 ? ? ? ? 56 57 33 FF 85 C0 0F=partial pdb
virtual void SFHudTeamCounter::FireGameEvent()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 8B CB=partial pdb
__Mtx_getconcrtcs()=55 8B EC 8B 45 08 83 C0 04=partial pdb
int V_snprintf()=55 8B EC 8B 55 08 8B C2 56 57 8D=partial pdb
virtual bool vgui::SectionedListPanel::GetItemBounds()=55 8B EC 83 E4 F8 56 57 8B F9 8D 77 04 C7 ? ? ? ? ? 8D=partial pdb
void vgui::PropertyDialog::EnableApplyButton()=55 8B EC 8B ? ? ? ? ? 56 8B 01 FF 50=partial pdb
virtual int CHLClient::GetHltvReplayDelay()=A1 ? ? ? ? 56 8B F1 A8 01 75 3D=partial pdb
void CMsgGCGetEmailTemplate::MergeFrom()=55 8B EC 8B 55 08 83 FA FF 74 1E 8B 49 04 8D 04 92=partial pdb
virtual void CInput::CAM_ToThirdPerson()=55 8B EC 83 EC 20 56 8B F1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8D 46 10=partial pdb
void CLoadingScreenScaleform::Show()=55 8B EC 83 E4 F8 83 EC 0C C7=partial pdb
int ScreenTransform()=55 8B EC 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=partial pdb
void CInput::AdjustAngles()=55 8B EC 8B ? ? ? ? ? 83 EC 10 8B 01 53 56=partial pdb
void V_FileBase()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 80 3E=partial pdb
void RebindKey()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B DA 89 5D=partial pdb
void InitializeStandardMaterials()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B 4D 08=partial pdb
Sys_LoadLibraryGuts()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 68=partial pdb
CUGCFileRequest::CUGCFileRequest()=55 8B EC 83 EC 10 56 8B F1 C7 ? ? ? ? ? ? C7=partial pdb
spec_menu()=55 8B EC 51 8B 4D 04 C6 45 FC 01 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74 0C=partial pdb
spec_gui()=55 8B EC 51 8B 4D 04 C6 45 FC 01 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74 10=partial pdb
virtual void CAvatarImagePanel::OnSizeChanged()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? C6=partial pdb
void CNewGameDialog::InitPanelIndexForDisplay()=55 8B EC 53 8B 5D 08 56 57 8B F9 8B CB 8B=partial pdb
virtual void CounterStrikeViewport::UpdateAllPanels()=55 8B EC 51 56 8B F1 32=partial pdb
virtual void CC4Panel::OnTick()=55 8B EC 83 EC 10 57 8B F9 6A=partial pdb
Frustum_t::Frustum_t()=56 68 ? ? ? ? 8B F1 6A 00 56 E8 ? ? ? ? 83=partial pdb
virtual bool C_Item_Healthshot::CanUseOnSelf()=55 8B EC 57 8B 7D 08 85 FF 75 07=partial pdb
virtual void C_SmokeGrenadeProjectile::OnDataChanged()=83 ? ? ? ? ? ? 56 57 75 09 80=partial pdb
void C_SmokeGrenadeProjectile::SpawnSmokeEffect()=55 8B EC 83 EC 30 57=partial pdb
void C_BasePlayer::CalcViewRoll()=55 8B EC 83 EC 08 57 8B F9 80 ? ? ? ? ? ? 0F=partial pdb
virtual void C_WeaponCSBase::OnPickedUp()=56 8B F1 E8 ? ? ? ? 83 ? ? ? ? ? ? 75=partial pdb
float C_BaseCSGrenade::ApproachThrownStrength()=A1 ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F 28 DC F3 0F 5C D9 F3 ? ? ? ? F3 0F 58=partial pdb
virtual void C_BaseCSGrenade::ItemPostFrame()=55 8B EC 83 EC 2C 56 57 8B F9 8B ? ? ? ? ? 83=partial pdb
virtual void C_BaseCSGrenade::StartGrenadeThrow()=55 8B EC 83 EC 08 A1 ? ? ? ? F3 ? ? ? ? ? ? ? F3=partial pdb
void C_BaseEntity::DestroyIntermediateData()=55 8B EC 83 EC 3C 53 8B D9 83=partial pdb
virtual void C_C4::WeaponIdle()=56 8B F1 80 ? ? ? ? ? ? 74 66 57=partial pdb
virtual void C_WeaponCSBase::SendViewModelAnim()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 83 FA FF 74=partial pdb
void C_WeaponCSBase::UpdateGunHeat()=55 8B EC 51 A1 ? ? ? ? 0F 28 D1=partial pdb
virtual void C_WeaponCSBase::ItemPostFrame()=53 56 57 8B F9 8B ? ? ? ? ? 83 F9 FF 74=partial pdb
virtual void VControlsListPanel::OnMousePressed()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B CE 84=partial pdb
virtual void C_WeaponCSBase::ItemBusyFrame()=56 8B F1 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 5E=partial pdb
virtual void C_WeaponCSBase::SetWeaponModelIndex()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 FF 50=partial pdb
virtual void C_MolotovGrenade::Drop()=55 8B EC 83 E4 F8 83 EC 44 53 8B D9 56 57 8B ? ? ? ? ? 85=partial pdb
int C_WeaponCSBase::GetReticleCrosshairGap()=55 8B EC 83 E4 F8 8B 4D 04 83 EC 0C=partial pdb
virtual float C_WeaponCSBase::CalcViewmodelBob()=55 8B EC A1 ? ? ? ? 83 EC 10 8B=partial pdb
virtual void C_BasePlayer::CalcPlayerView()=55 8B EC A1 ? ? ? ? 83 EC 20 8B 40=partial pdb
struct BobState_t near * C_WeaponCSBase::GetBobState()=56 57 8B F9 8B ? ? ? ? ? 83 FA FF 74 6D=partial pdb
virtual void C_EconEntity::ReapplyProvision()=55 8B EC 83 EC 10 53 56 8B F1 57 8B ? ? ? ? ? 83=partial pdb
virtual int C_PlayerResource::GetTeam()=55 8B EC 8B 45 08 83 E8 00 74 2E=partial pdb
virtual int C_CSPlayer::GetObserverMode()=56 8B F1 8B 06 FF ? ? ? ? ? 83 ? ? ? ? ? ? 75 17=partial pdb
virtual void C_WeaponCSBaseGun::Drop()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 3D ? ? ? ? 75 09 80 ? ? ? ? ? ? 74 18=partial pdb
bool C_WeaponCSBaseGun::CSBaseGunFire()=55 8B EC 83 EC 48 53 8B D9 F3=partial pdb
virtual bool C_WeaponCSBaseGun::IsFullAuto()=56 8B F1 8B 06 FF ? ? ? ? ? 80=partial pdb
virtual bool C_WeaponCSBaseGun::Holster()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 3D ? ? ? ? 75 09 80 ? ? ? ? ? ? 74 14=partial pdb
virtual void C_WeaponElite::PrimaryAttack()=55 8B EC 51 56 8B F1 0F ? ? ? ? ? ? 83=partial pdb
void CIronSightController::UpdateIronSightAmount()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 51 56=partial pdb
class QAngle CIronSightController::GetAngleAverage()=55 8B EC 83 EC 0C F3 ? ? ? ? ? ? ? 0F=partial pdb
void CIronSightController::AddToAngleAverage()=55 8B EC F3 ? ? ? ? ? ? ? 0F 2F 41 1C=partial pdb
bool CIronSightController::IsInIronSight()=55 8B EC 53 56 8B F1 57 8B 4E 3C=partial pdb
virtual void C_BaseCSGrenade::ThrowGrenade()=55 8B EC 83 EC 08 F3 ? ? ? ? ? ? ? F3 ? ? ? ? 8B 45 FC C7 ? ? ? ? ? ? 3B 45 F8 74 0A C7 ? ? ? ? ? ? ? ? ? E8=partial pdb
virtual void C_WeaponSG552::PrimaryAttack()=55 8B EC 51 56 8B F1 57 8B ? ? ? ? ? 83 FA=partial pdb
C_Plasma::C_Plasma()=55 8B EC 51 53 56 57 8B D9 E8 ? ? ? ? 8D=partial pdb
void C_Sprite::AnimateThink()=55 8B EC 83 EC 08 56 8B F1 F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 7A 6B=partial pdb
virtual bool CSteamWorksGameStatsUploader::Init()=55 8B EC 83 E4 F0 81 ? ? ? ? ? A1 ? ? ? ? 0F=partial pdb
virtual void CAttributeManager::OnDataChanged()=56 8B F1 8B 46 18 3B=partial pdb
void CAttributeManager::ProvideTo()=55 8B EC 57 6A 00 68=partial pdb
void CAttributeManager::RemoveProvider()=55 8B EC 56 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF 75 08 8B F1 E8 ? ? ? ? 83 C4 14 85 C0 74 45=partial pdb
virtual void vgui::Menu::SetVisible()=55 8B EC 53 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B=partial pdb
virtual bool C_WeaponCSBase::CanDeploy()=55 8B EC 53 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF=partial pdb
bool CHudHintKeyDisplay::SetHintText()=55 8B EC 83 EC 10 56 57 8B F9 33=partial pdb
virtual void vgui::MenuBar::AddButton()=55 8B EC 83 EC 54 53 56 8B F1 8D=partial pdb
virtual void vgui::PageTab::SetActive()=55 8B EC 56 6A 00 8B F1 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? 85 C0 74 0B 80 78 10 04 75 05 8B 40 0C EB 02 33 C0 3B ? ? ? ? ? 75 1C=partial pdb
void vgui::HTML::BrowserJSConfirm()=56 57 8B F9 8B ? ? ? ? ? 85 C9 7F=partial pdb
virtual bool CCSInventoryManager::ShowItemsPickedUp()=56 8B F1 E8 ? ? ? ? 83 ? ? ? ? ? ? 5E=partial pdb
class CChoreoActor near * CChoreoScene::ParseActor()=55 8B EC 83 EC 38 53 8B D9 89 5D F0=partial pdb
virtual int CCSPlayerInventory::GetMaxItemCount()=8B ? ? ? ? ? 56 BE ? ? ? ? E8=partial pdb
void C_EconItemView::UpdateEquippedState()=55 8B EC 56 8B F1 E8 ? ? ? ? 85 C0 74 21=partial pdb
virtual void SFHudReticle::FlashReady()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 FF 75 10=partial pdb
int CCStrike15ItemDefinition::GetLoadoutSlot()=55 8B EC 8B 45 08 8D 50 FF 83 FA 02=partial pdb
int CCStrike15ItemDefinition::GetUsedByTeam()=8B ? ? ? ? ? 8B C1 83 E0 0C 3C 0C 75=partial pdb
virtual int CEconItemDefinition::GetBundleItem()=55 8B EC 8B ? ? ? ? ? 85 D2 74 15=partial pdb
virtual int CEconItemDefinition::GetBundleItemCount()=8B ? ? ? ? ? 85 C0 74 04 8B 40=partial pdb
virtual unsigned char CEconItemDefinition::GetRarity()=8A 41 2A C3=partial pdb
void CVarBitVecBase<int>::Resize()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 C6 45 FF 00 8D 47 1F 99 83 E2 1F 03 C2 8B=partial pdb
CParticleSystemMgr::~CParticleSystemMgr()=53 8B D9 56 57 C7 ? ? ? ? ? E8=partial pdb
virtual void C_BaseAnimating::PreDataUpdate()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 8B 43=partial pdb
void LightDesc_t::InitSpot()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 51 8B=partial pdb
C_BasePlayer::C_BasePlayer()=55 8B EC 83 EC 08 56 57 8B F9 E8 ? ? ? ? C7=partial pdb
virtual void C_EconEntity::UpdateOnRemove()=56 8B F1 8D ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8B=partial pdb
virtual void C_EconEntity::UpdateAttachmentModels()=55 8B EC 83 E4 F8 83 EC 1C 53 8B D9 8B ? ? ? ? ? 8D=partial pdb
virtual bool C_EconEntity::ShouldDrawParticleSystems()=55 8B EC 57 8B F9 8B 47 04=partial pdb
CScriptedIconLesson::CScriptedIconLesson()=55 8B EC 56 FF 75 14 8B F1 FF 75 10 FF 75 0C FF=partial pdb
bool C_EconEntity::InternalFireEvent()=55 8B EC 83 7D 10 28=partial pdb
virtual int C_EconEntity::InternalDrawModel()=55 8B EC 53 8B 5D 08 56 8B F1 57 8B ? ? ? ? ? 85=partial pdb
virtual bool C_EconEntity::ViewModel_IsTransparent()=56 8B F1 8B ? ? ? ? ? 83 F8 FF 74 53=partial pdb
virtual bool C_EconEntity::OnInternalDrawModel()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 84 C0 75=partial pdb
virtual bool C_EconEntity::UpdateBodygroups()=55 8B EC 83 EC 08 56 8B 75 08 85 F6 75=partial pdb
void CEconItem::CopyWithoutAttributesFrom()=55 8B EC 56 57 8B 7D 08 8B F1 3B FE=partial pdb
bool CEconItem::IsEquippedForClass()=55 8B EC 8B 41 18 85 C0 74 3E 0F B7 08 8A=partial pdb
void CEconItem::UpdateEquippedState()=55 8B EC 8B 45 08 8B D0 C1=partial pdb
virtual int CEconItem::GetItemSetIndex()=55 8B EC 83 EC 1C 53 8B D9 B9=partial pdb
virtual bool CEconItem::BUpdateFromNetwork()=55 8B EC FF 75 08 E8 ? ? ? ? B0=partial pdb
virtual bool CEconItem::BIsKeyLess()=55 8B EC 8B 55 08 8B 41 0C=partial pdb
void CEconItem::SerializeToProtoBufItem()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 8B=partial pdb
void CEconItem::DeserializeFromProtoBufItem()=55 8B EC 83 EC 08 53 56 57 8B F9 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
CSheet::~CSheet()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual bool IEconItemInterface::IsUsableInCrafting()=55 8B EC 83 EC 0C 56 8B F1 8B 06 FF 50=partial pdb
bool CManagedItemViewsLess::Less()=55 8B EC 51 8B 45 08 53 56 57 8B 08=partial pdb
virtual void CInventoryManager::UpdateLocalInventory()=55 8B EC 83 E4 F8 83 EC 0C 83 ? ? ? ? ? ? 56=partial pdb
void CInventoryManager::PredictedBackpackPosFilled()=55 8B EC 83 EC 14 56 57 8B 7D 08 8D=partial pdb
void CInventoryManager::SetAckedByGC()=55 8B EC 83 EC 08 56 8B F1 8B 4D 08 83=partial pdb
CPlayerInventory::CItemContainers::CItemContainers()=55 8B EC 51 C7 ? ? ? ? ? C7=partial pdb
virtual void CPlayerInventory::SOClear()=53 56 8B F1 57 83 7E 10=partial pdb
virtual void CHLClient::OnKeyBindingChanged()=55 8B EC 83 EC 18 53 56 57 8B F9 89 7D FC 83=partial pdb
PropBreakablePrecacheAll()=55 8B EC 83 EC 24 53 8B 5D 08 0F=partial pdb
void ServerHltvInfo::SharedCtor()=A1 ? ? ? ? 6A 24 8B 08 8B 01 FF 50 04 85 C0 74 18=partial pdb
poro::EventRecorder::EventRecorder()=55 8B EC 8B 45 08 89 41 04 8B 45 0C 89 41 08 8B 45 10 89=partial pdb
virtual bool C_SoundscapeSystem::Init()=55 8B EC 81 ? ? ? ? ? 53 56 57 33 F6 8B=partial pdb
bool item_list_entry_t::InitFromName()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8B D9 57 80=partial pdb
virtual void vgui::RichText::GetSettings()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B 7D 08 89 4C 24 0C=partial pdb
CInventoryManager::CInventoryManager()=55 8B EC 56 8B F1 FF 75=partial pdb
virtual bool CEconLootListDefinition::HasUnusualLoot()=55 8B EC 51 53 56 57 8B F9 C7 ? ? ? ? ? ? 8B=partial pdb
virtual void CEconLootListDefinition::PurgeItems()=56 8B F1 C7 ? ? ? ? ? ? 83 7E 24=partial pdb
virtual CEconItemDefinition::~CEconItemDefinition()=56 8B F1 57 8B 7E 04 C7 ? ? ? ? ? 85 FF 74 15=partial pdb
void CEconItemDefinition::PurgeStaticAttributes()=55 8B EC 51 56 8B F1 C7 ? ? ? ? ? ? 83=partial pdb
void PreparePanelMessageMap()=55 8B EC 57 8B 7D 08 85 FF 0F ? ? ? ? ? 8B=partial pdb
void UTIL_Smoke()=55 8B EC 81 ? ? ? ? ? B8 ? ? ? ? 53 56 8B=partial pdb
CEconItemSchema::CEconItemSchema()=55 8B EC 51 0F B6 45 FF 56=partial pdb
void COptionsVideoScaleform::SetReflection()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B 75 08 8D 54 24 0C=partial pdb
void vgui::RichText::InsertString()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 89=partial pdb
void CEconItemSchema::AssignDefaultBodygroupState()=55 8B EC 83 EC 14 33 C0=partial pdb
CEconCampaignDefinition::CEconCampaignDefinition()=55 8B EC 51 0F B6 45 FF C7=partial pdb
int CEconItemSchema::GetHandleForTag()=55 8B EC 83 EC 08 56 57 8B 7D 08 8B F1 85 FF 74=partial pdb
bool CEconItemSchema::BGetItemQualityFromName()=55 8B EC 8B 55 08 57 8B F9 B9 ? ? ? ? E8 ? ? ? ? 85 C0 75 0D 8B 45 0C 5F C6 00 0F B0 01 5D C2 08 00 53 8B ? ? ? ? ? 56=partial pdb
virtual void CGlowOverlay::CalcBasis()=55 8B EC 83 EC 08 53 8B 5D 08 8D 45 FC 56 57 50 8D 45 F8 C7 ? ? ? ? ? ? 50 53 8B F1 C6 45 FC 00 E8 ? ? ? ? FF=partial pdb
int CUtlMap<char const near *,class Color,int,bool ()=55 8B EC 83 EC 0C 8B 45 08 56 57 8B F1 C7=partial pdb
attachedparticlesystem_t::attachedparticlesystem_t()=55 8B EC 8B 55 08 56 8B F1 8D 4E 2C=partial pdb
vgui::CHistoryItem::CHistoryItem()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 C7=partial pdb
unsigned char CEconItemDefinition::GetNumStyles()=8B ? ? ? ? ? 85 C0 75 03 32=partial pdb
class CEconItemSystem near * ItemSystem()=A1 ? ? ? ? 85 C0 75 53=partial pdb
econ_show_items_with_tag()=55 8B EC 56 8B 75 08 83 3E 02 0F=partial pdb
C_EconItemView::C_EconItemView()=55 8B EC 83 E4 F8 83 EC 0C B8 ? ? ? ? 53 56 57 8B F9=partial pdb
virtual C_EconItemView::~C_EconItemView()=53 56 8B F1 57 8D ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
void vgui::FileOpenDialog::AddSearchHistoryString()=55 8B EC 83 EC 14 53 56 8B F1 57 33=partial pdb
void C_EconItemView::Cleanup()=55 8B EC 51 56 8B F1 57 8B ? ? ? ? ? 85 C9=partial pdb
void COptionsVideoScaleform::SelectAspectRatio()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 C7=partial pdb
virtual unsigned char C_EconItemView::GetStyle()=8A ? ? ? ? ? B8 ? ? ? ? 3A=partial pdb
virtual unsigned short C_EconItemView::GetQuantity()=56 8D 71 F4 8B CE E8 ? ? ? ? 85 C0 74 0D=partial pdb
void vgui::CFooterPanel::SetHelpNameAndReset()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 D2=partial pdb
virtual C_PhysBox::~C_PhysBox()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B 47=partial pdb
bool C_EconItemView::ItemHasAnyStickersApplied()=56 8B F1 E8 ? ? ? ? 85 C0 74 1B=partial pdb
void C_EconItemView::Update()=55 8B EC A1 ? ? ? ? 83 EC 3C 53 56=partial pdb
void CUGCFileRequest::CreateSmallThumbNail()=55 8B EC 81 ? ? ? ? ? 53 32=partial pdb
void SFHudRadar::LazyCreateGoalIcons()=55 8B EC 83 EC 3C 53 56 8B 75 08 57=partial pdb
bool C_EconItemView::LoadCachedInventoryImage()=55 8B EC 83 EC 30 56 57 8B F9=partial pdb
virtual bool C_EconItemView::IsStyleUnlocked()=55 8B EC 51 8B 41 0C 53 57=partial pdb
virtual void CLoadingScreenScaleform::FireGameEvent()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 89 7D F4=partial pdb
void C_EconItemView::DestroyAllAttributes()=56 8B F1 83 7E 10 00 74 49=partial pdb
[thunk]: vgui::MessageBox::`vcall'{1148,{flat}}()=83 C1 1C 8B 01=partial pdb
virtual void C_BasePlayer::ClientThink()=55 8B EC 83 EC 08 57 8B F9 8B 47 FC=partial pdb
void CLocatorTarget::SetVguiTargetLookup()=55 8B EC 8B 45 08 83 C1 70=partial pdb
bool CItemSelectionCriteria::CCondition::BEvaluate()=55 8B EC 56 8B F1 B8 ? ? ? ? 57 83=partial pdb
virtual int CHLClient::IN_KeyEvent()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 2C=partial pdb
C_Sun::C_Sun()=55 8B EC 51 56 57 FF 75 18=partial pdb
virtual bool SFHudInfoPanel::PreUnloadFlash()=55 8B EC 56 8B F1 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 1E=partial pdb
COptionsSubVideo::COptionsSubVideo()=53 56 57 6A 00 6A 00 8B F9 E8 ? ? ? ? C7 ? ? ? ? ? C7=partial pdb
virtual void vgui::CFooterPanel::ApplySchemeSettings()=55 8B EC 83 EC 10 53 56 57 8B 7D 08 8B D9 57=partial pdb
virtual void vgui::ListViewPanel::OnSizeChanged()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 8B 06=partial pdb
CClientScoreBoardDialog::CClientScoreBoardDialog()=55 8B EC 53 56 57 68 ? ? ? ? FF 75 08 8B F9 E8 ? ? ? ? 8D=partial pdb
Create_CHudHintDisplay()=81 ? ? ? ? ? B8 ? ? ? ? 80=partial pdb
void vgui::CConsolePanel::RebuildCompletionList()=55 8B EC 81 ? ? ? ? ? 53 56 8B D9 57 89 5D F4=partial pdb
virtual CMatchmakingStatus::~CMatchmakingStatus()=56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
CWorkshopManager::~CWorkshopManager()=56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? FF 77=partial pdb
virtual void vgui::PropertySheet::PerformLayout()=55 8B EC 83 EC 18 8B ? ? ? ? ? 53 56 57=partial pdb
void C_EconEntity::InitializeAttributes()=80 ? ? ? ? ? ? 74 0C C6 ? ? ? ? ? ? E9=partial pdb
void CCSClientGameStats::ResetAllStats()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 3B 7E 0C=partial pdb
virtual int vgui::Menu::AddMenuItem()=55 8B EC 83 EC 08 53 56 57 FF 75 08 8B F9=partial pdb
virtual void vgui::Menu::OnCommand()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 30=partial pdb
virtual void vgui::Slider::ApplySettings()=55 8B EC 53 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A=partial pdb
virtual void C_WeaponElite::Precache()=55 8B EC 51 56 8B F1 57 8B 4E 1C=partial pdb
void vgui::FileData_t::PrepareKV()=55 8B EC 53 57 8B 7D 08 8B D9 57=partial pdb
void CBaseModelPanel::ParseModelAnimInfo()=55 8B EC 51 83 7D 08 00 0F=partial pdb
void CBaseModelPanel::SetupModelDefaults()=56 57 8B F9 8B ? ? ? ? ? 85 F6 74 2D=partial pdb
virtual void CBaseModelPanel::SetMDL()=55 8B EC 56 FF 75 10 8B F1 FF 75 0C FF 75 08 E8 ? ? ? ? 8B CE=partial pdb
virtual void C_SlideshowDisplay::ClientThink()=55 8B EC 83 EC 18 57 8B F9 E8=partial pdb
bool CBaseViewport::LoadHudAnimations()=55 8B EC 83 EC 0C 53 57 8B ? ? ? ? ? 89=partial pdb
virtual void CFPSPanel::OnScreenSizeChanged()=55 8B EC 53 56 57 FF 75 0C 8B D9 FF 75 08 E8 ? ? ? ? 8B=partial pdb
virtual void CBaseViewport::PostMessageToPanel()=55 8B EC 53 56 8B 75 08 BA ? ? ? ? 57 8B F9 8B C6=partial pdb
virtual void CBaseViewport::ShowPanel()=55 8B EC 56 57 8B 7D 10 8B F1 85=partial pdb
virtual void CBaseViewport::RecreatePanel()=55 8B EC 53 8B 5D 08 56 8B F1 57 53=partial pdb
virtual void CBaseViewport::InitViewportSingletons()=8D ? ? ? ? ? F7 D9 1B C9 23 C8 89 ? ? ? ? ? C3=partial pdb
virtual void CBaseViewport::OnThink()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B ? ? ? ? ? 8B D9 57 FF=partial pdb
virtual void CBaseViewport::ReloadScheme()=55 8B EC 8B 45 08 56 8B F1 57 85=partial pdb
virtual void CBaseModPanel::OnCommand()=55 8B EC 51 53 8B 5D 08 56 89=partial pdb
virtual bool CClientScoreBoardDialog::NeedsUpdate()=A1 ? ? ? ? F3 ? ? ? ? 33 C0 0F 2F 41=partial pdb
virtual void CClientScoreBoardDialog::AddSection()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B D9 89 5D FC 56 57 83=partial pdb
void C_BasePlayer::UpdateVPhysicsPosition()=55 8B EC 83 EC 10 53 8B D9 83 ? ? ? ? ? ? 0F=partial pdb
virtual void CNavProgress::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8B CB 6A=partial pdb
virtual void CNavProgress::SetData()=55 8B EC 53 56 8B 75 08 57 6A=partial pdb
void C_NextBotCombatCharacter::UpdateShadowLOD()=55 8B EC 83 EC 10 53 56 57 8B F9 80=partial pdb
virtual void CMDLPanel::OnTick()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8D ? ? ? ? ? 57 C7=partial pdb
void CParticleMgr::SetDirectionalLightInfo()=55 8B EC 8B 55 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? 8B=partial pdb
void CHltvReplaySystem::RequestHltvReplay()=55 8B EC 51 56 8B F1 F3 ? ? ? ? 57=partial pdb
virtual void CHudMessage::Paint()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 57 80 ? ? ? ? ? ? 74=partial pdb
virtual void CSimpleEmitter::RenderParticles()=55 8B EC 83 EC 38 8B D1=partial pdb
void CPotteryWheelPanel::SetupRenderState()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF ? ? ? ? ? 8B=partial pdb
virtual bool CMergedMDL::GetBoundingSphere()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 8D=partial pdb
void C_SpriteTrail::UpdateBoundingBox()=55 8B EC 83 EC 7C 53 8B=partial pdb
CLoadingScreenScaleform::CLoadingScreenScaleform()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F1 6A=partial pdb
bool C_CSPlayer::ShouldShowTeamPlayerColors()=55 8B EC 51 8B 49 04 57=partial pdb
static void C_BaseTempEntity::CheckDynamicTempEnts()=53 56 8B ? ? ? ? ? 33 DB 85=partial pdb
void CClient_Precipitation::Simulate()=55 8B EC 83 E4 F8 83 EC 1C 53 8B D9 F3=partial pdb
void DrawPrecipitation()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85=partial pdb
void CClient_Precipitation::CreateAshParticle()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 83 ? ? ? ? ? ? 0F=partial pdb
void CClient_Precipitation::UpdateParticlePrecip()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B F1 8B=partial pdb
virtual void CPrecipHack::LevelInitPostEntity()=57 8B F9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74=partial pdb
virtual void CPrecipHack::Update()=56 8B F1 80 7E 0C 00 0F=partial pdb
virtual void C_EnvWind::OnDataChanged()=55 8B EC 56 8B F1 51 F3=partial pdb
void C_Embers::SpawnEmber()=55 8B EC 83 EC 48 A1 ? ? ? ? 56=partial pdb
virtual int C_QuadraticBeam::DrawModel()=55 8B EC 83 EC 0C 56 57 8B F9 0F ? ? ? ? ? ? 50=partial pdb
void CSnowFallManager::FindSnowVolumes()=55 8B EC 83 E4 F8 83 EC 54 53 56 57 8B F9 F3=partial pdb
RayTracingEnvironment::RayTracingEnvironment()=56 57 8B F9 83 EC 08 C7=partial pdb
unsigned long CCycleCount::GetMicroseconds()=6A 00 68 ? ? ? ? FF 71=partial pdb
void FX_GaussExplosion()=55 8B EC 83 EC 24 89 4D FC=partial pdb
virtual void C_MovieExplosion::RenderParticles()=55 8B EC 83 EC 18 56 8B 75 08 57 8B F9 8B=partial pdb
virtual void C_ParticleFire::Start()=55 8B EC 56 57 8B F9 8B 4D 08 8D=partial pdb
virtual void C_Func_Dust::OnDataChanged()=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 81=partial pdb
virtual void C_ParticleFire::RenderParticles()=55 8B EC 83 EC 1C 56 57 8B 7D 08 8B F1=partial pdb
void C_ParticleSmokeGrenade::UpdateSmokeTrail()=55 8B EC 83 E4 F8 83 EC 2C 53 56 8B F1 F3=partial pdb
virtual void C_ParticleSmokeGrenade::Update()=55 8B EC 83 E4 F8 83 EC 24 A1 ? ? ? ? F3=partial pdb
void C_ParticleSmokeGrenade::UpdateDynamicLightList()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8D ? ? ? ? ? 8B=partial pdb
void C_ParticleSmokeGrenade::ApplyDynamicLight()=55 8B EC 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 33=partial pdb
virtual void CTrailParticles::RenderParticles()=55 8B EC 8B 55 08 83 EC 44=partial pdb
virtual void C_ParticleSmokeGrenade::NotifyRemove()=55 8B EC 51 56 8B F1 8B 4D 04 C7=partial pdb
void C_ParticleSmokeGrenade::FillVolume()=55 8B EC 83 EC 24 53 56 8B F1 57 8B 06 C6=partial pdb
C_PropVehicleDriveable::C_PropVehicleDriveable()=55 8B EC 83 EC 14 53 56 57 8B F9 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 8D=partial pdb
virtual void C_PropVehicleDriveable::OnDataChanged()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
bool CSkyboxView::GetSkyboxFogEnable()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85=partial pdb
virtual int CRecipientFilter::GetRecipientIndex()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 78 15=partial pdb
virtual void CDustFollower::UpdateVelocity()=55 8B EC 83 E4 F8 F3 ? ? ? ? F3=partial pdb
virtual float CDustFollower::UpdateRoll()=55 8B EC 83 E4 F8 51 F3 ? ? ? ? 56=partial pdb
virtual void C_SmokeTrail::Update()=55 8B EC 83 E4 F8 83 EC 38 56 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F 57 C9=partial pdb
virtual class Vector SporeEffect::UpdateColor()=55 8B EC 56 8B 75 0C F3 ? ? ? ? F3 ? ? ? ? 0F=partial pdb
virtual void C_SporeExplosion::Update()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 56 8B F1 57=partial pdb
virtual void C_SporeTrail::Start()=55 8B EC 56 8B F1 8B D6=partial pdb
virtual void C_SporeTrail::RenderParticles()=55 8B EC 83 EC 18 57 8B F9 80=partial pdb
virtual void C_FireTrail::Start()=55 8B EC 56 8B 75 08 57 8B F9 8B CE 8D ? ? ? ? ? F7 DA 8D ? ? ? ? ? 1B D2 23 D0 8D ? ? ? ? ? 52 50 E8 ? ? ? ? 84 C0 74=partial pdb
virtual void C_DustTrail::Update()=55 8B EC 83 E4 F8 83 EC 38 56 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F 57 C0=partial pdb
virtual void C_SmokeStack::Start()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 8B F1 8B CB 57 8D=partial pdb
virtual void C_SmokeStack::Update()=55 8B EC 83 E4 F8 83 EC 40 56 8B F1=partial pdb
virtual void C_SmokeStack::RenderParticles()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 8B=partial pdb
virtual void C_SteamJet::Start()=55 8B EC 53 8B 5D 08 56 8B F1 8B CB 57 8D=partial pdb
virtual void C_SteamJet::RenderParticles()=55 8B EC 83 EC 18 53 8B 5D 08 57=partial pdb
virtual void C_SteamJet::SimulateParticles()=55 8B EC F6 ? ? ? ? ? ? 75 0D=partial pdb
void CreateCrossbowBolt()=55 8B EC 83 EC 24 53 56 57 8B F9 8B F2=partial pdb
virtual bool C_TempEntsSystem::SuppressTE()=55 8B EC 83 79 10 00 7F=partial pdb
float CInput::ResponseCurveLook()=55 8B EC 8B 01 FF 75 08 8B 40 04 FF D0 84 C0 75 60=partial pdb
void TE_BloodSprite()=55 8B EC 8B 01 83 EC 0C=partial pdb
void TE_LargeFunnel()=55 8B EC 8B 01 FF 75 08 8B 40 04 FF D0 84 C0 75 43=partial pdb
void TE_ShowLine()=55 8B EC 8B 01 FF 75 08 8B 40 04 FF D0 84 C0 75 5E=partial pdb
virtual void C_TempEntsSystem::TriggerTempEntity()=55 8B EC 83 E4 F8 83 EC 40 A1=partial pdb
_C_TEBaseBeam_CreateObject()=55 8B EC A1 ? ? ? ? 56 6A 4C=partial pdb
virtual void C_TEBeamEnts::PostDataUpdate()=66 ? ? ? ? 0F 5B C0 6A FF=partial pdb
virtual void C_TEBeamFollow::PostDataUpdate()=66 ? ? ? ? 83 EC 24=partial pdb
virtual void C_TEBeamLaser::PostDataUpdate()=66 ? ? ? ? 0F 5B C0 6A 08=partial pdb
void TE_SpriteSpray()=55 8B EC 83 EC 3C 53 56 57 8B F2 0F=partial pdb
virtual void C_TEBSPDecal::PostDataUpdate()=55 8B EC 51 53 8B D9 8B 43 18=partial pdb
void ErrorEffectCallback()=55 8B EC A1 ? ? ? ? 83 EC 24 8B=partial pdb
void C_TEExplosion::AffectRagdolls()=55 8B EC 83 EC 3C 83 79=partial pdb
void TE_Explosion()=55 8B EC 51 F3 0F 10 02=partial pdb
void TE_BloodStream()=55 8B EC 83 EC 44 56 8B F2=partial pdb
virtual void C_TEGlowSprite::PostDataUpdate()=56 8B F1 A1=partial pdb
virtual int C_LocalTempEntity::DrawModel()=55 8B EC 51 53 57 8B F9 33 DB 89=partial pdb
virtual void CTempEnts::FizzEffect()=55 8B EC 83 EC 40 57 8B 7D=partial pdb
virtual void CTempEnts::Bubbles()=55 8B EC 83 EC 30 8B 55 14=partial pdb
virtual void CTempEnts::BreakModel()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 55 24=partial pdb
virtual void CTempEnts::PhysicsProp()=55 8B EC A1 ? ? ? ? 83 EC 18 8B=partial pdb
virtual void C_BaseExplosionEffect::CreateDebris()=55 8B EC 83 EC 24 66 ? ? ? ? 0F=partial pdb
FX_BuildTesla()=55 8B EC 83 EC 34 89=partial pdb
virtual void CTempEnts::AttachTentToPlayer()=55 8B EC 83 EC 10 56 8B 75 08 89=partial pdb
virtual void CTempEnts::KillAttachedTents()=55 8B EC 53 56 57 8B 7D 08 8B F1 85 FF 7E=partial pdb
virtual void CTempEnts::RicochetSprite()=55 8B EC 83 E4 F8 51 53 56 57 FF 75 0C 8B 7D 08 57=partial pdb
virtual void CTempEnts::BloodSprite()=55 8B EC 8B 55 1C=partial pdb
virtual void CTempEnts::MuzzleFlash()=55 8B EC 8B 45 08 8B D1 48=partial pdb
virtual void CTempEnts::PlaySound()=55 8B EC 83 E4 F8 8B 4D 08 81 ? ? ? ? ? 8B=partial pdb
int CTempEnts::AddVisibleTempEntity()=55 8B EC 83 EC 30 53 57=partial pdb
void CTempEnts::CacheMuzzleFlashes()=53 8B D9 56 57 33 FF 8D ? ? ? ? ? 0F 1F 00 83 3E=partial pdb
virtual void CTempEnts::RocketFlare()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 6A 00 68 ? ? ? ? 8B 01 FF 50=partial pdb
virtual bool C_LocalTempEntity::IsActive()=55 8B EC 83 EC 10 53 8B 5D 08 57 8B 43=partial pdb
void OnPlayerDecalsUpdate()=55 8B EC 83 E4 F8 83 EC 24 53 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
void QcCreateDecalData()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F2=partial pdb
virtual void CPlayerLogoProxy::OnBind()=55 8B EC 83 EC 24 56 57 8B 7D=partial pdb
virtual void C_TESprite::PostDataUpdate()=56 57 8B F9 A1=partial pdb
virtual void C_TEMuzzleFlash::PostDataUpdate()=53 8B D9 B9 ? ? ? ? 56 57 F3=partial pdb
virtual void C_TEWorldDecal::PostDataUpdate()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74 5A=partial pdb
void TE_WorldDecal()=55 8B EC 51 8B ? ? ? ? ? 89 55 FC 81=partial pdb
void CBaseModelPanel::LookAtBounds()=55 8B EC 81 ? ? ? ? ? 8B 45 08 F3=partial pdb
void Tracer_Draw()=55 8B EC 83 EC 40 8B C2=partial pdb
void MuzzleFlashCallback()=55 8B EC 83 EC 18 56 8B 75 08 57 51=partial pdb
void CSmokeEmitter::CreateSpurtParticles()=55 8B EC 83 EC 44 53 56 57 8B F9 51=partial pdb
virtual void CSmokeEmitter::SimulateParticles()=55 8B EC 56 8B 75 08 57 8B F9 8B 46 04 8B=partial pdb
void SmokeCallback()=55 8B EC 83 EC 28 8B 55 08 8B=partial pdb
bool EffectOccluded()=55 8B EC 83 EC 18 8B 45 08 8D 55 F4 F3=partial pdb
void FX_StriderMuzzleEffect()=55 8B EC 83 EC 28 F3 ? ? ? ? ? ? ? 8D 45=partial pdb
void FX_Tesla()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B 47 18=partial pdb
void FX_BuildTeslaHitbox()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 56 57 8B 40=partial pdb
CFXDiscreetLine::CFXDiscreetLine()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? C6 46 08 01 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9 74 7F=partial pdb
virtual void CFXDiscreetLine::Draw()=55 8B EC 83 E4 F8 81 ? ? ? ? ? F2 ? ? ? ? 56 57 8B F9 83 EC 08 89 7C 24 3C=partial pdb
void GunshipImpactCallback()=55 8B EC 8B ? ? ? ? ? 83 EC 1C B8=partial pdb
virtual void CTrailParticles::Setup()=55 8B EC 80 7D 28=partial pdb
void FX_SparkFan()=55 8B EC 83 EC 30 F3=partial pdb
CClientTools::HToolEntry_t::HToolEntry_t()=55 8B EC 8B 45 08 56 8B F1 8B 4D 0C 89 06 C7=partial pdb
virtual int CClientTools::GetOwningWeaponEntIndex()=55 8B EC 8B 45 08 56 85 C0 78=partial pdb
virtual unsigned int CClientTools::AttachToEntity()=55 8B EC 8B 55 08 83 EC 08 56 8B F1 85 D2 75=partial pdb
virtual unsigned int CClientTools::GetRecordable()=55 8B EC 8B 55 08 85 D2 78 0F=partial pdb
virtual void CClientTools::SetRecording()=55 8B EC 83 EC 08 8B 45 08 56 8B F1 89 45 F8 8D 45 F8 C7 ? ? ? ? ? ? 50 8D 4E 08 E8 ? ? ? ? 0F B7 C0 3D ? ? ? ? 74 62=partial pdb
virtual bool CClientTools::ShouldRecord()=55 8B EC 83 EC 08 8B 45 08 56 8B F1 89 45 F8 8D 45 F8 C7 ? ? ? ? ? ? 50 8D 4E 08 E8 ? ? ? ? 0F B7 C0 3D ? ? ? ? 75=partial pdb
virtual char const near * CClientTools::GetClassname()=55 8B EC 83 EC 08 8B 45 08 56 8B F1 89 45 F8 8D 45 F8 C7 ? ? ? ? ? ? 50 8D 4E 08 E8 ? ? ? ? 0F B7 C0 3D ? ? ? ? 74 65=partial pdb
virtual bool CClientTools::IsValidHandle()=55 8B EC 83 EC 08 8B 45 08 83=partial pdb
virtual int C_WeaponCSBase::GetZoomFOV()=55 8B EC 8B 45 08 85 C0 78 27=partial pdb
void CNewParticleEffect::SetToolRecording()=55 8B EC 8B 4D 08 85 C9 74 2A=partial pdb
int COptionsScaleform::FindChoiceFromString()=55 8B EC 51 8B 45 08 C1=partial pdb
virtual void CInput::CAM_ToThirdPersonShoulder()=55 8B EC 83 EC 08 56 8B F2 89=partial pdb
bool ImageLoader::ConvertToDXT()=55 8B EC 81 ? ? ? ? ? 53 56 57 6A 6C=partial pdb
bool ImageLoader::RotateImageLeft()=55 8B EC 83 EC 70 8B 45=partial pdb
bool ImageLoader::FlipImageHorizontally()=55 8B EC 83 EC 20 8B 45 10=partial pdb
ImageLoader::RGBA8888ToRGBA16161616F()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 0F=partial pdb
ImageLoader::RGBA8888ToRGBA32323232F()=55 8B EC 8B 45 10 57 8B 7D 08 8D 0C=partial pdb
ImageLoader::RGBA8888ToRGB323232F()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 54=partial pdb
ImageLoader::RGBA8888ToRG3232F()=55 8B EC 8B 4D 08 8B 45 10 8B 55 0C 56 8D 34 81 3B CE 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 8B C6 2B C1 83 C0 03 83 E0 FC 83 F8 10 0F=partial pdb
ImageLoader::RGBA8888ToR32F()=55 8B EC 8B 4D 08 8B 45 10 8B 55 0C 56 8D 34 81 3B CE 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 8B C6 2B C1 83 C0 03 83 E0 FC 83 F8 10 72=partial pdb
ImageLoader::UVWQ8888ToRGBA8888()=55 8B EC 8B 45 10 C1=partial pdb
ImageLoader::RGBA8888ToABGR8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 02 2B F1 83 C6 FE 8D 41 02 0F B6 4A 01=partial pdb
ImageLoader::RGBA8888ToRGB888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 24=partial pdb
ImageLoader::RGBA8888ToBGR888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 2D=partial pdb
ImageLoader::RGBA8888ToI8()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 61=partial pdb
ImageLoader::RGBA8888ToIA88()=55 8B EC 8B 45 10 56 8B 75 08 8D=partial pdb
ImageLoader::RGBA8888ToA8()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 13=partial pdb
ImageLoader::RGBA8888ToRGB888_BLUESCREEN()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 3F=partial pdb
ImageLoader::RGBA8888ToBGR888_BLUESCREEN()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 3E=partial pdb
ImageLoader::RGBA8888ToARGB8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 01 2B F1 83 C6 FE 8D 41 02 0F B6 4A 02=partial pdb
ImageLoader::RGBA8888ToBGRA8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 01 2B F1 83 C6 FE 8D 41 02 0F B6 4A 01=partial pdb
ImageLoader::RGBA8888ToBGRX8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 32=partial pdb
ImageLoader::RGBA8888ToBGR565()=55 8B EC 8B 45 08 8B 4D 10 56 8B 75 0C 57 8D 3C 88 3B C7 73 43=partial pdb
ImageLoader::RGBA8888ToBGRX5551()=55 8B EC 8B 45 08 8B 4D 10 56 8B 75 0C 57 8D 3C 88 3B C7 73 3E=partial pdb
ImageLoader::RGBA8888ToBGRA5551()=55 8B EC 8B 4D 08 8B 45 10 57 8B 7D 0C 8D 04 81 3B C8 73 61=partial pdb
ImageLoader::RGBA8888ToBGRA4444()=55 8B EC 8B 4D 08 8B 45 10 57 8B 7D 0C 8D 04 81 3B C8 73 51=partial pdb
ImageLoader::RGBA8888ToUV88()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 1A=partial pdb
ImageLoader::RGB888ToRGBA8888()=55 8B EC 8B 4D 10 8B 45 08 56 8D 34 48 03 F1 3B C6 73 2F 8B 55 0C 83 C2 02 0F ? ? ? ? ? ? 0F B6 08=partial pdb
ImageLoader::BGR888ToRGBA8888()=55 8B EC 8B 4D 10 8B 45 08 56 8D 34 48 03 F1 3B C6 73 2F 8B 55 0C 83 C2 02 0F ? ? ? ? ? ? 0F B6 48=partial pdb
ImageLoader::I8ToRGBA8888()=55 8B EC 8B 45 08 56 8B 75 10 03 F0 3B C6 73 24=partial pdb
ImageLoader::IA88ToRGBA8888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 48=partial pdb
ImageLoader::A8ToRGBA8888()=55 8B EC 8B 45 08 56 8B 75 10 03 F0 3B C6 73 26=partial pdb
ImageLoader::RGB888_BLUESCREENToRGBA8888()=55 8B EC 8B 45 10 57 8B 7D 08 8D 14 47 03 D0 3B FA 73 56=partial pdb
ImageLoader::BGR888_BLUESCREENToRGBA8888()=55 8B EC 8B 45 10 57 8B 7D 08 8D 14 47 03 D0 3B FA 73 52=partial pdb
ImageLoader::ARGB8888ToRGBA8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 02 2B F1 83 C6 FE 8D 41 02 0F B6 4A FF=partial pdb
ImageLoader::BGRX8888ToRGBA8888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 31=partial pdb
ImageLoader::BGR565ToRGBA8888()=55 8B EC 8B 45 10 33 D2 57 8B 7D 08 C7 ? ? ? ? ? ? 8D 0C 47 8D ? ? ? ? ? ? D1 E8 3B F9 0F 47 C2 89 45 10 85 C0 74 5A=partial pdb
ImageLoader::BGRX5551ToRGBA8888()=55 8B EC 8B 45 10 33 D2 57 8B 7D 08 C7 ? ? ? ? ? ? 8D 0C 47 8D ? ? ? ? ? ? D1 E8 3B F9 0F 47 C2 89 45 10 85 C0 74 5D=partial pdb
ImageLoader::BGRA5551ToRGBA8888()=55 8B EC 51 8B 45 10 8B 55 08 57 C7 ? ? ? ? ? ? 8D ? ? ? ? ? ? 8D 0C 42 D1 EF 33 C0 3B D1 0F 47 F8 85 FF 74 70=partial pdb
ImageLoader::BGRA4444ToRGBA8888()=55 8B EC 51 8B 45 10 8B 55 08 57 C7 ? ? ? ? ? ? 8D ? ? ? ? ? ? 8D 0C 42 D1 EF 33 C0 3B D1 0F 47 F8 85 FF 74 76=partial pdb
ImageLoader::UV88ToRGBA8888()=55 8B EC 8B 55 08 8B 45 10 56 8D=partial pdb
ImageLoader::RGBA16161616ToRGBA8888()=55 8B EC 8B 45 10 56 57 8B 7D 08=partial pdb
ImageLoader::DecodeAlpha3BitLinear_BGRA4444_t_()=55 8B EC 51 8B C2 53 8B=partial pdb
bool ImageLoader::ResampleRGB323232F()=55 8B EC 83 EC 1C 53 8B D9 56 57 8B 43=partial pdb
bool ImageLoader::ResampleRGBA32323232F()=55 8B EC 83 EC 30 53 56 8B F1 C7=partial pdb
void CSaveGameDialogXbox::InitiateSaving()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 83=partial pdb
void QuaternionAngles()=55 8B EC 83 EC 44 53 56 57 8B 7D 10=partial pdb
float Studio_SetController()=55 8B EC 85 C9 74 10=partial pdb
void Studio_CalcDefaultPoseParameters()=55 8B EC 83 EC 08 56 57 8B 79=partial pdb
void IN_DuckDown()=55 8B EC 83 E4 F8 83 EC 08 F3 ? ? ? ? ? 85=partial pdb
float Studio_CPS()=55 8B EC 83 EC 3C 53 56 8B C1=partial pdb
int Studio_BoneIndexByName()=55 8B EC 83 EC 0C 8B 01 53=partial pdb
Quaternion64::operator class Quaternion()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 01=partial pdb
Quaternion48::operator class Quaternion()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 0F B7=partial pdb
Quaternion48S::operator class Quaternion()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 08 F3=partial pdb
void ExtractAnimValue()=55 8B EC 56 8B F1 85 D2=partial pdb
void CalcBonePosition()=55 8B EC 83 EC 14 89 4D FC 0F=partial pdb
CalcLocalHierarchyAnimation()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 89=partial pdb
Quaternion32::operator class Quaternion()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B 43 10=partial pdb
void CalcBoneAdj()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B C1 89=partial pdb
void CIKSolver::defineM()=55 8B EC 8B 55 08 8B 02 89 41 24=partial pdb
bool Studio_SolveIK()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 48 56 8D=partial pdb
void CIKContext::AddDependencies()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 0F=partial pdb
void CIKContext::AddAutoplayLocks()=55 8B EC 83 EC 40 53 56 8B F1 57=partial pdb
void CIKContext::AutoIKRelease()=55 8B EC 81 ? ? ? ? ? 8B C1 33=partial pdb
void CIKContext::SolveAutoplayLocks()=55 8B EC 83 EC 28 53 56 89=partial pdb
void CIKContext::CopyTo()=55 8B EC 83 EC 24 8B 45 08 57=partial pdb
CEventAbsoluteTag::CEventAbsoluteTag()=55 8B EC 56 8B 75 08 57 8B F9 C7 ? ? ? ? ? C7=partial pdb
CFlexAnimationTrack::CFlexAnimationTrack()=55 8B EC 56 C7=partial pdb
virtual CFlexAnimationTrack::~CFlexAnimationTrack()=A1 ? ? ? ? 53 8B D9 56 57 FF 73=partial pdb
float CFlexAnimationTrack::GetFracIntensity()=55 8B EC 56 8B F1 8B 4D 08 85 C9 0F ? ? ? ? ? A1=partial pdb
void CFlexAnimationTrack::RemoveOutOfRangeSamples()=55 8B EC 83 EC 10 57 8B F9 8B 4F=partial pdb
CChoreoEvent::CChoreoEvent()=55 8B EC 56 8B F1 BA ? ? ? ? C7=partial pdb
void CChoreoEvent::Init()=55 8B EC A1 ? ? ? ? 56 8B F1 6A 01=partial pdb
void CChoreoEvent::OnEndTimeChanged()=57 8B F9 F3 ? ? ? ? 0F 2E C1 9F F6 C4 44 7B 04=partial pdb
void CCurveData::Resort()=55 8B EC 83 EC 24 56 8B F1 89=partial pdb
void CCurveData::RemoveOutOfRangeSamples()=55 8B EC 83 EC 0C 56 57 8B F9 8B 4D 08 8B 01=partial pdb
void CChoreoEvent::RescaleGestureTimes()=55 8B EC 83 EC 18 80 79=partial pdb
void CBoneSnapshot::AddSubordinate()=55 8B EC 8B ? ? ? ? ? 33 C0 56 8D=partial pdb
void CChoreoEvent::SetStartTime()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 8B CE 6A 01 E8=partial pdb
void CUtlMemory<struct CExpressionSample,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 6B=partial pdb
float C_BasePlayer::PredictedServerTime()=55 8B EC 51 E8 ? ? ? ? F3=partial pdb
void CChoreoScene::choreoprintf()=55 8B EC 81 ? ? ? ? ? 8D 45 14=partial pdb
void CChoreoScene::Init()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
class CChoreoEvent near * CChoreoScene::AllocEvent()=A1 ? ? ? ? 53 56 8B F1 8B 08 57 68 ? ? ? ? 8B 01 FF 50 04 85 C0 74 0C 56 8B C8 E8 ? ? ? ? 8B F8=partial pdb
void CBaseGameStats_Driver::SendData()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 53=partial pdb
void CChoreoScene::ResetSimulation()=55 8B EC 83 EC 18 56 8B F1 33=partial pdb
void CChoreoScene::DestroyEvent()=55 8B EC 53 8B 5D 08 56 8B F1 57 8B 7E=partial pdb
void CChoreoChannel::RemoveEvent()=55 8B EC 56 8B F1 33 D2 8B=partial pdb
void CEventAbsoluteTag::SetAbsoluteTime()=55 8B EC 83 EC 2C 53 8B D9 C7=partial pdb
int CChoreoActor::FindChannelIndex()=55 8B EC 8B ? ? ? ? ? 33 C0 56 85 D2 7E 1C 8B ? ? ? ? ? 8B 75 08 0F ? ? ? ? ? ? 3B=partial pdb
virtual void CMsgProtoBufHeader::Clear()=8B 41 44 84=partial pdb
virtual void CMsgHttpRequest::Clear()=56 8B F1 57 8B 46 50 84 C0 74 7C=partial pdb
virtual int CMsgAMGetUserGameStats::ByteSize()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 8B 4F 28=partial pdb
virtual void CGCMsgMemCachedStatsResponse::Clear()=8B 41 7C 84=partial pdb
virtual int CGCMsgMemCachedStatsResponse::ByteSize()=55 8B EC 83 E4 F8 56 8B F1 57 33 FF 80 7E 7C=partial pdb
virtual int CMsgAMAddFreeLicense::ByteSize()=56 57 8B F9 33 F6 8B 4F 20 84 C9 0F=partial pdb
virtual int CMsgAMAddFreeLicenseResponse::ByteSize()=56 57 8B F9 33 F6 80 7F 1C 00 74 6A=partial pdb
virtual void CGCMsgGetSystemStatsResponse::Clear()=8B 41 40 84=partial pdb
virtual int CGCMsgGetSystemStatsResponse::ByteSize()=56 57 8B F9 33 F6 80 7F 40=partial pdb
virtual int CMsgProtoBufHeader::ByteSize()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 8B 4F 40=partial pdb
virtual void CMsgGCGetEmailTemplateResponse::Clear()=8B 41 18 84 C0 74 2E C1 E8 02 C7=partial pdb
virtual int CMsgAMGrantGuestPasses2::ByteSize()=56 57 8B F9 33 F6 8B 4F 24 84 C9 0F=partial pdb
virtual int CGCSystemMsg_GetAccountDetails::ByteSize()=56 57 8B F9 33 F6 8B 4F 18 84 C9 74 32=partial pdb
virtual int CMsgGCCheckFriendship::ByteSize()=56 57 8B F9 33 F6 8B 4F 1C 84 C9 74 18=partial pdb
virtual void CMsgGCCheckFriendship_Response::Clear()=80 79 10 00 74 06=partial pdb
virtual int CMsgGCCheckFriendship_Response::ByteSize()=56 57 8B F9 33 F6 8B 47 10=partial pdb
virtual void CMsgGCHAccountVacStatusChange::Clear()=80 79 20 00 74 22=partial pdb
virtual int CMsgGCHAccountVacStatusChange::ByteSize()=56 57 8B F9 33 F6 8B 4F 20 84 C9 74=partial pdb
virtual bool CMsgGCMsgSetOptions::IsInitialized()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 33 F6 39=partial pdb
virtual void CMsgGCHUpdateSession::Clear()=56 8B F1 57 8B 46 60 84=partial pdb
virtual int CMsgGCHUpdateSession::ByteSize()=55 8B EC 51 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 8B 4E=partial pdb
TGALoader::GetReadRowFunc()=55 8B EC 83 E4 F8 51 53 56 8B F1 57 8B ? ? ? ? ? 83 F8=partial pdb
virtual GCSDK::CJob::~CJob()=55 8B EC 51 53 56 8B F1 57 56=partial pdb
void GCSDK::CJob::UnsetLock()=55 8B EC 83 EC 08 8B ? ? ? ? ? A1=partial pdb
void GCSDK::CJob::PassLockToJob()=55 8B EC 83 EC 14 53 56 8B 75 08 8B D9 57 8B=partial pdb
void GCSDK::CJobMgr::AccumulateStatsofJob()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 80=partial pdb
void GCSDK::CJobMgr::RemoveJob()=55 8B EC 83 E4 F8 83 EC 0C 53 56 8B F1 57 8B ? ? ? ? ? 83 EF=partial pdb
bool GCSDK::CJob::BYieldingWaitTime()=55 8B EC 83 E4 F0 83 EC 28 56 8B ? ? ? ? ? 8B D6=partial pdb
virtual GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase()=55 8B EC 51 53 56 57 8B F9 8B 4F 04=partial pdb
bool GCSDK::CProtoBufMsgBase::InitFromPacket()=55 8B EC 51 53 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=partial pdb
virtual bool C_BaseEntity::IsShadowDirty()=8B 41 0C 8B 40 44=partial pdb
struct _Mbstatet std::fpos<struct _Mbstatet>::state()=55 8B EC 8B 45 08 8B 51 10=partial pdb
CUtlString::CUtlString()=55 8B EC 56 8B F1 57 8B 7D 08 C7 ? ? ? ? ? C7=partial pdb
virtual ConVar::~ConVar()=56 8B F1 C7 ? ? ? ? ? ? 83 7E 60 00 7C 22 8B 56 58 85 D2 74 14 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
void CCSTeamMenuScaleform::UpdateHelpText()=55 8B EC 83 E4 F8 83 EC 14 8B 01=partial pdb
GCSDK::SOIDRender_t::SOIDRender_t()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 8B=partial pdb
CTraceFilterSimpleList::CTraceFilterSimpleList()=55 8B EC 0F 10 45 08 C7=partial pdb
char near * GCSDK::GetPchTempTextBuffer()=55 8B EC 51 A1 ? ? ? ? 53 8B ? ? ? ? ? 56 57 A8=partial pdb
unsigned int MurmurHash3_32()=53 56 8B DA 8B F3=partial pdb
CThreadSafeMemoryPool::CThreadSafeMemoryPool()=55 8B EC 56 8B F1 68 ? ? ? ? 68=partial pdb
void ConnectInterfaces()=A1 ? ? ? ? 53 8B D9 85=partial pdb
_jpeg_CreateDecompress()=53 56 57 8B D9 68 ? ? ? ? 6A 00 53 C7 ? ? ? ? ? ? 8B 3B 8B 73 0C E8 ? ? ? ? 8B=partial pdb
_jpeg_read_header()=56 8B F1 8B 46 14 3D ? ? ? ? 74 22=partial pdb
_jpeg_finish_decompress()=56 8B F1 8B 46 14 3D ? ? ? ? 74 07=partial pdb
_jpeg_start_decompress()=56 8B F1 81 ? ? ? ? ? ? 75=partial pdb
_jpeg_set_defaults()=56 8B F1 57 83 7E 14 64=partial pdb
_jpeg_CreateCompress()=53 56 57 8B D9 68 ? ? ? ? 6A 00 53 C7 ? ? ? ? ? ? 8B 3B 8B 73 0C E8 ? ? ? ? 83=partial pdb
_jpeg_finish_compress()=56 8B F1 8B 46 14 83 F8 65=partial pdb
_jpeg_start_compress()=56 8B F1 83 7E 14 64=partial pdb
_jpeg_write_scanlines()=55 8B EC 51 53 56 8B F1 8B DA 57=partial pdb
_jinit_memory_mgr()=55 8B EC 83 EC 08 A1 ? ? ? ? 56 57 8B F9 C7=partial pdb
next_marker()=55 8B EC 83 EC 08 53 56 57 8B 79=partial pdb
smoothing_ok()=55 8B EC 83 EC 10 56 57 8B F9 32=partial pdb
emit_restart_e()=53 56 8B DA 8B F1 E8 ? ? ? ? 80=partial pdb
longest_match()=55 8B EC 83 EC 28 53 56 8B F1 8B=partial pdb
void MatrixInvert()=3B CA 75 32=partial pdb
class Vector C_BaseFlex::SetViewTarget()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC F3 0F 10 01=partial pdb
void ConcatTransforms_Aligned()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 0F 28=partial pdb
void ConcatTransforms()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 0F 10=partial pdb
void VectorAngles()=55 8B EC 83 E4 F8 83 EC 18 F3 ? ? ? ? F3 ? ? ? ? F3=partial pdb
void VectorYawRotate()=55 8B EC 83 EC 20 56 8B F2=partial pdb
void QuaternionMult()=55 8B EC 8B 45 08 83 EC 28 56=partial pdb
void Hermite_Spline()=55 8B EC F3 ? ? ? ? 8B C2=partial pdb
void Cubic_Spline_NormalizeX()=55 8B EC F3 ? ? ? ? 8B 4D=partial pdb
void BSpline()=55 8B EC 83 EC 14 F3 ? ? ? ? 0F 28 C1=partial pdb
void CalcClosestPointOnLine()=55 8B EC 8B 45 08 F3 ? ? ? ? F3 ? ? ? ? F3 0F 10 10=partial pdb
void MathLib_Init()=80 ? ? ? ? ? ? 75 38 FF ? ? ? ? ? 8A=partial pdb
void RotationDeltaAxisAngle()=55 8B EC 83 E4 F8 83 EC 4C 56 8B F2=partial pdb
int ClipPolyToPlane_Precise()=55 8B EC 83 EC 1C 53 56 8B DA 89 4D FC=partial pdb
void GeneratePerspectiveFrustum()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 F3 ? ? ? ? ? ? ? 56=partial pdb
float CalcFovY()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 F3 ? ? ? ? ? 8D=partial pdb
void fourplanes_t::Set4Planes()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 43 08 0F 10 00 0F 29 01 0F 10 40 10 0F 28 21 0F 29 41 10 0F 28 DC 0F 10=partial pdb
bool Frustum_t::CullBox()=55 8B EC 83 E4 F0 83 EC 20 8B=partial pdb
void VMatrix::MatrixMul()=55 8B EC 83 EC 38 8B 45 08 F3=partial pdb
bool MatrixInverseGeneral()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? B8=partial pdb
void MatrixInverseTR()=8B 01 F3 ? ? ? ? ? ? ? 89 02=partial pdb
void VMatrix::SetupMatrixOrgAngles()=55 8B EC 83 EC 20 F3 ? ? ? ? ? ? ? 8D=partial pdb
void Vector3DMultiply()=55 8B EC 83 EC 24 56 8B 75 08 57 3B=partial pdb
void Vector3DMultiplyPositionProjective()=55 8B EC 83 EC 24 56 8B 75 08 3B=partial pdb
void MatrixBuildPerspective()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 54=partial pdb
virtual void CEffectsClient::Dust()=55 8B EC 83 E4 F8 81 ? ? ? ? ? F3 ? ? ? ? 56=partial pdb
AABBInsideFrustum()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 70=partial pdb
AABBTouchesOrInsideVolume()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 0F ? ? ? ? ? ? 85=partial pdb
bool CVolumeCuller::CheckBox()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 53=partial pdb
void CVolumeCuller::SetExclusionFrustumPlanes()=55 8B EC 8B 55 08 85 D2 75 0B=partial pdb
float SrgbGammaTo360Gamma()=55 8B EC 51 F3 ? ? ? ? ? ? ? 0F 28=partial pdb
IceKey::IceKey()=55 8B EC 83 ? ? ? ? ? ? 53 56 8B F1 75 0F=partial pdb
void IceKey::scheduleBuild()=55 8B EC 83 EC 18 8B 45 0C 53 56=partial pdb
void LightDesc_t::RecalculateDerivedValues()=55 8B EC 83 E4 F8 51 56 8B F1 0F=partial pdb
void LightDesc_t::ComputeLightAtPoints()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 5C 56 8B F1 8B 0E 8B C1 83 E8 01 74 33=partial pdb
float ImprovedPerlinNoise()=55 8B EC 83 E4 F8 83 EC 28 F3=partial pdb
void SeedRandSIMD()=55 8B EC F2=partial pdb
void CastSphereRay()=55 8B EC 83 E4 F8 51 8B 45 0C F3=partial pdb
void CSoftbody::InitFeModel()=55 8B EC 83 E4 F0 83 EC 58 56 57 8B F9=partial pdb
void CTaperedCapsuleColliderFunctor_Slidy::operator()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 14=partial pdb
void CSphereColliderFunctor_Sticky::operator()=55 8B EC 8B 55 08 83 EC 08 F3 ? ? ? ? 8B=partial pdb
void CTaperedCapsuleColliderFunctor::Collide()=55 8B EC 83 E4 F0 F3 ? ? ? ? 83=partial pdb
void CRnCapsuleColliderFunctor::operator()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 1C 8B=partial pdb
void CSoftbody::SetAbsOrigin()=55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 F3=partial pdb
void CSoftbody::FilterTransforms()=55 8B EC 83 EC 48 53 56 8B F1=partial pdb
void CSoftbody::IntegrateWind()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 30 56 57 8B F9 8B ? ? ? ? ? 8B 77=partial pdb
void CSoftbody::AddAnimationAttraction()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 F6=partial pdb
void VectorTransform()=55 8B EC 83 E4 F8 83 EC 20 F3=partial pdb
void CSoftbody::SetAnimatedTransforms()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC F3=partial pdb
void Clone()=55 8B EC 51 53 56 8B F1 57 8B 7D 0C=partial pdb
CFeSimdBasis::CFeSimdBasis()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 20=partial pdb
void CFeSimdBasis::UnrotateXY()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 30 8B 43 08 0F 28 21=partial pdb
void CFeSimdTriBasis::Init()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 8B 43 08 0F ? ? ? ? ? ? 89 6C 24 04 0F 28=partial pdb
void CFeModel::RelaxRods2()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 48 8B=partial pdb
void CFeModel::RelaxRods2Ftl()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 38 8B=partial pdb
float CFeModel::RelaxTri0()=55 8B EC 83 E4 F0 83 EC 5C 8B=partial pdb
ResponseCurve()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 45 18=partial pdb
float CFeModel::RelaxQuad0flat()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 55 18=partial pdb
void CFeModel::RelaxBend()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B C1 F3=partial pdb
void CFeModel::IntegrateSprings()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 8B C1 33=partial pdb
void CFeModel::ApplyAirDrag()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC F3 ? ? ? ? 0F=partial pdb
void CFeModel::ApplyQuadWind()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 8B C1 F3=partial pdb
void CFeModel::FitTransforms()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B D1 C7=partial pdb
void CFeModel::FeedbackFitTransforms()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 58 8B=partial pdb
virtual void CBaseSimpleCollision::TestForPlane()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 30 33=partial pdb
virtual void CTranslationManipulator::OnMousePressed()=55 8B EC 8B 45 10 89 41 14=partial pdb
virtual void CTranslationManipulator::OnCursorMoved()=55 8B EC 83 EC 3C 56 8B F1 8B=partial pdb
virtual void CRotationManipulator::OnCursorMoved()=55 8B EC 8B 41 10 8B=partial pdb
virtual CPotteryWheelPanel::~CPotteryWheelPanel()=56 8B F1 6A 20 FF=partial pdb
void CPotteryWheelPanel::CreateDefaultLights()=51 56 57 8B F9 68 ? ? ? ? 6A 00 8D ? ? ? ? ? 56=partial pdb
void CPotteryWheelPanel::DrawGrid()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D F0 8B 01 FF ? ? ? ? ? 8B F0 85=partial pdb
virtual void CPotteryWheelPanel::Paint()=55 8B EC 83 EC 3C 53 56 8B ? ? ? ? ? 8D 45 F8=partial pdb
virtual void CPotteryWheelPanel::RenderCapture()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 85 DB=partial pdb
virtual void CPotteryWheelPanel::OnTick()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0D 8B 01 FF 50 0C=partial pdb
virtual void CPotteryWheelPanel::OnKeyCodePressed()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 85 C9 74 3B=partial pdb
void C_SceneEntity::ClearSceneEvents()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
virtual void CPotteryWheelPanel::OnCursorMoved()=55 8B EC 53 56 8B F1 57 83 ? ? ? ? ? ? 74=partial pdb
virtual void CPotteryWheelPanel::OnMouseWheeled()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 85 C9 74 06=partial pdb
virtual void CPotteryWheelPanel::OnMouseCaptureLost()=56 8B F1 6A 02 8B=partial pdb
CMDLPanel::CMDLPanel()=55 8B EC 51 53 56 57 8B D9 E8 ? ? ? ? FF=partial pdb
void CMDLPanel::DrawCollisionModel()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 8B=partial pdb
virtual void CMDLPanel::OnPaint3D()=55 8B EC 83 E4 F8 83 EC 6C B8=partial pdb
virtual void CMDLPanel::OnModelDrawPassStart()=55 8B EC F6 ? ? ? ? ? ? 74 0D=partial pdb
virtual void CBaseModPanel::PerformLayout()=55 8B EC 83 EC 18 53 56 57 8B D9=partial pdb
virtual void vgui::HTML::OnCommand()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 8B 75 08 3B=partial pdb
void CCvarSlider::ApplyChanges()=55 8B EC 81 ? ? ? ? ? 53 56 57 6A 00 8B=partial pdb
void vgui::FileOpenDialog::PostFileSelectedMessage()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 BA=partial pdb
CPotteryWheelManip::CPotteryWheelManip()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 89=partial pdb
virtual void CPotteryWheelManip::OnBeginManipulation()=55 8B EC 51 56 8B F1 8B 46 18=partial pdb
virtual void CPotteryWheelManip::OnCursorMoved()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 D9 5D FC F3 ? ? ? ? 0F 28 C8 F3 ? ? ? ? F3 ? ? ? ? 80 7E 3C 00 F3=partial pdb
virtual void CPotteryWheelManip::OnMousePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 8B=partial pdb
virtual void CPotteryWheelManip::OnMouseReleased()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 83=partial pdb
bool TGALoader::LoadRGBA8888()=55 8B EC 83 EC 0C 6A=partial pdb
virtual void C_OP_RenderProjected::PostSimulate()=55 8B EC 83 E4 C0 83 EC 74 53 8B D9 56 57 89 5C 24 68=partial pdb
static void CCompetitiveCvarManager::AddConvarToList()=55 8B EC 83 EC 0C 8B C2 53=partial pdb
void CUtlMemory<class CEffectData,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 67 8B 4B 04 56 57 8B 7D 08 03 F9 6A 64=partial pdb
void CCreateMainMenuScreenScaleform::Show()=56 8B F1 6A 01 C7 ? ? ? ? ? E8 ? ? ? ? C7=partial pdb
virtual void CViewRenderBeams::CreateBeamRing()=55 8B EC F3 ? ? ? ? F3 0F 11 01=partial pdb
void vgui::HTML::HideFindDialog()=55 8B EC 83 EC 14 8B 45 08 0F=partial pdb
void CRendering3dView::EnableWorldFog()=55 8B EC 8B ? ? ? ? ? 83 EC 0C 8B 01 53 56 FF=partial pdb
GCSDK::CJob::CJob()=55 8B EC 83 E4 F8 83 EC 6C 56 8B F1 6A=partial pdb
virtual void CHLClient::LevelInitPreEntity()=55 8B EC 80 7D 0C 00 56 8B F1 0F=partial pdb
void RenderParticle_Color255Size()=55 8B EC 83 EC 14 56 8B F1 57 8B 4E=partial pdb
void ImageLoader::GammaCorrectRGBA8888()=55 8B EC 51 53 56 57 8B F9 8D 77 14=partial pdb
CPoseDebuggerImpl::CPoseDebuggerImpl()=55 8B EC 51 53 56 8B 75 08 8B D9 57 8B 06 89=partial pdb
CHudTexture::CHudTexture()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 C6=partial pdb
virtual void CEqualsProxy::OnBind()=55 8B EC 51 56 8D 45 FF=partial pdb
void vgui::HTML::BrowserFinishedRequest()=55 8B EC 56 57 8B 7D 08 8B F1 8B 07 3B ? ? ? ? ? 0F=partial pdb
void vgui::HTML::BrowserFileOpenDialog()=55 8B EC 53 8B 5D 08 57 8B F9 8B 03=partial pdb
virtual void vgui::SectionedListPanel::LeaveEditMode()=53 8B D9 56 57 83 7B 18 00 0F ? ? ? ? ? A1=partial pdb
void CVisibleShadowList::PrioritySort()=55 8B EC 53 8B D9 56 8B 75 08 57 39 73 28 7D 37=partial pdb
virtual void SnowFallEffect::UpdateVelocity()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 20 56 8B F1 57=partial pdb
void CChoreoEvent::SetUsingCombinedFile()=55 8B EC 8B 55 08 8A 42 04 3A 41 04 75 16=partial pdb
virtual float C_BaseAnimating::SetBoneController()=55 8B EC 51 8B 45 08 56 8D=partial pdb
void CClientLeafSystem::AddToViewModelList()=55 8B EC 51 8B 55 08 56 57 8B F1 80 3A 00 0F ? ? ? ? ? 8D 45 08 66=partial pdb
void CCollisionProperty::RandomPointInBounds()=55 8B EC 51 8B 45 08 0F 28 D9=partial pdb
virtual void C_BasePlayer::OnRestore()=56 8B F1 68 ? ? ? ? 8B 4E 04 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 20=partial pdb
void UTIL_StringToVector()=55 8B EC 83 EC 7C 53 56 57 8B F9 89 7D FC=partial pdb
[thunk]: vgui::ComboBox::`vcall'{1240,{flat}}()=55 8B EC 57 8B F9 83 ? ? ? ? ? ? 75 07 32=partial pdb
CValueChangeTracker::~CValueChangeTracker()=56 8B F1 8D ? ? ? ? ? E8 ? ? ? ? C7=partial pdb
void CParticleSystemDefinition::Read()=55 8B EC 53 56 57 8B 7D 08 8B F1 51=partial pdb
void CParticleSystemDefinition::SetupContextData()=55 8B EC 83 EC 40 53 56 57 8D=partial pdb
void CParticleCollection::Init()=55 8B EC 83 E4 F8 83 EC 28 56 8B F1 F3=partial pdb
bool CParticleCollection::DependsOnSystem()=55 8B EC 56 8B F1 8B 4E 48 85 C9 75=partial pdb
void CParticleCollection::UnlinkFromDefList()=8B D1 8B 42 48=partial pdb
void CParticleCollection::InitStorage()=55 8B EC 83 EC 18 53 8B 5D 08 56 57 8B F9 B9=partial pdb
bool CParticleCollection::ContainsOpaqueCollections()=56 8B F1 8B 46 48 85 C0 74 4A=partial pdb
void near * CParticleCollection::GetRendererContext()=55 8B EC 8B 51 48 85=partial pdb
void CParticleCollection::RunRestartedEmitters()=55 8B EC 83 EC 14 53 8B D9 56 57 F6=partial pdb
void CParticleCollection::SetRenderable()=55 8B EC 56 8B ? ? ? ? ? 57 8B 7D 08 89=partial pdb
void CParticleCollection::Restart()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 80 7F=partial pdb
void CParticleCollection::UpdatePrevControlPoints()=53 8B D9 57 33 FF F3=partial pdb
void CParticleCollection::SimulateFirstFrame()=55 8B EC 83 EC 0C 53 56 8B F1 57 F6=partial pdb
static void CParticleCollection::EmitAndInit()=55 8B EC 83 EC 14 89 55 F4 53=partial pdb
void CParticleCollection::InitParticleAttributes()=55 8B EC 83 EC 08 8B 55 10=partial pdb
float CParticleCollection::RandomVectorInUnitSphere()=55 8B EC 83 E4 F8 83 EC 24 F3=partial pdb
void CParticleCollection::GetControlPointAtTime()=55 8B EC 56 8B F1 F3 ? ? ? ? F3=partial pdb
void CParticleCollection::GetControlPointAtPrevTime()=55 8B EC 8B 51 64 4A 56 8B 75 08 8B C2 3B F2 0F=partial pdb
void CParticleCollection::RecomputeBounds()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B 51=partial pdb
void CParticleCollection::SkipToTime()=55 8B EC 51 57 8B F9 8B 47 48 85 C0 0F=partial pdb
void CParticleSystemMgr::DetachKillList()=55 8B EC 8B 55 08 8B ? ? ? ? ? 85=partial pdb
void CParticleSystemMgr::AttachKillList()=55 8B EC 56 57 8B ? ? ? ? ? 0F ? ? ? ? 33=partial pdb
void CParticleCollection::ApplyKillList()=55 8B EC 83 EC 1C 53 56 57 8B F9 89 7D F8 83 ? ? ? ? ? ? 8B=partial pdb
void CParticleSystemMgr::PrecacheParticleSystem()=55 8B EC 83 EC 08 53 8B 5D 0C 56 57 85=partial pdb
void CParticleSystemMgr::FlushAllSheets()=56 B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
void CParticleSystemMgr::AddToRenderCache()=55 8B EC 83 EC 08 53 8B 5D 08 57 8B F9 89=partial pdb
void CParticleCollection::UpdateHitBoxInfo()=55 8B EC 51 8B 51 64=partial pdb
bool CParticleSnapshot::Unserialize()=55 8B EC 83 E4 F8 83 EC 14 80 ? ? ? ? ? ? 53 56=partial pdb
CSheet::CSheet()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B C1=partial pdb
void FourVectors::RotateBy()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 30 8B 43 08 0F 28 61=partial pdb
virtual void C_INIT_RingWave::InitParams()=8B 41 5C BA ? ? ? ? 3B C2 7F 0B 85 C0 79 04 33 C0 EB 06 83 F8 3F 0F 4F C2 89 41 5C 8B 41 60=partial pdb
virtual void C_INIT_CreateWithinSphere::Render()=55 8B EC 83 E4 F8 83 EC 14 56 8B F1 8D 44=partial pdb
virtual void C_INIT_CreateWithinBox::Render()=55 8B EC 83 EC 0C 56 8B F1 8D 45=partial pdb
virtual void C_INIT_PositionWarp::InitParams()=8B 41 74 83=partial pdb
virtual void C_INIT_RandomAlpha::InitParams()=66 ? ? ? ? 0F 5B C0 F3 ? ? ? ? ? ? ? F3 ? ? ? ? 66 ? ? ? ? 0F=partial pdb
virtual void C_INIT_RandomColor::InitParams()=0F B6 41 74=partial pdb
CastCapsuleShortRay()=55 8B EC 83 EC 70 F3=partial pdb
virtual void C_INIT_RemapScalar::InitParams()=8B D1 B8 ? ? ? ? 8B 4A=partial pdb
virtual void C_OP_RemapSpeedtoCP::Operate()=55 8B EC 83 EC 28 56 57 8B 7D 08 8B F1 89=partial pdb
virtual void C_OP_FadeAndKill::InitParams()=F3 ? ? ? ? 0F 2F 41 5C=partial pdb
virtual void C_OP_FadeIn::Operate()=55 8B EC 83 E4 F0 8B D1=partial pdb
virtual void C_OP_FadeOut::Operate()=55 8B EC FF 75 10 F3 ? ? ? ? 8B=partial pdb
virtual void C_OP_FadeOut::InitParams()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? 8B D1=partial pdb
virtual void C_OP_FadeOutSimple::Operate()=55 8B EC 83 E4 F0 83 EC 28 56 57 8B 45=partial pdb
virtual void C_OP_ClampScalar::Operate()=55 8B EC 51 53 8B 5D 08 57 33=partial pdb
virtual void C_OP_ClampVector::Operate()=55 8B EC 8B 45 08 53 33=partial pdb
virtual void C_OP_OscillateScalar::Operate()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B 55 08 8B=partial pdb
virtual void C_OP_OscillateVector::Operate()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 8B 75 08 89=partial pdb
virtual void C_OP_RemapScalar::Operate()=55 8B EC 83 EC 08 F3 ? ? ? ? ? ? ? 8B D1=partial pdb
virtual void C_OP_LerpScalar::Operate()=55 8B EC 51 56 8B 75 08 57 33=partial pdb
virtual void C_OP_LerpEndCapScalar::Operate()=55 8B EC 83 EC 08 57 8B 7D 08 8B D1=partial pdb
virtual void C_OP_LerpEndCapVector::Operate()=55 8B EC 83 EC 08 53 8B 5D 08 8B D1=partial pdb
void DoAxisInterpBone()=55 8B EC 83 EC 0C 56 8B 75 08 57 33=partial pdb
virtual void C_OP_RemapSpeed::Operate()=55 8B EC 83 E4 F0 83 EC 48 56 57 8B F9 B8=partial pdb
virtual void C_OP_RemapSpeedtoCP::InitParams()=8B 41 58 3B=partial pdb
virtual void C_OP_VectorNoise::Operate()=55 8B EC 83 E4 F0 81 ? ? ? ? ? F3 ? ? ? ? B8=partial pdb
virtual void C_OP_Decay::Operate()=55 8B EC 83 E4 F8 83 EC 18 8B 45 08 56 57 8B ? ? ? ? ? 8B=partial pdb
virtual void C_OP_VelocityDecay::Operate()=55 8B EC 83 E4 F8 83 EC 18 F3 ? ? ? ? B8=partial pdb
virtual void C_OP_AlphaDecay::Operate()=55 8B EC 83 E4 F8 83 EC 18 F3 ? ? ? ? F3 ? ? ? ? ? ? ? 56=partial pdb
virtual void C_OP_RadiusDecay::Operate()=55 8B EC 83 E4 F8 83 EC 10 F3 ? ? ? ? 56=partial pdb
virtual void C_OP_DecayMaintainCount::Operate()=55 8B EC 83 EC 08 53 8B D9 56 57 8B 7D 08 8B 53=partial pdb
virtual void CGeneralSpin::InitParams()=66 ? ? ? ? 0F 5B C0 0F 5A C0 F2 ? ? ? ? ? ? ? 66 0F 5A C0 F3 ? ? ? ? 66 ? ? ? ? 0F=partial pdb
virtual void CGeneralSpin::Operate()=55 8B EC 83 E4 F0 83 EC 78 8B D1=partial pdb
virtual void CSpinUpdateBase::Operate()=55 8B EC 83 E4 F8 83 EC 18 56 57 8B 7D 08=partial pdb
virtual void C_OP_InterpolateRadius::Operate()=55 8B EC 83 E4 F0 83 EC 38 8B C1 56 57 89 44 24 1C=partial pdb
virtual void C_OP_ColorInterpolate::Operate()=55 8B EC 83 E4 F0 83 EC 38 8B 55=partial pdb
virtual void C_OP_DampenToCP::InitParams()=8B 41 58 83 F8=partial pdb
virtual void C_OP_PositionLock::Operate()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B 7D 08 8B C1=partial pdb
virtual void C_OP_ControlpointLight::Operate()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 8B ? ? ? ? ? 57 8B 7D=partial pdb
virtual void C_OP_ControlpointLight::Render()=55 8B EC 83 E4 F8 83 EC 40 56 57 8B 7D=partial pdb
virtual void CGlowOverlay::Draw()=55 8B EC 83 EC 38 0F=partial pdb
virtual void C_OP_DistanceToCP::InitParams()=56 8B F1 8B ? ? ? ? ? 8B 11 8D 46 71=partial pdb
virtual void C_OP_MoveToHitbox::Operate()=55 8B EC 83 EC 28 53 8B D9 57=partial pdb
virtual void C_OP_PlaneCull::Operate()=55 8B EC 83 E4 F0 83 EC 28 56 57 8B F9=partial pdb
virtual void C_OP_DistanceCull::Operate()=55 8B EC 83 E4 F8 83 EC 18 56 8B 75 08 B8=partial pdb
virtual void C_OP_DistanceCull::Render()=55 8B EC 83 EC 0C 56 8B 71=partial pdb
virtual void C_OP_ModelCull::Operate()=55 8B EC 83 EC 10 53 56 57 8B 7D 08 8B D9 89=partial pdb
void C_BaseEntity::CalcAbsoluteVelocity()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B 55 10 56=partial pdb
virtual void C_OP_OrientTo2dDirection::Operate()=55 8B EC 83 EC 18 8B C1 8B=partial pdb
virtual void C_OP_RestartAfterDuration::Operate()=55 8B EC 53 8B 5D 08 57 8B F9 80=partial pdb
virtual void C_OP_StopAfterCPDuration::Operate()=55 8B EC 56 8B 75 08 8B D1 80=partial pdb
virtual void C_OP_Orient2DRelToCP::Operate()=55 8B EC 83 EC 10 8B C1 33 C9 56 8B=partial pdb
virtual void C_OP_MaxVelocity::Operate()=55 8B EC 83 EC 1C 56 8B 75 08 57 8B F9 F3=partial pdb
virtual void C_OP_LagCompensation::InitParams()=8B 41 60 BA ? ? ? ? 85=partial pdb
virtual void C_OP_LagCompensation::Operate()=55 8B EC 83 E4 F0 83 EC 38 8B C1 56 57 89 44 24 10=partial pdb
virtual void C_OP_RemapCPtoScalar::Operate()=55 8B EC F3 ? ? ? ? ? ? ? 83 EC 14=partial pdb
virtual void C_OP_NormalizeVector::Operate()=55 8B EC 83 E4 F8 F3 ? ? ? ? B8=partial pdb
void SpriteRenderInfo_t::Init()=55 8B EC 8B 55 08 89 51 48=partial pdb
void _VectorNormalizeFast()=55 8B EC 83 E4 F8 83 EC 34 8B 45 24=partial pdb
void RopeRenderInfo_t::Init()=55 8B EC 8B 55 08 89 51 28=partial pdb
void RopeRenderInfo_t::GenerateSeg()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 28 8B=partial pdb
virtual void C_OP_RenderRope::InitParams()=83 79 58 00 7F=partial pdb
virtual int vgui::TextEntry::PixelToCursorSpace()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B 5D 0C 8B D3=partial pdb
virtual void C_OP_RenderModels::Precache()=56 8B F1 8B ? ? ? ? ? 57 8B 11=partial pdb
void RayTracingEnvironment::AddTriangle()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 50 8B 43 28 89 4D D0=partial pdb
class Vector CParticleCollection::TransformAxis()=55 8B EC 80 7D 10 00 0F=partial pdb
void CWorldCollideContextData::SetBaseTrace()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 48 8B=partial pdb
WorldIntersectTNew()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 0F ? ? ? ? ? ? 89=partial pdb
virtual void C_OP_InstantaneousEmitter::Restart()=55 8B EC 53 8B 5D 08 56 8B 75 0C 57 6A=partial pdb
virtual void C_OP_NoiseEmitter::StartEmission()=55 8B EC 80 7D 10 00 74 12 F3 ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 7A 1F=partial pdb
virtual void C_OP_ContinuousEmitter::Restart()=55 8B EC F3 ? ? ? ? 0F 57 C0 0F 2E C8=partial pdb
virtual bool C_OP_ContinuousEmitter::ShouldRun()=55 8B EC 80 79 75=partial pdb
virtual void C_OP_NoiseEmitter::InitParams()=0F 57 C0 0F 2F 41 58=partial pdb
virtual void C_OP_NoiseEmitter::Restart()=55 8B EC F3 ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 7B 28=partial pdb
virtual void C_OP_MaintainEmitter::InitParams()=8B 41 64 85 C0 79 04=partial pdb
virtual void C_OP_MaintainEmitter::Restart()=55 8B EC 8B 45 08 8B 4D 0C 8B 40 24=partial pdb
virtual unsigned int C_OP_MaintainEmitter::Emit()=55 8B EC 53 8B 5D 10 80=partial pdb
virtual void C_OP_RampScalarSpline::Operate()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 78 56=partial pdb
int _V_stricmp()=56 57 8B FA 8B F1 3B=partial pdb
int V_strncmp()=55 8B EC 8B 45 08 53 85 C0 7E=partial pdb
char near * V_strnlwr()=53 56 8B F1 8B DE=partial pdb
double V_atod()=55 8B EC 83 E4 F8 8A 01=partial pdb
char const near * V_strnistr()=55 8B EC 83 EC 08 53 56 8B D9 8B=partial pdb
char near * V_pretifymem()=55 8B EC 83 EC 54 F3=partial pdb
void V_DefaultExtension()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 8B F2=partial pdb
void V_FixDoubleSlashes()=55 8B EC 51 53 8B D9 8B C3=partial pdb
bool V_StripLastDir()=56 8B F1 57 8B FA 80 3E=partial pdb
void V_ExtractFileExtension()=55 8B EC 56 8B F2 C6=partial pdb
void V_AppendSlash()=56 57 8B F9 8B F7 8D=partial pdb
void V_ComposeFileName()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 8B DA=partial pdb
bool V_StringMatchesPattern()=55 8B EC 83 EC 08 53 8B DA C6=partial pdb
bool KeyValues::SaveToFile()=55 8B EC 51 53 8B 5D 0C 56 8B 75 08 57 8B=partial pdb
void KeyValues::WriteIndents()=55 8B EC 56 8B 75 14 85 F6 7E 36=partial pdb
class KeyValues near * KeyValues::FindKey()=55 8B EC 83 EC 1C 53 8B D9 85=partial pdb
class KeyValues near * KeyValues::CreateNewKey()=55 8B EC 83 EC 10 53 8B C1 BB=partial pdb
class KeyValues near * KeyValues::GetFirstSubKey()=85 C9 74 04 8B 41=partial pdb
class KeyValues near * KeyValues::GetNextTrueSubKey()=85 C9 74 1A 8B 41 14=partial pdb
class KeyValues near * KeyValues::GetFirstValue()=85 C9 74 1A 8B 41 18 85 C0 74 15 0F ? ? ? ? 80 78 10 00 75=partial pdb
int CStudioHdr::RemapSeqBone()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 85 C0 74 13=partial pdb
char const near * KeyValues::GetString()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 8B 5D 08=partial pdb
class Color KeyValues::GetColor()=55 8B EC 8B 45 10 83 EC 08 8B 00=partial pdb
void KeyValues::SetColor()=55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 8B=partial pdb
void KeyValues::CopySubkeys()=55 8B EC 56 8B 71 18=partial pdb
class KeyValues near * KeyValues::MakeCopy()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8B D9 57=partial pdb
enum KeyValues::types_t KeyValues::GetDataType()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 85 C0 74 08=partial pdb
void OnCaptionLanguageChanged()=55 8B EC 81 ? ? ? ? ? 83 7D 10 00 89=partial pdb
bool KeyValues::ProcessResolutionKeys()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 8B C1=partial pdb
void KeyValues::MergeFrom()=55 8B EC 53 8B D9 56 85=partial pdb
void CChangeGameDialog::LoadModList()=55 8B EC 81 ? ? ? ? ? 85 D2 53=partial pdb
bool KeyValues::Dump()=55 8B EC 51 53 8B 5D 08 57 FF 75 0C 8B F9 8B=partial pdb
virtual bool IKeyValuesDumpContextAsText::KvBeginKey()=55 8B EC 53 8B 5D 08 57 FF 75 0C 8B F9 8B=partial pdb
virtual bool IKeyValuesDumpContextAsText::KvEndKey()=55 8B EC 83 7D 08 00 56 8B F1 74 31=partial pdb
void ConVar_Register()=8B ? ? ? ? ? 85 C9 74 7F 80=partial pdb
virtual void ConCommandBase::Create()=55 8B EC 8B 45 08 BA ? ? ? ? 89=partial pdb
CCommand::CCommand()=80 ? ? ? ? ? ? 56 8B F1 75 37=partial pdb
ConCommand::ConCommand()=55 8B EC 8B 45 0C 56 8B F1 89=partial pdb
virtual void ConCommand::Dispatch()=55 8B EC 8A 41 20=partial pdb
ConVar::ConVar()=55 8B EC 56 6A 00 51 C7 ? ? ? ? ? ? 8B F1 6A 00 51 C7 ? ? ? ? ? ? 6A 00 6A=partial pdb
void ConVar::InstallChangeCallback()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 75=partial pdb
virtual void ConVar::ChangeStringValue()=55 8B EC 51 53 56 57 8B F9 8B 77 28=partial pdb
virtual void ConVar::InternalSetColorValue()=55 8B EC 83 EC 08 8B 45 08 8B D0=partial pdb
void CUtlBinaryBlock::SetLength()=55 8B EC 53 8B 5D 0C 56 8B F1 85 DB 7E 3C=partial pdb
unsigned int Hash4()=53 56 57 8B F9 8B 1F=partial pdb
virtual bool CBaseGameStats_Driver::Init()=55 8B EC 81 ? ? ? ? ? 56 8B ? ? ? ? ? 57 8B F9 FF=partial pdb
class CSysModule near * Sys_LoadModule()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8A=partial pdb
virtual CDllDemandLoader::~CDllDemandLoader()=55 8B EC 56 8B F1 8B 46 08 C7=partial pdb
virtual char CUtlNoEscConversion::FindConversion()=55 8B EC 8B 45 0C C7 ? ? ? ? ? 32=partial pdb
virtual char CUtlCStringConversion::FindConversion()=55 8B EC 8B 45 08 33 D2 0F=partial pdb
virtual char CUtlCharConversion::FindConversion()=55 8B EC 53 56 57 8B F9 33 F6 8B 5F 10=partial pdb
void CUtlBuffer::AssumeMemory()=55 8B EC 56 8B F1 57 83 7E 08=partial pdb
int CUtlBuffer::PeekDelimitedStringLength()=55 8B EC 83 EC 10 53 56 8B F1 F6=partial pdb
void CUtlBuffer::GetLine()=55 8B EC 57 8B F9 80 7F 14=partial pdb
char CUtlBuffer::GetDelimitedCharInternal()=55 8B EC 53 56 57 6A 01=partial pdb
void CUtlBuffer::GetDelimitedString()=55 8B EC 83 EC 08 53 56 8B F1 F6=partial pdb
bool CUtlBuffer::CheckArbitraryPeekGet()=55 8B EC 8B 55 08 53 56 8B F1 8B=partial pdb
int CUtlBuffer::VaScanf()=55 8B EC 83 EC 10 57 8B F9 80 7F 14=partial pdb
bool CUtlBuffer::ParseToken()=55 8B EC 83 EC 08 8B 45 08 85=partial pdb
void CBitRead::ReadBits()=55 8B EC 83 EC 08 8B C1 53 8B=partial pdb
float CBitRead::ReadBitCoord()=55 8B EC 83 EC 0C 56 8B F1 57 8B 46=partial pdb
char const near * CUtlSymbolTableMT::String()=55 8B EC 56 57 8B F9 8B 47 38=partial pdb
CUtlSymbolTable::CUtlSymbolTable()=55 8B EC 8B 45 0C 56 8B F1 C7 ? ? ? ? ? ? 89=partial pdb
class CUtlSymbol CUtlSymbolTable::AddString()=55 8B EC 83 EC 0C 53 8B 5D 0C 57=partial pdb
char const near * CUtlSymbolTable::String()=55 8B EC 66 8B 45 08 56 8B F1 B9=partial pdb
void bf_write::WriteSBitLong()=55 8B EC 8B 45 08 56 8B F1 51 6A=partial pdb
void CSOAContainer::SetAttributeType()=55 8B EC 53 8B D9 83 7B 14=partial pdb
unsigned int CSOAContainer::AttributeMemorySize()=55 8B EC 8B D1 8B 4D 08 56 8B ? ? ? ? ? ? 83=partial pdb
unsigned int CSOAContainer::DataMemorySize()=53 56 57 8B F9 33 F6 BA=partial pdb
unsigned int CSOAContainer::ConstantMemorySize()=53 8B D9 BA ? ? ? ? 33=partial pdb
void CSOAContainer::CopyAttrFromPartial()=55 8B EC 51 56 8B 75 10 57 8B 7D=partial pdb
void CSOAContainer::CopyAttrFrom()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 48 56=partial pdb
CUtlMemoryPool::CUtlMemoryPool()=55 8B EC 8B 45 18 85=partial pdb
char const near * CStringPool::Allocate()=55 8B EC 83 EC 0C 8D 45 08=partial pdb
MD5Transform()=55 8B EC 83 EC 4C 53 8B DA=partial pdb
void MD5Update()=55 8B EC 53 8B D9 56 57 8B 7D 08 8B F2 8B 4B=partial pdb
CMessageBoxScaleform::CMessageBoxScaleform()=56 8B F1 56 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
bool CMemoryStack::Init()=55 8B EC 8B 45 0C 83 EC 24 56=partial pdb
void CMemoryStack::Term()=55 8B EC 83 E4 F8 51 56 8B F1 8B 4E 14=partial pdb
void CMemoryStack::RegisterAllocation()=55 8B EC 83 E4 F8 51 56 8B F1 80 7E 19 00 74 05 8B 46 20 EB 06 8B 46 08 2B 46 14 85 C0 74 14 80 7E 18 00 74=partial pdb
bool CMemoryStack::CommitTo()=55 8B EC 83 E4 F8 51 56 8B F1 80 7E 19 00 74 05 8B 46 20 EB 06 8B 46 08 2B 46 14 85 C0 74 14 80 7E 18 00 75=partial pdb
bool Unserialize()=55 8B EC 51 56 8B F1 57 8B FA F6 46 15 01 74 3B=partial pdb
CountBinaryBytes()=55 8B EC 83 EC 08 53 56 8B F1 8B DA=partial pdb
void near * CDataManagerBase::GetForFreeByIndex()=55 8B EC 53 8B 5D 08 B8 ? ? ? ? 57 8B F9 66 3B=partial pdb
void CHudCrosshair::ResetCrosshair()=55 8B EC 83 EC 08 56 8B F1 57 8B FA F6=partial pdb
void CExpressionEvaluator::FreeTree()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 85 C0 74 25=partial pdb
bool CExpressionEvaluator::IsIdentifierOrConstant()=55 8B EC 53 56 8B F1 32 DB 8A=partial pdb
bool CExpressionEvaluator::MakeTerm()=55 8B EC 53 8B 5D 08 57 53=partial pdb
bool CExpressionEvaluator::MakeExpression()=55 8B EC 51 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 84 C0 75=partial pdb
bool CExpressionEvaluator::SimplifyNode()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 85 C0 75=partial pdb
bool CExpressionEvaluator::Evaluate()=55 8B EC 8B 55 0C 81 ? ? ? ? ? 56 8B F1=partial pdb
void CMaterialReference::Init()=55 8B EC 51 56 57 6A 00 8B=partial pdb
void GenerateQuadIndexBuffer()=55 8B EC 85 C9 0F ? ? ? ? ? B8=partial pdb
void GeneratePolygonIndexBuffer()=55 8B EC 85 C9 74 41 B8=partial pdb
void GenerateLineLoopIndexBuffer()=55 8B EC 85 C9 74 41 8B=partial pdb
COptionsVideoScaleform::COptionsVideoScaleform()=55 8B EC 51 8B 45 0C 56 8B F1 8B=partial pdb
void CBeamSegDraw::SpecifySeg()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 8B 43 08=partial pdb
virtual void CBeamSegDraw::NextSeg()=55 8B EC 83 E4 F8 83 EC 20 56 8B F1 57 8B 7D=partial pdb
struct interval_t ReadInterval()=55 8B EC 81 ? ? ? ? ? 8B D1 C7=partial pdb
CP4File::CP4File()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 8B D9=partial pdb
class CP4File near * CP4Factory::AccessFile()=55 8B EC 80 ? ? ? ? ? ? A1=partial pdb
void near * CUtlStreamBuffer::OpenFile()=55 8B EC 51 F6 41 14=partial pdb
void CMDL::SetMDL()=55 8B EC 56 57 8B F9 BE=partial pdb
void CMDL::Draw()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 57 8B F9 89 7C=partial pdb
virtual bool CMDL::GetAttachment()=55 8B EC 8B 45 08 83 F8 01 7C=partial pdb
virtual bool CMDL::GetBoundingSphere()=55 8B EC 0F B7 41 24=partial pdb
virtual void CMergedMDL::SetMDL()=55 8B EC 81 ? ? ? ? ? 53 57 FF 75 08 8B F9 8D=partial pdb
void CMergedMDL::Draw()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 83 ? ? ? ? ? ? 53 56 8B=partial pdb
void SetPostProcessParams()=55 8B EC 8B 45 08 0F 10 00 0F ? ? ? ? ? ? 0F 10=partial pdb
void CMergedMDL::SetPoseParameters()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B D9 89 5D FC 85=partial pdb
virtual vgui::Panel::~Panel()=51 56 8B F1 57 80=partial pdb
virtual char const near * vgui::Panel::GetClassName()=8B 01 FF 50 70 85 C0 74=partial pdb
void vgui::Panel::GetBounds()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 FF 75 0C 8B 03 FF 75 08 8B 3E FF 10 50 8B CE FF 57 0C=partial pdb
virtual void vgui::Panel::OnScreenSizeChanged()=55 8B EC 83 EC 20 53 8B D9 C7=partial pdb
virtual void vgui::Panel::PaintTraverse()=55 8B EC 83 EC 28 53 8B D9 56 57 89 5D EC=partial pdb
virtual void vgui::Panel::SetParent()=55 8B EC 57 8B F9 8B 4D 08 85 C9 74 16=partial pdb
void vgui::Panel::SetMessageContextId_R()=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF 75 08 8B 3E 89 5D F8 FF 10 50 8B CE FF ? ? ? ? ? 33=partial pdb
virtual void vgui::Panel::OnKeyFocusTicked()=55 8B EC 51 8B 01 53 89=partial pdb
virtual void vgui::Panel::SetScheme()=55 8B EC 53 57 8B 7D 08 8B D9 8B C7=partial pdb
virtual void vgui::Panel::InternalCursorMoved()=55 8B EC A1 ? ? ? ? 83 EC 0C 53 8B D9 83=partial pdb
void C_BaseEntity::CheckShutdownPredictable()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 37=partial pdb
ShouldHandleInputMessage()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 85 C0 75 04=partial pdb
void vgui::Panel::SetAllowKeyBindingChainToParent()=55 8B EC 80 7D 08 00 74 0D=partial pdb
bool C_CSPlayer::IsPlayerDominated()=55 8B EC 56 8B F1 8B 06 FF 10 8B C8 E8 ? ? ? ? 84 C0 74=partial pdb
virtual bool C_BaseCombatWeapon::UsesClipsForAmmo1()=8B 01 FF ? ? ? ? ? 33 C9 83 F8 FF=partial pdb
virtual bool vgui::Panel::IsKeyRebound()=55 8B EC 51 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 62=partial pdb
virtual void vgui::Panel::InternalKeyCodeTyped()=55 8B EC 51 57 8B F9 8B 07 FF 10=partial pdb
virtual void vgui::Panel::InternalKeyFocusTicked()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 0B=partial pdb
virtual void vgui::Panel::InternalMouseFocusTicked()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 5C=partial pdb
void vgui::Panel::InternalSetCursor()=53 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 8A=partial pdb
virtual void vgui::Panel::OnKeyCodeTyped()=55 8B EC 53 56 8B 75 08 8B D9 8B CE=partial pdb
virtual unsigned int vgui::Panel::IsWithinTraverse()=55 8B EC 83 EC 14 53 8B D9 8B 03=partial pdb
virtual void vgui::Panel::GetClipRect()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 14 FF 75 10 8B 3E FF 75 0C FF 75 08 FF 10 50 8B CE FF 57 2C=partial pdb
virtual void vgui::Panel::RemoveActionSignalTarget()=55 8B EC 53 8B D9 8B 4D 08 56 8B ? ? ? ? ? 57 8B 01 8B 3E FF 10 50 8B CE FF 57 4C 89=partial pdb
virtual void vgui::Panel::PostActionSignal()=55 8B EC 83 EC 08 53 56 8B F1 57 8B 7D 08 89=partial pdb
virtual void vgui::Panel::SetBorder()=55 8B EC 83 EC 14 53 8B D9 56 8B=partial pdb
virtual void vgui::Panel::SetPaintBackgroundType()=55 8B EC 8B 45 08 85 C0 79 0E=partial pdb
virtual void vgui::Panel::GetInset()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 14 FF 75 10 8B 3E FF 75 0C FF 75 08 FF 10 50 8B CE FF 57 34=partial pdb
virtual void vgui::Panel::GetPaintSize()=55 8B EC 83 EC 10 53 56 8B ? ? ? ? ? 8B D9 57 FF=partial pdb
virtual void vgui::Panel::GetSizerClientArea()=55 8B EC 8B 45 08 53 56 57 C7 ? ? ? ? ? 8B D9=partial pdb
virtual void vgui::Panel::GetSizerMinimumSize()=55 8B EC 56 8B ? ? ? ? ? 85 F6 74 28 83=partial pdb
void vgui::CSizerBase::RecursiveInvalidateCachedSize()=53 8B D9 56 33 F6 C7 ? ? ? ? ? ? C7=partial pdb
virtual void CQuitQueryBox::DoModal()=55 8B EC 53 56 8B 75 08 8B D9 57 85 F6 74 05=partial pdb
virtual void vgui::Panel::InvalidateLayout()=55 8B EC 51 53 8B 5D 08 B8 ? ? ? ? 56 8B=partial pdb
virtual void vgui::Panel::ApplySchemeSettings()=55 8B EC 51 53 8B D9 56 57 8B 7D 08 F6=partial pdb
void vgui::Panel::ApplyAutoResizeSettings()=55 8B EC 83 EC 30 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void vgui::Panel::ApplySettings()=55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 89 5C 24 4C=partial pdb
virtual void vgui::Panel::OnUnserialized()=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF=partial pdb
virtual void vgui::Panel::GetSettings()=55 8B EC 83 EC 44 53 8B D9 56 57 8B=partial pdb
virtual class Color vgui::Panel::GetSchemeColor()=55 8B EC 51 8B 4D 10 C7=partial pdb
virtual void vgui::Panel::InternalMove()=55 8B EC 83 EC 08 53 8B D9 56 57 89 5D F8 8B 03=partial pdb
void vgui::Panel::OnOldMessage()=55 8B EC 83 EC 28 53 56 57 8B 7D 08 32=partial pdb
virtual bool vgui::Panel::RequestInfoFromChild()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 8B=partial pdb
virtual void vgui::Panel::PostMessage()=55 8B EC 8B 01 F3 ? ? ? ? 56 8B ? ? ? ? ? 57 51 F3 ? ? ? ? 8B 3E FF 10 8B=partial pdb
void vgui::Panel::PreparePanelMap()=55 8B EC 51 57 8B 7D 08 85 FF 0F ? ? ? ? ? 8B ? ? ? ? ? 53=partial pdb
virtual void vgui::Panel::SetKeyBoardInputEnabled()=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF 75 08 8B 3E 89 5D F8 FF 10 50 8B CE FF 57=partial pdb
virtual void vgui::Panel::GetCornerTextureSize()=55 8B EC 8B ? ? ? ? ? 83 FA FF 75=partial pdb
virtual void vgui::Panel::DrawBox()=55 8B EC 83 EC 08 83 ? ? ? ? ? ? 89 4D=partial pdb
virtual void vgui::Panel::DrawBoxFade()=55 8B EC 83 EC 10 53 8B D9 89 5D F4=partial pdb
virtual void vgui::Panel::DrawHollowBox()=55 8B EC F3 ? ? ? ? 8B 01=partial pdb
virtual void vgui::Panel::DrawTexturedBox()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 5D=partial pdb
CDragDropHelperPanel::CDragDropHelperPanel()=55 8B EC 83 EC 10 53 56 57 68 ? ? ? ? 8B D9=partial pdb
virtual void CDragDropHelperPanel::PostChildPaint()=55 8B EC 83 EC 2C 57 8B F9=partial pdb
virtual void vgui::Panel::OnDraggablePanelPaint()=55 8B EC 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8D 45 EC=partial pdb
virtual void vgui::Panel::FillRectSkippingPanel()=55 8B EC 83 EC 18 53 8B 5D 1C=partial pdb
virtual void vgui::Panel::SetSkipChildDuringPainting()=55 8B EC 53 8B D9 8B 4D 08 85 C9 74 1E=partial pdb
bool vgui::AnimationController::SetScriptFile()=55 8B EC 80 7D 10 00 8B 45=partial pdb
void vgui::AnimationController::ReloadScriptFile()=55 8B EC 51 53 56 57 8B F9 8D ? ? ? ? ? E8=partial pdb
bool vgui::AnimationController::UpdateScreenSize()=55 8B EC 83 EC 10 53 56 8B F1 C7 ? ? ? ? ? ? 57=partial pdb
virtual void vgui::EditablePanel::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 83 F8 40 0F=partial pdb
virtual void vgui::EditablePanel::ActivateBuildMode()=8B ? ? ? ? ? 6A 01 8B 01 FF 10 C3=partial pdb
virtual void vgui::EditablePanel::SaveUserConfig()=56 8B F1 8B ? ? ? ? ? 85 D2 74 21=partial pdb
virtual void vgui::EditablePanel::OnRequestFocus()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 8B 40=partial pdb
virtual void vgui::EditablePanel::SetControlString()=55 8B EC 53 56 6A 00 FF 75 08 8B F1=partial pdb
virtual void vgui::FrameButton::SetDisabledLook()=55 8B EC 8A 45 08 56 8B F1 84 C0 88=partial pdb
virtual void vgui::FrameButton::OnMousePressed()=55 8B EC 53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 4E=partial pdb
void vgui::FrameSystemButton::GetImageSize()=55 8B EC 53 56 8B 75 0C 8B D9 57 8B 7D 08 33=partial pdb
virtual void vgui::FrameSystemButton::SetEnabled()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 8B ? ? ? ? ? FF D0 84 C0 74 70=partial pdb
virtual vgui::Frame::~Frame()=51 56 57 8B F9 8B 77=partial pdb
virtual void vgui::Frame::CloseModal()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 54=partial pdb
virtual void vgui::Frame::OnThink()=55 8B EC 83 EC 08 53 8B D9 E8 ? ? ? ? 8B=partial pdb
void vgui::Frame::OnFrameFocusChanged()=55 8B EC 51 80 7D 08 00 53=partial pdb
void const near * C_BaseFlex::FindSceneFile()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 83=partial pdb
virtual void vgui::Frame::SetTitle()=55 8B EC 53 8B D9 83 ? ? ? ? ? ? 75 28=partial pdb
virtual void vgui::Frame::GetClientArea()=55 8B EC 53 8B D9 8B 4D 08 56 57 FF=partial pdb
virtual void vgui::Frame::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 53 8B F9 E8 ? ? ? ? 8B=partial pdb
virtual void vgui::Frame::GetSettings()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 53 8B F1 E8 ? ? ? ? 0F=partial pdb
virtual void vgui::Frame::OnClose()=53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF 50 4C=partial pdb
virtual void vgui::Frame::SetSysMenu()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 3B F9=partial pdb
virtual void vgui::Frame::OnMousePressed()=55 8B EC 51 53 8B D9 8B 03 8B=partial pdb
virtual void vgui::Frame::InternalFlashWindow()=53 8B D9 8A=partial pdb
virtual void vgui::Frame::LoadControlSettings()=55 8B EC 56 FF 75 14 8B F1 FF 75 10 FF 75 0C 8B ? ? ? ? ? FF 75 08 8B 01 FF 50 0C 8B CE E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 FF ? ? ? ? ? 8B=partial pdb
virtual void vgui::Frame::OnKeyCodeTyped()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 6A=partial pdb
virtual void vgui::Frame::OnKeyTyped()=55 8B EC 56 8B F1 57 8B 06 FF ? ? ? ? ? FF=partial pdb
virtual void vgui::Frame::OnDialogVariablesChanged()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 83=partial pdb
virtual class Color vgui::Button::GetButtonFgColor()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B F9 0F=partial pdb
virtual class Color vgui::Button::GetButtonBgColor()=55 8B EC 8A ? ? ? ? ? D0=partial pdb
virtual void vgui::Button::SetMouseClickEnabled()=55 8B EC 8B 45 08 83 C0 95=partial pdb
virtual bool vgui::Button::IsMouseClickEnabled()=55 8B EC 8B D1 B8 ? ? ? ? 8B 4D 08 8D=partial pdb
virtual void vgui::Button::FireActionSignal()=55 8B EC 83 EC 08 53 56 57 8B F9 89 7D FC=partial pdb
virtual void vgui::Button::OnMousePressed()=55 8B EC 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 0F=partial pdb
virtual void vgui::Button::OnKeyCodePressed()=55 8B EC 56 57 8B 7D 08 8B F1 8B CF E8=partial pdb
virtual void vgui::Button::OnKeyCodeReleased()=55 8B EC 56 8B F1 8B 4D 08 E8 ? ? ? ? 8A=partial pdb
virtual void vgui::Button::DrawFocusBorder()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 89=partial pdb
virtual void vgui::Button::GetSizerMinimumSize()=55 8B EC 8B 01 56 8B 75 08 57 8B 7D 0C 57=partial pdb
virtual void vgui::TextEntry::OnKillFocus()=55 8B EC 83 EC 20 53 56 8B F1 33 C0=partial pdb
virtual void vgui::TextEntry::SetText()=55 8B EC 81 ? ? ? ? ? 8B 45 08 85=partial pdb
virtual void vgui::TextEntry::SetCharAt()=55 8B EC 53 66 8B 5D 08 56 8B F1 57=partial pdb
virtual void vgui::TextEntry::ResetCursorBlink()=56 8B F1 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
virtual void vgui::TextEntry::CursorToPixelSpace()=55 8B EC 83 EC 1C 53 56 8B F1 57 8B 06 FF ? ? ? ? ? 89=partial pdb
virtual int vgui::TextEntry::DrawChar()=55 8B EC 83 EC 14 53 56 8B 75 08 8B D9 57 56=partial pdb
bool vgui::TextEntry::NeedsEllipses()=55 8B EC 8B 45 0C 83 EC 10 53 56=partial pdb
virtual void vgui::TextEntry::PaintBackground()=55 8B EC 83 EC 64 53 8B D9 56 57 8B=partial pdb
virtual void vgui::TextEntry::AddAnotherLine()=55 8B EC 8B 45 08 56 8B F1 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::TextEntry::RecalculateLineBreaks()=55 8B EC 83 EC 2C 56 8B F1 80=partial pdb
virtual void vgui::GraphPanel::Paint()=55 8B EC 83 EC 20 53 8B D9 83=partial pdb
virtual void vgui::TextEntry::SetVerticalScrollbar()=55 8B EC 8A 45 08 56 8B F1 88 ? ? ? ? ? 84 C0 74 4C=partial pdb
virtual void vgui::TextEntry::OnCursorMoved()=55 8B EC 83 EC 10 53 8B D9 80 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::TextEntry::OnMousePressed()=55 8B EC 8B 45 08 83 EC 0C 53 8B D9 83 F8 6B 0F ? ? ? ? ? 8B 03 6A=partial pdb
virtual void vgui::TextEntry::OnMouseReleased()=55 8B EC 83 EC 08 56 8B F1 6A 00 C6=partial pdb
virtual void vgui::TextEntry::OnKeyCodeTyped()=55 8B EC 83 EC 08 53 56 8B F1 57 6A 4F=partial pdb
virtual void vgui::TextEntry::OnKeyFocusTicked()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 18 3B=partial pdb
virtual bool vgui::TextEntry::SelectCheck()=55 8B EC 83 EC 18 53 8B D9 C6=partial pdb
virtual void vgui::TextEntry::GotoEndOfLine()=53 56 8B F1 57 6A 00 8B=partial pdb
virtual void vgui::TextEntry::InsertString()=55 8B EC 56 8B F1 57 8B 06 FF ? ? ? ? ? 8B 7D=partial pdb
virtual bool vgui::TextEntry::GetSelectedRange()=55 8B EC 8B ? ? ? ? ? 83 F8 FF 75 06 32=partial pdb
virtual void vgui::TextEntry::Paste()=55 8B EC 83 EC 24 56 8B F1 80=partial pdb
virtual float vgui::TextEntry::GetValueAsFloat()=55 8B EC 53 8B D9 56 57 8B 03 FF ? ? ? ? ? 8D=partial pdb
virtual void vgui::TextEntry::GetText()=55 8B EC 51 83 ? ? ? ? ? ? 74 56=partial pdb
virtual void vgui::TextEntry::GetTextRange()=55 8B EC 8B 55 10 53 8B D9 56=partial pdb
virtual void vgui::TextEntry::FireActionSignal()=56 8B F1 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 10 68 ? ? ? ? 8B C8 E8 ? ? ? ? 8B C8 EB 02 33 C9 8B 06 51 8B=partial pdb
virtual void vgui::TextEntry::ApplySettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 6A=partial pdb
virtual void C_BaseEntity::Release()=55 8B EC 83 EC 14 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
virtual void vgui::TextEntry::OnSetFocus()=56 8B F1 F6 ? ? ? ? ? ? 74 34=partial pdb
virtual void vgui::TextEntry::CompositionString()=55 8B EC 56 8B F1 68 ? ? ? ? FF=partial pdb
virtual void vgui::TextEntry::ShowIMECandidates()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B 03 FF ? ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
bool CCascadeLightManager::InitRenderTargets()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 5D FC=partial pdb
virtual bool vgui::TextEntry::IsTextFullySelected()=56 8B F1 83 ? ? ? ? ? ? 74 04=partial pdb
virtual void vgui::TextEntry::GetSizerMinimumSize()=55 8B EC 8B 45 0C C7 ? ? ? ? ? 8B=partial pdb
virtual void vgui::RichText::SetFgColor()=55 8B EC 51 56 8B F1 83 ? ? ? ? ? ? 75=partial pdb
virtual void vgui::RichText::OnKillFocus()=55 8B EC 83 EC 18 89 4D F8=partial pdb
void vgui::RichText::CursorToPixelSpace()=55 8B EC 83 EC 0C 53 56 8B F1 57 33 FF 8B=partial pdb
int vgui::RichText::PixelToCursorSpace()=55 8B EC 83 EC 40 53 8B D9=partial pdb
int vgui::RichText::DrawString()=55 8B EC 83 EC 08 53 56 57 FF 75 14=partial pdb
void vgui::RichText::CalculateFade()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 57 8B 7E=partial pdb
virtual void vgui::RichText::Paint()=55 8B EC 83 E4 F0 83 EC 58 56 8B F1 57 33=partial pdb
void vgui::RichText::RecalculateDefaultState()=55 8B EC 51 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
bool vgui::RichText::UpdateRenderState()=55 8B EC 56 8B 75 0C 57 8B F9 8B 4E=partial pdb
void vgui::RichText::InsertFade()=55 8B EC 83 EC 2C 53 8B D9 F3=partial pdb
void vgui::RichText::ResetAllFades()=55 8B EC 83 EC 14 8A=partial pdb
void vgui::RichText::RecalculateLineBreaks()=55 8B EC 83 E4 F8 83 EC 44 53 56 8B F1 57=partial pdb
void vgui::RichText::CreateEditMenu()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? A1=partial pdb
virtual void vgui::RichText::OnMouseReleased()=56 8B F1 6A 00 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF 50 08 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::RichText::OnMouseDoublePressed()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 76=partial pdb
virtual void vgui::RichText::OnKeyCodeTyped()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 6A=partial pdb
virtual void vgui::RichText::MoveScrollBarDirect()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 27=partial pdb
void vgui::RichText::TruncateTextStream()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 83 F8=partial pdb
void C_Beam::SetBeamFlags()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 8B F1 57 80=partial pdb
void vgui::RichText::OpenEditMenu()=55 8B EC 83 EC 1C 8D 55=partial pdb
virtual void vgui::RichText::OnClickPanel()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B F1 57=partial pdb
virtual void vgui::Label::GetContentSize()=55 8B EC 83 EC 1C 56 8B F1 57 8B 06=partial pdb
virtual wchar_t vgui::Label::CalculateHotkey()=55 8B EC 56 8B 75 08 80 3E=partial pdb
void vgui::ComboBox::SelectMenuItem()=56 8B F1 8B ? ? ? ? ? 83 FA FF 74 77=partial pdb
virtual void vgui::Label::SetText()=55 8B EC 53 8B 5D 08 57 8B F9 0F ? ? ? ? ? ? 88=partial pdb
virtual void vgui::Label::ComputeAlignment()=55 8B EC 83 EC 24 53 56 57 8B F9 8D 4D=partial pdb
virtual void C_FuncLadder::Spawn()=55 8B EC 83 EC 58 53 56 8B F1 8D=partial pdb
virtual void vgui::Label::DrawDashedLine()=55 8B EC 8B 55 14 8B=partial pdb
virtual void vgui::Label::SetImage()=55 8B EC 56 8B F1 8B 06 FF ? ? ? ? ? FF 75=partial pdb
virtual void vgui::Label::ResetToSimpleTextImage()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 6A 00 FF ? ? ? ? ? FF=partial pdb
virtual void vgui::Label::SetImageAtIndex()=55 8B EC 53 56 8B 75 08 57 8B F9 56 8B 07=partial pdb
virtual void vgui::Label::EnsureImageCapacity()=55 8B EC 56 8B F1 57 8B 7D 08 39 ? ? ? ? ? 7F=partial pdb
virtual void vgui::Label::SetImageBounds()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 8D=partial pdb
virtual void vgui::Label::OnRequestFocus()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::Label::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B F1 57 E8=partial pdb
virtual void vgui::Label::PerformLayout()=55 8B EC 83 EC 1C 53 56 8B ? ? ? ? ? 8D 45=partial pdb
virtual void vgui::ToggleButton::OnKeyCodePressed()=55 8B EC 8B 45 08 83 F8 40 74=partial pdb
vgui::ImagePanel::ImagePanel()=55 8B EC 51 53 56 57 FF 75 0C 8B F1=partial pdb
virtual void vgui::ImagePanel::PaintBackground()=55 8B EC 83 EC 1C 53 8B D9 56 57 80=partial pdb
virtual void vgui::ImagePanel::ApplySettings()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 1C 53 8B=partial pdb
vgui::CBuildFactoryHelper::CBuildFactoryHelper()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 8B 7D 08 85 F6=partial pdb
virtual void vgui::Image::GetPos()=55 8B EC 8B 45 08 8B 51 04=partial pdb
virtual void vgui::Image::GetSize()=55 8B EC 8B 45 08 8B 51 0C=partial pdb
virtual void vgui::Image::GetContentSize()=55 8B EC 8B 01 5D FF 60 0C=partial pdb
virtual void vgui::Image::DrawSetColor()=55 8B EC 8B 45 08 8B C8 56 8B ? ? ? ? ? 8B D0 57 C1 EA 10 C1 E9 18 8B 3E 51 0F B6 D2 8B CE 52 8B D0 0F B6 C0 C1 EA 08 0F B6 D2 52 50 FF 57 3C=partial pdb
virtual void vgui::Image::DrawFilledRect()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 40=partial pdb
virtual void vgui::Image::DrawOutlinedRect()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 48=partial pdb
virtual void vgui::Image::DrawLine()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 4C=partial pdb
virtual void vgui::Image::DrawPolyLine()=55 8B EC 8B 45 0C 8B D1 53=partial pdb
virtual void vgui::Image::DrawSetTextFont()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 5C=partial pdb
virtual void vgui::Image::DrawSetTextColor()=55 8B EC 8B 45 08 8B C8 56 8B ? ? ? ? ? 8B D0 57 C1 EA 10 C1 E9 18 8B 3E 51 0F B6 D2 8B CE 52 8B D0 0F B6 C0 C1 EA 08 0F B6 D2 52 50 FF 57 64=partial pdb
virtual void vgui::Image::DrawPrintText()=55 8B EC 8B ? ? ? ? ? 6A 00 FF 75 0C=partial pdb
virtual void vgui::Image::DrawPrintChar()=55 8B EC 8B 41 08 8B ? ? ? ? ? 03 45 0C 56 50 8B 41 04 8B CA 8B 32 03 45 08 50 FF 56 68 8B ? ? ? ? ? 6A 00 FF 75 10=partial pdb
virtual void vgui::MenuBar::AddMenu()=55 8B EC A1 ? ? ? ? 56 57 8B F9 8B 08 68 ? ? ? ? 8B 01 FF 50 04 85 C0 74 11=partial pdb
virtual void vgui::MenuBar::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 57 83=partial pdb
virtual void COptionsDialog::OnGameUIHidden()=55 8B EC 66 ? ? ? ? 57 8B=partial pdb
virtual void vgui::ScrollBar::SetSlider()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 0A=partial pdb
virtual void vgui::ScrollBar::OnMouseFocusTicked()=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 05=partial pdb
virtual void vgui::ScrollBar::OnSizeChanged()=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 6A 00 6A=partial pdb
virtual void vgui::MenuSeparator::Paint()=55 8B EC 83 EC 0C 53 56 8B ? ? ? ? ? 8D 45 F8=partial pdb
virtual void vgui::Menu::UpdateMenuItem()=55 8B EC 56 8B F1 8B 4D 08 85 C9 78 57=partial pdb
virtual void vgui::Menu::PerformLayout()=55 8B EC 83 EC 34 53 8B 5D 08 8D=partial pdb
int vgui::Menu::ComputeFullMenuHeightWithInsets()=55 8B EC 83 EC 14 53 57 8B F9 8D=partial pdb
void vgui::Menu::LayoutScrollBar()=55 8B EC 83 EC 20 53 8B D9 56 57 6A=partial pdb
void vgui::Menu::PositionCascadingMenu()=55 8B EC 83 EC 3C 53 56 8B ? ? ? ? ? 8D 45 C4=partial pdb
virtual void vgui::Menu::OnKeyCodeTyped()=55 8B EC 53 56 57 8B 7D 08 8B F1 8B CF E8=partial pdb
class KeyValues near * vgui::Menu::GetItemUserData()=55 8B EC 8B 55 08 56 85 D2 78 48=partial pdb
virtual void vgui::Menu::SetItemEnabled()=55 8B EC 57 8B F9 8B ? ? ? ? ? 83 F8=partial pdb
virtual void vgui::Menu::SetItemVisible()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 F8=partial pdb
virtual void vgui::Menu::OnCursorMoved()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? ? ? ? FF ? ? ? ? ? 6A=partial pdb
virtual void vgui::Menu::OnKeyCodePressed()=55 8B EC 51 53 8B D9 8B 03 C7=partial pdb
void vgui::Menu::SetCurrentlySelectedItem()=55 8B EC 8B D1 53 83=partial pdb
virtual void vgui::Menu::OnCursorExitedMenuItem()=55 8B EC 83 ? ? ? ? ? ? 75 27 8B 01=partial pdb
virtual void vgui::TextEntry::OpenEditMenu()=55 8B EC 83 EC 18 53 8B DA 56=partial pdb
virtual C_PlayerResource::~C_PlayerResource()=53 8B D9 56 57 BF ? ? ? ? C7 ? ? ? ? ? 8D=partial pdb
void vgui::CircularProgressBar::SetImage()=55 8B EC 8B 55 08 53 56 8B F1 57 8D=partial pdb
void vgui::CircularProgressBar::DrawCircleSegment()=55 8B EC 83 EC 4C 53 8B D9 F3=partial pdb
virtual void vgui::AnimatingImagePanel::OnTick()=56 8B F1 80 ? ? ? ? ? ? 74 53=partial pdb
class vgui::Panel near * ComboBox_Factory()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 10 6A 01 6A=partial pdb
virtual int vgui::ComboBox::AddItem()=55 8B EC 57 8B F9 FF=partial pdb
virtual bool vgui::ComboBox::UpdateItem()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=partial pdb
virtual void vgui::ComboBox::SetMenu()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 08=partial pdb
virtual void vgui::ComboBox::PerformLayout()=55 8B EC 83 EC 20 56 8B F1 8D=partial pdb
void vgui::Menu::GetItemText()=55 8B EC 8B ? ? ? ? ? 8B 4D 08 56=partial pdb
virtual void vgui::ComboBox::OnMousePressed()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 58=partial pdb
virtual void vgui::ComboBox::OnMouseDoublePressed()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B CE FF=partial pdb
virtual void vgui::ComboBox::OnSetText()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 66 83=partial pdb
virtual void vgui::ComboBox::OnMenuClose()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 8B=partial pdb
virtual void vgui::ListViewPanel::ScrollToItem()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74=partial pdb
virtual void vgui::ComboBox::OnMenuItemSelected()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? C6=partial pdb
virtual void vgui::ComboBox::OnKeyCodeTyped()=55 8B EC 57 8B F9 8B ? ? ? ? ? 6A=partial pdb
virtual void vgui::ComboBox::OnKeyTyped()=55 8B EC 53 57 8B F9 8B 07 8B=partial pdb
bool VideoPanel::BeginPlayback()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 85=partial pdb
virtual void ColumnButton::OnMousePressed()=55 8B EC 53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 0F=partial pdb
virtual void Dragger::OnMousePressed()=55 8B EC 83 EC 08 53 8B D9 80 ? ? ? ? ? ? 74 39=partial pdb
virtual void Dragger::OnMouseReleased()=56 8B F1 80 ? ? ? ? ? ? 74 14 8B ? ? ? ? ? 6A=partial pdb
void C_BaseAnimating::ClientSideAnimationChanged()=55 8B EC 51 53 8B D9 80 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::ListPanel::SetImageList()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 85 FF 74 1B=partial pdb
virtual void vgui::ListPanel::AddColumnHeader()=55 8B EC 56 8B 75 18 8B=partial pdb
void vgui::ListPanel::ResortColumnRBTree()=55 8B EC 8B 45 08 83 EC 14 53=partial pdb
virtual void vgui::ListPanel::SetColumnHeaderText()=55 8B EC 8B ? ? ? ? ? 8B 45 08 FF=partial pdb
virtual void vgui::ListPanel::SetColumnTextAlignment()=55 8B EC 8B ? ? ? ? ? 8B 45 08 8B ? ? ? ? ? 0F=partial pdb
virtual void vgui::ListPanel::SetColumnHeaderImage()=55 8B EC 56 8B 75 08 57 8B F9 6A FF 8B=partial pdb
virtual bool vgui::ListPanel::GetColumnHeaderText()=55 8B EC 8B 55 08 3B ? ? ? ? ? 7D 2A=partial pdb
virtual void vgui::ListPanel::SetColumnSortable()=55 8B EC 80 7D 0C 00 56 8B F1 74=partial pdb
virtual void vgui::ListPanel::SetColumnVisible()=55 8B EC 8B 45 08 56 57 8B F9 8B ? ? ? ? ? 0F=partial pdb
virtual void vgui::ListPanel::RemoveColumn()=55 8B EC 51 53 8B D9 8B 4D 08 89 5D FC 85 C9 0F ? ? ? ? ? 3B=partial pdb
virtual void vgui::ListPanel::SetUserData()=55 8B EC 8B 55 08 85 D2 78 30=partial pdb
virtual int vgui::ListPanel::GetItemIDFromUserData()=55 8B EC 53 56 8B F1 57 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::ListPanel::RemoveAll()=55 8B EC 51 56 57 8B F9 33 F6 39=partial pdb
virtual void vgui::ListPanel::ClearSelectedItems()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 85=partial pdb
virtual void vgui::ListPanel::SetSelectedCell()=55 8B EC 56 8B F1 F6 ? ? ? ? ? ? 75 10=partial pdb
virtual void vgui::ListPanel::GetCellText()=55 8B EC 83 E4 F8 51 53 56 57 8B 7D 10 8B D9=partial pdb
void vgui::ListPanel::HandleMultiSelection()=55 8B EC 51 53 8B D9 56 57 8B 7D 0C=partial pdb
void vgui::ListPanel::HandleAddSelection()=55 8B EC 53 56 8B 75 08 33 C0 57 8B F9 8B ? ? ? ? ? 85 D2 7E 15=partial pdb
void vgui::ListPanel::UpdateSelection()=55 8B EC 53 8B 5D 14 56 8B F1=partial pdb
virtual void vgui::ListPanel::OnMousePressed()=55 8B EC 83 EC 0C 56 57 8B 7D 08 8B F1 83=partial pdb
virtual void vgui::ListPanel::SetSortFunc()=55 8B EC 53 8B 5D 0C 56 8B F1 8B 4D 08 57=partial pdb
virtual void vgui::ListPanel::SetSortColumnEx()=55 8B EC 8B 45 08 89 ? ? ? ? ? 8B 45 0C 89 ? ? ? ? ? 8A=partial pdb
virtual void vgui::ListPanel::SortList()=55 8B EC 83 EC 18 56 8B F1 89 75 F0=partial pdb
virtual void vgui::ListPanel::OnSetSortColumn()=55 8B EC 56 8B F1 8B ? ? ? ? ? 3B 45=partial pdb
float CBonusMapsDatabase::GetCompletionPercentage()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8D 45 FC 57 50 8B D9 8D 45 F8 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 45 FC 2B=partial pdb
virtual void vgui::ListPanel::ResizeColumnToContents()=55 8B EC 81 ? ? ? ? ? 53 8B D9 57 8B=partial pdb
virtual void vgui::Divider::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 68=partial pdb
virtual void vgui::CTreeViewListControl::SetTreeView()=55 8B EC 56 8B F1 8B 4D 08 89 ? ? ? ? ? 85 C9 74 19=partial pdb
void vgui::ProgressBar::PaintSegment()=55 8B EC 51 8B C1 89 45 FC 8B ? ? ? ? ? 83 F9=partial pdb
virtual void vgui::ProgressBar::Paint()=55 8B EC 83 EC 18 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void vgui::ProgressBar::GetSettings()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? F3=partial pdb
virtual void vgui::ContinuousProgressBar::Paint()=55 8B EC 83 EC 0C 8D 45 FC 53 56 8B=partial pdb
virtual void vgui::MenuButton::SetMenu()=55 8B EC 56 8B F1 8B 4D 08 89 ? ? ? ? ? 85 C9 74 28=partial pdb
virtual void vgui::MenuButton::OnKeyCodeTyped()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 6A=partial pdb
virtual void vgui::MenuButton::OnCursorEntered()=55 8B EC 51 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 0A=partial pdb
virtual void vgui::MenuButton::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9=partial pdb
virtual void vgui::MenuButton::Paint()=55 8B EC 83 EC 1C 53 8B D9 89 5D F0=partial pdb
virtual vgui::MenuItem::~MenuItem()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B ? ? ? ? ? 85 C9=partial pdb
virtual void vgui::MenuItem::Init()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
virtual void vgui::MenuItem::FireActionSignal()=55 8B EC 51 53 8B D9 83 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::MenuItem::ApplySchemeSettings()=55 8B EC 83 EC 14 53 56 57 8B 7D 08 8B F1 57=partial pdb
virtual void vgui::MenuItem::OnKeyModeSet()=55 8B EC 51 53 56 57 89 4D FC FF=partial pdb
class KeyValues near * vgui::MenuItem::GetUserData()=56 8B F1 8B ? ? ? ? ? 85 C9 74 16 8B 01 FF=partial pdb
virtual void vgui::MenuItem::GetContentSize()=55 8B EC 53 8B 5D 08 56 57 8B 7D 0C 8B F1 57 53 E8 ? ? ? ? 8B=partial pdb
virtual void vgui::MenuItem::RepositionTextImage()=55 8B EC 83 EC 0C 83 ? ? ? ? ? ? 75 39=partial pdb
virtual void RadioImage::ApplySchemeSettings()=55 8B EC 51 56 8B 75 08 8D 55=partial pdb
virtual void vgui::RadioButton::SetSelected()=55 8B EC 83 EC 10 80 7D 08 01=partial pdb
virtual void vgui::RadioButton::PerformLayout()=55 8B EC 51 57 8B F9 8B 07 8B=partial pdb
virtual void vgui::RadioButton::OnKeyCodeTyped()=55 8B EC 56 57 8B 7D 08 8B F1 8D 47 C0=partial pdb
void vgui::URLLabel::SetURL()=55 8B EC 53 56 57 8B 7D 08 8B D9 8B F7 8D=partial pdb
virtual void vgui::URLLabel::ApplySettings()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A=partial pdb
virtual bool vgui::TreeNodeText::IsKeyRebound()=55 8B EC 80 ? ? ? ? ? ? 74 06 32=partial pdb
virtual void vgui::TreeNodeText::PaintBackground()=55 8B EC 83 EC 0C 53 8B D9 E8 ? ? ? ? 80=partial pdb
virtual void vgui::TreeNodeText::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 FF ? ? ? ? ? 8B=partial pdb
virtual void vgui::TreeNodeText::OnKeyCodeTyped()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 30=partial pdb
virtual void vgui::TreeNodeText::OnTick()=53 8B D9 80 ? ? ? ? ? ? 74 5B=partial pdb
virtual void vgui::TreeNodeText::OnMouseReleased()=55 8B EC 51 53 8B D9 80 ? ? ? ? ? ? 74=partial pdb
virtual void vgui::TreeNodeText::OnMousePressed()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 0D FF 75 08 E8 ? ? ? ? 5E 5D C2 04 00 8B=partial pdb
virtual void vgui::TreeNode::OnCreateDragData()=55 8B EC 56 8B F1 8B ? ? ? ? ? FF ? ? ? ? ? 8B 01=partial pdb
virtual void vgui::TreeNode::OnLabelChanged()=55 8B EC 83 E4 F8 51 53 56 57 68 ? ? ? ? 8B F9=partial pdb
void vgui::TreeNode::SetKeyValues()=55 8B EC 53 8B 5D 08 56 57 8B F9 8B ? ? ? ? ? 3B=partial pdb
virtual void vgui::TreeNode::PerformLayout()=55 8B EC 83 EC 0C 53 56 57 8B D9 E8 ? ? ? ? 8B ? ? ? ? ? 6A=partial pdb
int vgui::TreeNode::ComputeInsertionPosition()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 83 ? ? ? ? ? ? 75=partial pdb
int vgui::TreeNode::FindChild()=55 8B EC 51 53 8B D9 56 8B ? ? ? ? ? 83=partial pdb
bool vgui::TreeNode::HasParent()=55 8B EC 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57 85=partial pdb
virtual void vgui::TreeNode::SetVisible()=55 8B EC 51 8B 01 53 8B 5D 08 56 8B ? ? ? ? ? 57=partial pdb
virtual void vgui::TreeNode::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B 07=partial pdb
int vgui::TreeNode::GetPrevChildItemIndex()=55 8B EC 8B ? ? ? ? ? 33 C0 56 57 85 D2 7E 1B 8B ? ? ? ? ? 8B CF 8B 75 08 0F 1F 40 00 39 31 74 11=partial pdb
int vgui::TreeNode::GetNextChildItemIndex()=55 8B EC 56 8B ? ? ? ? ? 33 D2 57 85 F6 7E 1B=partial pdb
void vgui::TreeNode::SelectPrevChild()=55 8B EC 56 57 8B F9 33 D2=partial pdb
void vgui::TreeNode::SelectNextChild()=55 8B EC 53 56 57 8B F9 8B 4D 08 0F=partial pdb
virtual void vgui::TreeNode::ClosePreviousParents()=55 8B EC 83 EC 14 56 8B F1 C7 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::TreeNode::StepOut()=55 8B EC 53 8B D9 57 8B ? ? ? ? ? 8B=partial pdb
virtual void vgui::TreeNode::OnKeyCodeTyped()=55 8B EC 51 53 56 8B 75 08 8B D9 8D=partial pdb
virtual void vgui::TreeNode::OnMouseReleased()=56 8B F1 8B ? ? ? ? ? 83 F8 01 75=partial pdb
void vgui::TreeNode::PositionAndSetVisibleNodes()=55 8B EC 51 53 56 57 8B ? ? ? ? ? 8B F1 F6=partial pdb
virtual void vgui::TreeView::RemoveItem()=55 8B EC 83 EC 0C 53 57 8B 7D 08 8B D9 85 FF 79=partial pdb
virtual bool vgui::TreeView::ModifyItem()=55 8B EC 51 8B 55 08 53 56 8B F1 85=partial pdb
virtual void vgui::TreeView::SetImageList()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 85 FF 74 25=partial pdb
virtual void vgui::TreeView::GetVBarInfo()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8D 45 FC 57 50 8B D9 8D 45 F8 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 45 FC 99=partial pdb
virtual bool vgui::TreeView::CanCurrentlyEditLabel()=55 8B EC 83 ? ? ? ? ? ? 75 18 8B ? ? ? ? ? 8B=partial pdb
virtual void vgui::TreeView::OnMousePressed()=55 8B EC 83 EC 14 53 8B D9 8B ? ? ? ? ? 6A=partial pdb
virtual void vgui::TreeView::AddSelectedItem()=55 8B EC 53 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 3B=partial pdb
virtual int vgui::TreeView::GetFirstSelectedItem()=83 ? ? ? ? ? ? 7F 04 83=partial pdb
virtual int vgui::TreeView::GetSelectedItem()=55 8B EC 8B 55 08 85 D2 78 1B 39=partial pdb
virtual bool vgui::TreeView::IsItemSelected()=55 8B EC 8B 55 08 56 85 D2 78 54=partial pdb
virtual void vgui::TreeView::SetLabelEditingAllowed()=55 8B EC 8B 55 08 85 D2 78 39=partial pdb
virtual void vgui::TreeView::RemoveChildrenOfNode()=55 8B EC 8B 55 08 85 D2 78 2F 3B ? ? ? ? ? 7D 27 3B ? ? ? ? ? 7F 1F 8B ? ? ? ? ? 56 8D 34 52 39 54 B0 04 75 06 39 54 B0 08 75 08 8B=partial pdb
virtual void vgui::CBitmapImagePanel::PaintBorder()=55 8B EC 83 EC 10 56 8B F1 8D 4D F8=partial pdb
virtual void vgui::CBitmapImagePanel::setTexture()=55 8B EC 8A 45 0C 56 8B F1=partial pdb
virtual void vgui::ListViewItem::OnMousePressed()=55 8B EC FF 75 08 51=partial pdb
virtual void vgui::ListViewItem::PaintBackground()=55 8B EC 83 EC 0C 8D 45 F8 53 56 8B ? ? ? ? ? 8B D9 57 50 8D 45 F4 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 80 ? ? ? ? ? ? 74 6B=partial pdb
virtual int vgui::ListViewPanel::AddItem()=55 8B EC A1 ? ? ? ? 53 56 8B F1 8B 08 57 68=partial pdb
virtual void vgui::ListViewPanel::DeleteAllItems()=56 8B F1 8B ? ? ? ? ? 83 F8 FF 74 25=partial pdb
virtual void vgui::ListViewPanel::SetSortFunc()=55 8B EC 8B 45 08 85 C0 74 0E 89=partial pdb
virtual void vgui::ListViewPanel::SetImageList()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 85 F6=partial pdb
virtual void vgui::ListViewPanel::SetFont()=55 8B EC 51 8B 55 08 56 8B F1 85 D2 0F=partial pdb
virtual void vgui::ListViewPanel::AddSelectedItem()=55 8B EC 53 56 8B 75 08 33 C0 57 8B F9 8B ? ? ? ? ? 85 D2 7E 20=partial pdb
virtual void vgui::ListViewPanel::OnMouseWheeled()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 2B 45=partial pdb
virtual void vgui::ListViewPanel::PerformLayout()=55 8B EC 83 EC 28 56 8B F1 80=partial pdb
virtual void vgui::ListViewPanel::OnMousePressed()=55 8B EC 56 57 8B 7D 08 8B F1 83 FF 6B=partial pdb
void vgui::ListViewPanel::OnShiftSelect()=55 8B EC 51 53 56 8B F1 57 8B ? ? ? ? ? 85 D2=partial pdb
bool CVoiceStatus::IsPlayerBlocked()=55 8B EC 51 53 8B D9 56 8B ? ? ? ? ? 85 F6 0F ? ? ? ? ? 8B=partial pdb
virtual void vgui::ListViewPanel::OnKeyTyped()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B 75 08 8B D9 57 56=partial pdb
virtual void vgui::MessageBox::OnCommand()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 4C=partial pdb
virtual void vgui::MessageBox::ShowWindow()=55 8B EC 8B 45 08 56 8B F1 6A 01=partial pdb
void C_BaseEntity::SetPlayerSimulated()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 85 FF 74 15 8B CF E8 ? ? ? ? FF ? ? ? ? ? 57 8B C8 8B 10 FF 52 08 FF=partial pdb
virtual void vgui::MessageBox::SetOKButtonText()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 06 8B CE 6A=partial pdb
CLoadCommentaryDialog::CLoadCommentaryDialog()=55 8B EC 56 57 FF 75 0C 8B F9 FF 75 08 E8 ? ? ? ? 80=partial pdb
virtual void CTGAImagePanel::ApplySettings()=55 8B EC 57 6A 00 8B F9 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? FF 75 08 85 C0 8B CF 8A=partial pdb
virtual void vgui::PanelListPanel::DeleteAllItems()=56 57 8B F9 8B ? ? ? ? ? 83 FE FF 74 29=partial pdb
virtual void vgui::PanelListPanel::PerformLayout()=55 8B EC 83 EC 60 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void vgui::PanelListPanel::OnMouseWheeled()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 2C=partial pdb
virtual void vgui::PropertyPage::OnKeyCodeTyped()=55 8B EC 56 8B F1 8B 4D 08 8B C1=partial pdb
virtual void vgui::PropertyDialog::AddPage()=55 8B EC 8B ? ? ? ? ? 6A FF 6A=partial pdb
virtual void vgui::PropertyDialog::PerformLayout()=55 8B EC 83 EC 28 53 56 8B D9 57 89 5D F0=partial pdb
virtual void vgui::PropertyDialog::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 39=partial pdb
virtual bool vgui::PropertyDialog::OnOK()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? FF ? ? ? ? ? 6A=partial pdb
virtual void vgui::CircularProgressBar::Paint()=55 8B EC 83 EC 08 56 57 8B F1 E8 ? ? ? ? 8B=partial pdb
virtual int vgui::Slider::EstimateValueAtPos()=55 8B EC 83 EC 10 56 8B F1 8D 4D F4=partial pdb
virtual void CGameConsoleDialog::OnKeyCodeTyped()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 57=partial pdb
virtual void vgui::Slider::GetTrackRect()=55 8B EC 83 EC 08 56 8B F1 8D 4D F8 51 8D 4D FC 51 8B 06 8B CE FF ? ? ? ? ? 8B 45 08=partial pdb
virtual void vgui::Slider::SetTickCaptions()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 39=partial pdb
virtual void vgui::Slider::OnCursorMoved()=55 8B EC 83 EC 18 53 8B D9 80=partial pdb
virtual void vgui::Slider::OnMousePressed()=55 8B EC 83 EC 28 53 8B D9 8B 03=partial pdb
virtual void vgui::Slider::OnKeyCodeTyped()=55 8B EC 83 EC 08 56 8B F1 8B 4D 08 8D=partial pdb
virtual void TabCatchingTextEntry::OnKeyCodeTyped()=55 8B EC 8B 45 08 57 8B F9 83 F8 43=partial pdb
virtual void TabCatchingTextEntry::OnKillFocus()=57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 10 3B=partial pdb
virtual void vgui::CConsolePanel::ColorPrint()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 0B=partial pdb
virtual void vgui::CConsolePanel::Print()=55 8B EC FF 75 08 8B 11 8D 41 1C=partial pdb
virtual void vgui::CConsolePanel::DPrint()=55 8B EC FF 75 08 8B 11 8D 41 20=partial pdb
void vgui::CConsolePanel::ClearCompletionList()=55 8B EC 51 53 57 8B F9 8B ? ? ? ? ? 83=partial pdb
FindAutoCompleteCommmandFromPartial()=55 8B EC 8D ? ? ? ? ? 81 ? ? ? ? ? 8B D0 2B CA 8A 14 01 84 D2 74 0A 88 10 40 8D 55 FB 3B C2 72 EF C6 00 00 8D ? ? ? ? ? 68=partial pdb
void C_CHostage::UpdateLookAt()=55 8B EC 81 ? ? ? ? ? 56 8B F1 80 ? ? ? ? ? ? 75=partial pdb
virtual void vgui::CConsolePanel::OnTextChanged()=55 8B EC 8B 45 08 81 ? ? ? ? ? 56 8B F1 3B=partial pdb
virtual void vgui::CConsolePanel::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B 75 08 57 8B F9 8B CE E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B ? ? ? ? ? 8D=partial pdb
virtual void vgui::CConsolePanel::OnKeyCodeTyped()=55 8B EC 53 56 57 FF 75 08 8B D9 E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 8B 01=partial pdb
virtual void CMultiplayerAdvancedDialog::OnCommand()=55 8B EC 56 68 ? ? ? ? FF 75 08 8B F1 E8 ? ? ? ? 83=partial pdb
void vgui::CConsolePanel::AddToHistory()=55 8B EC 83 EC 08 53 56 57 8B F9 83 ? ? ? ? ? ? 7C=partial pdb
void vgui::CConsolePanel::DumpConsoleTextToFile()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 89=partial pdb
virtual void vgui::CConsoleDialog::Activate()=56 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 6A 00 8B ? ? ? ? ? 8B=partial pdb
virtual void vgui::QueryBox::OnCommand()=55 8B EC 53 8B 5D 08 BA ? ? ? ? 56 57=partial pdb
void vgui::FileOpenDialog::Init()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 57 6A=partial pdb
virtual vgui::FileOpenDialog::~FileOpenDialog()=56 8B F1 57 8B ? ? ? ? ? 8B ? ? ? ? ? C7=partial pdb
virtual void vgui::FileOpenDialog::OnKeyCodeTyped()=55 8B EC 83 ? ? ? ? ? ? 8B 45 08 75=partial pdb
virtual void vgui::FileOpenDialog::OnClose()=57 8B F9 F6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
virtual void vgui::FileOpenDialog::OnFolderUp()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 5E=partial pdb
void vgui::FileOpenDialog::SetStartDirectory()=55 8B EC 81 ? ? ? ? ? 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B=partial pdb
void vgui::FileOpenDialog::NewFolder()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 8B D9=partial pdb
virtual void vgui::FileOpenDialog::MoveUpFolder()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B F1 68 ? ? ? ? 52 8B ? ? ? ? ? 8B 01=partial pdb
void vgui::FileOpenDialog::FilterFileList()=55 8B EC 83 EC 0C 53 56 57 8B F9 C7 ? ? ? ? ? ? 8D=partial pdb
int vgui::FileOpenDialog::CountSubstringMatches()=55 8B EC 83 EC 08 53 57 33=partial pdb
virtual void vgui::FileOpenDialog::OnItemSelected()=57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 83 F8 01=partial pdb
virtual void vgui::FileOpenDialog::OnTextChanged()=55 8B EC 56 6A 00 8B F1 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? 85 C0 74 0B 80 78 10 04 75 05 8B 40 0C EB 02 33 C0 8B=partial pdb
virtual void vgui::CSectionHeader::Paint()=55 8B EC 83 EC 1C 53 56 8B D9 57 89 5D F4 E8 ? ? ? ? 8B ? ? ? ? ? 8D 45 FC 50 8D 45 EC=partial pdb
virtual void vgui::CSectionHeader::PerformLayout()=55 8B EC 83 EC 3C 53 56 57 8B F1=partial pdb
virtual void vgui::CItemButton::PerformLayout()=55 8B EC 83 EC 34 53 56 8B F1 57=partial pdb
virtual void CClientShadowMgr::ReprojectShadows()=55 8B EC 83 EC 0C 8D 45 F8 53 56 8B ? ? ? ? ? 8B D9 57 50 8D 45 F4 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 80 ? ? ? ? ? ? 74 7F=partial pdb
virtual void vgui::CItemButton::Paint()=55 8B EC 83 EC 2C 56 8B F1 E8=partial pdb
void vgui::CItemButton::GetCellBounds()=55 8B EC 83 EC 0C 8B 45 10=partial pdb
void vgui::CItemButton::GetMaxCellBounds()=55 8B EC 51 8B 45 10 8B D1=partial pdb
virtual bool vgui::SectionedListPanel::ModifyItem()=55 8B EC 8B 55 08 56 8B F1 57 85 D2 0F=partial pdb
class WeaponSet const near * BuyPreset::GetSet()=55 8B EC 8B 45 08 8B D1 85 C0 78 1E=partial pdb
virtual bool vgui::SectionedListPanel::RemoveItem()=55 8B EC 51 53 56 8B 75 08 89 4D FC 57 8D=partial pdb
void vgui::SectionedListPanel::MoveSelectionDown()=53 57 8B F9 8B 07 FF ? ? ? ? ? 8B D8 83 FB FF 74 65=partial pdb
virtual void vgui::ListPanel::OnKeyCodeTyped()=55 8B EC 83 EC 20 57 8B F9 89 7D F8=partial pdb
virtual void vgui::SectionedListPanel::SetImageList()=55 8B EC 8A 45 0C 88=partial pdb
int vgui::SectionedListPanel::GetNewItemButton()=55 8B EC 83 EC 08 53 56 57 8B F9 51=partial pdb
virtual void vgui::CFooterPanel::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 57 8B 7D 08 8B D9 57=partial pdb
void vgui::CFooterPanel::AddNewButtonLabel()=55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 56=partial pdb
virtual void vgui::CFooterPanel::Paint()=55 8B EC 83 EC 24 53 8B D9 F3=partial pdb
virtual CMessageDialog::~CMessageDialog()=55 8B EC 51 57 8B F9 89=partial pdb
void CMessageDialog::CreateButtonLabel()=55 8B EC 51 53 56 8B 75 08 8B D9 57 68 ? ? ? ? 8B=partial pdb
virtual void CMessageDialog::ApplySchemeSettings()=55 8B EC 83 EC 28 53 8B 5D 08 56 57=partial pdb
virtual void CMessageDialog::OnKeyCodePressed()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 75 37=partial pdb
virtual void vgui::TextImage::SetText()=55 8B EC 8B 45 08 81 ? ? ? ? ? 85 C0 56=partial pdb
virtual void vgui::TextImage::GetText()=55 8B EC 56 57 FF 75 0C 8B 7D 08 8B F1 8B=partial pdb
virtual void vgui::TextImage::GetUnlocalizedText()=55 8B EC 8B 51 2C=partial pdb
virtual void vgui::TextImage::GetTextSize()=55 8B EC 83 EC 24 8B 45 08 56 33=partial pdb
void vgui::TextImage::RecalculateEllipsesPosition()=55 8B EC 83 EC 20 53 8B D9 89 5D E0=partial pdb
void vgui::TextImage::RecalculateCenterWrapIndents()=55 8B EC 83 EC 14 56 8B F1 57 8D=partial pdb
virtual void vgui::BaseTooltip::SetText()=55 8B EC 83 EC 08 8B 45 08 56 8B F1 B9=partial pdb
virtual void vgui::TextTooltip::ShowTooltip()=55 8B EC A1 ? ? ? ? 56 8B F1 83 F8=partial pdb
virtual void vgui::TextTooltip::PerformLayout()=55 8B EC 83 EC 08 53 8B D9 F6=partial pdb
virtual void vgui::TextTooltip::HideTooltip()=A1 ? ? ? ? 56 8B F1 83 F8 FF 74=partial pdb
quit_prompt()=55 8B EC 8A 45 08 56 8B F1 38 46 08=partial pdb
virtual void vgui::BuildGroup::ToggleRulerDisplay()=56 8B F1 80 ? ? ? ? ? ? 0F 94=partial pdb
virtual void vgui::BuildGroup::DrawRulers()=55 8B EC 83 EC 48 53 8B D9 89 5D EC=partial pdb
virtual bool vgui::BuildGroup::CursorMoved()=55 8B EC 83 EC 0C 53 8B D9 56 8B 53=partial pdb
void vgui::BuildGroup::ActivateBuildDialog()=55 8B EC 83 EC 18 53 8B D9 8B 53=partial pdb
virtual bool vgui::BuildGroup::KeyCodeTyped()=55 8B EC 83 EC 1C 53 8B D9 8B 53=partial pdb
virtual bool vgui::BuildGroup::KeyCodeReleased()=55 8B EC 56 8B F1 57 8B 56=partial pdb
void AddBuiltInParticleRenderers()=55 8B EC 83 EC 0C 53 8B 5D 08 8B C1 89 45 F4=partial pdb
void vgui::BuildGroup::RegisterControlSettingsFile()=55 8B EC 53 56 57 FF 75 08 8B D9 8D=partial pdb
void vgui::BuildGroup::ReloadControlSettings()=56 8B F1 8B 56 68 83=partial pdb
void vgui::BuildGroup::ChangeControlSettingsFile()=55 8B EC 53 56 57 6A 00 8B F1=partial pdb
virtual void vgui::BuildGroup::ApplySettings()=56 57 8B F9 BE ? ? ? ? 39=partial pdb
virtual void vgui::BuildGroup::GetSettings()=55 8B EC 53 57 8B F9 33 DB=partial pdb
virtual void vgui::BuildGroup::RemoveSettings()=53 56 8B F1 57 33 FF 39 ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
virtual void CSmallTextEntry::ApplySchemeSettings()=55 8B EC 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06 8B CE 8B 3B 6A=partial pdb
void vgui::BuildModeDialog::PanelList::RemoveAll()=55 8B EC 51 8B C1 56 57=partial pdb
virtual void CBuildModeNavCombo::OnShowMenu()=55 8B EC 83 EC 10 53 8B D9 8B 4D 08 89=partial pdb
char const near * ParseTokenFromString()=55 8B EC 83 EC 0C 8B C1 C6=partial pdb
virtual void vgui::BuildModeDialog::OnTextKillFocus()=83 ? ? ? ? ? ? 74 08 8B 01 FF=partial pdb
virtual void vgui::BuildModeDialog::SetActiveControl()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B D9 89 5D E8=partial pdb
virtual void vgui::BuildModeDialog::OnCommand()=55 8B EC 53 56 8B 75 08 8B D9 BA ? ? ? ? 8B CE E8 ? ? ? ? 85 C0 75=partial pdb
virtual void COptionsSubMultiplayer::OnResetData()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B F1 68 ? ? ? ? 52 8B ? ? ? ? ? 8B 00=partial pdb
virtual void vgui::BuildModeDialog::OnKeyCodeTyped()=55 8B EC 8B 45 08 83 F8 40 75 0C=partial pdb
virtual void vgui::BuildModeDialog::OnTextChanged()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 3B F9=partial pdb
void StripStringOutOfString()=55 8B EC 8B 45 08 8D 50 01=partial pdb
bool vgui::FocusNavGroup::CanButtonBeDefault()=55 8B EC 83 7D 08 00 75 06=partial pdb
virtual void CInput::ResetMouse()=55 8B EC 83 EC 08 56 8B F1 8D 4D FC=partial pdb
virtual bool vgui::ScrollBarSlider::IsSliderVisible()=8B ? ? ? ? ? 2B ? ? ? ? ? 85 C0 7F=partial pdb
virtual void vgui::ScrollBarSlider::SetRange()=55 8B EC 56 8B 75 08 8B D6 39=partial pdb
virtual void vgui::ScrollBarSlider::OnCursorMoved()=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 06=partial pdb
vgui::CSectionHeader::CSectionHeader()=55 8B EC 53 8B 5D 08 56 57 68 ? ? ? ? 68=partial pdb
virtual void vgui::ContextLabel::OnMousePressed()=8B ? ? ? ? ? 85 C9 74 08 8B 01 FF ? ? ? ? ? C2=partial pdb
virtual void vgui::PageTab::Paint()=55 8B EC 83 EC 08 53 8B D9 E8 ? ? ? ? 80=partial pdb
virtual class Color vgui::PageTab::GetButtonFgColor()=55 8B EC 80 ? ? ? ? ? ? 8B 45 08 74=partial pdb
virtual void vgui::PageTab::OnMousePressed()=55 8B EC 53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 61=partial pdb
virtual void vgui::PageTab::OnMouseReleased()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0D=partial pdb
virtual void vgui::PropertySheet::SetPageTitle()=55 8B EC 8B 55 08 57 8B F9 85 D2 74 3F=partial pdb
virtual void vgui::PropertySheet::SetActivePage()=55 8B EC 56 8B ? ? ? ? ? 33 D2 85 F6 7E 1D 8B ? ? ? ? ? 57 8B 7D 08 66 ? ? ? ? ? 39 38 74 0E 42 83 C0 08=partial pdb
virtual bool vgui::PropertySheet::GetTabTitle()=55 8B EC 8B C1 8B 4D 08 85=partial pdb
virtual int vgui::PropertySheet::GetActivePageNum()=56 8B ? ? ? ? ? 33 C0 85 F6 7E 1F=partial pdb
virtual void vgui::PropertySheet::ApplySettings()=55 8B EC 51 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B ? ? ? ? ? 56=partial pdb
virtual void vgui::PropertySheet::LayoutTabs()=55 8B EC 83 EC 48 53 56 57 8B ? ? ? ? ? 8D 45=partial pdb
virtual void vgui::PropertySheet::OnTabPressed()=55 8B EC 56 8B ? ? ? ? ? 33 D2 85 F6 7E 1D 8B ? ? ? ? ? 57 8B 7D 08 66 ? ? ? ? ? 39 38 74 0E 42 83 C0 04=partial pdb
virtual void vgui::PropertySheet::DisablePage()=55 8B EC 8B 01 6A 00=partial pdb
virtual void vgui::PropertySheet::SetPageEnabled()=55 8B EC 83 EC 34 56 8B F1 57 33=partial pdb
virtual void vgui::PropertySheet::RemovePage()=55 8B EC 56 8B F1 57 33 FF 8B=partial pdb
virtual void vgui::PropertySheet::DeletePage()=55 8B EC 8B 01 56 8B 75 08 56=partial pdb
virtual void vgui::PropertySheet::ChangeActiveTab()=55 8B EC 83 EC 34 53 8B D9 8B=partial pdb
virtual void vgui::PropertySheet::OnKeyCodeTyped()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 6A=partial pdb
virtual void vgui::PropertySheet::OnTextChanged()=55 8B EC 8B 45 08 83 EC 3C=partial pdb
bool vgui::PropertySheet::PageHasContextMenu()=55 8B EC 8B ? ? ? ? ? 33 C0 56 57 85 D2 7E 1B 8B ? ? ? ? ? 8B CF 8B 75 08 0F 1F 40 00 39 31 74 10 40 83 C1 08=partial pdb
void C_GameInstructor::RestoreGameBlock()=55 8B EC 83 EC 0C 56 57 8B F1 E8 ? ? ? ? 8B=partial pdb
void vgui::PropertySheet::AddPageDropTab()=55 8B EC 53 56 8B F1 57 8D ? ? ? ? ? 8D=partial pdb
virtual void CControllerMap::OnKeyCodeTyped()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 B8=partial pdb
class KeyValues near * ReadEncryptedKVFile()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 83 C1=partial pdb
RecordEffect()=55 8B EC 81 ? ? ? ? ? 89 4D FC 8D=partial pdb
bool CVTFTexture::AllocateImageData()=55 8B EC 56 8B 75 08 57 8B F9 8B 4F 28=partial pdb
virtual bool CVTFTexture::Init()=55 8B EC 8B 45 10 85 C0 53=partial pdb
virtual void CVTFTexture::SetReflectivity()=55 8B EC 8B 55 08 8B 02 89 41 34=partial pdb
virtual void CVTFTexture::LowResFileInfo()=55 8B EC 56 6A 01 8B=partial pdb
virtual void CVTFTexture::ImageFileInfo()=55 8B EC 83 EC 0C 56 6A 30=partial pdb
virtual void near * CVTFTexture::SetResourceData()=55 8B EC 51 53 8B 5D 10 8B C1=partial pdb
virtual void near * CVTFTexture::GetResourceData()=55 8B EC 8B 45 08 56 25=partial pdb
bool CVoiceBanMgr::GetPlayerBan()=55 8B EC FF 75 08 E8 ? ? ? ? 85 C0 0F=partial pdb
virtual unsigned int CVTFTexture::GetResourceTypes()=55 8B EC 53 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 8D=partial pdb
ReadHeaderFromBufferPastBaseHeader()=8B 42 08 56 8B=partial pdb
bool CVTFTexture::RemoveResourceEntryInfo()=55 8B EC 53 8B D9 56 57 33=partial pdb
virtual unsigned char near * CVTFTexture::ImageData()=55 8B EC 56 8B F1 FF 76 18=partial pdb
virtual int CVTFTexture::ComputeMipSize()=55 8B EC 83 EC 0C 8B 01 8D 55 FC=partial pdb
int CVTFTexture::GetImageOffset()=55 8B EC 51 53 56 57 FF 75 14=partial pdb
virtual void CVTFTexture::ComputeMipLevelDimensions()=55 8B EC 8B D1 8B 4D 08 56 8B 75=partial pdb
virtual void CVTFTexture::ComputeMipLevelSubRect()=55 8B EC 83 E4 C0 8B 4D 0C=partial pdb
virtual void CVTFTexture::ConvertImageFormat()=55 8B EC 83 EC 38 57=partial pdb
CalcInit()=55 8B EC 66 0F 6E CA=partial pdb
CalcColor()=55 8B EC 51 8B C1 89 45 FC 56 57 8B 78=partial pdb
virtual void CVTFTexture::GenerateHemisphereMap()=55 8B EC 83 EC 18 53 8B 5D 18=partial pdb
ConvertPcTo360SrgbRGBA8888()=55 8B EC 83 EC 1C 83 7D 08 00 89=partial pdb
virtual void CVTFTexture::PutOneOverMipLevelInAlpha()=55 8B EC 83 EC 18 57 8B F9 33=partial pdb
virtual void CVTFTexture::ComputeReflectivity()=55 8B EC 83 EC 08 56 8B F1 83 7E 18=partial pdb
virtual void CVTFTexture::PostProcess()=55 8B EC 56 8B F1 8B 06 8B 40 74=partial pdb
void CVTFTexture::BlendCubeMapFaceCorners()=55 8B EC 83 EC 44 53 56 8B D9 8D=partial pdb
virtual void CVTFTexture::MatchCubeMapBorders()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 83 7B=partial pdb
virtual void CPotteryWheelPanel::OnMouseReleased()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 20 A1 ? ? ? ? 33 C5 89 45 F0 56=partial pdb
class CModInfo near & ModInfo()=64 ? ? ? ? ? 8B ? ? ? ? ? 56 8B F1=partial pdb
virtual boost::exception::~exception()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? C7=partial pdb
int CParticleSystemMgr::FindOrAddParticleSystemIndex()=55 8B EC 8B 45 08 85 C0 75 09 B8 ? ? ? ? 5D C2 04 00 56=partial pdb
_png_chunk_error()=55 8B EC 8B 45 0C 83 EC 54=partial pdb
_png_chunk_warning()=55 8B EC 83 EC 58 A1 ? ? ? ? 33 C5 89 45 FC 8B=partial pdb
_png_error()=55 8B EC 56 8B 75 08 85 F6 74 10=partial pdb
_png_format_number()=55 8B EC 83 EC 08 8B 4D 0C=partial pdb
_png_formatted_warning()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 33=partial pdb
_png_longjmp()=55 8B EC 8B 45 08 85 C0 74 10=partial pdb
_png_safecat()=55 8B EC 8B 45 10 56 8B 75 08 85=partial pdb
_png_set_error_fn()=55 8B EC 8B 4D 08 85 C9 74 12=partial pdb
_png_set_longjmp_fn()=55 8B EC 8B 45 08 85 C0 74 0E 83=partial pdb
_png_warning()=55 8B EC 8B 55 08 33 C0 8B=partial pdb
_png_warning_parameter()=55 8B EC 8B 4D 0C 8D=partial pdb
_png_warning_parameter_signed()=55 8B EC 83 EC 1C A1 ? ? ? ? 33 C5 89 45 FC 8B 4D=partial pdb
_png_warning_parameter_unsigned()=55 8B EC 83 EC 1C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 14=partial pdb
_png_do_chop()=55 8B EC 57 8B 7D 08 80 7F 09=partial pdb
_png_do_compose()=55 8B EC 83 EC 24 8B 45 10=partial pdb
_png_do_encode_alpha()=55 8B EC 51 8B 55 08 8B 4D=partial pdb
_png_do_expand()=55 8B EC 83 EC 14 53 8B 5D 08 56 8A=partial pdb
_png_do_expand_16()=55 8B EC 56 8B 75 08 80 7E 09 08=partial pdb
_png_do_expand_palette()=55 8B EC 83 EC 0C 56 57 8B 7D 08 80 7F 08=partial pdb
_png_do_gamma()=55 8B EC 83 EC 18 8B 45 10 8B=partial pdb
_png_do_gray_to_rgb()=55 8B EC 53 8B 5D 08 57 8A=partial pdb
_png_do_quantize()=55 8B EC 83 EC 0C 56 57 8B 7D 08 80 7F 09=partial pdb
_png_do_read_filler()=55 8B EC 51 53 8B 5D 10 8B C3=partial pdb
_png_do_read_invert_alpha()=55 8B EC 56 8B 75 08 8A=partial pdb
_png_do_read_swap_alpha()=55 8B EC 8B 45 08 53 56 57 8A 48 08 8B=partial pdb
_png_do_read_transformations()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 85 C9=partial pdb
_png_do_rgb_to_gray()=55 8B EC 83 EC 2C 8B 4D 0C 57=partial pdb
_png_do_scale_16_to_8()=55 8B EC 56 8B 75 08 80 7E 09 10=partial pdb
_png_do_unpack()=55 8B EC 51 8B 55 08 8A 42=partial pdb
_png_do_unshift()=55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 8B 55 08 8B 45 0C 0F=partial pdb
bool CUGCFileRequest::FileInSync()=55 8B EC 51 68 ? ? ? ? FF=partial pdb
_png_init_read_transformations()=55 8B EC 83 EC 14 53 56 8B 75 08 57 8B ? ? ? ? ? 85=partial pdb
_png_read_transform_info()=55 8B EC 8B 55 08 8B 4D 0C F7=partial pdb
_png_set_gray_to_rgb()=55 8B EC 56 8B 75 08 85 F6 74 14=partial pdb
_png_set_strip_16()=55 8B EC 8B 45 08 85 C0 74 07=partial pdb
_png_destroy_read_struct()=55 8B EC 83 EC 08 53 8B 5D 08 33=partial pdb
_png_read_destroy()=55 8B EC 8B 45 0C 83 EC 40=partial pdb
_png_read_end()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 6A 00=partial pdb
_png_read_image()=55 8B EC 51 57 8B 7D 08 85 FF 0F ? ? ? ? ? F6=partial pdb
_png_read_info()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 8B 45 0C=partial pdb
_png_read_row()=55 8B EC 83 EC 14 A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C 56 8B 75 08 89=partial pdb
_png_read_update_info()=55 8B EC 56 8B 75 08 85 F6 74 12=partial pdb
_png_start_read_image()=55 8B EC 8B 45 08 85 C0 74 09=partial pdb
_png_64bit_product()=55 8B EC 8B 4D 08 8B C1 C1 F8=partial pdb
_png_XYZ_from_xy()=55 8B EC 8B 4D 0C 83 EC 24=partial pdb
_png_XYZ_from_xy_checked()=55 8B EC 0F 10 45 10=partial pdb
_png_build_gamma_table()=55 8B EC 56 8B 75 08 83 ? ? ? ? ? ? 57=partial pdb
_png_calculate_crc()=55 8B EC 53 8B 5D 08 F7=partial pdb
_png_check_IHDR()=55 8B EC 53 8B 5D 0C 56 8B 75 08 57 33=partial pdb
_png_check_cHRM_fixed()=55 8B EC 83 EC 0C 56 57 8B 7D 08 BE=partial pdb
_png_check_fp_number()=55 8B EC 8B 55 10 56 8B=partial pdb
_png_check_fp_string()=55 8B EC 83 EC 08 56 8B 75 08 8D 45 FC 50=partial pdb
_png_chunk_unknown_handling()=55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C=partial pdb
_png_create_info_struct()=55 8B EC 8B 45 08 85 C0 75 02 5D C3 FF=partial pdb
_png_destroy_gamma_table()=55 8B EC 53 56 8B 75 08 57 FF ? ? ? ? ? 56=partial pdb
_png_free_data()=55 8B EC 53 8B 5D 08 85 DB 0F ? ? ? ? ? 56 8B 75 0C 85 F6 0F ? ? ? ? ? 8B=partial pdb
_png_gamma_correct()=55 8B EC 8B 45 08 FF 75 10 FF 75 0C 80=partial pdb
_png_gamma_significant()=55 8B EC 8B 45 08 B9 ? ? ? ? 05=partial pdb
_png_get_io_ptr()=55 8B EC 8B 45 08 85 C0 75 02 5D C3 8B=partial pdb
_png_handle_as_unknown()=55 8B EC 8B 55 08 56 85 D2 74 29=partial pdb
_png_info_destroy()=55 8B EC 56 8B 75 08 6A FF=partial pdb
_png_info_init_3()=55 8B EC 56 8B 75 08 8B 06 85=partial pdb
_png_muldiv()=55 8B EC 8B 45 14 83 EC 08 85=partial pdb
_png_reset_crc()=55 8B EC 6A 00 6A 00 6A 00 E8=partial pdb
_png_sig_cmp()=55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 10=partial pdb
_png_user_version_check()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 0C 57=partial pdb
_png_zalloc()=55 8B EC 83 C8 FF 8B 4D 0C 33 D2 F7 75 10 53=partial pdb
_png_read_data()=55 8B EC 8B 45 08 8B 48 54=partial pdb
_png_set_read_fn()=55 8B EC 56 8B 75 08 85 F6 74 3B=partial pdb
_png_get_IHDR()=55 8B EC 83 7D 08 00 53 57 0F=partial pdb
_png_get_channels()=55 8B EC 83 7D 08 00 74 0C 8B 45 0C 85 C0 74 05 8A=partial pdb
_png_get_rowbytes()=55 8B EC 83 7D 08 00 74 0C 8B 45 0C 85 C0 74 05 8B=partial pdb
_png_get_valid()=55 8B EC 83 7D 08 00 74 0F=partial pdb
_png_do_bgr()=55 8B EC 8B 4D 08 8A 41 08 A8 02 0F ? ? ? ? ? 8B=partial pdb
_png_do_check_palette_indexes()=55 8B EC 53 56 8B 75 08 BA ? ? ? ? 57 8B 7D=partial pdb
_png_do_invert()=55 8B EC 8B 55 08 56 8A=partial pdb
_png_do_packswap()=55 8B EC 53 8B 5D 08 8A 4B=partial pdb
_png_do_strip_channel()=55 8B EC 51 8B 4D 0C 8B=partial pdb
_png_do_swap()=55 8B EC 8B 4D 08 80=partial pdb
_png_set_add_alpha()=55 8B EC 56 8B 75 08 85 F6 74 16=partial pdb
_png_set_filler()=55 8B EC 8B 4D 08 85 C9 74 4D=partial pdb
_png_set_interlace_handling()=55 8B EC 8B 45 08 85 C0 74 14 80 ? ? ? ? ? ? 74=partial pdb
_png_set_IHDR()=55 8B EC 83 7D 08 00 0F=partial pdb
_png_set_PLTE()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 57 8B 7D 0C 85 FF 74=partial pdb
_png_set_bKGD()=55 8B EC 83 7D 08 00 74 1F=partial pdb
_png_set_cHRM_fixed()=55 8B EC 8B 45 08 85 C0 74 7A=partial pdb
_png_set_gAMA_fixed()=55 8B EC 8B 55 08 85 D2 74 2E=partial pdb
_png_set_hIST()=55 8B EC 57 8B 7D 08 85 FF 0F ? ? ? ? ? 56 8B 75 0C 85 F6 0F ? ? ? ? ? 0F=partial pdb
_png_set_iCCP()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 57 8B 7D 0C 85 FF 0F=partial pdb
_png_set_pCAL()=55 8B EC 51 57 8B 7D 08 85 FF 0F ? ? ? ? ? 53=partial pdb
_png_set_sBIT()=55 8B EC 83 7D 08 00 74 19=partial pdb
_png_set_sCAL_s()=55 8B EC 53 8B 5D 08 85 DB 0F ? ? ? ? ? 83=partial pdb
_png_set_sPLT()=55 8B EC 83 EC 08 53 8B 5D 08 85=partial pdb
_png_set_sRGB()=55 8B EC 83 7D 08 00 74 14=partial pdb
_png_set_sRGB_gAMA_and_cHRM()=55 8B EC 56 8B 75 08 85 F6 74 51=partial pdb
_png_set_tIME()=55 8B EC 8B 45 08 85 C0 74 62=partial pdb
_png_set_tRNS()=55 8B EC 53 8B 5D 08 85 DB 0F ? ? ? ? ? 56 8B 75 0C 85 F6 0F ? ? ? ? ? 83=partial pdb
_png_set_text_2()=55 8B EC 8B 55 08 83 EC 18 53=partial pdb
_png_set_unknown_chunks()=55 8B EC 51 53 8B 5D 08 85 DB 0F=partial pdb
_png_calloc()=55 8B EC 56 FF 75 0C FF 75 08 E8 ? ? ? ? 8B=partial pdb
_png_create_struct_2()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 8B=partial pdb
_png_destroy_struct_2()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 8B 55 0C 85=partial pdb
_png_free()=55 8B EC 8B 45 08 85 C0 74 26=partial pdb
_png_malloc()=55 8B EC 56 8B 75 08 85 F6 74 2E 8B 45=partial pdb
_png_malloc_default()=55 8B EC 83 7D 08 00 74 12 8B=partial pdb
_png_malloc_warn()=55 8B EC 57 8B 7D 08 85 FF 75 05=partial pdb
_png_set_mem_fn()=55 8B EC 8B 4D 08 85 C9 74 1B=partial pdb
_png_check_chunk_name()=55 8B EC 53 8B 5D 0C B8=partial pdb
_png_combine_row()=55 8B EC 83 EC 1C 8B 45 08 53 56 57 0F=partial pdb
_png_crc_error()=55 8B EC 56 8B 75 08 57 BF ? ? ? ? F7=partial pdb
_png_crc_finish()=55 8B EC 53 56 8B 75 08 57 8B 7D 0C 8B ? ? ? ? ? 3B=partial pdb
_png_crc_read()=55 8B EC 53 8B 5D 08 85 DB 74 1B=partial pdb
_png_decompress_chunk()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 18=partial pdb
_png_do_read_interlace()=55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 55 0C 8B 45=partial pdb
_png_handle_IEND()=55 8B EC 56 8B 75 08 8B 4E 6C=partial pdb
_png_handle_IHDR()=55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 53=partial pdb
_png_handle_PLTE()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 57 8B 7D 0C 89=partial pdb
_png_handle_bKGD()=55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 57=partial pdb
_png_handle_cHRM()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C 56 8B 75 08 57=partial pdb
_png_handle_hIST()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C 56=partial pdb
_png_handle_iCCP()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C 53 8B 5D 10=partial pdb
virtual C_PredictedViewModel::~C_PredictedViewModel()=55 8B EC 83 EC 0C 56 8B 75 08 8B ? ? ? ? ? 85=partial pdb
_png_handle_pCAL()=55 8B EC 83 EC 14 57 8B 7D 08 8B 47=partial pdb
_png_handle_sBIT()=55 8B EC 51 56 8B 75 08 C7=partial pdb
_png_handle_sCAL()=55 8B EC 51 56 8B 75 08 8B 46=partial pdb
_png_handle_sPLT()=55 8B EC 83 EC 14 57 8B 7D 08 8B ? ? ? ? ? 85=partial pdb
_png_handle_tEXt()=55 8B EC 57 8B 7D 08 8B ? ? ? ? ? 85=partial pdb
_png_handle_tIME()=55 8B EC 83 EC 14 A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C 56 8B 75 08 8B=partial pdb
_png_handle_tRNS()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C 56 8B 75 08 8B=partial pdb
_png_handle_unknown()=55 8B EC 56 8B 75 08 8B ? ? ? ? ? 85=partial pdb
_png_handle_zTXt()=55 8B EC 51 57 8B 7D 08 8B ? ? ? ? ? 85=partial pdb
_png_read_chunk_header()=55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 56 57=partial pdb
_png_read_filter_row()=55 8B EC 56 8B 75 08 83 ? ? ? ? ? ? 75 09=partial pdb
_png_read_finish_row()=55 8B EC 51 56 8B 75 08 FF ? ? ? ? ? 8B ? ? ? ? ? 3B ? ? ? ? ? 0F ? ? ? ? ? 80 ? ? ? ? ? ? 53 57 0F ? ? ? ? ? 8B=partial pdb
_png_read_sig()=55 8B EC 51 53 57 8B 7D 08 8A=partial pdb
_png_read_start_row()=55 8B EC 56 57 8B 7D 08 57 C7=partial pdb
virtual int google::protobuf::Message::ByteSize()=56 57 8B F9 57 E8=partial pdb
virtual int google::protobuf::Message::SpaceUsed()=56 8B F1 8B 06 FF 50 44=partial pdb
void google::protobuf::GoogleOnceInitImpl()=55 8B EC 56 8B 75 08 8B 06 83 F8 02 74=partial pdb
bool google::protobuf::io::CodedInputStream::Skip()=55 8B EC 56 8B 75 08 8B D1 85 F6 78 24=partial pdb
static char near * std::char_traits<char>::copy()=55 8B EC FF 75 10 FF 75 0C FF=partial pdb
google::protobuf::FatalException::FatalException()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 89 7D F0 8B 75 08 8D 47 04 0F=partial pdb
google::protobuf::internal::LogMessage::LogMessage()=55 8B EC 51 8B 45 08 89 01=partial pdb
google::protobuf::internal::LogMessage::~LogMessage()=8B 41 20 56=partial pdb
void google::protobuf::internal::DeleteLogSilencerCount()=56 8B ? ? ? ? ? 85 F6 74 1C FF=partial pdb
void google::protobuf::internal::LogMessage::Finish()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 3C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57=partial pdb
void google::protobuf::internal::VerifyVersion()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 5D 08=partial pdb
int google::protobuf::UnknownFieldSet::field_count()=8B 09 85 C9 75 03=partial pdb
void CHud::ResetHUD()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 14 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 75=partial pdb
void google::protobuf::RepeatedField<bool>::Reserve()=55 8B EC 51 8B 55 08 56 8B F1 8B 46 08 3B C2 7D 48=partial pdb
int google::protobuf::FieldDescriptor::index()=80 79 20 00 75 18=partial pdb
google::protobuf::UnknownFieldSet::~UnknownFieldSet()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 83=partial pdb
void google::protobuf::UnknownFieldSet::MergeFrom()=55 8B EC 83 EC 10 53 8B 5D 08 56 8B F1 C7=partial pdb
someerror()=55 8B EC 8B 4D 0C 8B 45 08 81 ? ? ? ? ? 77=partial pdb
bool google::protobuf::MessageLite::ParseFromArray()=55 8B EC 51 FF 75 0C FF 75 08 E8 ? ? ? ? 83=partial pdb
google::protobuf::DescriptorPool::Tables::Tables()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 0C 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 89=partial pdb
google::protobuf::DescriptorPool::Tables::~Tables()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9=partial pdb
void google::protobuf::Descriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 08 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 5D=partial pdb
bool google::protobuf::Descriptor::IsExtensionNumber()=55 8B EC 56 8B 71 30 33=partial pdb
virtual google::protobuf::FileOptions::~FileOptions()=56 57 8B F9 C7 ? ? ? ? ? E8 ? ? ? ? 33 F6 39 77 2C=partial pdb
??1UninterpretedOption@protobuf@google@@UAE@XZ_0()=56 57 8B F9 C7 ? ? ? ? ? E8 ? ? ? ? 33 F6 39 77 10=partial pdb
virtual int google::protobuf::EnumOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 8B F9 C7 ? ? ? ? ? ? 80=partial pdb
virtual int google::protobuf::FieldOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 80 7E=partial pdb
virtual int google::protobuf::FileOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 8B 4E=partial pdb
virtual void google::protobuf::EnumOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 28 00 74 04=partial pdb
virtual void google::protobuf::FieldOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 8B=partial pdb
virtual void google::protobuf::FileOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 3C=partial pdb
virtual void google::protobuf::MessageOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 28 00 74 06=partial pdb
virtual void google::protobuf::ServiceOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 33=partial pdb
__std_parallel_algorithms_hw_threads()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 68=partial pdb
void protobuf_AssignDesc_steammessages_2eproto()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 48 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 33=partial pdb
void google::protobuf::internal::ExtensionSet::Clear()=56 57 8B F9 8B 07 8B 30=partial pdb
int google::protobuf::CEscapeInternal()=55 8B EC 8B 45 0C 32=partial pdb
char near * google::protobuf::DoubleToBuffer()=55 8B EC 83 EC 0C F2=partial pdb
char near * google::protobuf::FastHex32ToBuffer()=55 8B EC 8B ? ? ? ? ? 33 D2 56=partial pdb
char near * google::protobuf::FastInt32ToBuffer()=55 8B EC 8B 4D 0C 53=partial pdb
char near * google::protobuf::FastUInt32ToBufferLeft()=55 8B EC 53 8B 5D 08 56 81=partial pdb
char near * google::protobuf::FloatToBuffer()=55 8B EC 51 F3 ? ? ? ? C7=partial pdb
double google::protobuf::NoLocaleStrtod()=55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 56=partial pdb
int google::protobuf::internal::NoBarrier_CompareAndSwap()=55 8B EC 8B 55 10 8B 4D 08 8B=partial pdb
google::protobuf::DynamicMessage::DynamicMessage()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 14 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 89 4D=partial pdb
bool google::protobuf::DynamicMessage::is_prototype()=8B 41 04 8B 40 24 3B C1 74 07=partial pdb
void C_HLTVCamera::Reset()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 89 75 F0 8D 46=partial pdb
void google::protobuf::io::Tokenizer::ConsumeString()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 34 A1 ? ? ? ? 33 C5 89 45 F0 53 56 50 8D 45 F4 64 ? ? ? ? ? 8B F1 8A=partial pdb
std::bad_function_call::bad_function_call()=83 61 04 00 8B C1 83 61 08 00 C7 ? ? ? ? ? C3=partial pdb
unknown_libname_7()=55 8B EC 56 8B F1 8D 46 04 C7 ? ? ? ? ? 50 E8 ? ? ? ? F6=partial pdb
__Mbrtowc()=55 8B EC 83 EC 68 A1 ? ? ? ? 33 C5 89 45 FC 8B=partial pdb
std::_Lockit::_Lockit()=55 8B EC 8B 45 08 56 8B F1 89 06 85=partial pdb
std::_Lockit::~_Lockit()=8B 01 85 C0 0F ? ? ? ? ? 83 F8 08=partial pdb
unsigned int std::_Find_elem<char>()=55 8B EC 8B 55 08 8B C2 8A=partial pdb
std::ctype<char>::ctype<char>()=55 8B EC 83 EC 14 8B 45 0C 53 8B=partial pdb
unknown_libname_9()=55 8B EC 8B 55 14 56 8B 75 0C 57=partial pdb
void std::numpunct<char>::_Init()=6A 64 B8 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
static void std::locale::_Locimp::_Locimp_Addfac()=6A 08 B8 ? ? ? ? E8 ? ? ? ? 6A 00 8D 4D EC E8 ? ? ? ? 8B 7D=partial pdb
static void std::_Locinfo::_Locinfo_ctor()=55 8B EC 6A 00 6A 00 E8 ? ? ? ? 59 59 85 C0 75 05 B8 ? ? ? ? 56 8B 75 08 50 8D 4E 24 E8 ? ? ? ? FF=partial pdb
double std::_Stodx_v2()=55 8B EC 83 EC 10 56 57 E8=partial pdb
float std::_Stofx_v2()=55 8B EC 51 51 56 57 E8=partial pdb
unknown_libname_11()=56 8B F1 FF 76 08 E8 ? ? ? ? FF 76 10 E8 ? ? ? ? FF 76 14 E8 ? ? ? ? 83=partial pdb
unknown_libname_16()=55 8B EC 8B 4D 14 8B 45 0C 6A=partial pdb
std::locale::_Locimp::_Locimp()=55 8B EC 51 8A 45 08 33=partial pdb
virtual std::locale::_Locimp::~_Locimp()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 56=partial pdb
void std::_Facet_Register()=55 8B EC 51 6A 08=partial pdb
static void std::locale::_Locimp::_Locimp_dtor()=6A 08 B8 ? ? ? ? E8 ? ? ? ? 6A 00 8D 4D EC E8 ? ? ? ? 8B 5D=partial pdb
static void std::_Locinfo::_Locinfo_dtor()=55 8B EC 8B 45 08 83 78 24=partial pdb
static void std::locale::_Setgloballocale()=55 8B EC 80 ? ? ? ? ? ? 75 12=partial pdb
__Deletegloballocale()=55 8B EC 8B 45 08 57 8B 38=partial pdb
_tidy_global()=55 8B EC 51 6A 00 8D=partial pdb
static void std::ios_base::_Ios_base_dtor()=55 8B EC 56 8B 75 08 8B 46 08=partial pdb
void std::ios_base::_Tidy()=56 57 6A 00 8B F9 E8 ? ? ? ? 8B 47=partial pdb
char const near * std::_Syserror_map()=55 8B EC 8B 4D 08 B8 ? ? ? ? 39=partial pdb
__Getwctype()=55 8B EC 51 8D 45 FC 50 6A=partial pdb
__Getwctypes()=55 8B EC FF 75 10 8B 4D 0C=partial pdb
__Towlower()=55 8B EC 51 66 8B 4D 08 B8 ? ? ? ? 66 89 4D FC 66 3B C8 74 45=partial pdb
__Getctype()=55 8B EC 53 E8=partial pdb
__Tolower()=55 8B EC 83 EC 14 56 8B 75 0C 57 85 F6 75 0F E8 ? ? ? ? 8B 78 08 E8 ? ? ? ? EB 05 8B 7E 0C 8B 06 89 45 F8 85 FF 75 17 8B 45 08 8D 48 BF=partial pdb
__Getcvt()=55 8B EC 53 56 8B 75 08 33 DB 57 6A 0A=partial pdb
__Wcrtomb()=55 8B EC 51 8B 45 14 8B=partial pdb
__Towupper()=55 8B EC 51 66 8B 4D 08 B8 ? ? ? ? 66 89 4D FC 66 3B C8 74 49=partial pdb
__Toupper()=55 8B EC 83 EC 14 56 8B 75 0C 57 85 F6 75 0F E8 ? ? ? ? 8B 78 08 E8 ? ? ? ? EB 05 8B 7E 0C 8B 06 89 45 F8 85 FF 75 17 8B 45 08 8D 48 9F=partial pdb
int std::_New_handler_interface()=56 8B ? ? ? ? ? 8B CE E8 ? ? ? ? FF D6=partial pdb
void ()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 01=partial pdb
unsigned int std::_Find_elem<wchar_t>()=55 8B EC 8B 4D 08 8B C1 0F=partial pdb
unknown_libname_22()=55 8B EC 56 8B 75 0C 57 8B F9 80 7F=partial pdb
int std::_LStrcoll<unsigned short>()=55 8B EC 8B 45 08 8B 4D 10 56 EB=partial pdb
unsigned int std::_LStrxfrm<unsigned short>()=55 8B EC 8B 45 0C 2B 45 08 56=partial pdb
wchar_t std::_Maklocchr<wchar_t>()=55 8B EC 83 EC 0C FF 75 10=partial pdb
wchar_t near * std::_Maklocstr<wchar_t>()=55 8B EC 83 EC 1C 83 65=partial pdb
virtual std::ctype<wchar_t>::~ctype<wchar_t>()=56 8B F1 83 7E 10 00 C7 ? ? ? ? ? 74 09=partial pdb
unknown_libname_29()=55 8B EC F6 45 08 01 56 8B F1 C7 ? ? ? ? ? 74 0A 6A 08=partial pdb
char std::ctype<wchar_t>::_Donarrow()=55 8B EC 83 EC 14 A1 ? ? ? ? 33 C5 89 45 FC 83=partial pdb
wchar_t std::ctype<wchar_t>::_Dowiden()=55 8B EC 83 EC 0C 83 65=partial pdb
static unsigned int std::ctype<wchar_t>::_Getcat()=6A 38 B8 ? ? ? ? E8 ? ? ? ? 8B 7D 08 33 DB 89 5D F0 85 FF 74 4F=partial pdb
char const near * std::_Locinfo::_Getdays()=56 57 8B F1 E8 ? ? ? ? 8B F8 85 FF 74 10 57 8D 4E 04=partial pdb
char const near * std::_Locinfo::_Getmonths()=56 57 8B F1 E8 ? ? ? ? 8B F8 85 FF 74 10 57 8D 4E 0C=partial pdb
unknown_libname_30()=55 8B EC 33 D2 B9=partial pdb
void std::ctype<wchar_t>::_Init()=55 8B EC 83 EC 3C 8D 45=partial pdb
void std::numpunct<unsigned short>::_Init()=68 ? ? ? ? B8 ? ? ? ? E8 ? ? ? ? 89=partial pdb
wchar_t near * std::_Maklocwcs()=55 8B EC 8B 4D 08 8D 51 02=partial pdb
unknown_libname_31()=56 8B F1 FF 76 08 E8 ? ? ? ? FF 76 10 E8 ? ? ? ? FF 76 14 E8 ? ? ? ? FF=partial pdb
unknown_libname_32()=56 8B F1 FF 76 08 E8 ? ? ? ? FF 76 0C=partial pdb
unknown_libname_33()=55 8B EC 51 83 65 FC 00 56 57 FF 75 08 8B F9 8B 17 8B 72 18=partial pdb
virtual long std::collate<wchar_t>::do_hash()=55 8B EC 8B 45 0C 2B 45 08 83=partial pdb
virtual bool std::ctype<wchar_t>::do_is()=55 8B EC 8D 41 08 50 FF 75 0C E8 ? ? ? ? 66=partial pdb
unknown_libname_42()=55 8B EC 8B 45 08 8B 49 24=partial pdb
unknown_libname_49()=55 8B EC 56 57 FF 75 24 8B F9 FF 75 20 FF 75 1C 8B 37 FF 75 18 FF 75 14 8B 4E 1C=partial pdb
unknown_libname_50()=55 8B EC 56 57 FF 75 24 8B F9 FF 75 20 FF 75 1C 8B 37 FF 75 18 FF 75 14 8B 4E 20=partial pdb
unknown_libname_51()=55 8B EC 51 83 65 FC 00 56 57 FF 75 08 8B F9 8B 17 8B 72 14=partial pdb
unknown_libname_52()=55 8B EC 51 83 65 FC 00 56 57 FF 75 08 8B F9 8B 17 8B 72 20=partial pdb
unknown_libname_53()=55 8B EC 51 83 65 FC 00 56 57 FF 75 08 8B F9 8B 17 8B 72 1C=partial pdb
static void std::locale::_Locimp::_Makexloc()=6A 08 B8 ? ? ? ? E8 ? ? ? ? 33 C0=partial pdb
unknown_libname_57()=55 8B EC 51 FF 71 08=partial pdb
virtual long std::collate<char>::do_hash()=55 8B EC 8B 45 0C 2B 45 08 50=partial pdb
unknown_libname_58()=55 8B EC 8B 45 08 8B 49 20=partial pdb
unknown_libname_60()=55 8B EC 56 57 FF 75 24 8B F9 FF 75 20 FF 75 1C 8B 37 FF 75 18 FF 75 14 8B 4E 18=partial pdb
__Stoulx()=55 8B EC 8B 45 14 83 EC 10=partial pdb
__Stoullx()=55 8B EC 8B 45 14 83 EC 24=partial pdb
void _Atexit()=55 8B EC A1 ? ? ? ? 85 C0 0F=partial pdb
___crtLCMapStringW()=55 8B EC 56 8B 75 14 85 F6 7E 14 56 FF 75 10 E8 ? ? ? ? 59 3B C6 59 8D 70 01 7C 02 8B F0 FF=partial pdb
___crtLCMapStringA()=55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B 75 14=partial pdb
__Getcoll()=56 E8 ? ? ? ? 8B F0 E8=partial pdb
__Strcoll()=55 8B EC 8B 45 18 53=partial pdb
__Getdateorder()=55 8B EC 51 53 6A=partial pdb
__Wcscoll()=55 8B EC 8B 55 08 8B 45 18=partial pdb
__Wcsxfrm()=55 8B EC 51 51 8B 4D 08=partial pdb
__Strxfrm()=55 8B EC 51 51 8B 4D 18=partial pdb
_GetTableIndexFromLocaleName()=55 8B EC 53 56 57 33 FF BB=partial pdb
___crtGetLocaleInfoEx()=55 8B EC 56 FF 75 14 8B ? ? ? ? ? 33=partial pdb
___wcsnicmp_ascii()=55 8B EC 51 56 8B 75 10 33=partial pdb
___crtCompareStringA()=55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53 8B 5D 10 56 8B=partial pdb
___crtCompareStringW()=55 8B EC 56 8B 75 14 85 F6 7E 0D=partial pdb
__Init_thread_abort()=55 8B EC E8 ? ? ? ? 8B 45=partial pdb
void `eh vector constructor iterator'()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 DB 89=partial pdb
void `eh vector destructor iterator'()=6A 0C 68 ? ? ? ? E8 ? ? ? ? C6=partial pdb
void __ArrayUnwind()=6A 18 68 ? ? ? ? E8 ? ? ? ? 33=partial pdb
__aullrem()=53 8B 44 24=partial pdb
__ftol3()=B9 ? ? ? ? F2 ? ? ? ? ? ? ? 66 0F 7E=partial pdb
__EH_epilog3()=8B 4D F4 64 ? ? ? ? ? ? 59 5F 5F=partial pdb
__EH_epilog3_GS()=8B 4D F0 33 CD F2=partial pdb
__EH_epilog3_catch_GS()=8B 4D EC 33 CD F2=partial pdb
__EH_prolog3()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 FF=partial pdb
__EH_prolog3_GS()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 89 45 F0=partial pdb
__EH_prolog3_catch_GS()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 89 45 EC=partial pdb
___isa_available_init()=55 8B EC 83 ? ? ? ? ? ? 83 EC 28=partial pdb
void _CallMemberFunction1()=58 59 87=partial pdb
___uncaught_exception()=E8 ? ? ? ? 83 78 18 00 0F=partial pdb
void near * _CallCatchBlock2()=55 8B EC 83 EC 18 A1 ? ? ? ? 8D=partial pdb
int _CallSETranslator()=55 8B EC 83 EC 38 53 81=partial pdb
void _JumpToContinuation()=55 8B EC 51 53 8B 45=partial pdb
void _UnwindNestedFrames()=55 8B EC 51 51 53 56 57 64=partial pdb
UnDecorator::UnDecorator()=55 8B EC 83 09=partial pdb
unknown_libname_62()=55 8B EC 56 8B F1 83 26=partial pdb
static char const near * UnDecorator::UScore()=55 8B EC A1 ? ? ? ? F7=partial pdb
static class DName UnDecorator::composeDeclaration()=55 8B EC 83 EC 60 81=partial pdb
static class DName UnDecorator::getArgumentList()=55 8B EC 83 EC 18 53 56 8B 75 08 33 DB 43=partial pdb
static class DName UnDecorator::getArgumentTypes()=55 8B EC A1 ? ? ? ? 83 EC 10 0F=partial pdb
static class DName UnDecorator::getArrayType()=55 8B EC A1 ? ? ? ? 83 EC 30 80=partial pdb
static class DName UnDecorator::getBasicDataType()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 8A=partial pdb
static class DName UnDecorator::getDataIndirectType()=55 8B EC 83 EC 54 8B 45 C8=partial pdb
static class DName UnDecorator::getDataType()=55 8B EC 83 EC 18 8D 4D F8=partial pdb
static class DName UnDecorator::getDecoratedName()=55 8B EC A1 ? ? ? ? 83 EC 24 53 56 BE=partial pdb
static class DName UnDecorator::getDispatchTarget()=55 8B EC 8B ? ? ? ? ? 8A 01=partial pdb
static class DName UnDecorator::getECSUDataType()=55 8B EC A1 ? ? ? ? 83 EC 20 8B D0=partial pdb
static class DName UnDecorator::getExternalDataType()=55 8B EC 83 EC 18 B9=partial pdb
static class DName UnDecorator::getLexicalFrame()=55 8B EC 83 EC 18 8D 45 F0 6A=partial pdb
void near * _HeapManager::getMemory()=55 8B EC 56 8B 75 08 83 C6=partial pdb
static class DName UnDecorator::getOperatorName()=55 8B EC 83 EC 28 53 56 8B ? ? ? ? ? B9=partial pdb
static class DName UnDecorator::getPrimaryDataType()=55 8B EC 83 EC 10 8B ? ? ? ? ? BA=partial pdb
static class DName UnDecorator::getPtrRefDataType()=55 8B EC A1 ? ? ? ? 83 EC 18 8A 08 84 C9 0F=partial pdb
static class DName UnDecorator::getPtrRefType()=55 8B EC 51 51 A1 ? ? ? ? 56 57 8A 00=partial pdb
static class DName UnDecorator::getRestrictionSpec()=55 8B EC 51 51 A1 ? ? ? ? 56 57 8A 08=partial pdb
static class DName UnDecorator::getReturnType()=55 8B EC A1 ? ? ? ? FF 75 0C 80=partial pdb
static class DName UnDecorator::getSignedDimension()=55 8B EC 51 51 A1 ? ? ? ? 8A 08 84 C9 75=partial pdb
char near * DName::getString()=55 8B EC 57 8B 39=partial pdb
virtual char near * DNameStatusNode::getString()=55 8B EC 83 79 04 01=partial pdb
virtual char near * charNode::getString()=55 8B EC 8B 45 08 3B 45=partial pdb
virtual char near * pDNameNode::getString()=55 8B EC 8B 49 04 85 C9 74 06=partial pdb
virtual char near * pairNode::getString()=55 8B EC 53 56 8B D9 57 FF 75 0C=partial pdb
virtual char near * pcharNode::getString()=55 8B EC FF 71 08 FF=partial pdb
static class DName UnDecorator::getStringEncoding()=55 8B EC 83 EC 10 8D 4D F8=partial pdb
unknown_libname_64()=55 8B EC 8B 45 0C 8B 55 08 2B=partial pdb
static class DName UnDecorator::getTemplateConstant()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC A1=partial pdb
static class DName UnDecorator::getTemplateName()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 80=partial pdb
static class DName UnDecorator::getVCallThunkType()=55 8B EC A1 ? ? ? ? 8A=partial pdb
static class DName UnDecorator::getVdispMapType()=55 8B EC 51 51 8B 4D 0C=partial pdb
static class DName UnDecorator::getVfTableType()=55 8B EC 8B 4D 0C 83 EC 20=partial pdb
bool __crt_strtox::is_overflow_condition<unsigned long>()=8B FF 55 8B EC 8B 45 08 A8 04 74 04 B0 01 5D C3 A8 01 74 1B=partial pdb
bool __crt_strtox::is_overflow_condition<unsigned __int64>()=8B FF 55 8B EC 8B 45 08 A8 04 74 04 B0 01 5D C3 A8 01 74 2B=partial pdb
unknown_libname_65()=8B FF 55 8B EC 8B 45 08 8B 4D=partial pdb
_LocaleUpdate::_LocaleUpdate()=8B FF 55 8B EC 57 8B F9=partial pdb
unknown_libname_66()=83 39 00 75 13 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 32 C0 C3 B0=partial pdb
void __crt_strtox::assemble_floating_point_ind<double>()=8B FF 55 8B EC 8B 4D 08 81=partial pdb
void __crt_strtox::assemble_floating_point_snan<double>()=8B FF 55 8B EC 33 C0 38 45 08 56 8B 75 0C 0F 95 C0 99 C1 E0 1F 33 D2 8B 4E 04 0B 16 81 ? ? ? ? ? 0B C1 89 46 04 8B C2 81 ? ? ? ? ? ? 8B=partial pdb
void __crt_strtox::assemble_floating_point_infinity()=8B FF 55 8B EC 8B 4D 0C 80 79 04 00 74 12 E8 ? ? ? ? 50 FF 75 08 E8 ? ? ? ? 59 59 5D C3 E8 ? ? ? ? 33 C9 38 4D 08 0F 95 C1 C1 E1 1F 81=partial pdb
enum SLD_STATUS __crt_strtox::assemble_floating_point_value()=8B FF 55 8B EC 83 EC 24 53=partial pdb
void __crt_strtox::assemble_floating_point_zero()=8B FF 55 8B EC 8B 4D 0C 80 79 04 00 74 12 E8 ? ? ? ? 50 FF 75 08 E8 ? ? ? ? 59 59 5D C3 E8 ? ? ? ? 33 C9 38 4D 08 0F 95 C1 C1 E1 1F 89=partial pdb
unsigned __int64 __crt_strtox::divide()=8B FF 55 8B EC 81 ? ? ? ? ? 53 8B=partial pdb
bool __crt_stdio_output::is_wide_character_specifier<char>()=8B FF 55 8B EC 8B 45 14 48 83 E8 01 74 2E=partial pdb
unknown_libname_68()=8B FF 55 8B EC 53 56 8B F1 57=partial pdb
unknown_libname_69()=8B FF 55 8B EC 51 51 53 56 8B F1 57 8D=partial pdb
void __crt_stdio_output::crop_zeroes()=8B FF 55 8B EC 8B 45 0C 8B 4D 08 53 8B=partial pdb
unknown_libname_74()=8B FF 55 8B EC 8A 4D 08 8D 41 E0 3C 5A 77 0F 0F BE C1 0F ? ? ? ? ? ? 83 E1=partial pdb
unknown_libname_75()=8B FF 55 8B EC 8A 4D 08 8D 41 E0 3C 5A 77 0F 0F BE C1 0F ? ? ? ? ? ? 83 E0=partial pdb
unknown_libname_76()=8B FF 55 8B EC 8B 4D 08 8D=partial pdb
void __crt_stdio_output::force_decimal_point()=8B FF 55 8B EC 56 8B 75 08 0F=partial pdb
unknown_libname_77()=8B FF 55 8B EC 51 53 56 8B F1 8D 4D FC 57 6A 0A 51 8B 7E 0C 8B 1F 83 27 00 8B 46 10 83 65 FC 00 48=partial pdb
unknown_libname_78()=8B FF 55 8B EC 51 53 56 8B F1 8D 4D FC 57 6A 0A 51 8B 7E 0C 8B 1F 83 27 00 8B 46 10 83 65 FC 00 83=partial pdb
unknown_libname_79()=0F BE 41 31=partial pdb
unknown_libname_80()=0F B7 41 32 83 E8=partial pdb
unknown_libname_81()=8D 51 18 C6=partial pdb
unsigned int __crt_stdio_output::to_integer_size()=8B FF 55 8B EC 8B 45 08 83 F8 0B=partial pdb
unknown_libname_84()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 78 FC 85 FF 74 36 8B 5F 04 85 DB 74 2F FF 76 2C 0F B6=partial pdb
unknown_libname_85()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 78 FC 85 FF 74 36 8B 5F 04 85 DB 74 2F FF 76 2C 0F B7=partial pdb
unknown_libname_86()=8B FF 55 8B EC 51 51 56 8B F1 57 83=partial pdb
unknown_libname_87()=8B FF 55 8B EC 51 51 56 57 8B F1=partial pdb
unknown_libname_88()=8B FF 56 8B F1 57 FF=partial pdb
unknown_libname_89()=8B FF 55 8B EC 51 53 56 8B F1 57=partial pdb
unknown_libname_90()=8B FF 56 8B F1 57 83=partial pdb
unknown_libname_91()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 7E 28 8B 58 FC 89 5E 34 83 FF FF 75 05 BF ? ? ? ? FF 76 2C 0F B6=partial pdb
unknown_libname_92()=8B FF 55 8B EC 56 57 8B F9=partial pdb
unknown_libname_93()=8B 01 85 C0 75 13=partial pdb
unknown_libname_94()=83 79 1C 00 74 19=partial pdb
unknown_libname_97()=8B FF 55 8B EC 51 51 53 56 8B F1 57 80=partial pdb
_fopen_s()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 11=partial pdb
unknown_libname_102()=8B FF 55 8B EC 8B 45 08 83 61=partial pdb
unknown_libname_103()=8B FF 55 8B EC 56 8B F1 FF=partial pdb
unknown_libname_104()=8B FF 55 8B EC 8B 45 08 3B=partial pdb
void __crt_stdio_input::scanset_buffer<wchar_t>::set()=8B FF 55 8B EC 56 0F B7=partial pdb
unsigned int __crt_stdio_input::to_floating_point_length()=8B FF 55 8B EC 8B 45 08 85 C0 74 12=partial pdb
unsigned int __crt_stdio_input::to_integer_length()=8B FF 55 8B EC 8B 45 08 83 F8 0A=partial pdb
unknown_libname_105()=83 79 08 00 75 13=partial pdb
unknown_libname_106()=83 39 00 75 13 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 32 C0 C3 83=partial pdb
unknown_libname_107()=8B 41 08 85 C0 75 13=partial pdb
unknown_libname_108()=8B FF 55 8B EC 51 53 56 33=partial pdb
unknown_libname_109()=8B FF 55 8B EC A1 ? ? ? ? 83=partial pdb
__set_new_handler()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 00=partial pdb
_localeconv()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B ? ? ? ? ? 8B E5=partial pdb
_frexp()=8B FF 55 8B EC 51 51 57=partial pdb
__islower_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 02=partial pdb
__isupper_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 01=partial pdb
_islower()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 02=partial pdb
_isupper()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 01=partial pdb
_roundf()=8B FF 55 8B EC 8D 45=partial pdb
__fdexp()=8B FF 55 8B EC 51 51 56 8B 75 08 57 56 E8 ? ? ? ? 0F=partial pdb
_exp2f()=8B FF 55 8B EC 51 8D 45 08 50=partial pdb
__tzset()=6A 08 68 ? ? ? ? E8 ? ? ? ? 6A 06=partial pdb
__int64 __crt_time_elapsed_leap_years<__int64>()=8B FF 55 8B EC 51 8B 4D 08 8B=partial pdb
bool __crt_time_is_leap_year<__int64>()=8B FF 55 8B EC 53 56 8B 75 0C 33 DB 57 8B=partial pdb
long common_mktime<long>()=8B FF 55 8B EC 83 EC 34 A1=partial pdb
__int64 common_mktime<__int64>()=8B FF 55 8B EC 83 EC 44 A1=partial pdb
___ascii_stricmp()=8B FF 55 8B EC 56 8B 75 08 57 8B=partial pdb
__stricmp()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 28=partial pdb
__stricmp_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 10=partial pdb
int common_tmpnam<char>()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 F6=partial pdb
int common_tmpnam_nolock<char>()=8B FF 55 8B EC 56 57 8B 7D 10 57 E8=partial pdb
bool generate_tmpfile_file_name<char>()=8B FF 55 8B EC 56 8B 75 08 6A=partial pdb
char near * get_tmpfile_buffer_nolock<char>()=8B FF 55 8B EC 56 8B 75 08 83 ? ? ? ? ? ? ? 75=partial pdb
bool initialize_tmpfile_buffer_nolock<char>()=8B FF 55 8B EC 53 57 8B 7D=partial pdb
_tmpnam()=8B FF 55 8B EC 51 83 65 FC 00 8D 45 FC 50 6A=partial pdb
int common_xtox<unsigned __int64,char>()=8B FF 55 8B EC 83 EC 0C 8B 4D=partial pdb
int common_xtox_s<unsigned __int64,char>()=8B FF 55 8B EC 8B 4D 10 56=partial pdb
__i64toa()=8B FF 55 8B EC 51 33 C0 83=partial pdb
__ui64toa()=8B FF 55 8B EC 6A 00 FF 75 14 6A=partial pdb
start()=52 9B D9 3C 24 74 4C 8B 44 24 0C 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? A9 ? ? ? ? 74 5E A9 ? ? ? ? 75 41 D9 ED=partial pdb
start_0()=8B C8 50 9B=partial pdb
___acrt_initialize_clock()=8B FF 55 8B EC 83 EC 10 8D 45=partial pdb
___acrt_initialize_timeset()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 6A 01 B9=partial pdb
__Getdays_l()=8B FF 55 8B EC 83 EC 18 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 45 EC 33 DB 33=partial pdb
__Getmonths_l()=8B FF 55 8B EC 83 EC 18 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 45 EC 33 DB 6A=partial pdb
__Strftime_l()=8B FF 55 8B EC 83 EC 18 53 56 FF=partial pdb
_strftime()=8B FF 55 8B EC 6A 00 6A 00 FF 75 14=partial pdb
_copysignf()=8B FF 55 8B EC 8B 45 0C BA=partial pdb
_ldexp()=8B FF 55 8B EC 83 EC 0C 56 57=partial pdb
__wcsdup()=8B FF 55 8B EC 83 7D 08 00 75 04 33 C0 5D C3 8B=partial pdb
____lc_collate_cp_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 40 10=partial pdb
____lc_locale_name_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 05=partial pdb
____mb_cur_max_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 40 04=partial pdb
int compute_iso_week()=8B FF 55 8B EC 56 8B 75 08 57 FF=partial pdb
int compute_iso_week_internal()=8B FF 55 8B EC 53 56 8B 75 0C 57=partial pdb
int compute_iso_year()=8B FF 55 8B EC 56 FF 75 10=partial pdb
bool expand_time()=8B FF 55 8B EC 51 51 8B 55=partial pdb
void store_number()=8B FF 55 8B EC 83 EC 0C 66=partial pdb
void store_number_without_lead_zeroes()=8B FF 55 8B EC 56 8B 75 10 57=partial pdb
void store_string()=8B FF 55 8B EC 8B 4D 10 83=partial pdb
bool store_winword()=8B FF 55 8B EC 83 EC 30 A1 ? ? ? ? 33 C5 89 45 FC 8B 45=partial pdb
__W_Getdays()=8B FF 55 8B EC 83 EC 1C 53 56 57 33 DB 8D 4D E4 53 89 5D FC E8 ? ? ? ? 8B 45 E8 6A 07=partial pdb
__W_Getmonths()=8B FF 55 8B EC 83 EC 1C 53 56 57 33 DB 8D 4D E4 53 89 5D FC E8 ? ? ? ? 8B 45 E8 6A 0C=partial pdb
__W_Gettnames()=8B FF 55 8B EC 83 EC 28 56=partial pdb
__Wcsftime_l()=8B FF 55 8B EC 83 EC 24 57=partial pdb
unknown_libname_118()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B F1=partial pdb
__except2()=8B FF 53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 73 28=partial pdb
__handle_qnan2()=8B FF 55 8B EC DD 45 08 DC=partial pdb
bool __acrt_stdio_parse_mode_D()=8B FF 55 8B EC 8B 4D 08 8B 01 A8=partial pdb
bool __acrt_stdio_parse_mode_T()=8B FF 55 8B EC 8B 4D 08 BA=partial pdb
bool __acrt_stdio_parse_mode_plus()=8B FF 55 8B EC 8B 45 0C 80 38 00 74 04 32 C0 5D C3 8B 55=partial pdb
int __crt_seh_guarded_call<int>::operator()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 45 0C 8B 00 8B=partial pdb
void __crt_seh_guarded_call<void>::operator()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 4D 0C 8B=partial pdb
unknown_libname_119()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B ? ? ? ? ? 8B CE 33 ? ? ? ? ? 83 E1 1F 6A=partial pdb
__acrt_GetDateFormatEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 09=partial pdb
__acrt_GetTimeFormatEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 10=partial pdb
unknown_libname_120()=8B FF 55 8B EC 0F B7=partial pdb
__fd_int()=8B FF 55 8B EC 51 56 8B 75 08 B8=partial pdb
__fdtest()=8B FF 55 8B EC 8B 4D 08 56 BE=partial pdb
__fperrraise()=8B FF 55 8B EC 51 8D 45 FC=partial pdb
_fperrraise_with()=8B FF 55 8B EC 53 8B 5D 08 33=partial pdb
__fdscale()=8B FF 55 8B EC 83 EC 0C 53 8B 5D 08 56=partial pdb
___acrt_GetTempPathA()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 0C=partial pdb
unknown_libname_121()=8B FF 55 8B EC 8D 41=partial pdb
unknown_libname_122()=8B FF 55 8B EC 8B 45 0C 3B=partial pdb
unknown_libname_123()=8B FF 56 57 8B=partial pdb
unknown_libname_124()=8B FF 56 8B F1 57 8B 7E=partial pdb
___acrt_fenv_get_fp_status_word_from_exception_mask()=8B FF 55 8B EC 8B 4D 08 33 C0 F6=partial pdb
_fegetexceptflag()=8B FF 55 8B EC 57 8B 7D=partial pdb
_fesetexceptflag()=8B FF 55 8B EC F6=partial pdb
__fdnorm()=8B FF 55 8B EC 51 8B 55 08=partial pdb
_fetestexcept()=8B FF 55 8B EC 51 FF 75 08 83=partial pdb
_wcsrchr()=55 8B EC 56 33 F6 83=partial pdb
