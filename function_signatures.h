[CLIENT.dll] {
	AccumulatePose() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? A1"; 
	AddDependencies() = "55 8B EC 81 EC BC 00 00 00 53 56 57"; 
	AddEconItem() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53 56 57 8B F9 8B 08"; 
	BuildWorldRenderLists() = "53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 8B";
	CAM_Think() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 85 C9"; 
	CAchievementMgr::SaveGlobalState() = "55 8B EC 51 53 56 8B F1 8B 0D ? ? ? ? 8B 81"; 
	CAchievementMgr::SaveGlobalState() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 8B";
	CBaseAchievement::EnsureComponentBitSetAndEvaluate() = "55 8B EC 51 56 8B F1 57 8B 46";
	CBaseAchievement::FireGameEvent() = "55 8B EC 56 8B F1 8B 06 8B 40 28";
	CBaseAchievement::IncrementCount() = "8B 46 0C 8D 4E 0C 8B 40 14 FF D0 84 C0 0F 85 ? ? ? ? 8B" - 4;
	CBaseAchievement::OnComponentEvent() = "55 8B EC 51 8B C1 53 56 33 F6 89 45 FC 8B 58 50";
	CBaseEntity::EmitSound() = "55 8B EC 81 ? ? ? ? ? 53 8B C1";
	CBaseEntity::DrawBrushModel() = "55 8B EC 53 56 57 8B F9 8B 0D ? ? ? ? 8B 99 ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF 15 ? ? ? ? 8B 45 0C"; 
	CBaseLesson::IsTimedOut() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CC_CL_Find_Ent() = "55 8B EC 51 57 8B 7D 08 8B 07";
	CHLClient::FrameStageNotify() = "55 8B EC 8B 0D ?? ?? ?? ?? 8B 01 8B 80 ?? ?? ?? ?? FF D0 A2 ?? ?? ?? ??";
	CCascadeLightManager::InitRenderTargets() = "56 8B F1 C7 ? ? ? ? ? 8B ? ? ? ? ? 85 C9";
	CClientLeafSystem::ProjectFlashlight() = "55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 5D 08";
	CClientShadowMgr::BuildFlashlight() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D EC 8B 01";
	CClientShadowMgr::BuildPerspectiveWorldToFlashlightMatrix() = "55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 56";
	CClientShadowMgr::ComputeShadowDepthTextures() = "8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 68";
	CClientShadowMgr::ComputeShadowTextures() = "55 8B EC 83 E4 C0 83 EC 34 53 8B D9";
	CClientShadowMgr::CullReceiver() = "55 8B EC 83 EC 38 53 56 57 8B 7D 08";
	CClientShadowMgr::DrawDeferredShadows() = "8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22 6A 04";
	CClientShadowMgr::InitDepthTextureShadow() = "55 8B EC 83 EC 54 53 8B D9 8B 0D ? ? ? ? 89"; 
	CClientShadowMgr::InitDepthTextureShadows() = "56 8B F1 8B 06 FF ? ? ? ? ? 8B 4E 14";
	CClientShadowMgr::ReprojectShadows() = "55 8B EC 83 EC 08 A1 ? ? ? ? 56";
	CClientShadowMgr::UpdateBrushShadow() = "8B ? ? ? ? ? 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 57 8B CE";
	CClientShadowMgr::UpdateFlashlightState() = "55 8B EC 83 E4 F8 51 53 8B D9 8B";
	CClientShadowMgr::UpdateProjectedTexture() = "55 8B EC 53 8B D9 8B ? ? ? ? ? 56 57 8B";
	CClientShadowMgr::UpdateProjectedTextureInternal() = "55 8B EC 53 8B 5D 08 56 0F B7 C3 69";
	CClientShadowMgr::UpdateProjectionState() = "55 8B EC 83 E4 F8 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 44 24 0C 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 0F B7 45 08";
	CDebugLayout::AppendElementOpenTag() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 C8";
	CDebugLayout::Build() = "55 8B EC 83 E4 F8 83 EC 34 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 44 24 28";
	CDebugPanelComputed::Build() = "55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 28";
	CDebugPanelStyle::AppendAnimations() = "55 8B EC 83 E4 F8 83 EC 4C 53 8B D9 8B";
	CDebugPanelStyle::AppendCascadeStyles() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 5C";
	CDebugPanelStyle::AppendElementStyles() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 F8 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 47 14";
	CDebugPanelStyle::AppendInheritedStyles() = "55 8B EC 83 EC 54 53 8B D9 8B ? ? ? ? ? 56";
	CDebugPanelStyle::AppendStyleInfoForProperty() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 58";
	CDebugPanelStyle::Build() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16";
	CDebugPanelStyle::GetStyleBuffer() = "55 8B EC 83 E4 F8 83 EC 14 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 10";
	CDebugPanelStyle::OnPanelStyleChanged() = "55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16";
	CDetailObjectSystem::CountSpritesInLeafList() = "55 8B EC 83 EC 10 89 4D F4 8B";
	CDetailObjectSystem::RenderTranslucentDetailObjects() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 3C";
	CDetailObjectSystem::RenderTranslucentDetailObjectsInLeaf() = "55 8B EC 83 E4 F8 83 EC 08 56 57 8B F9 8B";
	CDetailObjectSystem::SortSpritesBackToFront() = "55 8B EC 83 EC 34 53 56 8B F1 8B ? ? ? ? ? 57 89 75 EC";
	CEconItem::BAddToMessage::std::string() = "55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16";
	CEconItemSchema::GetAttributeDefinitionByName() = "55 8B EC 8B 01 5D FF ? ? ? ? ? CC CC CC CC 55 8B EC 53";
	CEconItemView::GetStaticData() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16";
	CEffectsList::DrawEffects() = "55 8B EC 83 EC 08 A1 ? ? ? ? 89 4D FC 8B"; 
	CFlashlightEffect::UpdateDefaultFlashlightState() = "55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF 75 20";
	CFlashlightEffect::UpdateLight() = "55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B";
	CFlashlightEffect::UpdateLightTopDown() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 8B";
	CGCClient() = "55 8B EC 53 8B D9 8B ? ? ? ? ? 56 8B ? ? ? ? ? 85 F6";
	CGlowObjectManager::RenderGlowEffects() = "55 8B EC A1 ? ? ? ? 83 EC 18 57";
	CGrid::CGrid() = "55 8B EC 83 E4 F8 56 57 8B F1 6A 00 FF 75 0C FF 75 08 C7 ? ? ? ? ? A1 ? ? ? ? 89 46 08 A1 ? ? ? ? 6A 00 89 46 0C E8 ? ? ? ? C7 ? ? ? ? ? A1";
	CGrid::EventInputFocusSet() = "55 8B EC 51 51 53 56 8B F1 8B";
	CGrid::GetFocusedChildVisibleIndex() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B ? ? ? ? ? 89 7D F8";
	CGrid::GetVisibleChild() = "55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C 6A 04";
	CGrid::GetVisibleChildCount() = "56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 80";
	CGrid::MotionTimeout() = "55 8B EC 83 EC 0C 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CGrid::MoveSelection() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 83";
	CGrid::OnLayoutTraverse() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 44 24 34";
	CGrid::SetFocusedChild() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 44 24 14";
	CGrid::UpdateChildPositions() = "55 8B EC 83 E4 F8 83 EC 78 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 14";
	CGrid::UpdateVecVisible() = "55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F4 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? C7";
	CHTML::Paint() = "56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF";
	CIconLesson::IsVisible() = "53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 83 F9 FF";
	CIconLesson::ShouldDisplay() = "53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16";
	CImagePanel::SetImage() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 4B 04";
	CIronSightController::ShouldHideCrosshair() = "8B 41 3C 85 C0 74 27";
	CJobMgr::BResumeSleepingJobs() = "56 8B F1 57 8D ? ? ? ? ? E8 ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 8D";
	CJobMgr::BResumeYieldingJobs() = "55 8B EC 53 56 57 8B F1 FF";
	CMatchmakingStatus::OnEvent() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 8B 5D 08 56 57 8B F9 85";
	CMergedMDL_Constructor() = "53 8B D9 56 57 8D 4B 04 C7 03 ? ? ? ? E8 ? ? ? ? 6A";
	CModelRenderSystem::ComputeTranslucentRenderData() = "8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 E8 85 C0";
	CModelRenderSystem::DrawBrushModels() = "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9";
	CModelRenderSystem::DrawBrushModels() = "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B 7D 0C 8B D9"; 
	CModelRenderSystem::DrawModels() = "55 8B EC 83 EC 4C 83 7D 0C 00 53 56";
	CMoviePanel::Clear() = "55 8B EC 83 EC 10 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CMoviePanel::Paint() = "55 8B EC 83 EC 18 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 DB";
	CNewParticleEffect::DrawModel() = "55 8B EC 83 E4 F8 83 EC 5C 53 56 57";
	CPanel2D::BSetProperty() = "55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16";
	CPanel2D::Initialize() = "55 8B EC 83 E4 F8 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 0C";
	CPanel2D::SetDialogVariable() = "55 8B EC 83 E4 C0 81 EC ? ? ? ? 53 56 8B D9 57 89 5C 24";
	CParticleCollection::GenerateSortedIndexList() = "55 8B EC 83 E4 F8 51 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CParticleCollection::InitializeNewParticles() = "55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 EC";
	CParticleCollection::Simulate() = "55 8B EC 83 E4 F8 83 EC 30 56 57 8B F9 0F 28 E1";
	CParticleEffectBinding::DrawModel() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 14 8B ? ? ? ? ? 89 44 24 1C";
	CParticleMSG::UpdateNewEffects() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 F3";
	CParticleSystemMgr::DrawRenderCache() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 89 7C 24 38";
	CPhysicsSystem::PhysicsSimulate() = "55 8B EC 83 EC 7C 8B ? ? ? ? ? 53 56 57 8B";
	CPrediction::ProcessMovement() = "55 8B EC 83 E4 C0 83 EC 34 53 56 8B 75 08";
	CPrediction::Update() = "55 8B EC 83 EC 08 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CProtoBufMsg::BAsyncSendProto() = "55 8B EC 83 EC 1C 89 4D F8 8B";
	CRopeManager::DrawRenderCache() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B D1 8B";
	CScriptedIconLesson::FireGameEvent() = "55 8B EC 83 EC 08 57 8B F9 8B";
	CScriptedIconLesson::OnOpen() = "55 8B EC 83 EC 20 53 56 57 8B F9 8B";
	CScriptedIconLesson::ProcessElement() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B";
	CScriptedIconLesson::ProcessElements() = "55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B";
	CScriptedIconLesson::Update() = "55 8B EC 83 EC 18 53 56 57 8B F9 8B";
	CShadowDepthView::Draw() = "55 8B EC 83 E4 F8 83 EC 28 56 57 8B F9";
	CSprite::DrawModel() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D F8 8B";
	CSprite::GetToolRecordingState() = "8B 45 34 8B 5D 38 89 45 34 8B 45 30";
	CSpriteTrail::DrawModel() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 14";
	CViewRender::Draw3dSkyboxworld() = "56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 83 EC 0C";
	CViewRender::DrawTranslucentWorldAndDetailPropsInLeaves() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 80 7D 20 00";
	CViewRender::DrawTranslucentWorldInLeaves() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 10 8B ? ? ? ? ? 89 44 24 14";
	CViewRender::Render() = "F3 ? ? ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? F3";
	CViewRender::RenderView() = "55 8B EC 83 E4 C0 81 EC ? ? ? ? 53 56 57 8B F9 89 7C 24 44";
	CVisibleShadowList::FindShadows() = "55 8B EC 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16";
	C_BaseAnimating::DrawModel() = "55 8B EC 83 EC 14 53 56 8B F1 8B 0D ? ? ? ? 57 89"; 
	C_BaseAnimating::FrameAdvance() = "55 8B EC 83 E4 C0 83 EC 38 56 8B"; 
	C_BaseAnimating::StandardBlendingRules() = "55 8B EC 83 E4 F0 B8 F8 10"; 
	C_BaseCombatWeapon::DrawModel() = "55 8B EC 51 56 8B F1 8B 0D ? ? ? ? 57 8B B9"; 
	C_BaseEntity::EmitSound() = "55 8B EC 83 EC 4C 53 8B D9 8B "; 
	C_CSPlayer::AttachmentHelper() = "55 8B EC 83 EC 48 53 8B 5D 08 89 4D F4"; 
	C_CSPlayer::GetEyePosition() = "55 8B EC 56 8B 75 08 57 8B F9 56 8B 07 FF 90"; 
	C_CSPlayer::InvalidatePhysicsRecursive() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B 5D 08 8B C3"; 
	C_CSPlayer::UpdateClientsideAnimation() = "55 8B EC 51 56 8B F1 80 BE ? ? ? ? ? 74 36"; 
	C_ClientModeShared::CreateMove() = "55 8B EC 8B 4D 04 8B";
	C_ClientModeShared::GetViewmodelFOV() = "55 8B EC 8B 0D ? ? ? ? 83 EC 08 57";
	C_ClientModeShared::OverrideView() = "55 8B EC 83 E4 F8 83 EC 58 56 57 8B 3D";
	C_GameInstructor::Update() = "55 8B EC 83 EC 10 53 8B D9 8B 0D ? ? ? ? 8B";  
	C_PlayerAnimState::ModifyEyePosition() = "55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56 57 83"; 
	C_PlayerAnimState::Update() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3"; 
	CacheSequences() = "55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 57 8B";
	CalcAbsolutePosition() = "55 8B EC 83 E4 F0 83 EC 68 80 3D"; 
	CalcAbsoluteVelocity() = "55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 F7"; 
	CalcPlayerView() = "84 C0 75 08 57 8B CE E8 ? ? ? ? 8B 06"; 
	CalculateView() = "55 8B EC 83 EC 14 53 56 57 FF 75 18"; 
	Clabel::OnMouseMove() = "55 8B EC F3 ? ? ? ? 83 EC 18 F3 0F 2C D1";
	ClearDeathNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58";
	ClearNotices() = "55 8B EC 83 EC 0C 53 56 8B 71 58"; 
	ClientModeCSNormal::DoPostScreenSpaceEffects() = "55 8B EC 8B 49 18 56 8B 35";
	ClipRayToHitbox() = "55 8B EC 83 E4 F8 F3 0F 10 42";   
	CreateAnimationState() = "55 8B EC 56 8B F1 B9 ? ? ? ? C7 46";
	DoExtraBoneProcessing() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 53 56 8B F1 57 89 74 24 1C 80";
	DoProceduralFootPlant() = "55 8B EC 83 E4 F0 83 EC 78 56 8B F1 57 8B 56"; 
	DrawWorld() = "55 8B EC 51 A1 ? ? ? ? F3";
	FindElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28"; 
	FindHudElement() = "55 8B EC 53 8B 5D 08 56 57 8B F9 33 F6 39 77 28";  
	GCHost() = "55 8B EC 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? E8";
	GetLayerIdealWeightFromSeqCycle() = "55 8B EC 83 EC 08 53 56 8B 35 ? ? ? ? 57 8B F9 8B CE 8B 06 FF 90";
	GetMessage() = "55 8B EC 51 8B ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 89 75 FC 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B 7D 0C 85 FF";
	GetSequenceActivity() = "55 8B EC 53 8B 5D 08 56 8B F1 83";
	GetSequenceDuration() = "8B 8E ? ? ? ? 85 C9 74 49 83 39 00 74 44 8B 41" - 0x23;
	GetSequenceLinearMotion() = "55 8B EC 83 EC 0C 56 8B F1 57 8B FA 85 F6 75 14 68"; 
	GetShotgunSpread() = "55 8B EC 83 EC 10 56 8B 75 08 8D"; 
	GetToolRecordingState() = "55 8B EC 83 EC 08 53 56 8B F1 8B 0D ? ? ? ? 57 85";  
	GetUserCmd() = "55 8B EC 8B 45 08 56 57 8B F9 83";
	GetWeaponMoveAnimation() = "53 56 57 8B F9 33 F6 8B 4F 60 8B 01 FF 90"; 
	GetWeaponPrefix() = "53 56 57 8B F9 33 F6 8B 4F 60"; 
	GlassImpactCallback() = "55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 89";
	GloweEffectSpectator() = "55 8B EC 83 EC 14 53 8B 5D 0C 56 57 85 DB 74"; 
	HasC4() = "56 8B F1 85 F6 74 31 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 ?"; 
	InterpolateServerEntities() = "55 8B EC 83 EC 1C 8B 0D ? ? ? ? 53 "; 
	IsEntityBreakable() = "55 8B EC 51 56 8B F1 85 F6 74 ? 83 BE"; 
	IsInIronsight() = "53 56 8B F1 57 8B 4E 3C 85 C9 0F 84 ? ? ? ? 8B 81"; 
	KeyDown() = "56 57 8B FA 83 C8"; 
	LineGoesThroughSmoke() = "55 8B EC 83 EC 08 8B 15 ? ? ? ? 0F"; 
	LockStudioHdr() = "55 8B EC 51 53 8B D9 56 57 8D B3"; 
	MaintainSequenceTransitions() = "55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 56 57 8B F9 F3" - 0xC;
	OnLand() = "55 8B EC 83 E4 F8 81 EC 28 02 00 00 56 8B F1 F3 0F 11 4C 24 08"; 
	PhysicsRunThink() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B 87 ? ? ? ? C1 E8 16"; 
	PutString() = "55 8B EC 56 57 8B F9 8A"; 
	RevealRanks() = "55 8B EC 8B 0D ? ? ? ? 68"; 
	RunSimulation() = "55 8B EC 83 EC 08 53 8B 5D 10 56 57 FF 75 0C 8B F1 F3 0F 11 55";
	SetAbsAngles() = "55 8B EC 83 E4 F8 83 EC 64 53 56 57 8B F1 E8"; 
	SetAbsOrigin() = "55 8B EC 83 E4 F8 51 53 56 57 8B F1"; 
	SetDormant() = "55 8B EC 53 8B 5D 08 56 8B F1 88 9E ? ? 00 00"; 
	SetUpAimMatrix() = "55 8B EC 81 EC ? ? ? ? 53 56 57 8B 3D"; 
	SetUpLean() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 F3"; 
	SetUpMovement() = "55 8B EC 83 E4 F8 81 EC ? ? ? ? 56 57 8B 3D ? ? ? ? 8B "; 
	SetUpVelocity() = "55 8B EC 83 E4 F8 83 EC 30 56 57 8B 3D"; 
	SetUpWeaponAction() = "55 8B EC 51 53 56 57 8B F9 8B 77 60"; 
	SetUpWholeBodyAction() = "55 8B EC 83 EC 08 56 57 8B F9 8B 77"; 
	SetupBones() = "55 8B EC 83 E4 F0 B8 D8";  
	SetupBonesForAttachmentQueries() = "55 8B EC 83 EC 14 83 3D ? ? ? ? ? 53";
	SetupMovement() = "55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B 7D 08 8B F1 F3";
	SetupRenderablesList() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 8B";
	ShouldInterpolate() = "A1 ? ? ? ? 56 57 8B F9 8B 30 8D 4F 08"; 
	ShouldSkipAnimationFrame() = "57 8B F9 8B 07 8B 80 ? ? ? ? FF D0 84 C0 75 02"; 
	SnowFall() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B";
	SolveDependencies() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 8B 81"; 
	ThreadedBoneSetup() = "55 8B EC 8B 0D ? ? ? ? 83 EC 24"; 
	UTIL_TraceLine() = "55 8B EC 83 E4 F0 83 EC 7C 56 52";
	UpdateClientSideAnimations() = "8B ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 85 DB";
	UpdatePanelInfo() = "A4 05 ? ? ? ? 7D 2F E7 05 7D 2F";
	UpdateTargets() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 33 D2"; 
	ValidateUserCmd() = "55 8B EC 8B 55 08 3B CA";
	WriteUserCmd() = "55 8B EC 83 E4 F8 51 53 56 8B D9"; 
	WriteUserCmdDeltaToBuffer() = "55 8B EC 83 EC 68 53 56 8B D9 C7";
	BuildTransformations() = "55 8B EC 83 E4 F0 81 EC ? ? ? ? 56 57 8B F9 8B 0D ? ? ? ? 89 7C 24 28";
}

[ENGINE.dll] {
	CBaseServer::RunFrame() = "53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16";
	CClientState::ConsistencyCheck() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57";
	CEngine::Frame() = "A1 ? ? ? ? B9 ? ? ? ? 8B 40 34 FF D0 85 C0 0F ? ? ? ? ? A1 ? ? ? ? A8 02 75 24";
	CEngineVGui::Paint() = "55 8B EC 83 EC 40 53 8B D9 8B";
	CEngineVGui::Simulate() = "55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 1C";
	CGameClient::SendHltvReplaySnapshot() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 75 DC";
	CHLTVClient::SendSnapshot() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CHLTVServer::AddNewDeltaFrame() = "55 8B EC A1 ? ? ? ? 83 EC 10 53 56 57 8B F9";
	CHLTVServer::AddNewFrame() = "55 8B EC 83 EC 18 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CHLTVServer::ExpandDeltaFrameToFullFrame() = "55 8B EC 83 EC 38 8B ? ? ? ? ? 53 56 57 8B";
	CHLTVServer::RunFrame() = "8B ? ? ? ? ? 8B 14 C2 EB DD 33 D2";
	CHLTVServer::UpdateTick() = "55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CL_Move() = "55 8B EC 81 EC ? ? ? ? 53 56 8A F9"; 
	CL_SendMove() = "55 8B EC A1 ? ? ? ? 81 EC ? ? ? ? B9 ? ? ? ? 53 8B 98"; 
	CNetworkStringTableContainer::DirectUpdate() = "55 8B EC 51 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0";
	CNetworkStringTableContainer::WriteBaselines() = "55 8B EC 83 EC 60 53 56 8B F1 8B";
	CNetworkStringTableContainer::WriteUpdateMessage() = "55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 89 75 F8 8B";
	COcclusionSystem::IsOccluded() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 18";
	COverlayMgr::RenderOverlays() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B";
	CShadowMgr::DrawFlashlightDecals() = "55 8B EC 51 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 1C 6A 04";
	CShadowMgr::DrawFlashlightDecalsOnDisplacements() = "55 8B EC 83 E4 F8 51 53 8B D9 8B";
	CShadowMgr::DrawFlashlightDecalsOnSurfaceList() = "55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 89 75 FC 8B";
	CShadowMgr::DrawFlashlightOverlays() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC";
	CShadowMgr::DrawVolumetrics() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 18";
	CShadowMgr::FlashlightDrawCallback() = "55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 89 5D FC";
	CShadowMgr::GenerateShadowRenderInfo() = "55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC";
	CShadowMgr::ProjectFlashlight() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 10";
	CShadowMgr::ProjectShadow() = "55 8B EC 83 E4 F8 83 EC 58 56 57 8B F9";
	CShadowMgr::RenderFlashlights() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 20";
	CShadowMgr::RenderProjectedTextures() = "55 8B EC 53 57 8B F9 8B ? ? ? ? ? 8B";
	CShadowMgr::RenderShadows() = "81 ? ? ? ? ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 0B 8B ? ? ? ? ? 8B 01 FF 50 34 85 C0 74 BD 0F B7 47 08";
	CShadowMgr::SetFlashlightStencilMasks() = "55 8B EC 51 57 8B F9 8B ? ? ? ? ? 8B";
	CStaticProp::DrawModel() = "77 AA 89 16 A8 AA 89 16 C8 AA 89 16";
	CStaticPropMgr::DrawStaticProps() = "55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6";
	CSteam3Client::RunFrame() = "55 8B EC 83 EC 08 53 56 8A D9 FF";
	ChangeClantag() = "53 56 57 8B DA 8B F9 FF 15";
	CheckUpdatingSteamResources() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	DownloadManager::Queue() = "55 8B EC 83 EC 0C 53 8B 5D 0C 8B CB";
	EndUpdateLightmaps() = "83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 56";
	FillServerInfo() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 DB";
	FillSignOnFullServerInfo() = "55 8B EC 8B ? ? ? ? ? 53 8B ? ? ? ? ? 85 DB 74 16";
	FireEventIntern() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 89 5C 24 0C"; 
	LightcacheGet() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B C1 8B";
	SaveGameSlot() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? 56 8B F1 C7";
	SendClientMessages() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 08";
	SendServerInfo() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 10";
	SendSnapshot() = "83 ? ? ? ? ? ? 7F DC 8B";
	ViewDrawFade() = "A1 ? ? ? ? B9 ? ? ? ? FF 60 2C";
	WriteDeltaEntities() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 89 55 F8 8B";
	CNetChan::SendDatagram() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 18";
}

[PANORAMA.dll] {
	BResizeImageRGBA() = "55 8B EC 83 EC 70 89 4D E0 8B";
	CAnimationParticleSystem::RunSystem() = "55 8B EC 83 EC 44 57 8B F9 0F 28 D1";
	CAnimationParticleSystem::SerializeParticles() = "BB ? ? ? ? E7 1D 7A 2E E8";
	CCreateVTFTextureJob::DoExecute() = "55 8B EC 83 E4 F8 83 EC 34 53 8B D9";
	CGamepadController::ProcessRemoteInput() = "55 8B EC 83 E4 F0 83 EC 38 56 8B F1 8B";
	CGamepadController::RunFrame() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8B CE";
	CImageData::SetImageDataR8G8B8A8() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CImageDecodeThread::Run() = "55 8B EC 83 EC 10 57 8B F9 C6 47 70 00";
	CImageDecodeWorkItem::DispatchResult() = "56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF 76 14";
	CImageDecodeWorkItem::RunWorkItem() = "55 8B EC 51 53 56 57 8B F9 8B";
	CImageDecodeWorkThreadPool::RunFrame() = "56 8B F1 57 8B ? ? ? ? ? 8B 06";
	CImageResourceManager::LoadImageFromEngineRT() = "55 8B EC 83 E4 F8 83 EC 34 53 56 8B F1 8B";
	CImageResourceManager::LoadImageFromMemory() = "83 F8 02 7E 2F 8B 0A 80 39 3C 75 28";
	CImageResourceManager::LoadImageInternal() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B";
	CImageResourceManager::LoadLocalFileSynchronous() = "55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 89 7D FC";
	CLayoutFile::BLoadFromBuffer() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F8";
	CLayoutFileXMLParser::BAddPanel() = "55 8B EC 83 EC 24 53 56 57 8B F9 8B";
	CLocalization::OnPanelDeleted() = "55 8B EC 83 EC 48 53 8B D9 8B";
	CLocalization::ResolveDialogVariable() = "55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 53";
	CLocalization::SetLongestStringForToken() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CLocalizationStringDialogVariablesDerived::Recalculate() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1 8B";
	CLocalizationStringSimple::Recalculate() = "55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 57";
	CPanelStyle::GetInterpolatedPosition() = "55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B";
	CResourceSystem::CreateResourceManifest() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 14";
	CResourceSystem::OnManifestLoaded() = "55 8B EC 83 EC 30 8B D1 8B";
	CResourceSystem::Update() = "55 8B EC 83 E4 F8 83 EC 2C 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 10";
	CSteamGameController::GotWindowFocus() = "81 ? ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 83";
	CStyleFile::BLoadFromBuffer() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 10";
	CStyleFileSet::BContainsStyleFile() = "55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC";
	CUIEngine::CompileScript() = "55 8B EC 83 E4 F8 83 EC 64 53 8B D9";
	CUIEngine::DispatchQueuedEvent() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57";
	CUIEngine::InitializePanoramaContext() = "55 8B EC 83 EC 3C 53 8B D9 8B";
	CUIEngine::InvokeJSGenericCallback() = "55 8B EC 83 E4 F8 83 EC 24 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 1C";
	CUIEngine::OnJSScheduledFunction() = "55 8B EC 83 E4 F8 83 EC 1C 53 56 8B F1";
	CUIEngine::PaintWindows() = "55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 0C";
	CUIEngine::RegisterEventFilter() = "55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B";
	CUIEngine::RegisterEventHandler() = "55 8B EC 83 E4 F8 83 EC 24 53 8B D9";
	CUIEngine::RegisterForUnhandledEvent() = "55 8B EC 83 EC 30 53 8B D9 8B";
	CUIEngine::RegisterJSEventHandler() = "55 8B EC 83 EC 24 53 56 8B F1 8B";
	CUIEngine::RegisterScheduledDelegate() = "55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 3C CC";
	CUIEngine::RunFrame() = "55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 0F 31";
	CUIEngine::RunFunction() = "55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B";
	CUIEngine::RunScheduledDelegates() = "55 8B EC 83 EC 34 53 8B D9 8B";
	CUIEngine::UnregisterEventFilter() = "55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8D 45 08 50 8D";
	CUIEngine::UnregisterEventHandler() = "55 8B EC 83 E4 F8 83 EC 0C 53 89 4C 24 0C";
	CUIEngine::UnregisterForUnhandledEvent() = "55 8B EC 83 EC 0C 53 8B D9 8B";
	CUIEngine::UnregisterJSEventHandler() = "55 8B EC 83 EC 08 89 4D F8 8B";
	CUIEngine::UnregisterJSForUnhandledEvent() = "55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57 89 75 FC";
	CUIInputEngine::RunFrame() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? 8D";
	CUIPanel::AddStyleFlag() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC 85 C0 74 1C";
	CUIPanel::BApplyLayoutFile() = "55 8B EC 83 EC 1C 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 89 45 F8";
	CUIPanel::BApplyLayoutSnippet() = "8B 4D 08 8D 55 0E 83 C1 08 52 8B 01";
	CUIPanel::BApplyPanelDescription() = "55 8B EC 83 E4 F8 83 EC 4C 53 8B D9";
	CUIPanel::BCreateChildrenFromDescription() = "55 8B EC 83 EC 14 8B D1 8B";
	CUIPanel::BLoadLayout() = "55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56";
	CUIPanel::BSetProperty() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 18";
	CUIPanel::CUIPanel() = "55 8B EC 51 56 8B F1 57 C7";
	CUIPanel::Initialize() = "55 8B EC 51 56 57 8B F9 8B";
	CUIPanel::MarkStylesDirty() = "55 8B EC 53 56 8B F1 8B";
	CUIPanel::RemoveAndDeleteChildren() = "55 8B EC 51 53 56 8B F1 8B";
	CUIPanel::RemoveAndDeleteChildrenOfType() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CUIPanel::SetFocusInternal() = "55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 45 FC";
	CUIPanel::SetFocusToNextPanel() = "55 8B EC 83 E4 F8 83 EC 30 56 57 8B F9";
	CUIPanel::SetInputFocusToFirstOrLastChildInFocusOrder() = "88 58 14 7A 91 58 14 7A 9A";
	CUIPanel::Shutdown() = "55 8B EC 83 EC 1C 53 8B D9 8B";
	CUIRenderEngine::BeginFrame() = "55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CUIRenderEngine::EndFrame() = "55 8B EC 83 E4 F8 83 EC 14 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 44 24 14";
	CUISoundSystem::ServiceAudio() = "8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22 6A 04";
	CUIWindowInput::ProcessMouseTrackingResults() = "55 8B EC 83 EC 5C 53 56 57 8B F9 8B";
	CUIWindowInput::SetInputFocus() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 57";
	ClearPanelEvents() = "55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 89 7D FC";
	ConvertJpegToRGB() = "55 8B EC 83 EC 20 89 4D F4 0F 57 C0";
}

[SERVER.dll] {
	BacktrackEntity() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 30";
	CBaseAnimating::SetupBones() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8";
	CBaseEntity::EmitSound() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? A1 ? ? ? ? 56 8B F1 57 83 78 18 01";
	CBasePlayer::PhysicsSimulate() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 89 74 24 34";
	CBotManager::StartFrame() = "55 8B EC 83 E4 F8 83 EC 7C 53 8B D9 8B";
	CCSBot::BendLineOfSight() = "F3 ? ? ? ? ? ? ? ? E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC";
	CCSBot::ComputePartPositions() = "53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B";
	CCSBot::ComputePath() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 F3 ? ? ? ? 8B";
	CCSBot::FindMostDangerousThreat() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D D4 8B";
	CCSBot::GetPartPosition() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 C7 ? ? ? ? ? ? ? 66";
	CCSBot::IsEnemyPartVisible() = "55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B";
	CCSBot::Update() = "B3 01 E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 55 8B EC";
	CCSBot::UpdateLookAngles() = "66 90 4F C7";
	CCSBot::UpdateLookAround() = "55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 20";
	CCSBot::UpdatePathMovement() = "55 8B EC 83 E4 F0 83 EC 68 56 57 8B F9";
	CCSBot::UpdatePeripheralVision() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CCSBot::UpdateReactionQueue() = "8B ? ? ? ? ? ? 83 7D E4 00 74 D8";
	CCSBot::Upkeep() = "55 8B EC 83 EC 10 53 56 8B F1 8B ? ? ? ? ? 8B";
	CCSGOPlayerAnimState::Update() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 F3";
	CCSGameRules::CleanUpMap() = "55 8B EC 83 EC 14 8B C1 53 56 57 80";
	CCSGameRules::CreateEndMatchMapGroupVoteOptions() = "66 90 99 03 ? ? ? ? ? 34 29 05";
	CCSGameRules::TerminateRound() = "55 8B EC 83 E4 F8 83 EC 6C 53 56 57 8B F9 F3";
	CCSGameStats::IncrementStat() = "55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F 84 ? ? ? ? 80";
	CEconItem::BAddToMessage::std::string() = "55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CEconItemSchema::GetAttributeDefinitionByName() = "55 8B EC 8B 01 5D FF ? ? ? ? ? CC CC CC CC 55 8B EC 53";
	CEconItemView::GetStaticData() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16";
	CGCClient() = "55 8B EC 53 8B D9 8B ? ? ? ? ? 56 8B ? ? ? ? ? 85 F6";
	CInferno::InfernoThink() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B";
	CJobMgr::BResumeSleepingJobs() = "56 8B F1 57 8D ? ? ? ? ? E8 ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 8D";
	CJobMgr::BResumeYieldingJobs() = "55 8B EC 53 56 57 8B F1 FF";
	CNavArea::ComputeHeightChange() = "55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 8B";
	CNavArea::IsCompletelyVisibleToTeam() = "B3 01 EB DF CC CC CC CC CC CC CC CC CC 55 8B EC";
	CNavArea::IsPotentiallyVisibleToTeam() = "8A 5C C3 04 D0 EB 80 E3 01 EB D8 8A 5C C7 04";
	CNavMesh::FireGameEvent() = "55 8B EC 83 EC 20 53 56 57 8B F9 8B";
	CNavMesh::ForAllAreasOverlappingExtent() = "55 8B EC 83 EC 28 8B ? ? ? ? ? 53 8B";
	CNavMesh::GetNavArea() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 F3";
	CNavMesh::GetNearestNavArea() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B C1 0F 28 C3";
	CPhysicsHook::FrameUpdatePostEntityThink() = "55 8B EC 83 E4 F8 83 EC 08 56 8B F1 8B";
	CProtoBufMsg::BAsyncSendProto() = "55 8B EC 83 EC 1C 89 4D F8 8B";
	CStudioHdr::SelectWeightedSequenceFromModifiers() = "55 8B EC 83 EC 2C 53 56 8B 75 08 8B D9";
	FrameUpdatePostEntityThink() = "55 8B EC 83 EC 3C A1 ? ? ? ? 53";
	GCHost() = "55 8B EC 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 85 FF 74 16";
	GetExtendedServerInfoForNewClient() = "55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 E8";
	ModifyEyePosition() = "55 8B EC 83 E4 F8 83 EC 18 56 57 8B F9 8B 4F";
	ModifyLinks() = "55 8B EC 83 EC 1C A1 ? ? ? ? 53";
	NavAreaBuildPath() = "55 8B EC 83 E4 F8 83 EC 48 56 57 8B F9 89 54 24 14";
	PlayerByIndex() = "85 C9 7E 32 A1";
	RestoreEntityTo() = "55 8B EC 83 E4 C0 83 EC 74 53 56 8B F1";
	SetupWeaponAction() = "83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 8B F1 C6" - 9;
	StartLagCompensation() = "55 8B EC 83 E4 F8 83 EC 48 56 8B F1 C7";
	GetMessage() = "55 8B EC 51 8B ? ? ? ? ? 53 56 57 8B ? ? ? ? ? 89 75 FC";
}

[PANORAMAUICLIENT.dll] {
	CDebugLayout::AppendElementOpenTag() = "55 8B EC 81 ? ? ? ? ? 53 8B D9";
	CDebugLayout::Build() = "55 8B EC 83 E4 F8 83 EC 34 53 8B D9";
	CDebugPanelComputed::Build() = "55 8B EC 83 E4 C0 81";
	CDebugPanelStyle::AppendAnimations() = "55 8B EC 83 E4 F8 83 EC 4C 53 8B D9";
	CDebugPanelStyle::AppendCascadeStyles() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5C 24 5C";
	CDebugPanelStyle::AppendElementStyles() = "55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B";
	CDebugPanelStyle::AppendInheritedStyles() = "55 8B EC 83 EC 54 53 8B D9 8B";
	CDebugPanelStyle::AppendStyleInfoForProperty() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 58";
	CDebugPanelStyle::Build() = "55 8B EC 51 53 56 8B F1 8B";
	CDebugPanelStyle::GetStyleBuffer() = "55 8B EC 83 E4 F8 83 EC 14 53 8B D9 8B";
	CDebugPanelStyle::OnPanelStyleChanged() = "55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 DB 74 16";
	CGrid::CGrid() = "55 8B EC 83 E4 F8 83 EC 08 56 57 8B F1";
	CGrid::EventInputFocusSet() = "55 8B EC 51 51 53 56 8B F1 8B";
	CGrid::GetFocusedChildVisibleIndex() = "55 8B EC 83 EC 10 53 56 57 8B F9 8B ? ? ? ? ? 89 7D F8";
	CGrid::GetVisibleChild() = "55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF";
	CGrid::GetVisibleChildCount() = "56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C";
	CGrid::MotionTimeout() = "55 8B EC 83 EC 0C 53 56 8B F1 8B";
	CGrid::MoveSelection() = "55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 83";
	CGrid::OnLayoutTraverse() = "55 8B EC 83 E4 F8 83 EC 4C 53 56 8B F1";
	CGrid::SetFocusedChild() = "55 8B EC 83 E4 F8 83 EC 0C 53 8B D9";
	CGrid::UpdateChildPositions() = "55 8B EC 83 E4 F8 83 EC 78 56 57 8B F9";
	CGrid::UpdateVecVisible() = "55 8B EC 83 EC 0C 53 8B D9 8B ? ? ? ? ? 56";
	CHTML::Paint() = "56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 16 6A 04 6A 00 68 ? ? ? ? 6A 00 68 ? ? ? ? FF ? ? ? ? ? FF";
	CMoviePanel::Clear() = "55 8B EC 83 EC 10 53 56 8B F1 8B";
	CMoviePanel::Paint() = "55 8B EC 83 EC 18 53 56 57 8B F9 8B";
	CPanel2D::BSetProperty() = "55 8B EC 53 56 8B F1 8B";
	CPanel2D::Initialize() = "55 8B EC 83 E4 F8 51 53 56 57 8B F9";
	Clabel::OnMouseMove() = "55 8B EC F3 ? ? ? ? 83 EC 18 F3 0F 2C D1";
	UpdatePanelInfo() = "66 90 E3 15 22 7C 3F 16 22 7C 26 16";
}

[VSTDLIB.dll] {
	CCvar::FindCommandBase() = "55 8B EC A1 ? ? ? ? 56 8B F1 A8 01";
}

[FILESYSTEM_STDIO.dll] {
	CBaseFileSystem::Open() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9";
	CBaseFileSystem::Close() = "55 8B EC 83 E4 F8 83 EC 0C 53 56 57";
	CBaseFileSystem::Seek() = "83 ? ? ? ? ? ? 7E AD 8B 5C 24 0C";
	CBaseFileSystem::Tell() = "55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B";
	CBaseFileSystem::Size() = "55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85 FF 74 1C 6A 04";
	CBaseFileSystem::Read() = "55 8B EC 83 E4 F8 51 53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 89 44 24 0C";
	CBaseFileSystem::Write() = "55 8B EC 53 56 57 8B F9 8B";
	CBaseFileSystem::Truncate() = "55 8B EC 53 8B D9 8B ? ? ? ? ? 57 8B";
	CBaseFileSystem::FPrintf() = "55 8B EC B8 ? ? ? ? E8";
	CBaseFileSystem::Flush() = "55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B";
	CBaseFileSystem::ReadLine() = "55 8B EC 83 E4 F8 83 EC 0C 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 10";
	CBaseFileSystem::GetFileTime() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B";
	CBaseFileSystem::FileExists() = "55 8B EC 81 ? ? ? ? ? 53 56 8B F1";
	CBaseFileSystem::FindFileAbsoluteList() = "55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 0C";
	CBaseFileSystem::FindFirst() = "55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89 5D FC 8B ? ? ? ? ? 89 45 DC";
	CBaseFileSystem::FindNext() = "55 8B EC 83 EC 0C 53 8B D9 8B";
}

// Outdated signatures
	//BuildTransformations() = "55 8B EC 83 E4 F0 81 EC  E8 01 00 00 56 57"; 
	//CHLClient::CreateMove() = "55 8B EC 83 EC 08 FF 15 ? ? ? ? 84";
	//CHLClient::FrameStageNotify() = "55 8B EC 8B 0D A4 01 2C 15 8B 01 8B 80 74";
	//CNetChan::SendDatagram() = "55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 18";
	//C_BaseEntity::DrawBrushModel() = "68 ? ? ? ? 6A 00 68 ? ? ? ? FF 15 ? ? ? ? 8B 45" - 0x1C; 
	//C_CSPlayer::LookupSequence() = "85 C0 74 07 8B CE E8 ? ? ? ? 8B B6 ? ? ? ? 85 F6 74" - 0x18; 
	//DevShotGenerator_Usage() = "55 8B EC 51 56 57 8B F9 80 3F 00 74 7B 8B 35 ? ? ? ? 68 ? ? ? ? FF D6";
	//IsCarryingHostage() = "55 8B EC 8B 09 83 F9 FF"; 
