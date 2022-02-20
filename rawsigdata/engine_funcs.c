CheckUpdatingSteamResources()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 75 E4=vprof
CClientState::ConsistencyCheck()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 89=vprof
EndUpdateLightmaps()=83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 56 8B ? ? ? ? ? 85=vprof
COcclusionSystem::IsOccluded()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 18=vprof
COverlayMgr::RenderOverlays()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 10=vprof
CShadowMgr::ProjectShadow()=55 8B EC 83 E4 F8 83 EC 58 56 57=vprof
CShadowMgr::ProjectFlashlight()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 89 7C 24 10=vprof
CShadowMgr::RenderShadows()=81 ? ? ? ? ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 0B 8B ? ? ? ? ? 8B 01 FF 50 34 85 C0 74 BD=vprof
CShadowMgr::RenderProjectedTextures()=55 8B EC 53 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof
CShadowMgr::GenerateShadowRenderInfo()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45=vprof
CShadowMgr::SetFlashlightStencilMasks()=55 8B EC 51 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 16=vprof
CShadowMgr::RenderFlashlights()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 20=vprof
CShadowMgr::DrawVolumetrics()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 57 89 74 24 18=vprof
CShadowMgr::DrawFlashlightDecals()=55 8B EC 51 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45 FC 85 C0 74 1C=vprof
CShadowMgr::FlashlightDrawCallback()=55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 89 5D FC=vprof
CShadowMgr::DrawFlashlightDecalsOnDisplacements()=55 8B EC 83 E4 F8 51 53 8B D9 8B=vprof
CShadowMgr::DrawFlashlightDecalsOnSurfaceList()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 89 75 FC 8B=vprof
CShadowMgr::DrawFlashlightOverlays()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 8B ? ? ? ? ? 89=vprof
ViewDrawFade()=A1 ? ? ? ? B9 ? ? ? ? FF 60 2C CC CC CC 55 8B EC B9 ? ? ? ? A1 ? ? ? ? 5D FF 60=vprof
SendServerInfo()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56=vprof
SendSnapshot()=83 ? ? ? ? ? ? 7F DC=vprof
FillSignOnFullServerInfo()=55 8B EC 8B ? ? ? ? ? 53 8B ? ? ? ? ? 85 DB=vprof
CGameClient::SendHltvReplaySnapshot()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 89 75 DC=vprof
WriteDeltaEntities()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 55 F8=vprof
SendClientMessages()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 89 4C 24 08=vprof
FillServerInfo()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85=vprof
CBaseServer::RunFrame()=53 56 8B F1 8B ? ? ? ? ? 57 8B ? ? ? ? ? 85=vprof
DownloadManager::Queue()=55 8B EC 83 EC 0C 53 8B 5D 0C 8B=vprof
CHLTVClient::SendSnapshot()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57=vprof
CHLTVServer::AddNewDeltaFrame()=55 8B EC A1 ? ? ? ? 83 EC 10 53 56=vprof
CHLTVServer::ExpandDeltaFrameToFullFrame()=55 8B EC 83 EC 38 8B ? ? ? ? ? 53=vprof
CHLTVServer::AddNewFrame()=55 8B EC 83 EC 18 53 56 57 8B F9 8B ? ? ? ? ? 8B=vprof
CHLTVServer::RunFrame()=8B ? ? ? ? ? 8B 14 C2=vprof
CHLTVServer::UpdateTick()=55 8B EC 83 EC 14 53 56 8B F1 8B ? ? ? ? ? 57=vprof
CSteam3Client::RunFrame()=55 8B EC 83 EC 08 53 56 8A=vprof
SaveGameSlot()=55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? 56 8B F1 C7=vprof
LightcacheGet()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B C1 8B=vprof
CNetworkStringTableContainer::WriteBaselines()=55 8B EC 83 EC 60 53 56 8B F1 8B=vprof
CNetworkStringTableContainer::WriteUpdateMessage()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 89=vprof
CNetworkStringTableContainer::DirectUpdate()=55 8B EC 51 8B ? ? ? ? ? 8B ? ? ? ? ? 89 45=vprof
CStaticPropMgr::DrawStaticProps()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 F6=vprof
CEngine::Frame()=A1 ? ? ? ? B9 ? ? ? ? 8B 40 34 FF D0 85 C0 0F ? ? ? ? ? A1 ? ? ? ? A8=vprof
CEngineVGui::Simulate()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 1C 53 56=vprof
CEngineVGui::Paint()=55 8B EC 83 EC 40 53 8B D9 8B ? ? ? ? ? 89=vprof
void S3TCencode()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 4D=pdb
_CodeRGBBlock()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B 75 08 57 85 F6 C7=pdb
_CodeAlphaBlock()=81 ? ? ? ? ? 8B ? ? ? ? ? ? 53=pdb
_dynamic_initializer_for__g_ActiveSoundsLastUpdate__()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 68 ? ? ? ? A3=pdb
_dynamic_initializer_for__g_ProtobufLogHandler__()=68 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 83 C4 08 C3=pdb
_dynamic_initializer_for__cl_rate_var__()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? B9=pdb
_dynamic_initializer_for__g_ReleaseThreadReservation__()=6A 01 B9 ? ? ? ? FF=pdb
_dynamic_initializer_for__g_QueuedPacketSender__()=B9 ? ? ? ? FF ? ? ? ? ? 0F 57 C0=pdb
_dynamic_initializer_for__g_DebugTracesRemainingBeforeTrap__()=B9 ? ? ? ? FF ? ? ? ? ? 6A 00 B9 ? ? ? ? FF=pdb
_dynamic_initializer_for__LOG_StaticPropManager__()=FF ? ? ? ? ? 6A 03 6A 00=pdb
_dynamic_initializer_for__LOG_SERVER_LOG__()=FF ? ? ? ? ? 6A 00 6A 02 6A=pdb
_dynamic_initializer_for__vgui::Panel::m_MessageMap__()=55 8B EC 83 EC 10 C7 ? ? ? ? ? ? C7=pdb
output_message()=55 8B EC 8B 45 08 8D ? ? ? ? ? 81=pdb
reset_error_mgr()=55 8B EC 8B 4D 08 8B 01 C7=pdb
_jpeg_add_quant_table()=55 8B EC 53 56 57 8B F9 8B DA 83=pdb
_sscanf_0()=55 8B EC 83 E4 F8 8D 45 10=pdb
alloc_large()=55 8B EC 51 53 56 8B 75 08 57 8B 7D=pdb
alloc_sarray()=55 8B EC 51 53 8B 5D 08 33=pdb
free_pool()=55 8B EC 53 56 8B 75 0C 57 8B 7D 08 8B 5F=pdb
emit_marker()=53 56 8B F1 8B DA 8B 4E=pdb
emit_2bytes()=53 56 8B F1 8B DA 57 8B CB=pdb
emit_dac()=55 8B EC 83 EC 20 53 56 8B F1 0F=pdb
emit_sof()=53 56 57 8B F1 E8 ? ? ? ? 8B 46=pdb
emit_sos()=55 8B EC 51 56 BA=pdb
emit_jfif_app0()=56 BA ? ? ? ? 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B CE E8 ? ? ? ? 8B 4E 18 8B 01 C6 00 4A=pdb
emit_adobe_app14()=56 BA ? ? ? ? 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B CE E8 ? ? ? ? 8B 4E 18 8B 01 C6 00 41=pdb
write_marker_header()=55 8B EC 56 8B 75 08 57 8B 7D 10=pdb
write_marker_byte()=55 8B EC 8A 45 0C 56 8B 75=pdb
write_file_header()=55 8B EC 56 57 8B 7D 08 BA ? ? ? ? 8B=pdb
write_scan_header()=55 8B EC 51 53 56 8B 75 08 80=pdb
write_tables_only()=55 8B EC 53 56 8B 75 08 BA=pdb
emit_byte()=56 8B F2 8B 56=pdb
emit_restart()=55 8B EC 83 EC 0C 53 56 8B F1 8B DA 57 56=pdb
start_pass_prep()=55 8B EC 83 7D 0C 00 56=pdb
sep_downsample()=55 8B EC 83 EC 08 53 56 8B 75 08 C7=pdb
select_scan_parameters()=53 56 8B F1 57 8B ? ? ? ? ? 85 C9 74=pdb
prepare_for_pass()=55 8B EC 56 8B 75 08 57 8B ? ? ? ? ? 8B 47 10 83=pdb
pass_startup()=55 8B EC 56 8B 75 08 56 8B ? ? ? ? ? C6=pdb
finish_pass_master()=55 8B EC 56 57 8B 7D 08 57 8B=pdb
start_pass_coef()=55 8B EC 8B 4D 08 56 8B ? ? ? ? ? C7=pdb
compress_data()=55 8B EC 83 EC 30 8B 55=pdb
compress_output()=55 8B EC 83 EC 34 53 56 8B 75 08 57 33=pdb
rgb_ycc_start()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 4B=pdb
rgb_ycc_convert()=55 8B EC 83 EC 18 83 6D=pdb
rgb_gray_convert()=55 8B EC 83 EC 0C 8B 4D 08 53 8B ? ? ? ? ? 8B=pdb
cmyk_ycck_convert()=55 8B EC 83 EC 1C 83 6D=pdb
grayscale_convert()=55 8B EC 51 8B 45 08 53 8B 5D 18=pdb
null_convert()=55 8B EC 83 EC 08 8B 45 08 8B 55 18=pdb
_jinit_color_converter()=56 8B F1 57 6A 0C=pdb
jpeg_make_c_derived_tbl()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8A=pdb
emit_bits_s()=55 8B EC 51 8B 45 08 89 55=pdb
emit_bits_e()=55 8B EC 83 EC 08 53 8B 5D 08 89 55=pdb
emit_eobrun()=57 8B F9 8B ? ? ? ? ? 85 C0 0F ? ? ? ? ? 56=pdb
encode_mcu_DC_first_0()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 8B 43=pdb
encode_mcu_DC_refine_0()=55 8B EC 56 57 8B 7D 08 8B 47 18=pdb
finish_pass_gather()=55 8B EC 83 EC 10 53 56 8B 75 08 80=pdb
_jpeg_fdct_islow()=55 8B EC 83 EC 28 8B 45 08 33=pdb
_jpeg_fdct_2x2()=55 8B EC 53 56 57 68 ? ? ? ? 6A 00 FF 75 08 E8 ? ? ? ? 8B 75=pdb
_jpeg_fdct_1x1()=55 8B EC 56 8B 75 08 68 ? ? ? ? 6A 00 56 E8 ? ? ? ? 8B 45 0C 83 C4 0C 8B 08=pdb
_jpeg_fdct_10x10()=55 8B EC 83 EC 74 8B=pdb
_jpeg_fdct_11x11()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D D0=pdb
_jpeg_fdct_12x12()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D D0=pdb
_jpeg_fdct_13x13()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D D4=pdb
_jpeg_fdct_14x14()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D D4=pdb
_jpeg_fdct_15x15()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 89 4D C0=pdb
_jpeg_fdct_16x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D CC=pdb
_jpeg_fdct_16x8()=55 8B EC 83 EC 5C 8B 45 08=pdb
_jpeg_fdct_14x7()=55 8B EC 83 EC 54 8B 45 08=pdb
_jpeg_fdct_12x6()=55 8B EC 83 EC 44 53 8B 5D 08=pdb
_jpeg_fdct_10x5()=55 8B EC 83 EC 38 53 8B 5D 08=pdb
_jpeg_fdct_8x4()=55 8B EC 83 EC 2C 53 8B 5D=pdb
_jpeg_fdct_2x1()=55 8B EC 56 8B 75 08 68 ? ? ? ? 6A 00 56 E8 ? ? ? ? 8B 45 0C 83 C4 0C 8B 00=pdb
_jpeg_fdct_8x16()=55 8B EC 81 ? ? ? ? ? 8B 45 08 33 C9 53 56 57 89 4D DC=pdb
_jpeg_fdct_7x14()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 68=pdb
_jpeg_fdct_6x12()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 68=pdb
_jpeg_fdct_1x2()=55 8B EC 56 57 8B 7D 08 68 ? ? ? ? 6A=pdb
virtual float ConVar::GetFloat()=55 8B EC 51 8B 51 1C=pdb=CEmptyConVar=12
virtual int ConVar::GetInt()=8B 51 1C 3B D1 75 06=pdb
CUtlBuffer::~CUtlBuffer()=56 8B F1 83 7E 08 00 7C 20 8B 16 85 D2 74 13 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? C7 ? ? ? ? ? ? 5E=pdb
static bool CDmxSerializationDictionary::LessFunc()=55 8B EC 8B 45 08 8B 08 8B 45 0C 3B 08 0F 92 C0 5D C3=pdb
int CNetworkStringTable::GetUserDataSizeBits()=8B 41 28 C3=pdb
virtual int CAudioMixerWave::GetSamplePosition()=8B 41 10 C3=pdb
virtual int CSVCMsg_PaintmapData::GetCachedSize()=8B 41 0C C3=pdb
void google::protobuf::GoogleOnceInit()=55 8B EC 8B 4D 08 83 EC 0C 8B=pdb
_anonymous_namespace_::protobuf_RegisterTypes()=68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 83 C4 08=pdb
virtual void CMsgSteamDatagramGameserverPing::Clear()=80 79 2C 00 74 38=pdb
virtual void CMsgSteamDatagramDiagnostic::Clear()=8B 41 14 84=pdb=CNetMessagePB<22,class CSVCMsg_SplitScreen,0,1>=18
virtual void CSVCMsg_GameEventList::SetCachedSize()=55 8B EC 8B 45 08 89 41 18 5D=pdb
void CMsgSteamDatagramLinkLifetimeStats::MergeFrom()=55 8B EC 83 E4 F8 83 EC 30 56 57 8B 7D=pdb
virtual void CNETMsg_StringCmd::SetCachedSize()=55 8B EC 8B 45 08 89 41 0C 5D=pdb
virtual void CSVCMsg_Prefetch::Clear()=80 79 10 00 74 07=pdb=CEngineSoundClient=112
virtual void CNetworkStringTable::SetTick()=55 8B EC 8B 45 08 89 41 14 5D=pdb
virtual void CSVCMsg_SplitScreen::Clear()=80 79 18 00 74 15=pdb
virtual void CCLCMsg_BaselineAck::Clear()=80 79 14 00 74 0E=pdb=google::protobuf::DescriptorProto_ExtensionRange=3
virtual void CEngineSoundClient::GetActiveSounds()=55 8B EC FF 75 08 E8 ? ? ? ? 83 C4 04 5D=pdb
virtual bool CEngineSoundClient::IsMoviePlaying()=8A 41 04 C3=pdb
bool CBaseDemoAction::GetActionFired()=8A 41 08 C3=pdb
virtual void CEngineSoundClient::StopSoundByGuid()=55 8B EC FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 5D C2=pdb
virtual int CXboxSystem::SessionLeaveLocal()=33 C0 C2 14=pdb
virtual void CEngineSoundServer::GetActiveSounds()=68 ? ? ? ? FF ? ? ? ? ? 59 C2 04=pdb
virtual void near * CEngineSoundServices::LevelAlloc()=55 8B EC 6A 01 FF 75 0C=pdb
virtual void CEngineSoundServices::SetSoundFrametime()=55 8B EC 80 ? ? ? ? ? ? 74 0E=pdb=INetMessage=185
virtual float CEngineSoundServices::GetHostFrametime()=D9 41 04=pdb
virtual void CEngineSoundServices::EmitCloseCaption()=55 8B EC 8B ? ? ? ? ? 85 C9 74 16 F3=pdb
void ILocalize::ConstructString<wchar_t>()=55 8B EC 8B 4D 08 8D 55=pdb
virtual bool CBaseServer::IsActive()=83 79 04 02 0F 9D=pdb
CMPAException::~CMPAException()=56 8B F1 8B 56 0C 85=pdb=IVTFTexture=47689
float GetMP3Duration_Helper()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 64 ? ? ? ? ? ? 81 ? ? ? ? ? 53 56 57 89 65 F0 F3=pdb
void CMPAException::ShowError()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 57 68=pdb
bool CMPAHeader::SkipEmptyFrames()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 64 ? ? ? ? ? ? 51 53 56 57 89 65 F0 8B F1 83=pdb
CSosEntryMatch::CSosEntryMatch()=C6 01 0A=pdb
SpatializationInfo_t::SpatializationInfo_t()=C7 ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7=pdb
virtual void CFunctor0<void ()=8B 41 10 FF E0=pdb
void DAS_InitNodes()=56 68 ? ? ? ? 6A 00 68 ? ? ? ? E8=pdb
void DAS_ResetNodes()=B8 ? ? ? ? 66 ? ? ? ? ? ? ? ? ? ? C6=pdb
unsigned int FunctorExecuteThread()=55 8B EC 56 8B 75 08 8B CE 8B=pdb
float S_GetMasterVolume()=55 8B EC 83 EC 0C F3 ? ? ? ? ? ? ? 0F 57=pdb
void S_StopAllSoundsC()=6A 01 E8 ? ? ? ? 59 C3=pdb
void SoundInfo_t::Set()=55 8B EC 8B 45 08 8B 55 14=pdb
snd_set_master_volume()=55 8B EC 56 8B 75 08 83 3E 03=pdb
void AMP_Free()=55 8B EC 8B 45 08 85 C0 74 0D 6A 5C=pdb
int DFR_GetNext()=55 8B EC 8B 4D 08 83 EC 10 8B=pdb
void EFO_Free()=55 8B EC 8B 45 08 85 C0 74 0D 6A 74=pdb
void ENV_Free()=55 8B EC 8B 45 08 85 C0 74 10=pdb
void FLT_Free()=55 8B EC 56 8B 75 08 85 F6 74 5E=pdb
void LFO_Free()=55 8B EC 8B 45 08 85 C0 74 0D 6A 38=pdb
int NULL_GetNext()=55 8B EC 8B 45 0C 5D=pdb
virtual void COM_IOReadBinary::seek()=55 8B EC 8B 55 08 85 D2 74 14=pdb=CSfxTable=1389
ChannelVolComparator()=55 8B EC 8B 45 0C 8B 4D 08 8B=pdb
void SND_InitScaletable()=56 33 F6 BA ? ? ? ? 33=pdb
_MIX_FreeAllPaintbuffers()=8B ? ? ? ? ? 85 D2 0F ? ? ? ? ? 56 8B=pdb
_MIX_GetCurrentPaintbufferIndex()=8B ? ? ? ? ? 33 C0 8B ? ? ? ? ? 83 C1=pdb
_SND_MouthUpdateAll()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 57 C7=pdb
MXR_SetSoundMixer()=55 8B EC 8B 45 08 83 38 04 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 56 8B ? ? ? ? ? 57 FF ? ? ? ? ? 8B ? ? ? ? ? E8 ? ? ? ? A1=pdb
virtual bool CAudioSourceMP3::CanDelete()=83 79 20 00 0F=pdb
virtual bool CAudioSourceMP3::IsPlayOnce()=8A 41 24 24 01=pdb
virtual bool CAudioSourceMP3::IsSentenceWord()=8A 41 24 D0=pdb
virtual void CAudioSourceMP3::ReferenceAdd()=FF 41 20 C2=pdb
virtual void CAudioSourceMP3::ReferenceRemove()=56 8B F1 83 46 20=pdb=CAudioSourceMP3Cache=23
virtual int CAudioSourceWave::ZeroCrossingBefore()=55 8B EC 8B 45 08 5D=pdb
virtual int CSentenceMixer::GetMixSampleSize()=8B 49 08 85 C9 74 05 8B 01 FF 60 30=pdb
virtual int CSentenceMixer::GetSamplePosition()=8B 49 08 85 C9 74 05 8B 01 FF 60 14=pdb
virtual float CSentenceMixer::GetVolumeScale()=55 8B EC 51 83 79 08=pdb=CSentenceMixer=7
virtual float CSentenceMixer::ModifyPitch()=55 8B EC 83 79 08 00 74=pdb
virtual void CAudioMixerWave::SetPositionFromSaved()=55 8B EC 8B 01 5D FF 60 24=pdb
virtual void CSentenceMixer::SetSampleEnd()=55 8B EC 8B 49 08 85 C9 74 06 8B 01 5D FF 60 28=pdb
virtual void CSentenceMixer::SetSampleStart()=55 8B EC 8B 49 08 85 C9 74 06 8B 01 5D FF 60 24=pdb
virtual void CSentenceMixer::SetStartupDelaySamples()=55 8B EC 8B 49 08 85 C9 74 06 8B 01 5D FF 60 2C=pdb
virtual bool CSentenceMixer::ShouldContinueMixing()=83 79 08 00 0F 95=pdb
virtual void CEngineVoiceSteam::VoiceResetLocalData()=55 8B EC 69 ? ? ? ? ? ? 83=pdb=CEngineVoiceSteam=7
virtual bool CAsyncWavDataCache::Init()=55 8B EC 8B D1 B0=pdb=CAsyncWavDataCache=0
virtual void CAsyncWavDataCache::Shutdown()=56 8B F1 80 ? ? ? ? ? ? 74 2A=pdb=CAsyncWavDataCache=1
virtual void CAsyncWavDataCache::PrefetchCache()=55 8B EC 8B 01 6A 01 FF 75 10=pdb
virtual bool CAsyncWavDataCache::CopyDataIntoMemory()=55 8B EC 83 EC 08 56 57 8B 7D 08 8B F1=pdb=CAsyncWavDataCache=5
virtual void CAsyncWavDataCache::Unload()=55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 57=pdb
virtual void CAsyncWavDataCache::MarkBufferDiscarded()=55 8B EC 56 57 8B 7D 08 8D 71=pdb=CAsyncWavDataCache=15
virtual void CAsyncWavDataCache::UpdateLoopPosition()=55 8B EC 8B 55 08 8B 49=pdb
CAsyncWaveData::CAsyncWaveData()=56 57 8B F9 6A 2C=pdb
static void CAsyncWaveData::AsyncCallback()=55 8B EC 8B 45 08 8B 48 14 85=pdb
char const near * CAsyncWaveData::GetFileName()=83 79 48 00 8D=pdb
char const near * CWaveDataStreamAsync::GetFileName()=83 79 3C 00 8D=pdb
virtual int CWaveDataMemoryAsync::ReadSourceData()=55 8B EC FF 75 18 8B 49=pdb
void ShutdownPhononThread()=83 ? ? ? ? ? ? 74 39 B9=pdb
void CAsyncWaveData::StartAsyncLoading()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 8B F9 8D=pdb
virtual void CWaveDataHRTF::UpdateLoopPosition()=55 8B EC 8B 49 04 8B 01 5D FF 60 10=pdb
snd_async_showmem()=6A 03 B9=pdb
snd_async_showmem_music()=6A 01 B9 ? ? ? ? E8 ? ? ? ? C3=pdb
virtual int CAudioMixerWave::GetOutputData()=55 8B EC 56 FF 75 10 8B F1 FF 75 0C 8B 4E=pdb=CAudioMixerWave=17
virtual bool CAudioMixerWave::IsReadyToMix()=8B 49 20 8B 01=pdb
char near * CAudioMixerWave::LoadMixBuffer()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 C7 ? ? ? ? ? ? 57=pdb
virtual int CAudioMixerWave::MixDataToDevice()=55 8B EC 6A 00 FF 75 14 FF 75 10 FF 75 0C FF 75 08 E8 ? ? ? ? 5D=pdb
virtual float CAudioMixerWave::ModifyPitch()=55 8B EC D9 45 08 5D=pdb
virtual void CAudioMixerWave::SetSampleEnd()=55 8B EC 8B 45 08 85 C0 56=pdb=CAudioMixerWave=10
virtual void CCLCMsg_FileCRCCheck::SetCachedSize()=55 8B EC 8B 45 08 89 41 34=pdb
virtual bool CAudioMixerWave::ShouldContinueMixing()=80 79 30 00 0F=pdb
virtual int CAudioMixerWave::SkipSamples()=55 8B EC 56 57 8B F9 8B 07=pdb
virtual int CAudioMixerWaveADPCM::GetMixSampleSize()=8B 41 38 85 C0 74 07=pdb
virtual int CAudioMixerWaveADPCM::GetOutputData()=55 8B EC 57 8B F9 8B 47=pdb
virtual int CAudioMixerWaveMP3::GetMixSampleSize()=8B ? ? ? ? ? 03 C0 C3=pdb
virtual int CAudioMixerWaveMP3::GetPositionForSave()=8B 49 3C 8B 01 FF 60 14=pdb
virtual int CAudioMixerWaveMP3::GetStreamOutputRate()=8B 49 3C 8B 01 FF 60 0C=pdb
virtual bool CAudioSourceWave::CanDelete()=83 79 54 00 0F=pdb
void CAudioSourceWave::ConvertSamples()=55 8B EC 56 8B F1 83 7E 10 01=pdb
virtual int CAudioSourceStreamWave::GetCacheStatus()=83 79 2C 00 74 0C=pdb
virtual int CAudioSourceStreamWave::GetLoopingInfo()=55 8B EC 8B 55 08 85 D2 74 06=pdb=CAudioSourceCachedInfo=7
virtual int CAudioSourceWave::GetQuality()=81 ? ? ? ? ? ? 75 05 0F=pdb
virtual bool CAudioSourceWave::IsLooped()=8B 41 18 C1 E8 1F=pdb
virtual bool CAudioSourceWave::IsPlayOnce()=8B 41 50 D1=pdb
virtual bool CAudioSourceWave::IsStereoWav()=83 79 0C 02=pdb
virtual bool CAudioSourceWave::IsVoiceSource()=56 8B F1 8B 06 FF 50 48 85=pdb=CAudioSourceStreamWave=6
virtual void CAudioSourceWave::ReferenceAdd()=FF 41 54=pdb
virtual void CAudioSourceWave::ReferenceRemove()=56 8B F1 83 46 54=pdb=CAudioSourceStreamWave=23
virtual int CAudioSourceWave::SampleCount()=8B 41 44 C3=pdb
virtual void CAudioSourceStreamWave::UpdateSamples()=55 8B EC 8B 45 08 56 8B F1 83 7E=pdb=CAudioSourceCachedInfo=6
movie_fixwave()=55 8B EC 81 ? ? ? ? ? 57 8B 7D 08 83 3F=pdb
void S_UnblockSound()=8B ? ? ? ? ? 85 C9 74 05 8B 01 FF 60 10=pdb
void CSosManagedEntryMatch::Print()=53 56 8B ? ? ? ? ? 57 6A 00 FF=pdb
void CSosOperator::OffsetConnections()=55 8B EC 83 EC 08 8B D1 57=pdb
void CSosOperator::PrintBaseParams()=55 8B EC 51 8B 45 10 53 56 8B 75=pdb
Register_LOG_SND_OPERATORS_Tags()=68 ? ? ? ? FF ? ? ? ? ? 68 ? ? ? ? FF ? ? ? ? ? 83 C4 08 C3=pdb
virtual void CSosOperatorDashboard::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C6 40 0C=pdb
virtual void CSosOperatorDelta::Execute()=55 8B EC 8B 45 08 F3 ? ? ? ? 0F 28=pdb=CSosOperatorDelta=3
virtual void CSosOperatorEntityInfo::Execute()=55 8B EC 56 8B 75 08 57 F3=pdb
virtual void CSosOperatorEntityInfo::SetDefaults()=55 8B EC 56 8B 75 08 C7=pdb
virtual void CSosOperatorFloatFilter::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 5D=pdb=CSosOperatorFloatFilter=1
virtual void CSosOperatorLogicSwitch::Execute()=55 8B EC 8B 45 08 F3 ? ? ? ? 0F ? ? ? ? ? ? 76=pdb=CSosOperatorLogicSwitch=3
virtual void CSosOperatorRemapValue::Execute()=55 8B EC 8B 4D 08 F3 ? ? ? ? F3 ? ? ? ? 0F 2F CA=pdb=CSosOperatorRemapValue=3
virtual void CSosOperatorCurve4::Print()=55 8B EC 57 FF 75 14 8B 7D 08 FF 75 10 FF 75 0C 57 E8 ? ? ? ? 6A 00 FF ? ? ? ? ? FF ? ? ? ? ? 83 C4 08 84 C0 74 36=pdb
virtual void CSosOperatorFloat::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 5D=pdb=CSosOperatorFloat=1
virtual void CSosOperatorMixGroup::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C6 40 10=pdb=CSosOperatorMixGroup=1
virtual void CSosOperatorMixLayer::Print()=55 8B EC 56 8B 75 08 57 FF 75 14 FF 75 10 FF 75 0C 56 E8 ? ? ? ? 8B 46 14=pdb
virtual void CSosOperatorIncrementOpvarFloat::Print()=55 8B EC 57 FF 75 14 8B 7D 08 FF 75 10 FF 75 0C 57 E8 ? ? ? ? 6A 00 FF ? ? ? ? ? FF ? ? ? ? ? 83 C4 08 84 C0 74 28 8D 47 1C=pdb=CSosOperatorIncrementOpvarFloat=4
virtual void CSosOperatorGetOpvarFloat::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
virtual void CSosOperatorSetOpvarFloat::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C6 40 14=pdb
virtual void CSosOperatorOutput::Print()=55 8B EC 56 8B 75 08 57 FF 75 14 FF 75 10 FF 75 0C 56 E8 ? ? ? ? 8B 46 5C=pdb
virtual void CSosOperatorViewInfo::Execute()=55 8B EC 56 57 8B 7D 08 F3=pdb
virtual void CSosOperatorPosVec8::Execute()=55 8B EC 8B 55 08 56 F3=pdb=CSosOperatorPosVec8=3
virtual void CSosOperatorSourceInfo::Print()=55 8B EC 56 8B 75 08 57 8B 7D 14=pdb=CSosOperatorSourceInfo=4
virtual void CSosOperatorStartEntry::Print()=55 8B EC 56 8B 75 14 57 8B 7D 08 56 FF 75 10 FF 75 0C 57 E8 ? ? ? ? 6A=pdb
virtual void CSosOperatorStartEntry::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb=CSosOperatorStartEntry=1
virtual void CSosOperatorGetTrackSyncPoint::Print()=55 8B EC 53 56 8B 75 08 57 8B 7D 14=pdb
virtual void CSosOperatorPlayOnTrack::SetDefaults()=55 8B EC 8B 45 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb=CSosOperatorPlayOnTrack=1
virtual void CSosOperatorStopTrack::SetDefaults()=55 8B EC 8B 45 08 C6=pdb
virtual void CSosOperatorPrintFloat::Execute()=55 8B EC 6A 00 FF ? ? ? ? ? FF ? ? ? ? ? 83=pdb
CSosOperatorStack::CSosOperatorStack()=55 8B EC 8B D1 C7=pdb
void CSosOperatorStack::GetTrackData()=55 8B EC FF 75 08 FF ? ? ? ? ? E8=pdb
void CSosOperatorStackCollection::Print()=53 56 57 8B ? ? ? ? ? 8B F1 6A=pdb
void CSosOperatorStack::SetScriptHash()=55 8B EC 8B 45 08 8D 55=pdb
void CSosOperatorStackList::SetStopType()=55 8B EC 8B 11 8B 45=pdb
void CSosOperatorStack::Shutdown()=55 8B EC 51 53 56 8B F1 33 DB 33=pdb
void VoiceTweak_SetControlFloat()=55 8B EC 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 8B 45=pdb
VoiceRecord_ForceAdvanceSampleOffsetUsingPlatTime()=55 8B EC F2 ? ? ? ? ? ? ? 83 EC 08 66=pdb
void CMixerControls::FindMicSelectControl()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 0C 8B D9 69=pdb
virtual bool CMixerControls::GetValue_Float()=55 8B EC 8B 55 08 83 FA 02 0F=pdb
virtual void VoiceRecord_DSound::Idle()=56 8B F1 83 7E 0C 00 74 15=pdb=VoiceRecord_DSound=4
virtual bool VoiceRecord_DSound::RecordStart()=55 8B EC 83 EC 08 56 8B F1 83 7E 0C=pdb=VoiceRecord_DSound=2
virtual bool CAudioSourceVoice::CanDelete()=83 79 5C 00 0F=pdb
virtual void CAudioSourceVoice::ReferenceAdd()=FF 41 5C=pdb
virtual void CAudioSourceVoice::ReferenceRemove()=FF 49 5C=pdb
VOX_ListClear()=8B ? ? ? ? ? 85 D2 74 1D 56=pdb
virtual long CMMNotificationClient::QueryInterface()=55 8B EC 8B 4D 0C BA=pdb
std::exception::exception()=55 8B EC 56 8B F1 0F 57 C0 8D=pdb
virtual std::exception::~exception()=8D 41 04 C7 ? ? ? ? ? 50=pdb
virtual void CBaseClientState::Connect()=55 8B EC FF 75 10 6A=pdb
virtual void CBaseClientState::ConnectionStop()=56 8B F1 8B 4E 08 85 C9 74 06 8B 01 6A 01 FF 10 C7 ? ? ? ? ? ? 8B 4E 0C 85 C9 74 06 8B 01 6A 01 FF 10 C7 ? ? ? ? ? ? 8B 4E 10=pdb
virtual void CBaseClientState::FileRequested()=55 8B EC 57 8B F9 8B ? ? ? ? ? 8B=pdb
virtual int CSVCMsg_ServerInfo::GetCachedSize()=8B 41 5C C3=pdb
virtual unsigned __int64 CServerMsg::GetResult()=8B 41 50 8B 51=pdb
virtual bool CServerMsg::IsFinished()=83 79 08 01=pdb
virtual bool CGame::IsActiveApp()=8A 41 34 C3=pdb
static bool CProfileHierarchyPanel::PanelsLessFunc()=55 8B EC 8B 45 08 8B 08 8B 45 0C 3B 08 0F 9C=pdb
bool CBaseClientState::NETMsg_SignonState()=55 8B EC 8B 45 08 8B 11 50=pdb
virtual bool CBaseClientState::NETMsg_StringCmd()=55 8B EC 8B 45 08 81 ? ? ? ? ? 56 8B 70=pdb
virtual bool CBaseClientState::NETMsg_Tick()=55 8B EC 56 8B 75 08 F3=pdb
bool CBaseClientState::SVCMsg_Print()=55 8B EC 8B 45 08 8B 40 08 83=pdb
virtual bool CBaseClientState::SVCMsg_SetPause()=55 8B EC 8B 45 08 8A 40=pdb
void __scrt_throw_std_bad_array_new_length()=55 8B EC 83 EC 0C 8D 4D F4 E8=pdb
virtual char const near * std::exception::what()=8B 49 04 B8=pdb
CMeshBuilder::CMeshBuilder()=C7 ? ? ? ? ? ? ? ? ? 8B C1 C6=pdb
static int CBrushBatchRender::SurfaceCmp()=55 8B EC 8B 45 08 8B 4D 0C 8B=pdb
FloatBitMap_t::FloatBitMap_t()=56 8B F1 68 ? ? ? ? 68 ? ? ? ? 8D ? ? ? ? ? 50 E8 ? ? ? ? 68=pdb
void CVertexBuilder::AttachBegin()=55 8B EC 8B 45 08 8B D1 53 8B=pdb
void ClientDLL_HudVidInit()=8B ? ? ? ? ? 8B 01 FF 60 24=pdb
virtual bool CEngineClient::DoesLevelContainWater()=A1 ? ? ? ? 83 78 18 00=pdb
virtual void CEngineClient::EnablePaintmapRender()=8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 44 85 C0 74 0D=pdb
virtual int CEngineClient::GetBugSubmissionCount()=8B ? ? ? ? ? 85 C9 74 05 8B 01 FF 60 14=pdb
virtual void CEngineClient::GetChapterName()=55 8B EC 8B ? ? ? ? ? 6A 01 83=pdb=CEngineClient=51
virtual int CEngineClient::GetDemoPlaybackStartTick()=8B ? ? ? ? ? 8B 01 FF 60 08=pdb
virtual int CEngineClient::GetDemoPlaybackTotalTicks()=8B ? ? ? ? ? 8B 01 FF 50 04 8B C8 8B 10 FF 62=pdb
virtual int CEngineClient::GetDemoRecordingTick()=8B ? ? ? ? ? 8B 01 FF 60 2C=pdb
virtual float CEngineClient::GetLastTimeStamp()=E8 ? ? ? ? D9 ? ? ? ? ? C3=pdb
virtual class Vector CEngineClient::GetLightForPoint()=55 8B EC 8B 11 6A=pdb
virtual float CEngineClient::GetSafeZoneXMin()=55 8B EC 51 8B ? ? ? ? ? 56 C7=pdb=CEngineClient=223
virtual void CEngineClient::GetScreenSize()=55 8B EC 8B ? ? ? ? ? 56 8B 01 FF=pdb=CEngineClient=5
virtual float CEngineClient::GetSentenceLength()=55 8B EC 56 8B 75 08 85 F6 74 42=pdb=CEngineClient=16
virtual void CEngineClient::HideLoadingPlaque()=80 ? ? ? ? ? ? 75 0E 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 8B=pdb
virtual bool CVEngineServer::IsActiveApp()=8B ? ? ? ? ? 8B 01 8B 40 3C FF E0=pdb
virtual bool CEngineClient::IsDemoSkipping()=8B ? ? ? ? ? 8B 01 8B 40 1C FF E0=pdb
virtual bool CBaseServer::IsLoading()=83 79 04 01 0F 94=pdb
virtual bool CNetChan::IsPlayback()=8B ? ? ? ? ? 8B 01 8B 40 10 FF E0=pdb
virtual bool CEngineClient::IsPlayingTimeDemo()=8B ? ? ? ? ? 8B 01 8B 40 18 FF E0=pdb
virtual bool CEngineClient::IsStreaming()=55 8B EC 8B 4D 08 85 C9 74 0B=pdb
virtual int CEngineClient::LevelLeafCount()=A1 ? ? ? ? 8B 40 10 C3=pdb
virtual float CEngineClient::LightStyleValue()=55 8B EC 8B 45 08 66 ? ? ? ? ? ? ? ? 0F 5B=pdb=CEngineClient=45
virtual void CEngineClient::Mat_Stub()=55 8B EC 8B ? ? ? ? ? 8B 55 08=pdb=CEngineClient=50
virtual void CEngineClient::ResetDemoInterpolation()=8B ? ? ? ? ? 8B 01 8B 40 28 FF D0 84 C0 74 0B=pdb=CEngineClient=134
virtual void CEngineClient::ServerCmd()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? FF 75 08 68 ? ? ? ? 68 ? ? ? ? 50 E8 ? ? ? ? 83=pdb=CEngineClient=6
virtual void CEngineClient::SetBlurFade()=55 8B EC 8B ? ? ? ? ? F3 ? ? ? ? 51 F3 ? ? ? ? 8B 01 FF ? ? ? ? ? 5D=pdb
virtual void CEngineClient::SetLeafFlag()=55 8B EC A1 ? ? ? ? 8B 4D 08 C1 E1 06 8B 40=pdb
virtual int CBroadcastPlayer::GetPlaybackDeltaTick()=A1 ? ? ? ? 2B 41=pdb
virtual bool CBroadcastPlayer::IsSkipping()=80 ? ? ? ? ? ? 74 0C 83 ? ? ? ? ? ? 74=pdb
virtual void CBroadcastPlayer::OnDemoStreamStop()=80 ? ? ? ? ? ? 74 07 C6 ? ? ? ? ? ? C7=pdb
virtual void CBroadcastPlayer::StopPlayback()=C7 ? ? ? ? ? ? ? ? ? 81 ? ? ? ? ? E8=pdb
void CL_BenchFrame_f()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 83 3E 04=pdb
void CL_ListDemo_f()=55 8B EC 8B 45 08 81 ? ? ? ? ? 83=pdb
virtual bool CDemoPlayer::IsSkipping()=8B D1 80 ? ? ? ? ? ? 74 26=pdb
virtual void CDemoPlayer::ListHighlightData()=56 8B F1 83 ? ? ? ? ? ? 7E 5F=pdb
virtual void CDemoRecorder::RecordCustomData()=55 8B EC 56 57 8B F9 8B 47 04=pdb=CDemoRecorder=6
virtual void CDemoRecorder::RecordMessages()=55 8B EC 81 ? ? ? ? ? 83 39=pdb=CDemoRecorder=2
void democmdinfo_t::Reset()=C7 ? ? ? ? ? 8B 41 04=pdb
virtual void CDemoPlayer::SetHighlightXuid()=55 8B EC 8B 55 08 8B C2 53=pdb
virtual void CDemoPlayer::SetImportantEventData()=55 8B EC 56 8B F1 8B 4D 08 E8 ? ? ? ? 89=pdb
virtual void CDemoPlayer::SetPacketReadSuspended()=55 8B EC 8A 45 08 38 ? ? ? ? ? 74 1B=pdb=CDemoPlayer=20
demo_info()=8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 84 C0 75 0F=pdb
demo_listhighlights()=8B ? ? ? ? ? 8B 01 FF 60 6C=pdb
demo_listimportantticks()=8B ? ? ? ? ? 8B 01 FF 60 68=pdb
demo_pause()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? 83 38 02 75 16=pdb
demo_resume()=8B ? ? ? ? ? 8B 01 FF 60 38=pdb
demo_timescale()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? 83 38 02 75 29=pdb
demo_togglepause()=8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 84 C0 74 27=pdb
stop()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 8B 40 28=pdb
virtual void CEngine::SetQuitting()=55 8B EC 8B 45 08 89 41 04 5D=pdb
virtual void CDemoActionSkipAhead::SaveKeysToBuffer()=55 8B EC 53 56 8B 75 0C 8B D9 57 8B 7D 08 56=pdb
virtual bool CDemoActionCDTrackStart::Init()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 84 C0 75 05 5E 5D C2 04 00 8B 4D 08 6A=pdb=CDemoActionCDTrackStart=1
virtual bool CDemoActionZoom::Init()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 84 C0 75 06 5F 5E 5D C2 04 00 6A 01=pdb
virtual int CBaseClient::GetEventDebugID()=8B 41 4C C3=pdb
virtual bool vgui::Panel::LookupElementBounds()=32 C0 C2 14=pdb
virtual void CBaseActionEditDialog::OnCancel()=56 8B F1 80 ? ? ? ? ? ? 74 10=pdb=CBaseActionZoomDialog=280
virtual void CBaseActionStopPlaybackDialog::Init()=56 8B F1 6A 00 6A 00 6A 00 8B 06 68 ? ? ? ? FF ? ? ? ? ? 8B CE 5E=pdb
virtual void CBaseActionSkipAheadDialog::Init()=56 57 8B F9 6A 00 6A 00 6A 00 8B 07 68 ? ? ? ? FF ? ? ? ? ? 8B CF E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 80=pdb
virtual void CDemoActionManager::SetDirty()=C6 41 34 01 C2=pdb
virtual void CDemoActionManager::StopPlaying()=53 56 57 8B F9 33 F6 8B 5F 10 85 DB 7E 12 66 90 8B 47=pdb=CDemoActionManager=4
Ease_Out()=55 8B EC D9 45 08 DC=pdb
void CDemoSmootherPanel::OnOriginEaseCurve()=55 8B EC 83 EC 2C 57 8B F9 80=pdb
void CDemoSmootherPanel::OnPreview()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 8B 01=pdb
void CDemoSmootherPanel::OnSaveKey()=57 8B F9 80 ? ? ? ? ? ? 74 6C=pdb
void CDemoSmootherPanel::OnSelect()=55 8B EC 83 EC 4C 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 84 C0 0F ? ? ? ? ? C6=pdb
void CDemoSmootherPanel::OnTogglePause()=80 ? ? ? ? ? ? 74 10 80 ? ? ? ? ? ? 0F=pdb
void CDemoSmootherPanel::Reset()=56 8B F1 8D ? ? ? ? ? 50 E8=pdb
void CDemoSmootherPanel::WipeRedo()=56 8B F1 8B ? ? ? ? ? 39 ? ? ? ? ? 0F ? ? ? ? ? 53=pdb
virtual void CDemoUIPanel::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 6A=pdb
void CDemoUIPanel::GetCurrentView()=56 8B F1 8B ? ? ? ? ? 8B 11 8D ? ? ? ? ? 50 FF 52 20=pdb
void CDemoUIPanel::HandleInput()=55 8B EC 83 EC 40 8A=pdb
void CFogUIPanel::InitControls()=57 8B F9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 56 6A=pdb
void CFogUIPanel::UpdateFarZSlider()=56 57 8B F9 6A 01 8B ? ? ? ? ? 8B ? ? ? ? ? 8B 30 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 50 FF ? ? ? ? ? 5F=pdb
void CFogUIPanel::UpdateFogColors()=53 8B D9 56 57 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb
bool CL_IsRecordingMovie()=80 ? ? ? ? ? ? 0F 95 C0 C3=pdb
CL_SoundMessageLessFunc()=55 8B EC 8B 45 08 8B 48 34=pdb
virtual void CCallbackImpl<9>::Run()=55 8B EC 8B 01 FF 75 08 FF 50 04 5D=pdb
box()=55 8B EC 83 EC 1C 53 8B 5D 08 83=pdb
cl_showents()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 56 33=pdb
virtual void CMessage::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 6A 00 8B=pdb
virtual void CRConVProfExport::GetBudgetGroupTimes()=55 8B EC 56 57 8B F1 BF=pdb=CRConVProfExport=7
virtual bool CSplitScreen::AddBaseUser()=55 8B EC 8B 55 08 8B 44=pdb
virtual int CSplitScreen::GetSplitScreenPlayerEntity()=55 8B EC 8B 45 08 85 C0 78 1C 3B ? ? ? ? ? 7D 14 8B=pdb
virtual bool CSplitScreen::IsDisconnecting()=55 8B EC 8B 45 08 85 C0 78 1A=pdb
virtual bool CSplitScreen::IsValidSplitScreenSlot()=55 8B EC 8B 45 08 85 C0 78 12=pdb=IVProfData=18
virtual int CSplitScreen::NextValidSplitScreenSlot()=55 8B EC 8B 45 08 56 8B ? ? ? ? ? 40=pdb=IVProfData=20
virtual void CSplitScreen::SetDisconnecting()=55 8B EC 8B 45 08 85 C0 78 22=pdb
virtual void CSplitScreen::Shutdown()=53 56 57 8D 71=pdb
Callback_SteamAPIWarningMessageHook()=55 8B EC 83 7D 08 00 75 0E=pdb
CAutoMatSysDebugMode::~CAutoMatSysDebugMode()=56 57 8B F9 8B ? ? ? ? ? 6A 00=pdb
static bool CDefOps<unsigned short>::LessFunc()=55 8B EC 8B 45 08 66 8B=pdb
virtual void vgui::ListPanel::OnSliderMoved()=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE 5E=pdb
virtual bool CTextureListPanel::ShouldDraw()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 75 12 A1=pdb=CTextureListPanel=279
bool CTextureListPanel::UpdateDisplayedItem()=55 8B EC 51 53 56 57 8B 7D 08 8B CF=pdb
virtual void CClientState::Clear()=56 8B F1 E8 ? ? ? ? 6A FF=pdb
virtual int CCLCMsg_FileCRCCheck::GetCachedSize()=8B 41 34 C3=pdb
int CClientState::LookupModelIndex()=55 8B EC 8B ? ? ? ? ? 85 C9 75 07=pdb
CClientFrame::CClientFrame()=56 8B F1 8D 46 10=pdb
virtual CClientFrame::~CClientFrame()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0F=pdb
CColorBalanceOperation::CColorBalanceOperation()=F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 56=pdb
CLevelsColorOperation::CLevelsColorOperation()=55 8B EC 8B 45 08 56 8B F1 C7 ? ? ? ? ? 89 ? ? ? ? ? C7=pdb
void CColorOperationList::Apply()=55 8B EC 83 EC 18 53 57=pdb
virtual float CSelectedHSVOperation::GetBlendFactor()=D9 41 4C=pdb
virtual void CPrecisionSlider::GetTrackRect()=55 8B EC 83 EC 08 56 8B F1 8D 4D F8 51 8D 4D FC 51 8B 06 8B CE FF ? ? ? ? ? 8B 45 08 66=pdb=CPrecisionSlider=230
virtual void CSelectedHSVUIPanel::Init()=8B ? ? ? ? ? 6A 01 68 ? ? ? ? 68=pdb
virtual bool CSelectedHSVOperation::IsEnabled()=8A 41 50 C3=pdb
virtual void CPerfUIPanel::OnKeyCodeTyped()=55 8B EC 8B 45 08 83 F8 46=pdb=CColorCorrectionUIPanel=122
virtual void CPrecisionSlider::OnTextNewLine()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8D ? ? ? ? ? 68 ? ? ? ? 52=pdb=CPrecisionSlider=236
virtual void CColorOperationListPanel::OnThink()=56 8B F1 E8 ? ? ? ? 80 ? ? ? ? ? ? 8B=pdb=CColorOperationListPanel=101
virtual void CColorBalanceOperation::Release()=85 C9 74 14 68=pdb
virtual void CCurvesColorOperation::Release()=56 8B F1 85 F6 74 19=pdb=CCurvesColorOperation=1
virtual void CLevelsColorOperation::Release()=68 ? ? ? ? 51 E8 ? ? ? ? 83 C4 08 C3=pdb
virtual void CSelectedHSVOperation::Release()=56 8B F1 85 F6 74 1E 8D=pdb=CSelectedHSVOperation=1
void CSelectedHSVUIPanel::ResetHSVSliders()=55 8B EC 83 EC 08 56 8B F1 6A 01=pdb
void CColorOperationListPanel::ResetSlider()=55 8B EC 51 56 8B F1 57 6A 00 8B=pdb
void CColorBalanceUIPanel::ResetSliders()=53 8B D9 83 ? ? ? ? ? ? 74=pdb
virtual void CPrecisionSlider::SetEnabled()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 5E=pdb
virtual void CSelectedHSVOperation::SetEnabled()=55 8B EC 8A 45 08 88 41 50=pdb
virtual void CPrecisionSlider::SetValue()=55 8B EC 81 ? ? ? ? ? 56 FF 75 0C=pdb=CPrecisionSlider=211
void ShowHideColorCorrectionUI()=8B ? ? ? ? ? 85 C9 75 27 FF=pdb
virtual void CConPanel::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 6A 00 68 ? ? ? ? FF 50 0C 89 ? ? ? ? ? 8B=pdb
void Con_LogDumpChannels_f()=55 8B EC 81 ? ? ? ? ? 53 8B ? ? ? ? ? 56 6A=pdb
int CConPanel::ProcessNotifyLines()=55 8B EC 83 EC 18 53 56 57 8B F9 33=pdb
void LeafvisChanged()=56 8B ? ? ? ? ? 85 F6 74 24 8D=pdb
virtual int CIVDebugOverlay::ScreenPosition()=55 8B EC 83 EC 10 53 FF ? ? ? ? ? 8B=pdb
OverlayText_t::OverlayText_t()=C7 ? ? ? ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? C7=pdb
void CDebugOverlay::DestroyOverlay()=55 8B EC 56 FF ? ? ? ? ? 8B=pdb
virtual char CDiskDemoBuffer::GetChar()=55 8B EC 83 EC 0C 53 56 6A=pdb
virtual bool CDiskDemoBuffer::IsValid()=8B 41 04 85 C0 74 09=pdb
virtual char const near * ConVar::GetBaseName()=8B 41 04 8B 40 0C C3=pdb
virtual int CDiskDemoBuffer::TellMaxPut()=8B 41 04 8B 40 1C=pdb
CDemoFile::CDemoFile()=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? ? ? ? C3=pdb
virtual CDemoFile::~CDemoFile()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 25=pdb
virtual void CDemoFile::Close()=56 8B F1 8B ? ? ? ? ? 85 C9 74 06=pdb
virtual float CDemoFile::GetTicksPerFrame()=55 8B EC 51 8B ? ? ? ? ? 99=pdb
virtual float CDemoFile::GetTicksPerSecond()=55 8B EC 51 66 ? ? ? ? ? ? ? 0F=pdb=CDemoFile=5
virtual bool CDemoFile::IsOpen()=8B ? ? ? ? ? 85 C9 74 0E 8B 01 8B 40 0C=pdb
void CDemoFile::WriteFileBytes()=55 8B EC 81 ? ? ? ? ? 53 57 89=pdb
void CDemoFile::WriteRawData()=55 8B EC 51 57 8B F9 8D 4D FF 68 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? FF=pdb
CDemoStreamHttp::CStartRequest::CStartRequest()=C6 41 04 00 8B C1 C7=pdb
void CDispInfo::SpecifyBuildableDynamicMesh()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF ? ? ? ? ? 8B F0 89 75 F8 85 F6 74 07 8B 06 8B CE FF 50 08 8B=pdb
void CDispInfo::SpecifyDynamicMesh()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF ? ? ? ? ? 8B F0 89 75 F4=pdb
void CDispInfo::SpecifyWalkableDynamicMesh()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF ? ? ? ? ? 8B F0 89 75 F8 85 F6 74 07 8B 06 8B CE FF 50 08 FF=pdb
void CDispInfo::UpdateBoundingBox()=56 8B ? ? ? ? ? 33 D2 C7=pdb
void CVertexBuilder::AdvanceVertices()=55 8B EC 8B 55 08 01=pdb
virtual void CDispInfo::GetBoundingBox()=55 8B EC 8B 55 08 56 8B F1 8B 4D 0C 8B 46 08=pdb=CDispInfo=3
virtual bool CDispInfo::GetTag()=8B ? ? ? ? ? 66 ? ? ? ? ? ? 66 3B 02=pdb
virtual void CDispInfo::SetTag()=8B ? ? ? ? ? 66 8B 00 66 ? ? ? ? ? ? C3=pdb
virtual void CFunctor6<void ()=0F B6 41 51=pdb=CFunctor6<void (*)(struct dlight_t near *,struct msurface2_t near *,struct matrix3x4_t near &,unsigned int,bool,bool),struct dlight_t near *,struct msurface2_t near *,struct matrix3x4_t,unsigned int,bool,bool,class CRefCounted1<class CFunctor,class CRefCountServiceBase<1,class CRefMT>>>=3
int LightmapPageCompareFunc()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 8B 00=pdb
LightmapLess()=55 8B EC 53 8B 5D 0C 57 8B 7D=pdb
int SortMapCompareFunc()=55 8B EC 8B 55 0C 8B 45 08 8B=pdb
mat_crosshair()=E8 ? ? ? ? 8B C8 85 C9 75 0F 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 C3 8B=pdb
mat_crosshair_edit()=55 8B EC 81 ? ? ? ? ? 56 E8 ? ? ? ? 8B F0 85 F6 75 13 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 5E 8B E5 5D C3 57=pdb
mat_crosshair_explorer()=55 8B EC 81 ? ? ? ? ? 56 E8 ? ? ? ? 8B F0 85 F6 75 13 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 5E 8B E5 5D C3 68=pdb
mat_crosshair_printmaterial()=E8 ? ? ? ? 8B C8 85 C9 75 0F 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 C3 A1 ? ? ? ? 56 6A=pdb
mat_crosshair_reloadmaterial()=E8 ? ? ? ? 8B C8 85 C9 75 0F 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 C3 A1 ? ? ? ? 56 8B=pdb
void R_LightVecUseModel()=55 8B EC 8B 45 08 A3 ? ? ? ? 5D C3=pdb
virtual void CRender::BeginUpdateLightmaps()=FF ? ? ? ? ? 83 ? ? ? ? ? ? 75 0E=pdb
void CRender::ClearView()=55 8B EC 83 EC 0C 53 8B 5D 10=pdb
void CRender::ExtractMatrices()=56 8B F1 69 ? ? ? ? ? ? ? ? ? 8D=pdb
virtual float CRender::GetFramerate()=D9 41 10=pdb
virtual float CEngine::GetFrameTime()=D9 41 18=pdb
virtual float CRender::GetZNear()=D9 41 14=pdb
virtual void CRender::PopView()=55 8B EC 57 8B F9 69=pdb
virtual void CRender::Push3DView()=55 8B EC 8B 01 6A 00 FF=pdb
virtual bool CRender::ScreenTransform()=55 8B EC 53 56 8B F1 57 8B 7D 0C 57=pdb
virtual void CRender::ViewSetupVis()=55 8B EC 51 8B 01 8D 55 FC 52=pdb=CRender=2
virtual bool CEngineBSPTree::EnumerateLeavesInBox()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 75=pdb=CCopyableUtlVectorFixed<struct surfacesortgroup_t near *,1024>=4
virtual bool CWorldRenderList::OnFinalRelease()=56 8D 71 FC=pdb=CWorldRenderList=4
void R_Surface_LevelShutdown()=56 B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 2D=pdb
void SCR_UpdateScreen()=55 8B EC 81 ? ? ? ? ? 53 56 57 E8 ? ? ? ? E8=pdb
virtual void CModelRender::SetViewTarget()=55 8B EC 8B ? ? ? ? ? FF 75 10=pdb
virtual void CModelRender::DrawModelShadow()=55 8B EC 83 EC 0C 8B ? ? ? ? ? 56 57 8B 7D=pdb=CModelRender=14
virtual void CModelRender::SetupLighting()=55 8B EC 8B 01 68=pdb
virtual void CModelRender::GetModelDecalHandles()=55 8B EC 51 57 8B 7D 10 33=pdb=CModelRender=29
virtual bool CModelRender::GetItemName()=55 8B EC 8B ? ? ? ? ? FF 75 14=pdb=CModelRender=35
CMeshBuilder::~CMeshBuilder()=56 8B F1 8B ? ? ? ? ? 85 C9 74 16=pdb
virtual int CPooledVBAllocator_ColorMesh::Allocate()=55 8B EC 8B D1 83 7A=pdb
virtual int CLoaderMemAlloc::CrtSetReportMode()=55 8B EC 8B 49 04 8B 01 5D FF 60 30=pdb
virtual void CPooledVBAllocator_ColorMesh::Clear()=57 8B F9 83 7F 04 00 74 53=pdb
void LightingState_t::CopyLocalLights()=55 8B EC 56 8B 75 08 33 D2 8B=pdb
void CColorMeshData::DestroyResource()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 6A 01=pdb
void CModelRender::EngineLightingToMaterialLighting()=55 8B EC 8B 55 08 8B 4D 0C 53 8B 5D=pdb
unsigned short near & FirstShadowOnModelInstance()=55 8B EC 0F B7 4D=pdb
void InitStudioRender()=55 8B EC 83 EC 10 E8=pdb
bool CRobjectLess::Less()=55 8B EC 8B 45 08 8B 4D 0C 56 0F=pdb
void CModelRender::SetFullbrightLightingState()=55 8B EC 8B 4D 08 85 C9 0F=pdb
void ShutdownStudioRender()=57 8B ? ? ? ? ? 85 FF 74 2C 8B 07=pdb
void CModelRender::UnlockCacheCacheHandleArray()=55 8B EC 51 56 57 8B 7D 08 8B C1=pdb
void UpdateStudioRenderConfig()=55 8B EC 51 83 ? ? ? ? ? ? 0F ? ? ? ? ? 83=pdb
void InitMaterialSystem()=8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb
void WorldStaticMeshDestroy()=8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B F0 85 F6 74 07 8B 06 8B CE FF 50 08 57=pdb
mat_resolveFullFrameDepth_changed()=55 8B EC 8B 4D 08 56 8D 41=pdb
virtual void CModelLoader::Shutdown()=56 8B F1 6A 00 C7 ? ? ? ? ? ? E8=pdb
virtual int CModelLoader::GetCount()=0F B7 41 16 C3=pdb
virtual char const near * CModelLoader::GetName()=55 8B EC 8B 45 08 85 C0 74 07=pdb
virtual int CModelLoader::GetModelFileSize()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 85 F6 0F ? ? ? ? ? 80 3E 00 0F ? ? ? ? ? 57=pdb
virtual void CModelLoader::UnreferenceModel()=55 8B EC 8B 4D 08 8B 45 0C F7=pdb
virtual void CModelLoader::ReloadFilesInList()=55 8B EC 81 ? ? ? ? ? 8B D1 33=pdb
virtual bool CModelLoader::SetCombineModels()=55 8B EC 8B 45 08 85 C0 75 06 32 C0 5D C2 08=pdb
virtual bool CModelLoader::FinishCombinedModel()=55 8B EC 8B ? ? ? ? ? 8B 11 8B=pdb
virtual bool CBrushBSPIterator::EnumerateLeaf()=55 8B EC 56 8B 75 08 BA ? ? ? ? 57 8B F9 C1=pdb=CBrushBSPIterator=0
void CModelLoader::FinishDynamicModelLoadIfReady()=55 8B EC 51 57 8B 7D 08 89=pdb
char near * CMapLoadHelper::GetLoadName()=8B 41 20 8D ? ? ? ? ? ? 2B D0 8D=pdb
void CBrushBSPIterator::MarkModelSurfaces()=55 8B EC 56 8B F1 33 D2=pdb
void Mod_LoadFaces()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 53 56 57=pdb
void CModelLoader::UpdateDynamicModelLoadQueue()=55 8B EC A1 ? ? ? ? 83 EC 0C 57=pdb
virtual void COcclusionSystem::ActivateOccluder()=55 8B EC 8B ? ? ? ? ? 8B 45 08 56 8B F1=pdb=COcclusionSystem=0
static int CEdgeList::SurfCompare()=55 8B EC 8B 45 08 8B ? ? ? ? ? 8B 00=pdb
virtual void COverlayMgr::ClearRenderLists()=55 8B EC 83 EC 08 56 57 8B F9 33=pdb=COverlayMgr=5
void COverlayMgr::DestroyStaticBuffers()=55 8B EC 51 57 8B F9 83 ? ? ? ? ? ? 7E=pdb
void COverlayMgr::InitTexCoords()=55 8B EC 8B 4D 08 8B 45 0C F3 ? ? ? ? 8B=pdb
virtual void COverlayMgr::SetOverlayBindProxy()=55 8B EC 69 ? ? ? ? ? ? 03 51=pdb
virtual void COverlayMgr::UnloadOverlays()=55 8B EC 83 EC 0C 53 56 8B F1 BB=pdb
bool DecalSortTreeSortLessFunc()=55 8B EC 8B 45 08 8B 4D 0C 56 8B 50=pdb
r_printdecalinfo_f()=8B ? ? ? ? ? 33 C0 56 57 33=pdb
virtual void CVEfx::DecalShoot()=55 8B EC 51 FF 75 2C=pdb=CVEfx=1
virtual char const near * CBaseServer::GetMapName()=8D 41 10 C3=pdb
void Linefile_Draw()=55 8B EC 51 8B ? ? ? ? ? 53 8B ? ? ? ? ? 4B=pdb=CShadowMgr=246
virtual void CShadowMgr::AddExtraClipPlane()=55 8B EC 0F B7 45 08 F3 ? ? ? ? 56=pdb=CShadowMgr=13
virtual void CShadowMgr::AddShadowToModel()=55 8B EC B8 ? ? ? ? 53=pdb=CShadowMgr=10
void CShadowMgr::CleanupMaterial()=55 8B EC 53 57 8B 7D 08 8D=pdb
void CShadowMgr::ClearAllFlashlightMaterialBuckets()=53 8B D9 80 ? ? ? ? ? ? 75 5C=pdb
virtual void CShadowMgr::ClearExtraClipPlanes()=55 8B EC 0F B7 45 08 69 ? ? ? ? ? 8B 41 08 33=pdb
virtual void CShadowMgr::ClearShadowRenderList()=56 8B F1 8B ? ? ? ? ? 85 C0 7E 16=pdb
virtual void CShadowMgr::ComputeRenderInfo()=55 8B EC 0F B7 45 0C=pdb
virtual unsigned short CShadowMgr::CreateShadow()=55 8B EC 8B 01 6A FF=pdb
virtual void CShadowMgr::DestroyShadow()=55 8B EC 83 EC 08 53 56 8B 75 08 8D=pdb
unsigned short near & FirstModelInShadow()=55 8B EC 0F B7 45 08 69 ? ? ? ? ? A1=pdb
virtual bool CShadowMgr::ModelHasShadows()=55 8B EC 8B 45 08 56 BE ? ? ? ? 66=pdb=CShadowMgr=54
void CShadowMgr::ProcessDispDecalWorkItem()=55 8B EC 56 57 8B 7D 08 0F B7 07=pdb
virtual int CShadowMgr::ProjectAndClipVerticesEx()=55 8B EC FF 75 18 0F=pdb=CShadowMgr=55
virtual void CShadowMgr::RenderShadows()=55 8B EC 51 56 57 8B F9 8B ? ? ? ? ? 8B=pdb=CShadowMgr=41
virtual void CShadowMgr::SetFalloffBias()=55 8B EC 0F B7 45 08 8B 49=pdb
virtual void CShadowMgr::SetFlashlightDepthTexture()=55 8B EC 0F B7 45 08 8B 51=pdb=CShadowMgr=19
virtual void CShadowMgr::SetFlashlightRenderState()=55 8B EC 53 8B D9 8B ? ? ? ? ? 56 8B 01=pdb
void CShadowMgr::SetMaterial()=55 8B EC 51 8B 45 14 53 8B 5D 10=pdb
virtual void CShadowMgr::SetModelShadowState()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 8B 01=pdb
virtual void CShadowMgr::SetShadowMaterial()=55 8B EC 0F B7 45 08 53 8B=pdb=CShadowMgr=2
virtual void CShadowMgr::SetShadowTexCoord()=55 8B EC 0F B7 45 08 F3 ? ? ? ? 69=pdb=CShadowMgr=9
virtual void CShadowMgr::UpdateFlashlightState()=55 8B EC 0F B7 45 08 69 ? ? ? ? ? 8B 41 08 56=pdb
_TextMessageShutdown()=8B ? ? ? ? ? 85 D2 74 17 A1 ? ? ? ? 52 8B 08 8B 01 FF 50 14 C7 ? ? ? ? ? ? ? ? ? C3=pdb
virtual void CVRenderView::TouchLight()=55 8B EC 8B 4D 08 B8=pdb=CShadowMgr=224
virtual void CVRenderView::SetBlend()=55 8B EC F3 ? ? ? ? F3 ? ? ? ? ? ? ? 0F=pdb=CShadowMgr=226
virtual void CVRenderView::SetColorModulation()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F=pdb=CShadowMgr=228
virtual void CVRenderView::GetColorModulation()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? F3 0F 11=pdb=CShadowMgr=229
virtual void CVRenderView::SceneBegin()=8B ? ? ? ? ? 8B 01 FF 60 10=pdb
virtual void CVRenderView::ViewSetupVisEx()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 70=pdb
virtual bool CVRenderView::EnumerateLeaf()=55 8B EC A1 ? ? ? ? 8B 4D 08 C1 E1 06 8B ? ? ? ? ? 8B 40=pdb=CShadowMgr=217
virtual void CVRenderView::Push2DView()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 64=pdb
virtual void CVRenderView::Push3DView()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 5C=pdb
virtual void CFunctor3<void ()=FF 71 1C 8B 41 10 FF 71 18 FF 71 14 FF D0 83 C4 0C=pdb
void V_RenderVGuiOnly()=8B ? ? ? ? ? F3 ? ? ? ? ? ? ? 56=pdb
void V_RenderVGuiOnly_NoSwap()=56 E8 ? ? ? ? 8B ? ? ? ? ? 8B 01=pdb
virtual void CEngineGotvSyncPacket::SetCachedSize()=55 8B EC 8B 45 08 89 41 30=pdb
CNETMsg_File::CNETMsg_File()=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb
CSVCMsg_CreateStringTable::CSVCMsg_CreateStringTable()=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
CSVCMsg_VoiceData::CSVCMsg_VoiceData()=56 8B F1 8D 4E 04 C7 ? ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? 8B C6 C7 ? ? ? ? ? ? 66=pdb
virtual int CCLCMsg_ListenEvents::ByteSize()=56 57 8B F9 8D 57=pdb=CNetMessagePB<16,class CCLCMsg_SplitPlayerConnect,0,1>=23
virtual int CMsgVector::ByteSize()=56 57 8B F9 33 F6 8B 57 18=pdb
virtual int CMsgVector2D::ByteSize()=56 57 8B F9 33 F6 8B 4F 14 84=pdb=CMsgVector2D=8
virtual int CNETMsg_NOP::ByteSize()=56 8B F1 8B 4E 04 8D=pdb=IDemoStream=2307
virtual void CCLCMsg_ClientInfo::Clear()=8B 41 2C 84=pdb
virtual void CNETMsg_Tick::Clear()=80 79 20 00 74 23=pdb=CNetMessagePB<4,class CNETMsg_Tick,0,1>=18
virtual void CSVCMsg_Sounds::Clear()=56 8B F1 57 80 7E 20=pdb=CNetMessagePB<8,class CSVCMsg_ServerInfo,13,1>=18
virtual void CSVCMsg_FixAngle::Clear()=56 8B F1 8B 46 14 84=pdb=CNetMessagePB<19,class CSVCMsg_FixAngle,0,0>=3
virtual void CSVCMsg_PacketEntities::Clear()=8B 41 24 84=pdb
virtual void CSVCMsg_SetPause::Clear()=80 79 10 00 74 04=pdb
virtual void CSVCMsg_Sounds_sounddata_t::Clear()=8B 41 4C 84=pdb=CSVCMsg_Sounds_sounddata_t=3
void CCLCMsg_ListenEvents::MergeFrom()=55 8B EC 83 EC 28 53 56 8B 75=pdb
virtual void CMsgVector2D::SerializeWithCachedSizes()=55 8B EC 56 8B F1 57 8B 7D 08 F6 46 14 01 74 16=pdb=CMsgVector2D=9
virtual void CNETMsg_NOP::SerializeWithCachedSizes()=55 8B EC 8D 51 04 8B 0A 85 C9 74 13=pdb=IDemoStream=2308
virtual void CNETMsg_NOP::SetCachedSize()=55 8B EC 8B 45 08 89 41 08=pdb
virtual void CSVCMsg_ServerInfo::SetCachedSize()=55 8B EC 8B 45 08 89 41 5C=pdb
void protobuf_AddDesc_network_5fconnection_2eproto()=80 ? ? ? ? ? ? 75 64 68=pdb
static void CProtobufLogHandler::LogHandler()=55 8B EC 8B 45 08 83 F8 03=pdb
int CFixedBitVecBase<2048>::FindNextSetBit()=55 8B EC 8B 55 08 81 ? ? ? ? ? 7D=pdb
virtual void CBaseClient::FreeBaselines()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0F E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
virtual class IClient near * CBaseServer::GetClient()=55 8B EC 8B ? ? ? ? ? 8B 45 08 8B 04=pdb
virtual float CBaseClient::GetUpdateRate()=55 8B EC 51 F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? F3=pdb
virtual int CBaseClient::GetUserID()=8B 41 6C C3=pdb
virtual bool CBaseClient::NETMsg_SetConVar()=55 8B EC 8B 45 08 8B 40 08 85=pdb=CBaseClient=6
bool CBaseClient::NETMsg_StringCmd()=55 8B EC 8B 45 08 8B 50 08 83 7A 14 10 72 02 8B 12 8B 41=pdb
virtual bool CBaseClient::SendNetMsg()=55 8B EC 51 53 8B D9 83 ? ? ? ? ? ? 75=pdb
virtual void CBaseClient::SetRate()=55 8B EC 8B ? ? ? ? ? 85 C9 74 13=pdb
virtual void CBaseClient::SetUpdateRate()=55 8B EC F3 ? ? ? ? ? ? ? F3 ? ? ? ? 0F 2F C1 76=pdb
virtual void CGameClient::FileReceived()=55 8B EC 56 8B 75 0C 33 D2 57=pdb
virtual bool CGameClient::IsHearingClient()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 07=pdb
virtual bool CBaseServer::IsPaused()=83 79 04 03=pdb
virtual bool CGameClient::IsProximityHearingClient()=55 8B EC A1 ? ? ? ? 8B 55 08 56 8B 34=pdb
virtual void CGameClient::ResetReplayRequestTime()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 16=pdb
void CGameClient::SetupPrevPackInfo()=53 8B D9 B9 ? ? ? ? 56 57 8B=pdb
void bf_write::WriteUBitLong()=55 8B EC 53 8B 5D 0C 57 8B F9 8B=pdb
removeallids()=A1 ? ? ? ? 50 68 ? ? ? ? C7=pdb
virtual void CFrameSnapshotManager::LevelChanged()=56 8B F1 8D 4E 58=pdb=CFrameSnapshotManager=1
log()=55 8B EC 56 8B 75 08 83 3E 02 0F ? ? ? ? ? 8B ? ? ? ? ? 68=pdb
logaddress_delall()=83 ? ? ? ? ? ? 7E 19=pdb
virtual void CFunctor2<void ()=0F B6 41 15 50=pdb
void RevertAllModifiedLocalState()=8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 70 E8 ? ? ? ? 68=pdb
SV_Pure_f()=55 8B EC 8B 45 08 53 56 83=pdb
users()=55 8B EC 51 83 ? ? ? ? ? ? 7D 12 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 8B E5 5D C3 53=pdb
void CGameServer::AssignClassIds()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF 50=pdb
sv_dump_class_info()=8B ? ? ? ? ? 56 57 8B 01 FF 50 28 8B ? ? ? ? ? 8B F0 68=pdb
virtual bool CServerPlugin::BNetworkCryptKeyValidate()=55 8B EC 53 56 57 8B F9 33 F6 39 77 10=pdb=CServerPlugin=20
virtual void CServerPlugin::ClientCommand()=55 8B EC 8B 55 0C 53 56 57 8B F9 33=pdb=CServerPlugin=14
virtual bool CServerPlugin::ClientConnect()=55 8B EC 51 8B 55 18=pdb=CServerPlugin=13
virtual void CServerPlugin::ClientPutInServer()=55 8B EC 8B 55 08 53 8B 5D=pdb=CServerPlugin=10
virtual void CServerPlugin::LevelInit()=55 8B EC 51 53 56 8B ? ? ? ? ? 8B D9 57=pdb
virtual void CServerPlugin::LevelShutdown()=53 56 8B ? ? ? ? ? 8B D9 57 8B CE 8B 06 FF ? ? ? ? ? 33 FF 39 7B 10 7E 39=pdb
virtual void CServerPlugin::NetworkIDValidated()=55 8B EC 56 57 8B F9 33 F6 39 77 10 7E 4F=pdb=CServerPlugin=15
virtual void CServerPlugin::OnQueryCvarValueFinished()=55 8B EC 56 57 8B F9 33 F6 39 77 10 7E 5C=pdb=CServerPlugin=16
virtual void CServerPlugin::ServerActivate()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 8B CE=pdb
virtual bool CTraceFilterHitAll::ShouldHitEntity()=B0 01 C2 08=pdb
bool CUtlBuffer::GetTypeText<__int64>()=55 8B EC 83 EC 08 57 8D 45 F8 C7 ? ? ? ? ? ? 50 6A 00 8B F9 E8 ? ? ? ? 84 C0 75 19=pdb
void CSteam3Server::OnGSPolicyResponse()=56 8B F1 83 7E 04 00 74 45=pdb
void sv_setsteamaccount_f()=55 8B EC 8B ? ? ? ? ? 85 C9 74 19=pdb
char CUtlBuffer::GetChar()=56 6A 01 8B F1 E8 ? ? ? ? 84=pdb
virtual void CVEngineServer::NotifyEdictFlagsChange()=55 8B EC 8B ? ? ? ? ? 85 C9 74 16 8B=pdb=CCallbackImpl<8>=1774
virtual void CVEngineServer::FreeEntPrivateData()=55 8B EC 8B 55 08 85 D2 74 10=pdb
virtual bool CVEngineServer::IsAnyClientLowViolence()=8B ? ? ? ? ? 56 33 F6 85 C9 7E 2B=pdb=CCallbackImpl<8>=1787
virtual bool CVEngineServer::GetPlayerInfo()=55 8B EC FF 4D=pdb
virtual bool CVEngineServer::IsSplitScreenPlayer()=55 8B EC 8B 4D 08 83 F9 01 7C 23=pdb=CCallbackImpl<8>=1793
virtual int CVEngineServer::GetClusterCount()=A1 ? ? ? ? 85 C0 74 03 8B=pdb
virtual bool CVEngineServer::StartClientHltvReplay()=55 8B EC A1 ? ? ? ? 8B 4D 08 8B 0C 88 8D 41 04 F7 D9 1B C9 23 C8 74 11=pdb=CCallbackImpl<8>=1837
virtual void CVEngineServer::StopClientHltvReplay()=55 8B EC A1 ? ? ? ? 8B 4D 08 8B 0C 88 8D 41 04 F7 D9 1B C9 23 C8 74 08=pdb
virtual int CVEngineServer::GetClientHltvReplayDelay()=55 8B EC A1 ? ? ? ? 8B 4D 08 8B 0C 88 8D 41 04 F7 D9 1B C9 23 C8 74 0C=pdb=CCallbackImpl<8>=1839
bool CSteam3Server::BSecure()=8B 49 04 85 C9 74 0E=pdb
virtual void CBaseServer::BroadcastMessage()=55 8B EC 53 8B D9 56 33 F6 39=pdb
virtual void CBaseServer::DisconnectClient()=55 8B EC 8B 4D 08 FF=pdb
int CBaseServer::GetMaxHumanPlayers()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0A 8B 01 FF=pdb
virtual void CBaseServer::GetNetStats()=55 8B EC 8B 45 0C 53 8B D9 57=pdb
int CBaseServer::GetNextUserID()=55 8B EC 83 EC 08 53 56 57 8B F9 33 DB=pdb
virtual float CBaseServer::GetTime()=55 8B EC 51 66 ? ? ? ? 0F=pdb=CGameServer=9
bool CBaseServer::IsReserved()=8B ? ? ? ? ? 0B ? ? ? ? ? 74 03=pdb
virtual void CBaseServer::SendClientMessages()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 8B ? ? ? ? ? 89=pdb
virtual void CBaseServer::SetMaxClients()=55 8B EC 8B 45 08 83 F8 01 7D=pdb=CBaseServer=40
virtual int CBlackBox::Count()=55 8B EC 8B 45 08 83 F8 02 76 07=pdb
virtual char const near * CBlackBox::GetTypeName()=55 8B EC 8B 45 08 83 F8 02 76 06 33 C0 5D C2 04=pdb
virtual void CBlackBox::SetLimit()=55 8B EC 8B 55 08 83 FA 02 77=pdb
char const near * CBugUIPanel::GetRepositoryURL()=8B ? ? ? ? ? 8B 01 FF 50 64 85 C0 B9 ? ? ? ? 0F=pdb
char const near * CBugUIPanel::GetSubmissionURL()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 68=pdb
virtual bool CKeyValuesDumpForBugreport::KvWriteText()=55 8B EC FF 75 08 68 ? ? ? ? FF 71=pdb
virtual void CBugUIPanel::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 83 F8 46=pdb=CBugUIPanel=122
virtual void CBugReportFinishedDialog::PerformLayout()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE 6A 01=pdb=CBugReportFinishedDialog=132
CCoreDispInfo::CCoreDispInfo()=56 8B F1 57 8D 4E 10 C7=pdb
void CCoreDispSurface::AdjustSurfPointData()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8D ? ? ? ? ? 0F=pdb
void CCoreDispSurface::Init()=55 8B EC 83 EC 08 53 56 8B F1 C7 ? ? ? ? ? ? 57 89=pdb
void CCoreDispSurface::SetNeighborData()=55 8B EC 8B 55 08 56 8B F1 8B 4D 0C F3=pdb
void CChangeFrameList::SetChangeTick()=55 8B EC 51 53 8B 5D 0C 57 8B F9 8B=pdb
int LumpCompare()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 8B 30=pdb
virtual int ConVar_ServerBounded::GetInt()=55 8B EC 51 8B 01 8B=pdb
void Cmd_Exec_f()=55 8B EC 6A 00 6A 00 FF 75 08 E8 ? ? ? ? 83=pdb
void Cmd_Shutdown()=A1 ? ? ? ? 85 C0 74 2F=pdb
char near * CM_EntityString()=83 ? ? ? ? ? ? 75 31 8B=pdb
virtual void CVirtualTerrain::GetVirtualMesh()=55 8B EC 53 8B 5D 08 56 8B 75 0C 57 8B=pdb
bool IsBoxIntersectingRay()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 8B 43 08 0F 10 2A 0F 10 21 0F 10 00=pdb
virtual bool CCvarQuery::Connect()=55 8B EC 56 6A 00 68=pdb
virtual enum InitReturnVal_t CCvarQuery::Init()=80 79 04 00 75 14=pdb=CKeyValuesDumpContextAsDevMsg=2036
virtual void CCvarQuery::Shutdown()=56 8B F1 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 54=pdb
virtual bool CCvarQuery::AreConVarsLinkable()=55 8B EC 53 56 8B 75 08 8B CE 57 68=pdb
char const near * CCommand::ArgS()=8B 41 04 85 C0 74 06=pdb
ConCommandBaseLessFunc()=55 8B EC 8B 45 08 56 8B 08 8B 01=pdb
void CCvarUtilities::EnableDevCvars()=8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B F0 8B CE 8B 06 FF 10 8B 06 8B CE 8B 40 08 FF D0 84 C0 74=pdb
bool CCvarUtilities::IsValidToggleCommand()=55 8B EC 8B ? ? ? ? ? 56 FF 75 08 8B 01=pdb
differences()=8B ? ? ? ? ? 56 8B 01 FF ? ? ? ? ? 8B F0 8B CE 8B 06 FF 10 8B 06 8B CE 8B 40 08 FF D0 84 C0 0F ? ? ? ? ? 57 0F=pdb
bool CDispCollTree::AABBTree_IntersectAABB()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B C1=pdb
void CDownloadListGenerator::OnLevelLoadEnd()=56 8B F1 8B ? ? ? ? ? 85 D2 74 19 8B ? ? ? ? ? 83=pdb
void DownloadStatusCallback()=55 8B EC 8B 4D 10 8D=pdb
virtual CSendTablePrecalc::~CSendTablePrecalc()=56 57 8B F9 8B ? ? ? ? ? C7 ? ? ? ? ? 85=pdb
bool Int_IsZero()=55 8B EC 8B 45 0C 83 38=pdb
void Float_DecodeZero()=55 8B EC 8B 45 08 8B 08 C7 ? ? ? ? ? ? 85=pdb
bool Float_IsZero()=55 8B EC 8B 45 0C F3=pdb
int Vector_CompareDeltas()=55 8B EC 51 53 8B 5D 08 56 8B 75 0C 57 8B 7D=pdb
bool Vector_IsZero()=55 8B EC 8B 4D 0C 0F 57 C9 F3 0F 10 01 0F 2E C1 9F F6 C4 44 7A 20=pdb
void Vector_DecodeZero()=55 8B EC 8B 45 08 8B 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
int VectorXY_CompareDeltas()=55 8B EC 57 FF 75 10 FF=pdb
bool VectorXY_IsZero()=55 8B EC 8B 4D 0C 0F 57 C9 F3 0F 10 01 0F 2E C1 9F F6 C4 44 7A 12=pdb
void VectorXY_DecodeZero()=55 8B EC 8B 45 08 8B 08 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 85=pdb
void VectorXY_SkipProp()=55 8B EC FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 5D E9=pdb
bool String_IsZero()=55 8B EC 8B 45 0C 8B 00=pdb
bool Array_IsZero()=55 8B EC 56 8B 75 10 8B 46=pdb
void Array_DecodeZero()=55 8B EC 8B 4D 08 8B 01 8B=pdb
bool Int64_IsZero()=55 8B EC 8B 45 0C 8B 08 0B=pdb
RecvProp::RecvProp()=C7 ? ? ? ? ? ? 8B C1 C7 ? ? ? ? ? C7=pdb
CRecvDecoder::CRecvDecoder()=56 8B F1 8D 4E 08 E8 ? ? ? ? C7=pdb
void CSerializedEntityFieldIterator::Update()=8B D1 57 8B 7A=pdb
virtual void CPropOffsetStack::RecurseAndCallProxies()=55 8B EC 8B 55 0C 53 8B D9 8B 4D 08 57=pdb
bool CEngineRecipientFilter::IncludesPlayer()=55 8B EC 53 56 8B F1 57 33=pdb
virtual bool CEngineRecipientFilter::IsReliable()=8A 41 05=pdb
virtual void CEngineTrace::ClipRayToEntity()=55 8B EC 56 57 FF 75 14=pdb=CEngineTraceServer=3
virtual int CEngineTrace::GetStatByIndex()=55 8B EC 8B 45 08 8B D1 83 F8 03=pdb=CEngineTraceServer=13
virtual void CEngineTrace::GetDisplacementMesh()=55 8B EC 69 ? ? ? ? ? ? FF=pdb
virtual void CEngineTrace::FreeTraceListData()=55 8B EC 8B 4D 08 85 C9 74 0C=pdb
virtual int CEngineTrace::GetSetDebugTraceCounter()=55 8B EC E8 ? ? ? ? 84 C0 74 51=pdb=CEngineTraceServer=23
virtual void CEngineTrace::SuspendOcclusionTests()=FF 41 10 C3=pdb
CAsyncOcclusionQuery::CAsyncOcclusionQuery()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? F0=pdb
bool CEngineTrace::ClipRayToBBox()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B 73 10 8B=pdb
void CAsyncOcclusionQuery::Init()=55 8B EC 8B 55 08 56 8B F1 8B 4D 0C 8B 02=pdb
void CAsyncOcclusionQuery::Queue()=55 8B EC 53 56 57 8B F9 F0=pdb
fs_warning_level()=55 8B EC 8B 45 08 56 83 38=pdb
virtual bool CGameEventManager::AddListener()=55 8B EC 53 8B D9 56 57 8D ? ? ? ? ? FF=pdb
bool CGameEventManager::AddListenerAll()=55 8B EC 51 56 57 8B F9 8D ? ? ? ? ? 89=pdb
virtual bool CGameEventManager::FireEvent()=55 8B EC A1 ? ? ? ? 56 57 8B F9 B9=pdb
virtual unsigned __int64 CGameEvent::GetUint64()=55 8B EC FF 75 10 8B 49=pdb
virtual bool CGameEvent::IsLocal()=8B 41 04 8A 40 20=pdb
virtual bool CGameEvent::IsReliable()=8B 41 04 8A 40 21=pdb
virtual bool CGameEventManager::SerializeEvent()=55 8B EC 83 EC 10 53 8B D9 56 57 8D=pdb
virtual void CHLTVBroadcast::CHttpCallback::Run()=55 8B EC 8B 01 6A 00 6A=pdb
CHLTVClient::CHLTVClient()=55 8B EC 53 56 57 8B F1=pdb
virtual bool CHLTVClient::CLCMsg_ClientInfo()=55 8B EC FF 75 08 E8 ? ? ? ? 84 C0 0F=pdb
virtual void CHLTVClient::FileRequested()=55 8B EC 56 FF 75 08 8B F1 68=pdb
virtual void CHLTVClient::SetUpdateRate()=8B ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? ? ? ? C2=pdb
virtual void CHLTVClient::UpdateUserSettings()=56 8B F1 6A 00 68 ? ? ? ? 8B ? ? ? ? ? E8 ? ? ? ? 85 C0 8B CE 0F 95 C0 88 ? ? ? ? ? 5E=pdb
CHLTVClientState::CHLTVClientState()=55 8B EC 56 8B F1 E8 ? ? ? ? 8B 45 08 89 ? ? ? ? ? 8B=pdb
virtual void CHLTVClientState::Clear()=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
HLTV_Callback_InstanceBaseline()=55 8B EC 56 8B 75 08 FF=pdb
virtual void CHLTVClientState::PacketEnd()=56 8B F1 8B ? ? ? ? ? 85 C0 74 2C=pdb
virtual void CHLTVDemoRecorder::RecordCustomData()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 20=pdb=CHLTVDemoRecorder=6
void CDeltaEntityCache::Flush()=53 8B D9 8B 43 04 85=pdb
virtual bool CHLTVServer::GetClassBaseline()=55 8B EC 8B D1 8B ? ? ? ? ? 85=pdb
virtual float CHLTVServer::GetOnlineTime()=55 8B EC 83 EC 08 F3 ? ? ? ? ? ? ? F2=pdb
virtual void CHLTVServer::Init()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 83=pdb=CHLTVServer=47
virtual bool CHLTVServer::IsMasterProxy()=83 79 1C 00 0F 95=pdb
virtual bool CHLTVServer::IsRecording()=8B ? ? ? ? ? 81 ? ? ? ? ? 8B 40 28=pdb
virtual void CHLTVServer::StopRecording()=55 8B EC FF 75 08 81=pdb
virtual char const near * CFunctorJob::Describe()=8D 41 4C C3=pdb
void Host_InitProcessor()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF ? ? ? ? ? 8B=pdb
void OnChangeThreadAffinity()=A1 ? ? ? ? 8B 08 8B 01 FF 50 1C 85 C0 74=pdb
void ThreadPoolReserverFunction()=6A FF B9 ? ? ? ? FF=pdb
display_elapsedtime()=F2 ? ? ? ? ? ? ? 83 EC 08 F2 ? ? ? ? 68 ? ? ? ? FF=pdb
host_timer_report()=80 ? ? ? ? ? ? 74 42 56=pdb
mem_compact()=A1 ? ? ? ? 8B 08 8B 01 FF 60 78=pdb
mem_eat()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 C3=pdb
mem_verify()=A1 ? ? ? ? 8B 08 8B 01 FF 60 60=pdb
void Host_Quit_f()=E8 ? ? ? ? 84 C0 0F ? ? ? ? ? C3=pdb
cache_print()=55 8B EC 8B 45 08 33 D2 83 38 02 75 06 8B ? ? ? ? ? 8B ? ? ? ? ? 52 6A 01=pdb
cache_print_lru()=55 8B EC 8B 45 08 33 D2 83 38 02 75 06 8B ? ? ? ? ? 8B ? ? ? ? ? 52 6A 02=pdb
cache_print_summary()=55 8B EC 8B 45 08 33 D2 83 38 02 75 06 8B ? ? ? ? ? 8B ? ? ? ? ? 52 6A 00=pdb
crash()=68 ? ? ? ? FF ? ? ? ? ? 33 C0 83 C4=pdb
reload()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 8B 40 10=pdb
virtual void CPhoneHome::Shutdown()=56 8B F1 8B 4E 3C=pdb
virtual void CSaveRestore::Shutdown()=56 8B F1 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 85=pdb=CSaveRestore=1
virtual bool CSaveRestore::SaveFileExists()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 06 FF=pdb
virtual void CSaveRestore::ForgetRecentSave()=C6 41 28 00 C3=pdb
virtual void CSaveRestore::OnFinishedClientRestore()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8D=pdb
virtual bool CSaveRestore::IsXSave()=80 ? ? ? ? ? ? 74 14 A1=pdb=CSaveRestore=30
void CSaveRestore::ReapplyDecal()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B 73 10 57=pdb
bool HostState_IsTransitioningToLoad()=A1 ? ? ? ? 85 C0 74 12 83=pdb
void CHostState::Init()=83 79 04 06=pdb
OnEnableFastMathChanged()=55 8B EC 51 A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 17=pdb
int CValveIpcServer::WaitForEvent()=56 8B F1 57 83 7E 20=pdb
HandleGameUIKey()=55 8B EC 8B ? ? ? ? ? 85 C9 74 15=pdb
int Key_CountBindings()=33 C0 B9 ? ? ? ? 8B=pdb
void Key_StartTrapMode()=80 ? ? ? ? ? ? 75 13 66=pdb
unbind()=55 8B EC 56 8B 75 08 83 3E 02 74=pdb
virtual void near * CLoaderMemAlloc::Alloc()=55 8B EC A1 ? ? ? ? 56 8B F1 39 30 75 14 80 7E 08 00 75 0E 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 4E 04 5E 8B 01 5D FF 60 04=pdb=IMemAlloc=49
virtual void CLoaderMemAlloc::CompactHeap()=8B 49 04 8B 01 FF 60 78=pdb
virtual int CLoaderMemAlloc::CrtDbgReport()=55 8B EC 8B 49 04 8B 01 5D FF 60 5C=pdb
virtual int CLoaderMemAlloc::CrtIsValidHeapPointer()=55 8B EC 8B 49 04 8B 01 5D FF 60 34=pdb
virtual int CLoaderMemAlloc::CrtIsValidPointer()=55 8B EC 8B 49 04 8B 01 5D FF 60 38=pdb
virtual void CLoaderMemAlloc::CrtMemCheckpoint()=55 8B EC 8B 49 04 8B 01 5D FF 60 44=pdb
virtual int CLoaderMemAlloc::CrtSetBreakAlloc()=55 8B EC 8B 49 04 8B 01 5D FF 60 2C=pdb
virtual int CLoaderMemAlloc::CrtSetDbgFlag()=55 8B EC 8B 49 04 8B 01 5D FF 60 40=pdb
virtual void CLoaderMemAlloc::DumpStatsFileBase()=55 8B EC 8B 49 04 8B 01 5D FF 60 4C=pdb
virtual void CLoaderMemAlloc::Free()=55 8B EC A1 ? ? ? ? 56 8B F1 39 30 75 14 80 7E 08 00 75 0E 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 4E 04 5E 8B 01 5D FF 60 14=pdb=IMemAlloc=53
virtual void CLoaderMemAlloc::GetActualDbgInfo()=55 8B EC 8B 49 04 8B 01 5D FF 60 68=pdb
virtual unsigned int CLoaderMemAlloc::GetSize()=55 8B EC 8B 49 04 8B 01 5D FF 60 20=pdb
virtual int CLoaderMemAlloc::GetVersion()=8B 49 04 8B 01 FF 60 74=pdb
virtual bool CLoaderMemAlloc::IsDebugHeap()=8B 49 04 8B 01 8B 40 64=pdb
virtual void CLoaderMemAlloc::PopAllocDbgInfo()=8B 49 04 8B 01 FF 60 28=pdb
virtual void CLoaderMemAlloc::PushAllocDbgInfo()=55 8B EC 8B 49 04 8B 01 5D FF 60 24=pdb
virtual void near * CLoaderMemAlloc::Realloc()=55 8B EC A1 ? ? ? ? 56 8B F1 39 30 75 14 80 7E 08 00 75 0E 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 4E 04 5E 8B 01 5D FF 60 0C=pdb=IMemAlloc=51
virtual void CLoaderMemAlloc::RegisterAllocation()=55 8B EC 8B 49 04 8B 01 5D FF 60 6C=pdb
virtual void CLoaderMemAlloc::RegisterDeallocation()=55 8B EC 8B 49 04 8B 01 5D FF 60 70=pdb
virtual unsigned int ()=55 8B EC 8B 49 04 8B 01 5D FF 60 7C=pdb
virtual int CLoaderMemAlloc::heapchk()=8B 49 04 8B 01 FF 60 60=pdb
void CLocalNetworkBackdoor::ClearState()=8D ? ? ? ? ? BA ? ? ? ? 0F ? ? ? ? C7=pdb
void MapReslistGenerator_Shutdown()=80 ? ? ? ? ? ? 74 42 B9=pdb
void CMapReslistGenerator::StartReslistGeneration()=56 8B F1 C7 ? ? ? ? ? ? FF ? ? ? ? ? DC=pdb
virtual void CMaterialProxyFactory::DeleteProxy()=55 8B EC 8B 4D 08 85 C9 74 05=pdb
virtual void CModelInfo::GetModelBounds()=55 8B EC 8B 55 08 8B 4D 0C 8B=pdb=IVModelInfo=75
virtual int CModelInfo::GetModelType()=55 8B EC 8B 45 08 85 C0 74 0A=pdb
virtual bool CModelInfo::UsesEnvCubemap()=55 8B EC 8B 45 08 85 C0 74 12 F7=pdb=IVModelInfo=115
virtual bool CModelInfo::GetModelKeyValue()=55 8B EC 8B 45 08 56 8B F1 85=pdb
virtual float CModelInfo::GetModelRadius()=55 8B EC 8B 45 08 85 C0 75 06 D9=pdb
virtual bool CModelInfo::IsUsingFBTexture()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 85=pdb
virtual unsigned short CModelInfo::GetCacheHandle()=55 8B EC 8B 45 08 83 ? ? ? ? ? ? 75 0B=pdb=IVModelInfo=111
virtual int CModelInfo::GetModelIndex()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 75 09=pdb
virtual void CNetChan::Clear()=55 8B EC 51 53 8B D9 56 57 33=pdb
void CNetChan::FlowUpdate()=55 8B EC 83 EC 0C 69=pdb
virtual int CNetChan::GetNumBitsWritten()=55 8B EC 80 7D 08 00 B8=pdb
virtual void CNetChan::GetRemoteFramerate()=55 8B EC 8B 55 08 85 D2 74 08=pdb
virtual void CNetChan::GetSequenceData()=55 8B EC 8B 45 08 8B 51 18=pdb
virtual int CNetChan::GetSequenceNr()=55 8B EC 8B 45 08 85 C0 75 07=pdb=CNetChan=17
virtual bool CNetChan::GetStreamProgress()=55 8B EC 8B 55 10 8B 45=pdb=CNetChan=21
virtual float CNetChan::GetTimeConnected()=55 8B EC 51 F2=pdb=CNetChan=3
virtual float CNetChan::GetTimeSinceLastReceived()=55 8B EC 51 F3 ? ? ? ? ? ? ? F2 ? ? ? ? ? ? ? 0F 5A C0=pdb=CNetChan=22
virtual bool CNetChan::HasPendingReliableData()=83 79 3C 00 7F=pdb
virtual bool CNetChan::IsValidPacket()=55 8B EC 8B 55 0C 69 ? ? ? ? ? ? 83 E2 7F C1 E2 04 03 D1 8A=pdb
bool CNetChan::NETMsg_Disconnect()=55 8B EC 8B 45 08 8B 50 08 83 7A 14 10 72 02 8B 12 8B ? ? ? ? ? 52 8B=pdb
bool CNetChan::NETMsg_SplitScreenUser()=55 8B EC 8B ? ? ? ? ? 8B 45 08 8B 11=pdb
bool CNetChan::ProcessMessages()=55 8B EC 53 56 8B ? ? ? ? ? 57 8B F9 8B=pdb
virtual void CNetChan::ProcessPlayback()=53 57 8B F9 8B ? ? ? ? ? 8B 01=pdb
virtual unsigned int CNetChan::RequestFile()=55 8B EC 83 EC 3C 56 8B F1 FF ? ? ? ? ? 8B=pdb
virtual bool CNetChan::SetActiveChannel()=55 8B EC 8B 45 08 85 C0 89=pdb
virtual void CNetChan::SetChoked()=FF 41 18 FF=pdb
virtual void CNetChan::SetDataRate()=55 8B EC F3 ? ? ? ? ? ? ? F3 ? ? ? ? 0F 2F C8=pdb=CNetChan=28
virtual void CNetChan::SetMaxRoutablePayloadSize()=55 8B EC 56 8B F1 57 8B 7D 08 39 ? ? ? ? ? 74=pdb
virtual void CNetChan::SetRemoteFramerate()=55 8B EC F3 ? ? ? ? F3 ? ? ? ? ? ? ? F3 ? ? ? ? F3 ? ? ? ? ? ? ? F3=pdb
virtual void CNetChan::SetSequenceData()=55 8B EC 8B 45 08 89 41 18 8B=pdb
virtual void CNetChan::SetTimeout()=55 8B EC 80 7D 0C 00 F3=pdb
virtual void CNetChan::UpdateMessageStats()=55 8B EC 8B 55 08 8B ? ? ? ? ? 56 8B 75 0C 01=pdb
virtual CryptoPP::RSAFunction::~RSAFunction()=53 8B D9 33 C0 56 57 8B=pdb
virtual void CryptoPP::ASN1Object::BEREncode()=55 8B EC 8B 01 5D FF 60 08=pdb
virtual void CryptoPP::HashTransformation::Final()=55 8B EC 56 57 8B F9 8B 37 FF 56 1C 50 FF 75 08 8B CF=pdb
virtual void CryptoPP::P1363_MGF1::GenerateAndMask()=55 8B EC 6A 00 FF 75 1C 6A=pdb=CryptoPP::P1363_MGF1=1
virtual void CryptoPP::HashTransformation::Restart()=8B 01 6A 00 6A 00 FF 50 38=pdb
virtual bool CryptoPP::HashTransformation::Verify()=55 8B EC 56 57 8B F9 8B 37 FF 56 1C 50 FF 75 08 8B 46=pdb
net_channels()=57 8B ? ? ? ? ? 85 FF 75 10=pdb
virtual char const near * CryptoPP::Exception::what()=83 79 24 10=pdb
virtual bool CQueuedPacketSender::IsRunning()=83 C1 98 FF=pdb
virtual bool CQueuedPacketSender::Setup()=8B 41 98=pdb
virtual bool CQueuedPacketSender::Start()=55 8B EC 56 8B F1 8B 46 68=pdb=CCopyableUtlVector<char>=2606
virtual void CNetConsoleMgr::OnSocketClosed()=55 8B EC 8B 45 10 85 C0 74 0E=pdb
virtual void CEngineTool::SetIsInGame()=55 8B EC 8A 45 08 88 41 04 5D=pdb
virtual bool CNetworkStringTable::ChangedSinceTick()=55 8B EC 8B 41 18 3B=pdb
virtual unsigned int CNetworkStringDict::Count()=0F B7 41 1A C3=pdb
virtual int CNetworkStringDict::DictionaryIndex()=55 8B EC 8B D1 80 7A 04 00 75=pdb=CNetworkStringDict=8
bool CNetworkStringTable::IsUsingDictionary()=8A 41 20 24=pdb
static bool CNetworkStringDict::CTableItem::Less()=55 8B EC 8B 45 08 8B 48 14 8B=pdb
bool PackedEntity::CompareRecipients()=55 8B EC 56 8B F1 8B 4D 08 8B 56 1C=pdb
virtual void CFunctor4<void ()=8B 51 24 8D=pdb=CFunctor4<void (*)(int,unsigned char near *,int,struct Rect_t near *),int,unsigned char near *,int,class CUtlEnvelope<struct Rect_t>,class CRefCounted1<class CFunctor,class CRefCountServiceBase<1,class CRefMT>>>=3
virtual void CPaintmapDataManager::GetPaintmapSize()=55 8B EC 8B 45 08 85 C0 78 1D=pdb=CPaintmapDataManager=4
void R_UpdatePaintmapRect()=55 8B EC FF 75 14 8B ? ? ? ? ? FF 75 10=pdb
virtual int CEngineUniformRandomStream::RandomInt()=55 8B EC FF 75 0C FF 75 08 FF ? ? ? ? ? 83=pdb
virtual bool CRegistry::DirectInit()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 FF 75 08 8B F1 68 ? ? ? ? 50 FF ? ? ? ? ? 83=pdb=CPureServerWhitelist::CAllowFromDiskList=32
virtual bool CRegistry::Init()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 FF 75 08 8B F1 68 ? ? ? ? 50 FF ? ? ? ? ? 8B=pdb
virtual void CRegistry::Shutdown()=80 79 04 00 74 0D=pdb
virtual void CRegistry::WriteInt()=55 8B EC 80 79 04 00 74 16=pdb=CPureServerWhitelist::CAllowFromDiskList=26
virtual void CRegistry::WriteString()=55 8B EC 8B D1 80 7A 04 00 74=pdb=CPureServerWhitelist::CAllowFromDiskList=30
CSentence::CSentence()=C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 04 89 41 14=pdb
virtual void CClientState::FileRequested()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 8B 01 FF 50 04 8B 7D 08 50 57 68 ? ? ? ? FF ? ? ? ? ? A1 ? ? ? ? 83 C4 0C B9 ? ? ? ? FF 50 34 85=pdb
void SoundInfo_t::ReadDelta()=55 8B EC 8B 55 0C 56 8B 75 08 8B 42 4C=pdb
virtual bool CClientState::SVCMsg_HltvReplay()=55 8B EC 53 56 57 8B 7D 08 8B F1 BA=pdb=CClientState=40
virtual bool CClientState::SVCMsg_PacketEntities()=55 8B EC 56 57 8B F1 E8 ? ? ? ? 8B 7D=pdb
virtual void CSPSharedMemory::AddRef()=FF 41 20 C3=pdb
virtual void CSPSharedMemory::Release()=83 41 20=pdb=CSPSharedMemory=4
void DbReferenceChanged()=55 8B EC 51 8B ? ? ? ? ? 81 ? ? ? ? ? 75 16=pdb
float SND_GetGainFromMult()=55 8B EC 8B ? ? ? ? ? 83 EC 08 81 ? ? ? ? ? 75 1A=pdb
virtual void CSpatialPartition::DrawDebugOverlays()=56 57 8D 71 50 BF ? ? ? ? 66=pdb=CSpatialPartition=33
virtual void CVoxelTree::DrawDebugOverlays()=55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 89=pdb
virtual void CSpatialPartition::ElementMoved()=55 8B EC 53 8B 5D 08 56 0F B7 C3 8B D0 57 8B F9 C1 E2 04 2B=pdb=CSpatialPartition=7
virtual void CVoxelTree::ElementMoved()=55 8B EC 56 8B 75 08 B8 ? ? ? ? 66=pdb=CVoxelTree=2
virtual void CVoxelTree::EnumerateElementsAtPoint()=55 8B EC 51 53 8B 5D 08 56 8B F1 89=pdb=CVoxelTree=6
virtual void CVoxelTree::EnumerateElementsInSphere()=55 8B EC 83 EC 18 8B 45 0C 8D=pdb=CVoxelTree=4
virtual void CSpatialPartition::InsertIntoTree()=55 8B EC 53 8B 5D 08 56 0F B7 C3 8B D0 57 8B F9 C1 E2 04 8B=pdb=CSpatialPartition=34
virtual void CSpatialPartition::InstallQueryCallback()=55 8B EC 8B 45 08 85 C0 74 18=pdb=CSpatialPartition=10
virtual void CSpatialPartition::ReportStats()=55 8B EC 53 56 8B F1 57 0F B7 56=pdb=CSpatialPartition=31
void CVoxelTree::UpdateListMask()=55 8B EC 53 8B 5D 08 56 57 8B F9 0F=pdb
virtual CStaticPropMgr::~CStaticPropMgr()=56 57 8B F9 8D 4F 34 C7=pdb
virtual void CStaticPropMgr::ConfigureSystemLevel()=55 8B EC 8B 55 08 8B 45 0C 3B=pdb=CStaticPropMgr=14
virtual bool CStaticProp::GetAttachment()=55 8B EC 8B 55 0C 56 8B F1 8B=pdb=IClientModelRenderable=48
virtual void CStaticProp::GetColorModulation()=55 8B EC 8B 55 08 F3=pdb
virtual void CStaticPropMgr::GetLightingOrigins()=55 8B EC 57 8B 7D 10=pdb
virtual bool CStaticProp::GetRenderData()=55 8B EC 83 7D 0C 00 74=pdb
virtual void CStaticProp::GetShadowRenderBounds()=55 8B EC FF 75 0C 8B 01 FF 75 08 FF 50=pdb
virtual int CStaticPropMgr::GetStaticPropIndex()=55 8B EC 8B 4D 08 8B 01 FF=pdb=CStaticPropMgr=13
virtual bool CStaticPropMgr::IsStaticProp()=55 8B EC 8B 4D 08 85 C9 74 19=pdb
bool IsUsingStaticPropDebugModes()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 83 F8 01 0F ? ? ? ? ? 8B ? ? ? ? ? 81=pdb
virtual void CStaticPropMgr::RestoreStaticProps()=56 8B F1 FF 76 60=pdb
virtual void CStaticPropMgr::Shutdown()=80 79 48=pdb
Status_PrintCallback()=55 8B EC 8B ? ? ? ? ? 85 C9 74 0C 8D=pdb
virtual int CEngineAPI::Run()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 64 ? ? ? ? ? ? 51 53 56 57 89 65 F0 8B F1 FF=pdb
virtual void CDedicatedServerAPI::SetSubProcessID()=55 8B EC 8B 45 08 A3 ? ? ? ? 8B=pdb
virtual void CGameUIFuncs::GetVideoModes()=55 8B EC 8B ? ? ? ? ? 85 C9 74 20=pdb=CModAppSystemGroup=15
virtual void CGameUIFuncs::GetDesktopResolution()=55 8B EC 51 8B ? ? ? ? ? 8D 55 FC=pdb
reload_vjobs()=83 ? ? ? ? ? ? 74 48 8B=pdb
render_blanks()=55 8B EC 8B 45 08 56 57 83=pdb
virtual float CEngine::GetCurTime()=DD 41 10=pdb
virtual void CEngine::Unload()=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? C7=pdb
cpu_frequency_monitoring_callback()=55 8B EC 8B 4D 08 8D 41 E8 F7 D9 1B C9 23 C8 8B 01 8B=pdb
fps_max_callback()=55 8B EC 80 ? ? ? ? ? ? 75 16=pdb
host_filtered_time_report()=80 ? ? ? ? ? ? 74 48=pdb
mat_powersavingsmode_callback()=55 8B EC 8B 4D 08 83 EC 10 C6=pdb
virtual bool CVideoMode_Common::CreateGameWindow()=55 8B EC 53 8B ? ? ? ? ? 57 68=pdb=CVideoMode_MaterialSystem=4
virtual void CVideoMode_Common::DrawNullBackground()=55 8B EC 83 EC 24 FF=pdb=CVideoMode_MaterialSystem=12
virtual bool CVideoMode_MaterialSystem::Init()=55 8B EC 83 EC 2C 53 56 8B F1 32=pdb=CVideoMode_MaterialSystem=1
virtual void CVideoMode_Common::InvalidateWindow()=FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 74 16=pdb=CVideoMode_MaterialSystem=13
virtual void CVideoMode_MaterialSystem::ReleaseVideo()=56 8B F1 8B 06 8B 40 40 FF D0 84 C0 75 08=pdb
virtual void CVideoMode_MaterialSystem::RestoreVideo()=56 8B F1 8B 06 8B 40 40 FF D0 84 C0 75 47=pdb=CVideoMode_MaterialSystem=10
virtual void CVideoMode_Common::SetClientViewRect()=55 8B EC 8B 45 08 0F 10 00 0F ? ? ? ? ? ? 8B=pdb
virtual void CVideoMode_MaterialSystem::Shutdown()=56 8B F1 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=pdb=CVideoMode_MaterialSystem=2
virtual void CVideoMode_Common::UpdateWindowPosition()=55 8B EC 8B ? ? ? ? ? 8D 55=pdb=CVideoMode_MaterialSystem=9
VideoMode_AdjustForModeChange()=8B ? ? ? ? ? 8B 01 FF 60 74=pdb
init_destination()=55 8B EC 8B 4D 08 56 68=pdb
term_destination()=55 8B EC 8B 45 08 8B 48 18=pdb
void CGame::AttachToWindow()=56 8B F1 8B 46 08 85 C0 74 6C=pdb
virtual void CGame::DestroyGameWindow()=56 8B F1 80 7E 04 00 75=pdb=CGame=4
void CGame::DetachFromWindow()=56 8B F1 83 7E 08 00 74 46=pdb
virtual void CGame::GetDesktopInfo()=55 8B EC 8B D1 8B 4A=pdb=CGame=11
virtual void CGame::GetWindowRect()=55 8B EC 8B 55 08 85 D2 74 05=pdb=CGame=14
void CGame::HandleMsg_ActivateApp()=55 8B EC 8B 45 08 83 78 08=pdb
void CGame::HandleMsg_WindowMove()=55 8B EC 8B 45 08 8B ? ? ? ? ? FF 70 0C=pdb
virtual bool CGame::InputAttachToGameWindow()=53 8B D9 80 7B 04 00=pdb=CGame=6
virtual void CGame::InputDetachFromGameWindow()=56 8B F1 80 7E 04 00 74=pdb=CGame=7
virtual void CGame::OnScreenSizeChanged()=55 8B EC 8B ? ? ? ? ? 85 C9 74 09 8B 01 5D FF ? ? ? ? ? 5D C2 08=pdb
virtual void CGame::PlayStartupVideos()=57 8B F9 FF ? ? ? ? ? 84=pdb
virtual void CGame::SetGameWindow()=55 8B EC C6 41 04=pdb
virtual void CGame::SetWindowSize()=55 8B EC 8B 45 08 89 41 2C 8B=pdb
virtual void CGame::SetWindowXY()=55 8B EC 8B 45 08 89 41 24 8B=pdb
virtual bool CGame::Shutdown()=56 8B F1 83 7E 44=pdb=CGame=2
void CTestScriptMgr::LoopCount()=55 8B EC 51 53 56 8B F1 57 89 75 FC 83=pdb
Test_RandomChance()=55 8B EC 81 ? ? ? ? ? FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 75=pdb
virtual void CAskConnectPanel::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? FF=pdb=CAskConnectPanel=88
virtual bool CVoiceServer::GetClientListening()=55 8B EC 8B 4D 0C 8B 55 08 49=pdb=IVoiceServer=6
virtual bool CVoiceServer::SetClientListening()=55 8B EC 8B 4D 0C 83 EC 08=pdb=IVoiceServer=7
virtual bool CVoiceServer::SetClientProximity()=55 8B EC 8B 4D 0C 8B 45 08 49=pdb
virtual void CVProfExport::AddListener()=FF 41 18 83=pdb
virtual void CVProfExport::RemoveListener()=83 41 18=pdb
void PostUpdateProfile()=55 8B EC 51 A1 ? ? ? ? 83 ? ? ? ? ? ? 0F=pdb
budget_toggle_group()=55 8B EC 8B 45 08 83 38 02 75=pdb
vprof_cachemiss_Impl()=80 ? ? ? ? ? ? 75 22 68 ? ? ? ? FF ? ? ? ? ? A1=pdb
vprof_cachemiss_off_Impl()=80 ? ? ? ? ? ? 74 21 68=pdb
vprof_cachemiss_on_Impl()=80 ? ? ? ? ? ? 75 21 68 ? ? ? ? FF ? ? ? ? ? A1=pdb
vprof_dump_groupnames()=8B ? ? ? ? ? 56 57 FF ? ? ? ? ? 8B F8=pdb
vprof_generate_report_AI_only_Impl()=55 8B EC 51 8B ? ? ? ? ? FF ? ? ? ? ? 8D 4D FF E8 ? ? ? ? 8B ? ? ? ? ? 68=pdb
vprof_generate_report_Impl()=55 8B EC 51 8B ? ? ? ? ? FF ? ? ? ? ? 8D 4D FF E8 ? ? ? ? 33 C9 B8 ? ? ? ? 38 ? ? ? ? ? 6A FF 0F 44 C1 8B ? ? ? ? ? 50 68=pdb
vprof_generate_report_hierarchy_Impl()=55 8B EC 51 8B ? ? ? ? ? FF ? ? ? ? ? 8D 4D FF E8 ? ? ? ? 33 C9 B8 ? ? ? ? 38 ? ? ? ? ? 6A FF 0F 44 C1 8B ? ? ? ? ? 50 6A=pdb
void CVProfRecorder::UpdateAverages_R()=55 8B EC 53 56 8B 75 0C 33 C0 57 8B 7D 08 8B D9 8B 57 0C 85 D2 7E 23=pdb
vprof_playback_stop()=68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 B9 ? ? ? ? E9=pdb
virtual void CXboxSystem::CloseAllContainers()=56 57 8B F9 33 F6 8B 07 8B CF 56 FF 50 30=pdb
virtual int CXboxSystem::EnumerateAchievements()=68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 B8 ? ? ? ? C2=pdb
virtual unsigned int CXboxSystem::SessionStart()=B8 ? ? ? ? C2 10=pdb
virtual int CXboxSystem::WriteStats()=B8 ? ? ? ? C2 1C=pdb
virtual int CXboxSystem::EnumerateStatsByXuid()=B8 ? ? ? ? C2 20=pdb
virtual void CXboxSystem::FinishAllContainerWrites()=56 57 8B F9 33 F6 8B 07 8B CF 56 FF 50 24=pdb
virtual void CXboxSystem::GetModSaveContainerNames()=55 8B EC 81 ? ? ? ? ? 66 ? ? ? ? ? ? ? 0F=pdb=CXboxSystem=5
virtual int CXboxSystem::GetOverlappedResult()=55 8B EC 8B 45 0C 85 C0 74 06=pdb
virtual unsigned long CXboxSystem::NetGetTitleXnAddr()=55 8B EC 8B 45 08 85 C0 74 11=pdb=CXboxSystem=46
virtual int CXboxSystem::NetXnAddrToInAddr()=55 8B EC 8B 4D 10 85 C9 74 17=pdb=CXboxSystem=49
virtual int CXboxSystem::NetXnAddrToMachineId()=55 8B EC 8B 45 0C 85 C0 74 0D=pdb
virtual int CXboxSystem::SessionJoinRemote()=33 C0 C2 18=pdb
virtual unsigned int CXboxSystem::SessionSearch()=B8 ? ? ? ? C2 30=pdb
long filetime2timet()=55 8B EC 83 EC 34 56 8D 45 F0=pdb
bool TZip::oseek()=55 8B EC 80 79 14=pdb
static unsigned int TZip::sflush()=55 8B EC 56 8B 75 10 8B 06=pdb
static unsigned int TZip::sread()=55 8B EC 8B 45 08 FF=pdb
unsigned int TZip::write()=55 8B EC 51 56 8B F1 8B 4E 18=pdb
virtual void CEngineTool::EndMovieRecording()=56 8B F1 80 ? ? ? ? ? ? 74 0C=pdb
bool EngineTool_CheckQuitHandlers()=56 57 8B ? ? ? ? ? 33 F6 85 FF 7E 20=pdb
void EngineTool_UpdateScreenshot()=80 ? ? ? ? ? ? 75 33 80=pdb
virtual float CEngineTool::GetTimescale()=55 8B EC 51 8B ? ? ? ? ? 81 ? ? ? ? ? 75 21=pdb=CEngineTool=34
virtual void CEngineTool::PrefetchSound()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 83=pdb
virtual void CEngineTool::StopRecordingVoiceToFile()=56 8B F1 E8 ? ? ? ? C6=pdb
virtual void CClientEngineTools::PostToolMessage()=55 8B EC 56 57 8B ? ? ? ? ? 33 F6 85 FF 7E 1B=pdb=CEngineTool=398
virtual bool CClientEngineTools::SetupEngineView()=55 8B EC 8B ? ? ? ? ? 85 C9 79 06 32 C0 5D C2 0C=pdb=CEngineTool=400
virtual bool CClientEngineTools::SetupAudioState()=55 8B EC 8B ? ? ? ? ? 85 C9 79 06 32 C0 5D C2 04=pdb=CEngineTool=401
virtual bool CClientEngineTools::IsThirdPersonCamera()=8B ? ? ? ? ? 85 C9 78 0F=pdb
virtual bool CServerEngineTools::InToolMode()=80 ? ? ? ? ? ? 75 0C 80=pdb
virtual bool CToolFrameworkInternal::CanQuit()=53 8B D9 56 57 33 F6 8B 7B 10 85 FF 7E 1D=pdb=CEngineTool=359
virtual bool CToolFrameworkInternal::IsToolRecording()=8B 51 2C 85 D2 78 10 8B 41 04 8B 0C=pdb
virtual bool CToolFrameworkInternal::PostInit()=55 8B EC 51 53 56 57 8B F9 33=pdb=CEngineTool=360
virtual bool CToolFrameworkInternal::ServerInit()=55 8B EC 51 8B 55 08 53 56 57 8B F9 33 F6 B3 01 8B 47 10 89 57 38=pdb=CEngineTool=349
virtual bool CToolFrameworkInternal::ClientInit()=55 8B EC 51 8B 55 08 53 56 57 8B F9 33 F6 B3 01 8B 47 10 89 57 34=pdb=CEngineTool=339
virtual void CToolFrameworkInternal::ServerShutdown()=56 57 8B F9 8B 77 10 83 EE 01 78 14 0F 1F 40 00 8B 47 04 8B 0C B0 8B 01 FF 50 14=pdb=CEngineTool=350
virtual void CToolFrameworkInternal::ClientShutdown()=56 57 8B F9 8B 77 10 83 EE 01 78 14 0F 1F 40 00 8B 47 04 8B 0C B0 8B 01 FF 50 18=pdb=CEngineTool=340
virtual void CToolFrameworkInternal::Think()=55 8B EC 53 56 57 8B F9 33 F6 8B 5F 10 85 DB 7E 13 8B 47=pdb=CEngineTool=361
virtual void CToolFrameworkInternal::PostToolMessage()=55 8B EC 53 56 57 8B F9 33 F6 8B 5F 10 85 DB 7E 16=pdb=CEngineTool=386
virtual bool CToolFrameworkInternal::SetupEngineView()=55 8B EC 8B 51 2C 85 D2 79 06 32 C0 5D C2 0C=pdb
virtual bool CToolFrameworkInternal::SetupAudioState()=55 8B EC 8B 51 2C 85 D2 79 06 32 C0 5D C2 04=pdb
virtual void CToolFrameworkInternal::SwitchToTool()=55 8B EC 56 8B F1 57 8B 46=pdb=CEngineTool=381
virtual bool CToolFrameworkInternal::IsTopmostTool()=55 8B EC 83 79 10=pdb=CEngineTool=382
virtual void CToolFrameworkInternal::PostMessage()=55 8B EC 8B 51 2C 85 D2 78 10=pdb
virtual bool CToolFrameworkInternal::InToolMode()=80 79 30 00 75=pdb
CToolFrameworkInternal_QuitHandler()=55 8B EC 8B 4D 08 85 C9 74 08=pdb
virtual void CEnginePerfTools::Shutdown()=56 8B ? ? ? ? ? 85 F6 74 22=pdb=CEngineTool=555
virtual void CPerfUIPanel::OnTick()=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 75=pdb
virtual CBaseBudgetPanel::~CBaseBudgetPanel()=56 57 8B F9 8D ? ? ? ? ? C7 ? ? ? ? ? E8=pdb
virtual void CBaseBudgetPanel::ApplySchemeSettings()=55 8B EC 83 EC 1C 53 56 57 8B 7D=pdb
void CBaseBudgetPanel::OnConfigDataChanged()=55 8B EC 53 56 57 FF 75 08 8B D9 8B=pdb
virtual void CBaseBudgetPanel::PaintBackground()=55 8B EC 51 57 8B F9 80 ? ? ? ? ? ? 74 32=pdb
virtual void CVProfGraphPanel::OnTick()=56 57 8B F9 8B 37 8B ? ? ? ? ? FF=pdb
void BaseUI_ProgressEnabled_f()=A1 ? ? ? ? B9 ? ? ? ? FF 60 64=pdb
virtual void near * ()=8B 41 74 C3=pdb
virtual bool CEngineVGui::IsConsoleVisible()=8B ? ? ? ? ? 85 C9 74 0E 8B 01 8B 40 14=pdb
virtual bool CEngineVGui::IsPlayingFullScreenVideo()=8B ? ? ? ? ? 8B 01 8B 40 74=pdb
void CVGuiPaintHelper::MapHide()=55 8B EC 8B ? ? ? ? ? 8B 45 08 6A 00 8B=pdb
void CVGuiPaintHelper::MapPaintTraverse()=55 8B EC 8B ? ? ? ? ? 56 8B 75 08 6A=pdb
void CVGuiPaintHelper::MapRestore()=55 8B EC 8B 55 08 8B ? ? ? ? ? 56 0F=pdb
virtual void CEngineVGui::OnLevelLoadingStarted()=55 8B EC 83 ? ? ? ? ? ? 56 8B F1 0F=pdb
gameui_activate()=A1 ? ? ? ? B9 ? ? ? ? FF 60 0C=pdb
virtual void CBudgetPanelShared::SetHistoryLabelText()=56 8B F1 68 ? ? ? ? 8B ? ? ? ? ? 8B=pdb=CBudgetPanelEngine=213
virtual void CBudgetPanelEngine::SetTimeLabelText()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 33 F6 39 ? ? ? ? ? 7E 57=pdb=CBudgetPanelEngine=212
vprof_adddebuggroup1()=8B ? ? ? ? ? 83 ? ? ? ? ? ? 74 22=pdb
virtual void CBudgetPanelShared::PaintBackground()=56 8B F1 8B ? ? ? ? ? 85 C9 74 05=pdb
virtual void CBudgetPanelShared::PostChildPaint()=8B ? ? ? ? ? 0F 31 A3=pdb
virtual void CVGuiTree::ApplySchemeSettings()=55 8B EC 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06 8B CE 8B 3B 6A 00 68 ? ? ? ? FF 50 0C 50 8B CB FF ? ? ? ? ? 8B 03 8B CB 6A=pdb
void vgui_drawtree_clear_f()=A1 ? ? ? ? 85 C0 74 12 8B=pdb
virtual void CTextureBudgetPanel::ResetAll()=56 8B F1 E8 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? 5E=pdb
virtual void CTextureBudgetPanel::SetTimeLabelText()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 33 F6 39 ? ? ? ? ? 7E 65=pdb=CTextureBudgetPanel=212
void IN_VProfChild()=55 8B EC A1 ? ? ? ? 83 EC 10 56 8B 70=pdb
void IN_VProfNextSibling()=8B ? ? ? ? ? 8B ? ? ? ? ? 85 C0 0F 45 C8 89=pdb
void IN_VProfParent()=8B ? ? ? ? ? 8B 41 78=pdb
void IN_VProfPrevSibling()=8B ? ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 85 C0 0F 45=pdb
virtual void CVProfLabel::ApplySchemeSettings()=55 8B EC 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06 8B CE 8B 3B 6A 00 68 ? ? ? ? FF 50 0C 50 8B CB FF ? ? ? ? ? 8B 03 8B CB C7=pdb=CVProfLabel=88
virtual void CVProfPanel::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 68 ? ? ? ? FF 50 08 8B=pdb=CVProfPanel=88
void CVProfPanel::FillTree()=55 8B EC 53 56 8B 75 0C 8B D9 57 8B 7D 10=pdb
virtual void CProfileTree::InvalidateLayout()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? 8B=pdb=CProfileTree=66
virtual bool CProfileHierarchyPanel::IsItemExpanded()=55 8B EC 8B 01 FF ? ? ? ? ? 8B 10 8B C8 8B=pdb
int CVProfPanel::UpdateVProfTreeEntry()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 0C 8B D9=pdb
CryptoPP::CannotFlush::CannotFlush()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 89 7D F0 8B 75 08 8D 47 04 0F=pdb
virtual bool CryptoPP::BufferedTransformation::Flush()=8B 01 FF 74 24 0C FF 74=pdb
virtual unsigned int CryptoPP::PK_Signer::Sign()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 75 0C=pdb=CryptoPP::TF_SignerImpl<struct CryptoPP::TF_SignatureSchemeOptions<class CryptoPP::TF_SS<struct CryptoPP::PKCS1v15,class CryptoPP::SHA1,struct CryptoPP::RSA,int>,struct CryptoPP::RSA,class CryptoPP::PKCS1v15_SignatureMessageEncodingMethod,class CryptoPP::SHA1>>=11
virtual unsigned int CryptoPP::Sink::TransferTo2()=8B 44 24 08 C7=pdb
virtual bool CryptoPP::PK_Verifier::Verify()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 53 56 A1=pdb=CryptoPP::TF_VerifierImpl<struct CryptoPP::TF_SignatureSchemeOptions<class CryptoPP::TF_SS<struct CryptoPP::PKCS1v15,class CryptoPP::SHA1,struct CryptoPP::RSA,int>,struct CryptoPP::RSA,class CryptoPP::PKCS1v15_SignatureMessageEncodingMethod,class CryptoPP::SHA1>>=11
virtual bool CryptoPP::PK_Verifier::VerifyMessage()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B=pdb
void CryptoPP::AlignedDeallocate()=8B 4C 24 04 0F=pdb
void near * CryptoPP::UnalignedAllocate()=83 EC 0C 56 57 8B 7C 24 18 57=pdb
int CryptoPP::Baseline_Add()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 F7 ? ? ? ? ? 74 05 83 E9 02 EB 17 E3 32 8B 34 88 13=pdb
int CryptoPP::Baseline_Sub()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 F7 ? ? ? ? ? 74 05 83 E9 02 EB 17 E3 32 8B 34 88 1B=pdb
virtual CryptoPP::SHA1::~SHA1()=8B D1 8B ? ? ? ? ? 8D 42=pdb
bool CryptoPP::AssignIntToInteger()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 14 56=pdb
virtual void CryptoPP::Integer::BERDecode()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C A1 ? ? ? ? 33 C5 89 45 F0 56 50 8D 45 F4 64 ? ? ? ? ? 8B F1 8B 45=pdb=CryptoPP::Integer=1
void CryptoPP::BERDecodeError()=83 EC 2C A1 ? ? ? ? 33 C4 89 44 24 28 8D=pdb
void CryptoPP::Baseline_MultiplyBottom2()=53 8B 5C 24 0C 56 8B 74=pdb
void CryptoPP::Baseline_MultiplyTop4()=83 EC 08 8B 44 24 14 53 8B 5C 24 14 55 8B 28 56 8B 43 08=pdb
void CryptoPP::Baseline_MultiplyTop8()=83 EC 08 8B 44 24 14 53 8B 5C 24 14 55 8B 28 56 8B 43 18=pdb
void CryptoPP::Baseline_Square4()=83 EC 08 8B 4C 24 0C=pdb
void CryptoPP::Baseline_Square8()=83 EC 0C 8B 4C 24 10=pdb
void CryptoPP::CopyWords()=8B 4C 24 04 8B 54 24 08 3B=pdb
CryptoPP::EvenWordCount()=8B 44 24 08 85 C0 74=pdb
void CryptoPP::MontgomeryReduce()=53 55 8B 6C 24 10 56=pdb
void CryptoPP::PositiveDivide()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 4C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 5D=pdb
void CryptoPP::RecursiveMultiply()=8B 44 24 14 83 EC=pdb
void CryptoPP::RecursiveMultiplyBottom()=57 8B 7C 24 18 3B=pdb
void CryptoPP::RecursiveSquare()=51 8B 44 24 14=pdb
CryptoPP::RoundupSize()=8B 44 24 04 83 F8 08=pdb
int CryptoPP::SSE2_Add()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 0F EF D2 74 73 F7 ? ? ? ? ? 74 05 83 E9 02 EB 2F 0F 6E 04 88 0F 6E 0C 8F 0F D4=pdb
void CryptoPP::SSE2_Square4()=55 8B EC 53 56 57 8B 45 0C 8B 4D 08 8D ? ? ? ? ? 8B F4 83 E4 F0 8D 7C 24 C0=pdb
void CryptoPP::SSE2_Square8()=55 8B EC 53 56 57 8B 45 0C 8B 4D 08 8D ? ? ? ? ? 8B F4 83 E4 F0 8D 7C 24 80=pdb
int CryptoPP::SSE2_Sub()=57 56 8B 44 24 0C 8B 7C 24 10 8D 04 88 8D 3C 8F 8D 14 8A F7 D9 0F EF D2 74 73 F7 ? ? ? ? ? 74 05 83 E9 02 EB 2F 0F 6E 04 88 0F 6E 0C 8F 0F FB=pdb
CryptoPP::SetFunctionPointers()=A0 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=pdb
CryptoPP::Filter::Filter()=51 56 8B F1 6A 00 89 74 24 08 E8 ? ? ? ? 8B 44 24 0C 89 46 0C=pdb
virtual unsigned int CryptoPP::Filter::CopyRangeTo2()=8B 01 FF ? ? ? ? ? FF 74 24 18=pdb=CryptoPP::PK_DefaultEncryptionFilter=32
virtual void CryptoPP::Filter::Detach()=56 8B F1 8B 4E 0C 85 C9 74 06 8B 01 6A 01 FF 10 8B=pdb
virtual bool CryptoPP::Filter::Flush()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 1C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=pdb
virtual bool CryptoPP::Store::GetNextMessage()=56 8B F1 80 7E 10 00 75=pdb=CryptoPP::BERGeneralDecoder=25
virtual void CryptoPP::Filter::Initialize()=53 56 FF 74 24 0C=pdb=CryptoPP::PK_DefaultEncryptionFilter=10
virtual void CryptoPP::ArraySink::IsolatedInitialize()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 4C A1 ? ? ? ? 33 C5 89 45 F0 56 50=pdb=CryptoPP::ArraySink=7
virtual bool CryptoPP::Filter::MessageSeriesEnd()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 24 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=pdb
virtual void CryptoPP::StringStore::StoreInitialize()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 5C A1 ? ? ? ? 33 C5 89 45 F0 56=pdb
virtual unsigned int CryptoPP::Filter::TransferTo2()=8B 01 FF ? ? ? ? ? 8B 10 8B C8 FF=pdb
virtual CryptoPP::ByteQueue::~ByteQueue()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? C7=pdb
bool CryptoPP::ByteQueue::IsEmpty()=8B 51 14 3B=pdb
virtual void CryptoPP::ByteQueue::IsolatedInitialize()=51 56 8B F1 C7 ? ? ? ? ? ? ? 8B=pdb
virtual unsigned int CryptoPP::ByteQueue::Peek()=8B 41 14 8B 50=pdb=CryptoPP::DERGeneralEncoder=20
CryptoPP::AlgorithmParameters::AlgorithmParameters()=51 8B 54 24 08 56 8B F1 57=pdb
unsigned int CryptoPP::BytePrecision<unsigned __int64>()=8B 44 24 04 55=pdb
CryptoPP::DERGeneralEncoder::DERGeneralEncoder()=51 56 8B F1 6A 00 89 74 24 08 E8 ? ? ? ? 8B 44 24 0C 89 46 28=pdb
void CryptoPP::BERDecodeNull()=51 56 8B 74 24 0C 8D 4C 24 0C=pdb
bool CryptoPP::BERLengthDecode()=83 EC 0C 8D 44 24 03=pdb
virtual void CryptoPP::X509PublicKey::DEREncode()=55 8D ? ? ? ? ? ? 81 ? ? ? ? ? 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 10=pdb
void CryptoPP::DEREncodeNull()=51 56 8B 74 24 0C 8D 4C 24 04=pdb
unsigned int CryptoPP::DEREncodeOctetString()=51 53 8B 5C 24 0C 8D=pdb
void CryptoPP::DERReencode()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 50 8D 45 F4 64 ? ? ? ? ? 8B 75=pdb
void CryptoPP::DERGeneralEncoder::MessageEnd()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=pdb
static void CryptoPP::SHA1::InitState()=8B 44 24 04 C7 ? ? ? ? ? C7=pdb
CryptoPP::X86_SHA256_HashBlocks()=55 8B EC 53 56 57 8B 7D 08 8D=pdb
CryptoPP::RSAPrimeSelector::~RSAPrimeSelector()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 51 0C=pdb
class CryptoPP::Integer CryptoPP::LCM()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C 53=pdb
void CryptoPP::InvertibleRSAFunction::SetPrime1()=83 E9 80 E9=pdb
virtual bool CryptoPP::RSAFunction::Validate()=56 57 8B F1 E8 ? ? ? ? 8D 7E=pdb
CryptoPP::WindowSlider::~WindowSlider()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9 8B 53 1C=pdb
CryptoPP::FastProbablePrimeTest()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 14 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 02=pdb
bool CryptoPP::FirstPrime()=55 8D 6C 24 9C 83 EC 64 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 7C=pdb
int CryptoPP::Jacobi()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 3C 53 56 57=pdb
class CryptoPP::Integer CryptoPP::ModularRoot()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 54 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8D=pdb
unsigned int CryptoPP::PrimeSearchInterval()=8B 4C 24 04 E9=pdb
static void CryptoPP::PrimeSieve::SieveSingle()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 58 53=pdb
bool CryptoPP::VerifyPrime()=56 8B 74 24 0C 56=pdb
void CryptoPP::Rijndael_Enc_AdvancedProcessBlocks()=56 57 53 55 8D=pdb
virtual void CryptoPP::NonblockingRng::GenerateBlock()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 44 A1 ? ? ? ? 33 C5 89 45 F0 56 50 8D 45 F4 64 ? ? ? ? ? 83=pdb
bool CAppSystemGroup::AddSystems()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 80=pdb
void near * AppSystemCreateInterfaceFn()=55 8B EC FF 75 08 8B ? ? ? ? ? E8=pdb
void near * CAppSystemGroup::FindSystem()=55 8B EC 83 EC 08 53 8B 5D 08 56 8B F1 85=pdb
char const near * CAppSystemGroup::FindSystemName()=55 8B EC 53 56 8B F1 BB=pdb
int CAppSystemGroup::OnStartup()=56 8B F1 89 ? ? ? ? ? 8B 06=pdb
virtual void CSimpleLoggingListener::Log()=55 8B EC 57 8B F9 80 7F 04=pdb=CAppSystemGroup=24
bool FloatBitMap_t::WritePFM()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 83=pdb
void FloatCubeMap_t::WritePFMs()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 BE=pdb
ImageLoader::A8ToRGBA8888()=55 8B EC 8B 45 08 56 8B 75 10 03 F0 3B C6 73 26=pdb
ImageLoader::RGBA8888ToABGR8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 02 2B F1 83 C6 FE 8D 41 02 0F B6 4A 01=pdb
ImageLoader::ARGB8888ToRGBA8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 02 2B F1 83 C6 FE 8D 41 02 0F B6 4A FF=pdb
ImageLoader::BGR565ToRGBA8888()=55 8B EC 8B 45 10 33 D2 57 8B 7D 08 C7 ? ? ? ? ? ? 8D 0C 47 8D ? ? ? ? ? ? D1 E8 3B F9 0F 47 C2 89 45 10 85 C0 74 5A=pdb
ImageLoader::BGR888ToRGBA8888()=55 8B EC 8B 4D 10 8B 45 08 56 8D 34 48 03 F1 3B C6 73 2F 8B 55 0C 83 C2 02 0F ? ? ? ? ? ? 0F B6 48=pdb
ImageLoader::BGR888_BLUESCREENToRGBA8888()=55 8B EC 8B 45 10 57 8B 7D 08 8D 14 47 03 D0 3B FA 73 52=pdb
ImageLoader::BGRA4444ToRGBA8888()=55 8B EC 51 8B 45 10 8B 55 08 57 C7 ? ? ? ? ? ? 8D ? ? ? ? ? ? 8D 0C 42 D1 EF 33 C0 3B D1 0F 47 F8 85 FF 74 76=pdb
ImageLoader::BGRA5551ToRGBA8888()=55 8B EC 51 8B 45 10 8B 55 08 57 C7 ? ? ? ? ? ? 8D ? ? ? ? ? ? 8D 0C 42 D1 EF 33 C0 3B D1 0F 47 F8 85 FF 74 70=pdb
ImageLoader::RGBA8888ToBGRA8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 01 2B F1 83 C6 FE 8D 41 02 0F B6 4A 01=pdb
ImageLoader::BGRX5551ToRGBA8888()=55 8B EC 8B 45 10 33 D2 57 8B 7D 08 C7 ? ? ? ? ? ? 8D 0C 47 8D ? ? ? ? ? ? D1 E8 3B F9 0F 47 C2 89 45 10 85 C0 74 5D=pdb
ImageLoader::BGRX8888ToRGBA8888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 31=pdb
ImageLoader::I8ToRGBA8888()=55 8B EC 8B 45 08 56 8B 75 10 03 F0 3B C6 73 24=pdb
ImageLoader::IA88ToRGBA8888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 48=pdb
ImageLoader::RGB888ToRGBA8888()=55 8B EC 8B 4D 10 8B 45 08 56 8D 34 48 03 F1 3B C6 73 2F 8B 55 0C 83 C2 02 0F ? ? ? ? ? ? 0F B6 08=pdb
ImageLoader::RGB888_BLUESCREENToRGBA8888()=55 8B EC 8B 45 10 57 8B 7D 08 8D 14 47 03 D0 3B FA 73 56=pdb
ImageLoader::RGBA16161616ToRGBA8888()=55 8B EC 8B 45 10 56 57 8B 7D 08=pdb
ImageLoader::RGBA8888ToA8()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 13=pdb
ImageLoader::RGBA8888ToARGB8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 38 8B 4D 0C 8D 56 01 2B F1 83 C6 FE 8D 41 02 0F B6 4A 02=pdb
ImageLoader::RGBA8888ToBGR565()=55 8B EC 8B 45 08 8B 4D 10 56 8B 75 0C 57 8D 3C 88 3B C7 73 43=pdb
ImageLoader::RGBA8888ToBGR888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 2D=pdb
ImageLoader::RGBA8888ToBGR888_BLUESCREEN()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 3E=pdb
ImageLoader::RGBA8888ToBGRA4444()=55 8B EC 8B 4D 08 8B 45 10 57 8B 7D 0C 8D 04 81 3B C8 73 51=pdb
ImageLoader::RGBA8888ToBGRA5551()=55 8B EC 8B 4D 08 8B 45 10 57 8B 7D 0C 8D 04 81 3B C8 73 61=pdb
ImageLoader::RGBA8888ToBGRX5551()=55 8B EC 8B 45 08 8B 4D 10 56 8B 75 0C 57 8D 3C 88 3B C7 73 3E=pdb
ImageLoader::RGBA8888ToBGRX8888()=55 8B EC 8B 45 10 56 8B 75 08 57 8D 3C 86 3B F7 73 32=pdb
ImageLoader::RGBA8888ToI8()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 61=pdb
ImageLoader::RGBA8888ToIA88()=55 8B EC 8B 45 10 56 8B 75 08 8D=pdb
ImageLoader::RGBA8888ToR32F()=55 8B EC 8B 4D 08 8B 45 10 8B 55 0C 56 8D 34 81 3B CE 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 8B C6 2B C1 83 C0 03 83 E0 FC 83 F8 10 72=pdb
ImageLoader::RGBA8888ToRG3232F()=55 8B EC 8B 4D 08 8B 45 10 8B 55 0C 56 8D 34 81 3B CE 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 8B C6 2B C1 83 C0 03 83 E0 FC 83 F8 10 0F=pdb
ImageLoader::RGBA8888ToRGB323232F()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 54=pdb
ImageLoader::RGBA8888ToRGB888()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 24=pdb
ImageLoader::RGBA8888ToRGB888_BLUESCREEN()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 73 3F=pdb
ImageLoader::RGBA8888ToRGBA32323232F()=55 8B EC 8B 45 10 57 8B 7D 08 8D 0C=pdb
ImageLoader::UVWQ8888ToRGBA8888()=55 8B EC 8B 45 10 C1=pdb
ImageLoader::RGBA8888ToUV88()=55 8B EC 8B 45 08 8B 4D 10 56 8D 34 88 3B C6 73 1A=pdb
ImageLoader::UV88ToRGBA8888()=55 8B EC 8B 55 08 8B 45 10 56 8D=pdb
stb__InitDXT()=33 D2 8B CA 8A=pdb
void CUtlBuffer::GetTypeBin<unsigned int>()=55 8B EC 56 6A 04=pdb
BZ2_bzCompress()=55 8B EC 8B 4D 08 85 C9 75 07=pdb
BZ2_bzCompressEnd()=55 8B EC 56 8B 75 08 85 F6 75 08 8D 46 FE 5E 5D C2 04 00 57 8B 7E 20 85 FF 74 04 39 37 74 0B 5F B8 ? ? ? ? 5E 5D C2 04 00 8B 47=pdb
BZ2_bzCompressInit()=55 8B EC 56 57 8B 7D 08 85 FF 0F=pdb
BZ2_bzDecompress()=55 8B EC 8B 45 08 85 C0 75 09 B8 ? ? ? ? 5D C2 04 00 56=pdb
BZ2_bzDecompressEnd()=55 8B EC 56 8B 75 08 85 F6 75 08 8D 46 FE 5E 5D C2 04 00 57 8B 7E 20 85 FF 74 04 39 37 74 0B 5F B8 ? ? ? ? 5E 5D C2 04 00 8B ? ? ? ? ? 85=pdb
BZ2_bzDecompressInit()=55 8B EC 56 8B 75 08 85 F6 75 08 8D 46 FE 5E 5D C2 0C=pdb
BZ2_bzRead()=55 8B EC 56 57 8B 7D 08 85 FF 74=pdb
BZ2_bzReadClose()=55 8B EC 8B 45 08 85 C0 74 06=pdb
BZ2_bzReadOpen()=55 8B EC 53 57 8B 7D 08 85 FF 74=pdb
BZ2_bzWriteClose64()=55 8B EC 56 8B 75 0C 85 F6 75 12=pdb
BZ2_bzWriteOpen()=55 8B EC 53 56 8B 75 08 85=pdb
_BZ2_bz__AssertH__fail()=55 8B EC 68 ? ? ? ? FF 75 08 68=pdb
BZ2_bzclose()=55 8B EC 56 8B 75 08 8D 45 08=pdb
BZ2_bzopen()=55 8B EC 6A 00 FF 75 0C 6A=pdb
BZ2_bzread()=55 8B EC 8B 45 08 83 ? ? ? ? ? ? 75 06=pdb
_BZ2_compressBlock()=55 8B EC 56 8B 75 08 57 8B 56 44=pdb
_BZ2_decompress()=55 8B EC 83 EC 74 A1=pdb
_BZ2_blockSort()=55 8B EC 83 EC 10 53 56 8B 75 08 57=pdb
_BZ2_hbAssignCodes()=55 8B EC 56 8B 75 10 33=pdb
_BZ2_hbCreateDecodeTables()=55 8B EC 51 8B 45 18 33=pdb
_BZ2_hbMakeCodeLengths()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53=pdb
int CUtlSymbolTable::FindPoolWithSpace()=55 8B EC 53 56 57 8B 79 30=pdb
void CUtlRBTree<char const near *,int,bool ()=55 8B EC 8B 55 08 83 EC 08 53 56 8B F1 57 83 FA FF 74 17 8B 4E 04 8D 04 92 8B 7C 81=pdb
_sscanf_s()=55 8B EC 8D 45 10 50 6A=pdb
void CDmxAttribute::FreeDataMemory()=56 8B F1 8B 06 85 C0 0F ? ? ? ? ? 48=pdb
bool CDmxAttribute::SerializesOnMultipleLines()=8B 01 32=pdb
CDmxElement::CDmxElement()=55 8B EC 56 FF 75 08 8B F1 B9=pdb
struct UniqueId_t const near & CDmxElement::GetId()=8D 41 1C C3=pdb
void CDmxElement::Resort()=55 8B EC 83 EC 0C 56 8B F1 F6 46 31=pdb
int CDmxSerializationDictionary::RootElementCount()=56 8B F1 57 33 FF 8B 46=pdb
void CDmxElementDictionary::AddAttribute()=55 8B EC 56 8D 71 14 8B 4E 04 57 8B 7E 0C 8D 47 01 3B C1 7E 0D 8B C7 2B C1 8B CE 40 50 E8 ? ? ? ? FF 46 0C 8B 56=pdb
void DisconnectInterfaces()=8B ? ? ? ? ? 83 EA 01 89=pdb
bool google::protobuf::MessageLite::AppendToString()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 45=pdb
bool google::protobuf::MessageLite::ParseFromArray()=55 8B EC 51 FF 75 0C=pdb
bool google::protobuf::MessageLite::ParseFromString()=55 8B EC 8B 45 08 83 78 14 10 8B 50 10 72 02 8B 00 51=pdb
google::protobuf::internal::MutexLock::~MutexLock()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 09 E8=pdb
virtual int google::protobuf::Message::ByteSize()=56 57 8B F9 57 E8=pdb
virtual int google::protobuf::Message::SpaceUsed()=56 8B F1 8B 06 FF 50 44=pdb
google::protobuf::TextFormat::Parser::Parser()=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb
google::protobuf::TextFormat::Printer::Printer()=C7 ? ? ? ? ? 8B C1 66 ? ? ? ? ? C6=pdb
void google::protobuf::LowerString()=55 8B EC 8B 45 08 56 8B 50=pdb
void google::protobuf::TextFormat::Printer::Print()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 10 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 89 4D=pdb
static int std::char_traits<char>::compare()=55 8B EC 8B 4D 10 85 C9 75=pdb
int google::protobuf::UnknownFieldSet::field_count()=8B 09 85 C9 75 03=pdb
google::protobuf::internal::LogMessage::LogMessage()=55 8B EC 51 8B 45 08 89 01=pdb
google::protobuf::internal::Mutex::Mutex()=56 6A 18 8B F1=pdb
google::protobuf::internal::LogMessage::~LogMessage()=8B 41 20 56 8D=pdb
google::protobuf::internal::Mutex::~Mutex()=56 8B F1 FF 36 FF=pdb
void google::protobuf::internal::DefaultLogHandler()=55 8B EC 8B 45 14 83 78=pdb
void google::protobuf::internal::DeleteLogSilencerCount()=56 8B ? ? ? ? ? 85 F6 74 1C=pdb
void google::protobuf::internal::LogMessage::Finish()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 3C A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F9=pdb
void google::protobuf::internal::InitLogSilencerCount()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 04=pdb
void google::protobuf::internal::InitShutdownFunctions()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 6A 0C=pdb
void google::protobuf::internal::OnShutdown()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 10 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? A1=pdb
void ()=55 8B EC A1 ? ? ? ? 33 C9 3D=pdb
void google::protobuf::internal::VerifyVersion()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 5D 08=pdb
unsigned int google::protobuf::ghtonl()=55 8B EC 8B 4D 08 8B C1 C1=pdb
google::protobuf::DescriptorPool::DescriptorPool()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 89 75 F0 6A 04=pdb
google::protobuf::DescriptorPool::Tables::Tables()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 0C 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 89=pdb
google::protobuf::DescriptorPool::Tables::~Tables()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9 8D=pdb
void google::protobuf::DescriptorBuilder::AddError()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 50 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=pdb
void google::protobuf::DescriptorBuilder::BuildEnum()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 28 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B=pdb
void google::protobuf::Descriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 08 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 5D=pdb
void google::protobuf::EnumValueDescriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9 8B 7D 08 8B 33 83 4F 18=pdb
void google::protobuf::FieldDescriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 20 A1 ? ? ? ? 33 C5 89 45 F0 53=pdb
void google::protobuf::FileDescriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 10 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9 8B=pdb
void google::protobuf::MethodDescriptor::CopyTo()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B D9 8B 7D 08 8B 33 83 4F 1C=pdb
google::protobuf::_anonymous_namespace_::DeleteGeneratedPool()=8B ? ? ? ? ? 85 C9 74 06 8B 01 6A 01 FF 10 56=pdb
google::protobuf::_anonymous_namespace_::FormatLineOptions()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 75=pdb
google::protobuf::_anonymous_namespace_::Symbol::GetFile()=8B 01 83 F8 07=pdb
bool google::protobuf::Descriptor::IsExtensionNumber()=55 8B EC 56 8B 71 30=pdb
google::protobuf::_anonymous_namespace_::RetrieveOptions()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 5D 10=pdb
google::protobuf::_anonymous_namespace_::ToCamelCase()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 08 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? C7=pdb
google::protobuf::UnknownFieldSet::~UnknownFieldSet()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 83=pdb
void google::protobuf::UnknownField::DeepCopy()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 07 C1=pdb
void google::protobuf::UnknownFieldSet::MergeFrom()=55 8B EC 83 EC 10 53 8B 5D 08 56 8B F1=pdb
virtual google::protobuf::FileOptions::~FileOptions()=56 57 8B F9 C7 ? ? ? ? ? E8 ? ? ? ? 33 F6 39 77 2C=pdb
virtual int google::protobuf::EnumOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 8B F9 C7 ? ? ? ? ? ? 80=pdb
virtual int google::protobuf::FieldOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 80 7E=pdb
virtual int google::protobuf::FileOptions::ByteSize()=55 8B EC 83 EC 08 A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B F1 C7 ? ? ? ? ? ? 57 33 FF 8B 4E=pdb
virtual void google::protobuf::EnumOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 28 00 74 04=pdb
virtual void google::protobuf::ServiceOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 33=pdb
virtual void google::protobuf::FieldOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 8B=pdb
virtual void google::protobuf::FileOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 3C=pdb
virtual void google::protobuf::MessageOptions::Clear()=56 8B F1 57 8D 4E 04 E8 ? ? ? ? 80 7E 28 00 74 06=pdb
void google::protobuf::FieldOptions::SharedDtor()=56 8B 71 18 81=pdb
void google::protobuf::FileOptions::SharedDtor()=56 57 8B F9 8B 77 10 81=pdb
void google::protobuf::FileOptions::set_go_package()=55 8B EC 56 8B F1 83 4E 3C 20=pdb
void google::protobuf::FileOptions::set_java_package()=55 8B EC 56 8B F1 83 4E 3C 01=pdb
void google::protobuf::DescriptorProto::set_name()=55 8B EC 56 8B F1 83 4E 64=pdb
void google::protobuf::GoogleOnceInitImpl()=55 8B EC 56 8B 75 08 8B 06 83 F8 02 74=pdb
bool google::protobuf::io::CodedInputStream::Skip()=55 8B EC 56 8B 75 08 8B D1 85 F6 78=pdb
void google::protobuf::RepeatedField<bool>::Reserve()=55 8B EC 51 8B 55 08 56 8B F1 8B 46 08 3B C2 7D 48=pdb
int google::protobuf::internal::StringSpaceUsedExcludingSelf()=55 8B EC 8B 45 08 8B 48 14 8D=pdb
int google::protobuf::FieldDescriptor::index()=80 79 20 00 75 18=pdb
google::protobuf::internal::SubMessagePrefix()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 24 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 75 08 8B 4D=pdb
void google::protobuf::internal::ExtensionSet::Clear()=56 57 8B F9 8B 07 8B 30=pdb
google::protobuf::internal::_anonymous_namespace_::Register()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 78 A1 ? ? ? ? 33 C5 89 45 F0 56=pdb
void google::protobuf::internal::ExtensionSet::Swap()=55 8B EC 56 57 8B 7D 08 8B F1 3B=pdb
int google::protobuf::CEscapeInternal()=55 8B EC 8B 45 0C 32=pdb
void google::protobuf::DelocalizeRadix()=55 8B EC 56 8B 75 08 6A 2E=pdb
char near * google::protobuf::DoubleToBuffer()=55 8B EC 83 EC 0C F2=pdb
char near * google::protobuf::FastHex32ToBuffer()=55 8B EC 8B ? ? ? ? ? 33 D2=pdb
char near * google::protobuf::FastHex64ToBuffer()=55 8B EC 8B 55 08 8B 4D 0C 53 8B ? ? ? ? ? 56=pdb
char near * google::protobuf::FastInt32ToBuffer()=55 8B EC 8B 4D 0C 53=pdb
char near * google::protobuf::FastInt64ToBuffer()=55 8B EC 8B 55 0C 8B 45 08 53=pdb
char near * google::protobuf::FastUInt32ToBufferLeft()=55 8B EC 53 8B 5D 08 56 81=pdb
char near * google::protobuf::FastUInt64ToBufferLeft()=55 8B EC 51 8B 45 0C 33 C9=pdb
char near * google::protobuf::FloatToBuffer()=55 8B EC 51 F3 ? ? ? ? C7=pdb
void google::protobuf::JoinStrings()=55 8B EC 51 8B 4D 08 FF=pdb
double google::protobuf::NoLocaleStrtod()=55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 56=pdb
int google::protobuf::UnescapeCEscapeSequences()=55 8B EC 83 EC 58 A1=pdb
bool google::protobuf::safe_strtof()=55 8B EC 51 56 E8=pdb
google::protobuf::io::Tokenizer::Tokenizer()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F1 89 75 F0 8D 46=pdb
google::protobuf::io::Tokenizer::Token::~Token()=8B 41 18 56 8D 71 04=pdb
google::protobuf::io::Tokenizer::~Tokenizer()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 8B 57 60=pdb
google::protobuf::io::AppendUTF8()=55 8B EC 51 8B 55 08 C7=pdb
void google::protobuf::io::Tokenizer::ConsumeString()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 34 A1 ? ? ? ? 33 C5 89 45 F0 53 56 50 8D 45 F4 64 ? ? ? ? ? 8B F1 8A=pdb
google::protobuf::io::_anonymous_namespace_::DigitValue()=55 8B EC 8A 4D 08 8D 41 D0=pdb
google::protobuf::io::FetchUnicodePoint()=55 8B EC 83 EC 08 8B 45 0C 53 8B=pdb
bool google::protobuf::io::Tokenizer::Next()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 34 A1 ? ? ? ? 33 C5 89 45 F0 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1 8B=pdb
void google::protobuf::io::Tokenizer::NextChar()=8B D1 8A 42=pdb
google::protobuf::io::ReadHexDigits()=55 8B EC 8B 45 0C 56 8B 75 10=pdb
void google::protobuf::io::Tokenizer::Refresh()=55 8B EC 51 56 8B F1 80 7E=pdb
google::protobuf::io::_anonymous_namespace_::TranslateEscape()=55 8B EC 0F BE=pdb
google::protobuf::DynamicMessage::DynamicMessage()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 14 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 89 4D=pdb
google::protobuf::_anonymous_namespace_::FieldSpaceUsed()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 2C A1 ? ? ? ? 33 C5 89 45 F0 50 8D 45 F4 64 ? ? ? ? ? 8B=pdb
bool google::protobuf::DynamicMessage::is_prototype()=8B 41 04 8B 40 24 3B C1 74 07=pdb
void google::protobuf::strings::SubstituteAndAppend()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 45=pdb
google::protobuf::internal::ValidateEnumUsingDescriptor()=55 8B EC FF 75 0C 8B 4D 08 E8 ? ? ? ? F7=pdb
int google::protobuf::internal::NoBarrier_CompareAndSwap()=55 8B EC 8B 55 10 8B 4D 08 8B=pdb
void google::protobuf::StringAppendF()=55 8B EC 8D 45 10 50 FF=pdb
void google::protobuf::StringAppendV()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 10 53=pdb
void fourplanes_t::ComputeSignbits()=0F 28 01 0F ? ? ? ? ? ? ? 0F=pdb
void InitSinCosTable()=56 33 F6 66 0F 6E C6=pdb
IceKey::~IceKey()=56 33 F6 39 71=pdb
void IceKey::scheduleBuild()=55 8B EC 83 EC 18 8B 45 0C 53 56=pdb
bool CVolumeCuller::CheckBoxCenterHalfDiagonal()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 3C=pdb
virtual void CCurveEditorPanel::OnKeyCodePressed()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 78=pdb=CColorCurvesEditPanel=121
void qhConvex::AbsorbFaces()=55 8B EC 83 EC 08 56 8B 75 0C 89=pdb
void qhConvex::AddVertexToHull()=55 8B EC 83 EC 18 53 56 57 8B 7D 08 8B D9 6A=pdb
void qhConvex::BuildHorizon()=55 8B EC 83 EC 08 8B D1 8B 4D=pdb
void qhConvex::CleanHull()=56 57 8B F9 8B 57 5C=pdb
struct qhVertex near * qhConvex::NextConflictVertex()=8B 51 5C=pdb
void qhConvex::ResolveVertices()=55 8B EC 83 EC 08 53 8B D9 89 5D F8 8B 53 1C=pdb
void near * CreateInterfaceInternal()=55 8B EC 56 8B ? ? ? ? ? 57 85 F6 74 38=pdb
unsigned int ThreadedLoadLibraryFunc()=55 8B EC 56 8B 75 08 6A 08=pdb
char near * V_pretifynum()=55 8B EC 83 EC 14 A1 ? ? ? ? 53 8B=pdb
char const near * V_stristr()=55 8B EC 53 57 8B 7D 08 85 FF 0F=pdb
virtual char const near * ConVar::GetHelpText()=8B 41 1C 8B 40 10=pdb
virtual bool ConVar::IsRegistered()=8B 41 1C 8A 40=pdb
virtual void ConVar::AddFlags()=55 8B EC 8B 49 1C 8B 45 08 09=pdb
virtual int ConVar::GetFlags()=8B 41 1C 8B 40 14=pdb
virtual void ConVar::SetValue()=55 8B EC 8B 49 04 FF=pdb
virtual void ConVar::InternalSetFloatValue()=55 8B EC 83 EC 28 56 8B F1 F3=pdb=ConVar_ServerBounded=15
virtual void ConVar::InternalSetIntValue()=55 8B EC 83 EC 28 56 8B F1 57=pdb=ConVar_ServerBounded=16
virtual void ConVar::InternalSetColorValue()=55 8B EC 83 EC 08 8B 45 08 8B D0 C1=pdb=ConVar_ServerBounded=17
virtual bool ConVar::ClampValue()=55 8B EC 80 79 34=pdb=ConVar_ServerBounded=18
virtual void ConCommandBase::Init()=8B D1 8B ? ? ? ? ? 85 C9 74 05=pdb
virtual void ConCommandBase::RemoveFlags()=55 8B EC 8B 45 08 F7=pdb
ConVar::ConVar()=55 8B EC 56 6A 00 51 C7 ? ? ? ? ? ? 8B F1 6A 00 51 C7 ? ? ? ? ? ? 6A 00 FF=pdb
virtual void ConCommandBase::AddFlags()=55 8B EC 8B 45 08 09=pdb
virtual int ConCommand::AutoCompleteSuggest()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? F6=pdb
void ConVar_Unregister()=8B ? ? ? ? ? 85 C9 74 39 80=pdb
virtual void ConCommand::Dispatch()=55 8B EC 8A 41 20=pdb=CConCommandMemberAccessor<class CTextureBudgetPanel>=14
virtual char const near * ConVar::GetName()=8B 41 1C 8B 40 0C=pdb
void ConVarRef::Init()=55 8B EC 57 8B F9 8B ? ? ? ? ? 85 C9 74 0C=pdb
void SplitScreenConVarRef::Init()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 33=pdb
void ConVar::InstallChangeCallback()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 75=pdb
virtual bool ConCommandBase::IsFlagSet()=55 8B EC 8B 45 08 85 41=pdb
virtual bool ConVar::IsFlagSet()=55 8B EC 8B 49 1C 8B 45 08 85=pdb
bf_write::bf_write()=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66=pdb
void bf_write::Reset()=C7 ? ? ? ? ? ? C6 41 10 00 C3=pdb
bool bf_write::WriteString()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 24=pdb
float CBitRead::ReadBitNormal()=55 8B EC 83 EC 08 56 8B F1 57 8B 46=pdb
__int64 CBitRead::ReadLongLong()=55 8B EC 83 EC 08 53 56 57 8B F9 8B 77=pdb
bool CBitRead::ReadString()=55 8B EC 83 EC 08 57 8B C1=pdb
unsigned int CBitRead::ReadVarInt32()=55 8B EC 83 EC 08 53 56 8B C1 33=pdb
bool CBitRead::Seek()=55 8B EC 51 53 56 57 8B 7D 08 8B F1 C6 45 FF 01=pdb
void KeyValues::AddSubKey()=55 8B EC 8B 41 18 85=pdb
void KeyValues::Clear()=56 8B F1 57 8B 7E 18=pdb
void KeyValues::CopySubkeys()=55 8B EC 56 8B 71 18=pdb
bool KeyValues::Dump()=55 8B EC 51 53 8B 5D 08 57 FF=pdb
class KeyValues near * KeyValues::GetFirstSubKey()=85 C9 74 04 8B 41=pdb
class KeyValues near * KeyValues::GetFirstValue()=85 C9 74 1A 8B 41=pdb
int KeyValues::GetInt()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 85 C0 74 45=pdb
char const near * KeyValues::GetName()=57 8B F9 85 FF 74 1F=pdb
unsigned char CUtlBuffer::GetUnsignedChar()=55 8B EC 51 56 8B F1 F6 46 15=pdb
void KeyValues::InternalWrite()=55 8B EC 8B 4D 08 85 C9 74 0E=pdb
virtual bool IKeyValuesDumpContextAsText::KvBeginKey()=55 8B EC 53 8B 5D 08 57 FF=pdb
virtual bool IKeyValuesDumpContextAsText::KvEndKey()=55 8B EC 83 7D 08 00 56 8B F1 74=pdb=CKeyValuesDumpForBugreport=2
bool KeyValues::LoadFromBuffer()=55 8B EC 83 EC 44 53 56 57 8B F9 89=pdb
void KeyValues::RemoveEverything()=56 57 8B F9 8B 4F 18=pdb
void KeyValues::RemoveSubKey()=55 8B EC 56 8B 75 08 85 F6 74 4D=pdb
bool KeyValues::SaveToFile()=55 8B EC 51 53 8B 5D 0C 56 8B 75=pdb
void CKeyValuesTokenReader::SeekBackOneToken()=56 8B F1 8B ? ? ? ? ? 80 7E=pdb
void KeyValues::SetColor()=55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 8B=pdb
void KeyValues::SetInt()=55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 85 C0 74 0A 8B 4D 0C 89 48 0C C6 40 10 02=pdb
void KeyValues::SetName()=55 8B EC 51 56 8B F1 C7 ? ? ? ? ? ? FF=pdb
void KeyValues::SetPtr()=55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 85 C0 74 0A 8B 4D 0C 89 48 0C C6 40 10 04=pdb
void KeyValues::WriteIndents()=55 8B EC 56 8B 75 14 85 F6 7E 36=pdb
void KeyValues::deleteThis()=56 8B F1 85 F6 74 13=pdb
virtual char CUtlNoEscConversion::FindConversion()=55 8B EC 8B 45 0C C7 ? ? ? ? ? 32=pdb
CUtlBuffer::CUtlBuffer()=55 8B EC 56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C6=pdb
void CUtlBuffer::AddNullTermination()=55 8B EC 56 8B F1 57 8B 7D 08 3B=pdb
void CUtlBuffer::AssumeMemory()=55 8B EC 56 8B F1 57 83=pdb
bool CUtlBuffer::CheckArbitraryPeekGet()=55 8B EC 8B 55 08 53 56 8B F1 8B=pdb
bool CUtlBuffer::CheckGet()=55 8B EC 56 8B F1 8A 56 14=pdb
bool CUtlBuffer::CheckPut()=55 8B EC 56 8B F1 F6 46 14 01 75 2C=pdb
void CUtlBuffer::EatWhiteSpace()=56 8B F1 F6 46 15 01 74 5D=pdb
void CUtlBuffer::EnsureCapacity()=55 8B EC 56 57 8B 7D 08 8B F1 8B C7=pdb
virtual char CUtlCStringConversion::FindConversion()=55 8B EC 8B 45 08 33 D2 0F=pdb=CUtlCStringConversion=0
bool CUtlBuffer::Get()=55 8B EC 56 57 8B 7D 0C 8B F1 85 FF 7E=pdb
void CUtlBuffer::GetString()=55 8B EC 51 57 8B F9 80 7F 14=pdb
void const near * CUtlBuffer::PeekGet()=55 8B EC 56 8B F1 57 F6=pdb
void CUtlBuffer::SeekGet()=55 8B EC 8B 45 08 8B D1 83 E8=pdb
void CUtlBuffer::SeekPut()=55 8B EC 8B 45 08 56 8B F1 57 8B 7E=pdb
CUtlMemoryPool::CUtlMemoryPool()=55 8B EC 8B 45 18 85=pdb
void CUtlMemoryPool::Clear()=53 8B D9 57 8B 53=pdb
void CUtlMemoryPool::AddNewBlob()=53 8B D9 8B 43 08 83=pdb
void near * CUtlMemoryPool::Alloc()=56 8B F1 8B 46 18=pdb
int CMemoryStack::GetSize()=80 79 19 00 74 04=pdb
virtual unsigned int CMemoryStack::GetHighestBytes()=8B 41 10 2B 41 14=pdb
void CMemoryStack::Term()=56 8B F1 8B 4E 14=pdb
CUtlSymbol::CUtlSymbol()=55 8B EC 51 53 56 57 8B D9 E8=pdb
char const near * CUtlSymbol::String()=66 8B 01 51=pdb
char const near * CUtlSymbolTableMT::String()=55 8B EC 56 57 8B F9 8B 47 38=pdb
CUtlString::CUtlString()=C7 ? ? ? ? ? 8B C1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C3=pdb
char near * CUtlString::Get()=56 8B F1 83 7E 0C 00 75 2E=pdb
void CUtlBinaryBlock::Set()=55 8B EC 53 56 33 DB 8B=pdb
unsigned int CLZMA::GetActualSize()=55 8B EC 8B 45 08 85 C0 74 0F 81=pdb
int CCircularBuffer::Peek()=55 8B EC 53 8B D9 8B 03 85=pdb
int CCircularBuffer::Write()=55 8B EC 83 EC 08 8B 55 0C=pdb
bool netadr_s::CompareAdr()=55 8B EC 8B 55 08 8B 01 39=pdb
bool netadr_s::IsBaseAdrValid()=83 39 00 74 1B=pdb
bool netadr_s::IsReservedAdr()=8B 01 83 F8 01 75 03=pdb
bool netadr_s::IsValid()=66 ? ? ? ? 74 20=pdb
void netadr_s::SetIP()=55 8B EC 8B 45 08 0F C8=pdb
void netadr_s::SetPort()=55 8B EC 66 8B 45 08 86=pdb
char const near * netadr_s::ToString()=55 8B EC A1 ? ? ? ? 8B D0 56=pdb
unsigned int CSOAContainer::AttributeMemorySize()=55 8B EC 8B D1 8B 4D 08 56 8B ? ? ? ? ? ? 83=pdb
unsigned int CSOAContainer::ConstantMemorySize()=53 8B D9 BA ? ? ? ? 33=pdb
void CSOAContainer::CopyAttrFromPartial()=55 8B EC 51 56 8B 75 10 57 8B 7D=pdb
unsigned int CSOAContainer::DataMemorySize()=53 56 57 8B F9 33 F6 BA=pdb
void CSOAContainer::Purge()=56 8B F1 E8 ? ? ? ? 68=pdb
void CSOAContainer::PurgeData()=56 8B F1 57 8B ? ? ? ? ? 85 D2 74 1C=pdb
void CByteswap::SwapBufferToTargetEndian<char>()=55 8B EC 83 7D 10 00 7E=pdb
void CByteswap::SwapFieldToTargetEndian()=55 8B EC 51 56 8B 75 10 57 8B F9 8B=pdb
void CByteswap::SwapFieldsToTargetEndian()=55 8B EC 53 56 57 8B 7D 10=pdb
void CUtlMemoryFixedGrowable<char,1024,int>::Grow()=55 8B EC 57 8B F9 83 7F 08 00 7D 44=pdb
void KeyValuesJSONParser::NextToken()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? C7=pdb
unsigned int Hash12()=53 56 57 8B F9 8B 1F=pdb
unsigned int HashString()=0F B6 01 33 D2=pdb
unsigned int HashStringCaseless()=53 56 8B F1 33 DB 57 33 FF 0F=pdb
void CCommandBuffer::Compact()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 8B ? ? ? ? ? 89=pdb
void CCommandBuffer::GetNextCommandLength()=55 8B EC 53 56 57 8B 7D 0C 33=pdb
unsigned int CDataManagerBase::FlushAll()=55 8B EC 83 EC 30 53 8B D9 56=pdb
void near * CDataManagerBase::GetForFreeByIndex()=55 8B EC 53 8B 5D 08 B8 ? ? ? ? 57=pdb
unsigned int CLZSS::Uncompress()=55 8B EC 83 EC 0C 53 56 8B 75 08 33=pdb
void DefaultConditionalErrorProc()=55 8B EC FF 75 08 68 ? ? ? ? FF ? ? ? ? ? 83 C4 08 5D C3=pdb
void CExpressionEvaluator::FreeTree()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 85 C0 74=pdb
bool CExpressionEvaluator::IsIdentifierOrConstant()=55 8B EC 53 56 8B F1 32=pdb
bool CExpressionEvaluator::MakeFactor()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8A 46 04=pdb
bool CExpressionEvaluator::SimplifyNode()=55 8B EC 56 8B 75 08 57 8B F9 8B 06 85 C0 75=pdb
bool IterateRIFF::ChunkAvailable()=8B 41 10 83 F8 FF 74 0A=pdb
void IterateRIFF::ChunkSetup()=55 8B EC 51 56 8B F1 8B 06 8B 08=pdb
virtual void CFunctor5<void ()=FF 71 3C 8D 41=pdb
virtual void CFunctor7<void ()=0F B6 41 4C=pdb=CFunctor7<void (*)(class Vector near &,class QAngle near &,class Vector near &,class Vector near &,class Color,class IMaterial near *,bool),class Vector,class QAngle,class Vector,class Vector,class Color,class IMaterial near *,bool,class CRefCounted1<class CFunctor,class CRefCountServiceBase<1,class CRefMT>>>=3
void CMeshBuilder::Begin()=55 8B EC 51 53 8B 5D 08 8D=pdb
void CMeshBuilder::ComputeNumVertsAndIndices()=55 8B EC 8B 45 10 83 F8=pdb
int CMeshBuilder::IndicesFromVertices()=55 8B EC 8B 45 08 83 C0 FC=pdb
void RenderLine()=55 8B EC 81 ? ? ? ? ? 53 56 57 E8 ? ? ? ? 8B=pdb
void CVertexBuilder::Reset()=8B 41 54 89 ? ? ? ? ? 8B=pdb
void CUtlStreamBuffer::Close()=56 8B F1 57 F6 46 15=pdb
void near * CUtlStreamBuffer::OpenFile()=55 8B EC 51 F6 41 14=pdb
int CUtlStreamBuffer::ReadBytesFromFile()=55 8B EC 56 57 8B F9 83=pdb
bool CUtlStreamBuffer::StreamGetOverflow()=55 8B EC 56 8B F1 80 7E 14 00 0F ? ? ? ? ? F6 46 15 08 0F ? ? ? ? ? 83=pdb
bool CUtlStreamBuffer::StreamPutOverflow()=55 8B EC 56 8B F1 80 7E 14 00 0F ? ? ? ? ? F6 46 15 08 0F ? ? ? ? ? 57=pdb
virtual void CFileLoggingListener::AssignLogChannel()=55 8B EC 8B 45 08 8B 55 0C 89=pdb
virtual int CFileLoggingListener::BeginLoggingToFile()=55 8B EC 56 57 8B F9 33 F6 8D=pdb=CFileLoggingListener=1
virtual void CFileLoggingListener::EndLoggingToFile()=55 8B EC 8B 55 08 53 8B D9 83=pdb=CFileLoggingListener=2
virtual void CBoolProperty::SetData()=55 8B EC 56 8B 75 10 57 FF 75 08 8B 46 14 FF D0 8B 4D 0C 83 C4 04 8B F8 6A 00 FF 36 E8 ? ? ? ? 85=pdb=CFileLoggingListener=614
virtual void CStringProperty::SetData()=55 8B EC 56 8B 75 10 57 FF 75 08 8B 46 14 FF D0 8B 4D 0C 83 C4 04 8B F8 68=pdb=CFileLoggingListener=638
virtual void CStringProperty::InitFromDefault()=55 8B EC 56 8B 75 0C FF 75=pdb=CFileLoggingListener=639
virtual void CHFontProperty::SetData()=55 8B EC 51 53 8B 5D 08 8B CB 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50 50 8B CE FF 57 20 8B F8 89 7D FC 85 FF 74 38=pdb=CFileLoggingListener=618
virtual void CHFontProperty::InitFromDefault()=55 8B EC 51 53 8B 5D 08 8B CB 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50 50 8B CE FF 57 20 8B F8 89 7D FC 85 FF 74 2A=pdb=CFileLoggingListener=619
virtual void CTextureIdProperty::SetData()=55 8B EC 53 56 8B 75 10 57=pdb=CFileLoggingListener=622
virtual void CTextureIdProperty::InitFromDefault()=55 8B EC 56 8B 75 0C 57 FF 75 08 8B 46 14 FF D0 8B=pdb=CFileLoggingListener=623
virtual void CFloatProperty::InitFromDefault()=55 8B EC 56 8B 75 0C 57 FF 75 08 8B 46 14 FF D0 FF 76 0C 8B F8 E8 ? ? ? ? 83 C4 08 D9=pdb=vgui::Panel=218
virtual void CIntProperty::SetData()=55 8B EC 56 8B 75 10 57 FF 75 08 8B 46 14 FF D0 8B 4D 0C 83 C4 04 8B F8 6A 00 FF 36 E8 ? ? ? ? 89=pdb=vgui::Panel=221
virtual void CIntProperty::InitFromDefault()=55 8B EC 56 8B 75 0C 57 FF 75 08 8B 46 14 FF D0 FF 76 0C 8B F8 E8 ? ? ? ? 83 C4 08 89=pdb=vgui::Panel=222
virtual void CProportionalIntProperty::SetData()=55 8B EC 53 8B 5D 08 56 8B 75 10 57 53 8B 46 14 FF D0 8B 4D 0C 83 C4 04 89=pdb=CFileLoggingListener=642
virtual void CProportionalXPosProperty::SetData()=55 8B EC 83 EC 08 53 8B 5D 08 8D 45 F8 56 8B ? ? ? ? ? 8B CB 57 50 8D 45 FC 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 75 10=pdb
virtual void CProportionalYPosProperty::SetData()=55 8B EC 83 EC 08 53 8B 5D 08 8D 45 FC 56 8B ? ? ? ? ? 8B CB 57 50 8D 45 F8 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 75 10=pdb
virtual void CColorProperty::SetData()=55 8B EC 53 8B 5D 08 8B CB 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50 50 8B CE FF 57 20 8B F8 85 FF 74 66=pdb=vgui::Panel=213
virtual void CColorProperty::InitFromDefault()=55 8B EC 51 53 8B 5D 08 8B CB 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50 50 8B CE FF 57 20 89=pdb=vgui::Panel=214
vgui::DragDrop_t::DragDrop_t()=C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B 41 18=pdb
virtual vgui::Panel::~Panel()=56 8B F1 57 80 7E 38=pdb
void vgui::Panel::ApplyAutoResizeSettings()=55 8B EC 83 EC 30 53 56 8B ? ? ? ? ? 8D 45 D8=pdb
virtual bool vgui::Panel::CanStartDragging()=55 8B EC 53 8B D9 66=pdb
virtual void vgui::Panel::DeletePanel()=66 ? ? ? ? B8 ? ? ? ? 66 21 41=pdb
virtual void vgui::Panel::DrawBox()=55 8B EC 83 EC 08 83 ? ? ? ? ? ? 89=pdb=CBaseActionZoomDialog=140
virtual void vgui::Panel::DrawBoxFade()=55 8B EC 83 EC 10 53 8B D9 89 5D F4=pdb=CBaseActionZoomDialog=141
virtual void vgui::Panel::DrawHollowBox()=55 8B EC F3 ? ? ? ? 8B 01=pdb=CBaseActionZoomDialog=143
virtual void vgui::Panel::DrawTexturedBox()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 5D=pdb=CBaseActionZoomDialog=139
virtual void vgui::Panel::FillRectSkippingPanel()=55 8B EC 83 EC 18 53 8B 5D 1C=pdb=CBaseActionZoomDialog=172
void vgui::Panel::GetBounds()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 FF 75 0C 8B 03 FF 75 08 8B 3E FF 10 50 8B CE FF 57 0C=pdb
virtual char const near * vgui::Panel::GetClassName()=8B 01 FF 50 70 85=pdb
virtual void vgui::Panel::GetClipRect()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 14 FF 75 10 8B 3E FF 75 0C FF 75 08 FF 10 50 8B CE FF 57 2C=pdb=CBaseActionZoomDialog=7
virtual void vgui::Panel::GetCornerTextureSize()=55 8B EC 8B ? ? ? ? ? 83 FA FF 75=pdb=CBaseActionZoomDialog=174
virtual int vgui::Panel::GetDragStartTolerance()=8B 41 28 8B 40=pdb
virtual void vgui::Panel::GetInset()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 14 FF 75 10 8B 3E FF 75 0C FF 75 08 FF 10 50 8B CE FF 57 34=pdb=CBaseActionZoomDialog=6
virtual char const near * vgui::Panel::GetName()=83 C1 50 E9=pdb
virtual void vgui::Panel::GetPaintSize()=55 8B EC 83 EC 10 53 56 8B ? ? ? ? ? 8B D9 57=pdb=CBaseActionZoomDialog=75
virtual unsigned long vgui::Panel::GetScheme()=53 8B D9 8B ? ? ? ? ? 85 C0 75=pdb=CBaseActionZoomDialog=20
virtual class Color vgui::Panel::GetSchemeColor()=55 8B EC 51 8B 4D 10 C7=pdb=CBaseActionZoomDialog=87
virtual void vgui::Panel::GetSizerClientArea()=55 8B EC 8B 45 08 53 56 57 C7=pdb=CNewActionButton=210
virtual void vgui::Panel::GetSizerMinimumSize()=55 8B EC 56 8B ? ? ? ? ? 85 F6 74 28 83=pdb=CBaseActionZoomDialog=209
int vgui::Panel::GetTall()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 FC 57 50 8D 45 F8 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B 45=pdb
virtual unsigned int vgui::Panel::GetVParent()=57 8B ? ? ? ? ? 85 FF 74 10=pdb
int vgui::Panel::GetWide()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 F8 57 50 8D 45 FC 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B 45=pdb
virtual bool vgui::Panel::HasFocus()=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 10=pdb
virtual bool vgui::Panel::HasParent()=55 8B EC 8B 45 08 85 C0 75 06 32 C0 5D C2 04=pdb=CBaseActionZoomDialog=43
virtual void vgui::Panel::InstallMouseHandler()=55 8B EC 53 8B D9 8B 4D 08 85 C9 74 21=pdb=CBaseActionZoomDialog=54
virtual void vgui::Panel::InternalCursorExited()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 37=pdb=CBaseActionZoomDialog=195
virtual void vgui::Panel::InternalKeyFocusTicked()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 75 0B=pdb
virtual void vgui::Panel::InternalMouseFocusTicked()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 5C=pdb=CBaseActionZoomDialog=206
virtual void vgui::Panel::InternalMousePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 57 8B 01=pdb
virtual bool vgui::Panel::IsAutoDeleteSet()=0F B7 41 64 C1 E8 06=pdb
virtual bool vgui::Panel::IsBlockingDragChaining()=8B 41 28 8A 40 58=pdb
virtual bool vgui::Panel::IsBuildGroupEnabled()=53 56 8B F1 57 8B ? ? ? ? ? 83 FA=pdb=CBaseActionZoomDialog=77
bool vgui::Panel::IsBuildModeActive()=8B ? ? ? ? ? 83 F9 FF 74 40=pdb
bool vgui::Panel::IsBuildModeDeletable()=8A ? ? ? ? ? D0 E8 24=pdb
bool vgui::Panel::IsConsoleStylePanel()=8A ? ? ? ? ? C0 E8 03 24=pdb
virtual bool vgui::Panel::IsCursorNone()=8B 01 FF ? ? ? ? ? 85 C0 0F 94=pdb
virtual bool vgui::Panel::IsCursorOver()=55 8B EC 83 EC 20 53 56 8B D9 8D=pdb=CBaseActionZoomDialog=79
virtual bool vgui::Panel::IsDragEnabled()=8B 41 28 8A 00=pdb
virtual bool vgui::Panel::IsDropEnabled()=8B 41 28 8A 40 40=pdb
virtual bool vgui::Panel::IsFullyVisible()=8B 01 56 8B ? ? ? ? ? 57 8B 3E FF 10 50 8B 47 68=pdb
virtual bool vgui::Panel::IsKeyRebound()=55 8B EC 51 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 62=pdb
virtual bool vgui::Panel::IsLayoutInvalid()=0F B7 41 64 C1 E8 07=pdb
virtual bool vgui::Panel::IsOpaque()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 17=pdb=CBaseActionZoomDialog=83
virtual bool vgui::Panel::IsPopup()=8B 01 56 8B ? ? ? ? ? 57 8B 3E FF 10 50 8B 47 60=pdb
virtual bool vgui::Panel::IsTriplePressAllowed()=0F B7 41 64 C1 E8 0D=pdb
virtual bool vgui::Panel::IsValidKeyBindingsContext()=8B 01 FF ? ? ? ? ? 33 C9 83=pdb
virtual bool vgui::Panel::IsVisible()=57 8B ? ? ? ? ? 85 FF 74 12=pdb=CBaseActionZoomDialog=34
bool vgui::Panel::IsWithin()=55 8B EC 83 EC 10 56 8B ? ? ? ? ? 8D 45=pdb
virtual unsigned int vgui::Panel::IsWithinTraverse()=55 8B EC 83 EC 14 53 8B D9 8B 03=pdb=CBaseActionZoomDialog=5
void vgui::Panel::MakePopup()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 6A=pdb
virtual void vgui::Panel::MarkForDeletion()=53 8B D9 F6 43 64=pdb=CBaseActionZoomDialog=80
virtual void vgui::Panel::MoveToFront()=53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 8B=pdb=CBaseActionZoomDialog=58
virtual void vgui::Panel::NavigateFrom()=55 8B EC 83 EC 08 53 8B D9 33=pdb
virtual void vgui::Panel::OnContinueDragging()=55 8B EC 83 EC 10 53 8B D9 8B 43=pdb
virtual void vgui::Panel::OnDraggablePanelPaint()=55 8B EC 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8D 45 EC=pdb=CBaseActionZoomDialog=161
virtual void vgui::Panel::OnDroppablePanelPaint()=55 8B EC 8B 45 0C 83 EC 0C=pdb=CBaseActionZoomDialog=162
virtual void vgui::Panel::OnSizeChanged()=8B 01 6A 00 6A 00 FF ? ? ? ? ? C2=pdb
virtual void vgui::Panel::OnStartDragging()=57 8B F9 8B ? ? ? ? ? 6A 6B=pdb=CBaseActionZoomDialog=185
virtual void vgui::Panel::OnThink()=55 8B EC 83 EC 20 53 8B D9 89 5D FC 8B 43=pdb
virtual void vgui::Panel::OnUnserialized()=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF=pdb=CBaseActionZoomDialog=90
virtual void vgui::Panel::PaintBackground()=55 8B EC 83 EC 18 8D 45 FC=pdb
virtual void vgui::Panel::PaintBorder()=56 57 8B F9 8B 47 60=pdb
virtual void vgui::Panel::PaintBuildOverlay()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 FC 57 50 8D 45 F8 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B ? ? ? ? ? 68=pdb=CBaseActionZoomDialog=130
virtual void vgui::Panel::PaintTraverse()=55 8B EC 83 EC 28 53 8B D9 56 57 89 5D EC=pdb=CBaseActionZoomDialog=3
virtual void vgui::Panel::PerformLayout()=55 8B EC 83 EC 10 56 8B F1 8B ? ? ? ? ? 85=pdb
virtual void vgui::Panel::PostMessage()=55 8B EC 8B 01 F3 ? ? ? ? 56 8B ? ? ? ? ? 57 51 F3 ? ? ? ? 8B 3E FF 10 50=pdb=CBaseActionZoomDialog=36
void vgui::Panel::PreparePanelMap()=55 8B EC 51 57 8B 7D 08 85 FF 0F ? ? ? ? ? 8B=pdb
virtual void near * vgui::Panel::QueryInterface()=55 8B EC 33 C0 39=pdb
void vgui::CSizerBase::RecursiveInvalidateCachedSize()=53 8B D9 56 33 F6 C7=pdb
virtual void vgui::Panel::RemoveActionSignalTarget()=55 8B EC 53 8B D9 8B 4D 08 56 8B ? ? ? ? ? 57 8B 01 8B 3E FF 10 50 8B CE FF 57 4C 89=pdb=CBaseActionZoomDialog=48
virtual void vgui::Panel::Repaint()=66 ? ? ? ? 57 8B ? ? ? ? ? 85=pdb
virtual void vgui::Panel::RequestFocus()=56 57 8B F9 6A 00 8B 37=pdb
virtual bool vgui::Panel::RequestInfoFromChild()=55 8B EC 6A 00 FF 75 08 E8 ? ? ? ? 8B=pdb=CBaseActionZoomDialog=50
void vgui::Panel::SetAllowKeyBindingChainToParent()=55 8B EC 80 7D 08 00 74 0D=pdb
void vgui::Panel::SetAlpha()=55 8B EC 66 ? ? ? ? 0F=pdb
virtual void vgui::Panel::SetBlockDragChaining()=55 8B EC 8B 49 28 8A 45 08 88 41 58=pdb
virtual void vgui::Panel::SetBorder()=55 8B EC 83 EC 14 53 8B D9 56 8B=pdb
void vgui::Panel::SetBounds()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 FF 75 0C 8B 03 FF 75 08 8B 3E FF 10 50 8B CE FF 57 08=pdb
virtual void vgui::Panel::SetBuildGroup()=55 8B EC 53 56 8B 75 08 8B D9 57 85 F6 74 05=pdb
void vgui::Panel::SetBuildModeDeletable()=55 8B EC 80 7D 08 00 74 0C=pdb
virtual void vgui::Panel::SetDragEnabled()=55 8B EC 53 8A 5D 08 56 8B F1 8B 46=pdb=CBaseActionZoomDialog=144
virtual void vgui::Panel::SetDragSTartTolerance()=55 8B EC 8B 49 28 8B=pdb
virtual void vgui::Panel::SetDropEnabled()=55 8B EC 8B 51 28=pdb
virtual void vgui::Panel::SetEnabled()=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 10=pdb
virtual void vgui::Panel::SetMouseInputEnabled()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 08 8B 3E FF 10 50 8B CE FF ? ? ? ? ? 8B=pdb=CBaseActionZoomDialog=135
virtual void vgui::Panel::SetParent()=55 8B EC 51 8B 45 08 53 8B D9 89=pdb=CBaseActionZoomDialog=42
virtual void vgui::Panel::SetScheme()=55 8B EC 8B 45 08 3B ? ? ? ? ? 74=pdb=CBaseActionZoomDialog=85
virtual void vgui::Panel::SetShowDragHelper()=55 8B EC 8B 49 28 8A 45 08 88 41 01=pdb
virtual void vgui::Panel::SetSkipChildDuringPainting()=55 8B EC 53 8B D9 8B 4D 08 85 C9 74 1E=pdb=CBaseActionZoomDialog=175
virtual void vgui::Panel::SetVisible()=55 8B EC 8B 01 56 8B ? ? ? ? ? 57 FF 75 08 8B 3E FF 10 50 8B CE FF 57=pdb=CBaseActionZoomDialog=33
virtual void vgui::Panel::Think()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 3B=pdb=CBaseActionZoomDialog=1
virtual void vgui::EditablePanel::ActivateBuildMode()=8B ? ? ? ? ? 6A 01 8B 01 FF 10=pdb
virtual void vgui::EditablePanel::OnRequestFocus()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 8B 40=pdb=CBaseActionZoomDialog=191
virtual void vgui::EditablePanel::SaveUserConfig()=56 8B F1 8B ? ? ? ? ? 85 D2 74 21=pdb=CBaseActionZoomDialog=213
virtual vgui::Frame::~Frame()=56 57 8B F9 8B 77 4C=pdb
virtual void vgui::Frame::Activate()=53 8B D9 56 57 8B 03 FF ? ? ? ? ? 8B 03 8B CB 8B=pdb
virtual void vgui::Frame::ActivateMinimized()=53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 10=pdb=CBaseActionZoomDialog=239
virtual void vgui::FrameButton::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 07 8D=pdb
_anonymous_namespace_::GripPanel::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 89 5D FC E8 ? ? ? ? 8B 03=pdb
void vgui::Frame::FinishClose()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE 80=pdb
virtual void vgui::Frame::FlashWindowStop()=53 8B D9 56 8B ? ? ? ? ? 57 8B 03 6A=pdb=CBaseActionZoomDialog=255
virtual bool vgui::Frame::GetClipToParent()=8A ? ? ? ? ? C0 E8 02 24 01 C3=pdb
void vgui::FrameSystemButton::GetImageSize()=55 8B EC 53 56 8B 75 0C 8B D9 57 8B 7D 08 33=pdb
virtual void vgui::Frame::InternalSetTitle()=55 8B EC 8B 01 6A 01 FF 75 08=pdb
virtual void vgui::Frame::OnClose()=53 8B D9 8B ? ? ? ? ? 56 8B 01 FF 50=pdb
_anonymous_namespace_::GripPanel::OnCursorMoved()=55 8B EC 83 EC 10 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=pdb
virtual void vgui::Frame::OnDialogVariablesChanged()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 FF=pdb
void vgui::Frame::OnFrameFocusChanged()=55 8B EC 80 7D 08 00 53=pdb
virtual void vgui::Frame::OnKeyCodeTyped()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 6A 4F=pdb
virtual void vgui::Frame::OnMinimize()=8B 01 56 8B ? ? ? ? ? 57 6A 01 8B=pdb
virtual void vgui::Frame::OnMousePressed()=55 8B EC 51 53 8B D9 8B 03 8B=pdb
virtual void vgui::FrameButton::OnMousePressed()=55 8B EC 53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 74=pdb=vgui::FrameButton=105
virtual void vgui::FrameSystemButton::OnMousePressed()=55 8B EC 80 ? ? ? ? ? ? 74 06 5D=pdb
_anonymous_namespace_::GripPanel::OnMousePressed()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 83=pdb
_anonymous_namespace_::GripPanel::OnMouseReleased()=56 8B F1 6A 00 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF 50 08 8B ? ? ? ? ? 8B=pdb
virtual void vgui::Frame::PaintBackground()=55 8B EC 83 EC 0C 53 8B D9 56 89 5D FC F6=pdb
virtual void vgui::FrameButton::SetDisabledLook()=55 8B EC 8A 45 08 56 8B F1 84=pdb=vgui::FrameButton=286
virtual void vgui::FrameSystemButton::SetEnabled()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 8B=pdb
virtual void vgui::Frame::SetSizeable()=55 8B EC 8A ? ? ? ? ? 32 45 08 24 01 30 ? ? ? ? ? E8=pdb
virtual void vgui::Frame::SetSmallCaption()=55 8B EC 8A 45 08 C0 E0 03 32 ? ? ? ? ? 24 08 30 ? ? ? ? ? 8B=pdb=CBaseActionZoomDialog=261
virtual void vgui::Frame::SetSysMenu()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 3B F9=pdb=CBaseActionZoomDialog=257
virtual void vgui::Frame::SetTitleBarVisible()=55 8B EC 53 8B 5D 08 8A=pdb=CBaseActionZoomDialog=258
void vgui::Frame::SetupResizeCursors()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B ? ? ? ? ? 84=pdb
_anonymous_namespace_::CaptionGripPanel::tryToDock()=55 8B EC 83 EC 10 53 8B D9 56 8B=pdb
bool vgui::AnimationController::LoadScriptFile()=55 8B EC 83 EC 08 89 4D FC 8B ? ? ? ? ? 56=pdb
void vgui::AnimationController::SetupPosition()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 10=pdb
bool vgui::AnimationController::UpdateScreenSize()=55 8B EC 83 EC 10 53 56 8B F1 C7=pdb
virtual vgui::TextEntry::~TextEntry()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B ? ? ? ? ? 85=pdb
virtual void vgui::TextEntry::AddAnotherLine()=55 8B EC 8B 45 08 56 8B F1 8B ? ? ? ? ? 83=pdb=CVmtTextEntry=276
virtual void vgui::TextEntry::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 53=pdb
virtual void vgui::TextEntry::ApplySettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 6A=pdb=CVmtTextEntry=89
virtual void vgui::TextEntry::Backspace()=55 8B EC 51 56 8B F1 8B 06 8B ? ? ? ? ? FF=pdb
void vgui::TextEntry::CalcBreakIndex()=8B ? ? ? ? ? 3B ? ? ? ? ? 75 10 8B=pdb
virtual void vgui::TextEntry::CompositionString()=55 8B EC 56 8B F1 68 ? ? ? ? FF 75=pdb=CVmtTextEntry=241
virtual void vgui::TextEntry::CursorToPixelSpace()=55 8B EC 83 EC 1C 53 56 8B F1 57 8B 06=pdb=CVmtTextEntry=274
virtual void vgui::TextEntry::CutSelected()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8B 06 8B CE 6A=pdb
virtual int vgui::TextEntry::DrawChar()=55 8B EC 83 EC 14 53 56 8B 75 08 8B D9 57 56=pdb=CVmtTextEntry=269
virtual bool vgui::TextEntry::DrawCursor()=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 75=pdb=CVmtTextEntry=270
void vgui::TextEntry::FlipToLastIME()=56 8B F1 8B ? ? ? ? ? 57 8B 01 FF 50 68=pdb
int vgui::TextEntry::GetCurrentLineStart()=80 ? ? ? ? ? ? 75 07 8B ? ? ? ? ? C3=pdb
int vgui::TextEntry::GetCursorLine()=56 8B F1 33 C0 8B ? ? ? ? ? 85=pdb
virtual bool vgui::TextEntry::GetDropContextMenu()=55 8B EC 56 57 8B 7D 08 8B F1 6A=pdb
virtual bool vgui::TextEntry::GetSelectedRange()=55 8B EC 8B ? ? ? ? ? 83 F8 FF 75=pdb=CVmtTextEntry=273
virtual void vgui::TextEntry::GetSizerMinimumSize()=55 8B EC 8B 45 0C C7 ? ? ? ? ? 8B=pdb
virtual void vgui::TextEntry::GetText()=55 8B EC 56 8B ? ? ? ? ? 85 F6 74 30=pdb=CVmtTextEntry=213
virtual void vgui::TextEntry::GetTextRange()=55 8B EC 51 8B 55 10=pdb=CVmtTextEntry=286
virtual void vgui::TextEntry::GotoDown()=55 8B EC 83 EC 08 57 8B F9 6A 00 8B 07 FF ? ? ? ? ? 80 ? ? ? ? ? ? 74 13=pdb=CVmtTextEntry=220
virtual void vgui::TextEntry::GotoFirstOfLine()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B CE=pdb=CVmtTextEntry=223
virtual void vgui::TextEntry::GotoLeft()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 33=pdb=CVmtTextEntry=217
virtual void vgui::TextEntry::GotoTextStart()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE C7=pdb
virtual void vgui::TextEntry::GotoUp()=55 8B EC 83 EC 08 57 8B F9 6A 00 8B 07 FF ? ? ? ? ? 80 ? ? ? ? ? ? 74 1E=pdb=CVmtTextEntry=219
virtual void vgui::TextEntry::GotoWordLeft()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 83=pdb
virtual void vgui::TextEntry::GotoWordRight()=56 8B F1 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 40=pdb
virtual void vgui::TextEntry::HideIMECandidates()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 00 FF ? ? ? ? ? 8B ? ? ? ? ? 85=pdb=CVmtTextEntry=243
virtual void vgui::TextEntry::InsertChar()=55 8B EC 8B 55 08 56 8B F1 66=pdb
virtual void vgui::TextEntry::InsertString()=55 8B EC 56 8B F1 57 8B 06 FF ? ? ? ? ? 8B=pdb
virtual bool vgui::TextEntry::IsDroppable()=55 8B EC 56 8B 75 08 83 7E 0C=pdb=CVmtTextEntry=160
virtual bool vgui::TextEntry::IsEditable()=80 ? ? ? ? ? ? 74 11 8B 01 8B=pdb
virtual bool vgui::TextEntry::IsTextFullySelected()=56 8B F1 83 ? ? ? ? ? ? 74 04 32 C0 5E C3 8B 06=pdb=CVmtTextEntry=216
virtual void vgui::TextEntry::MoveCursor()=55 8B EC 83 EC 1C 8B 45 08 56=pdb=CVmtTextEntry=252
bool vgui::TextEntry::NeedsEllipses()=55 8B EC 8B 45 0C 83 EC 10=pdb
virtual void vgui::TextEntry::OnKeyCodeTyped()=55 8B EC 83 EC 08 53 56 8B F1 57 6A 4F=pdb
virtual void vgui::TextEntry::OnKeyFocusTicked()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 18 3B=pdb
virtual void vgui::TextEntry::OnKeyTyped()=55 8B EC 56 8B F1 57 8B 7D 08 57=pdb
virtual void vgui::TextEntry::OnMouseReleased()=55 8B EC 83 EC 08 56 8B F1 6A 00 C6=pdb
virtual void vgui::TextEntry::OnPanelDropped()=55 8B EC 8B 45 08 83 EC 08 83=pdb
virtual void vgui::TextEntry::OnSetState()=55 8B EC 83 EC 40 8D 45=pdb=CVmtTextEntry=284
virtual void vgui::TextEntry::PaintBackground()=55 8B EC 83 EC 64 53 8B D9 56 57 8B=pdb
virtual void vgui::TextEntry::PerformLayout()=56 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 80=pdb=CVmtTextEntry=132
virtual void vgui::TextEntry::ResetCursorBlink()=56 8B F1 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=pdb=CVmtTextEntry=268
virtual void vgui::TextEntry::SaveUndoState()=8B ? ? ? ? ? 53 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57 8D=pdb=CVmtTextEntry=247
void vgui::TextEntry::ScrollLeft()=80 ? ? ? ? ? ? 75 39 80=pdb
virtual void vgui::TextEntry::SelectNone()=8B 01 C7 ? ? ? ? ? ? ? ? ? FF 60=pdb
virtual void vgui::TextEntry::SetEditable()=55 8B EC 53 8A 5D 08 56 8B F1 51=pdb=CVmtTextEntry=250
virtual void vgui::TextEntry::SetEnabled()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE FF 50=pdb
virtual void vgui::TextEntry::SetFont()=55 8B EC 8B 45 08 56 8B F1 6A 00=pdb=CVmtTextEntry=248
virtual void vgui::TextEntry::SetText()=55 8B EC 81 ? ? ? ? ? 8B 45 08 85=pdb
virtual void vgui::TextEntry::Undo()=55 8B EC 83 EC 08 53 56 8B F1 57 8D=pdb=CVmtTextEntry=246
virtual void vgui::Button::ApplySchemeSettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 06 8B CE 68 ? ? ? ? FF 50 08 89=pdb
virtual void vgui::Button::DrawFocusBorder()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 57 89=pdb=CConVarCheckButton=283
virtual void vgui::Button::ForceDepressed()=55 8B EC 56 8B F1 8A 4D 08 8A ? ? ? ? ? C0 E8 02=pdb=CNewActionButton=253
virtual class Color vgui::Button::GetButtonBgColor()=55 8B EC 8A ? ? ? ? ? D0=pdb
virtual void vgui::Button::GetSizerMinimumSize()=55 8B EC 8B 01 56 8B 75 08 57=pdb=CNewActionButton=209
void vgui::Button::Init()=56 57 8B F9 B8 ? ? ? ? 6A=pdb
virtual bool vgui::Button::IsBlinking()=0F ? ? ? ? ? ? C1 E8 09 83=pdb
virtual bool vgui::Button::IsDepressed()=0F ? ? ? ? ? ? D1 E8 83=pdb
virtual bool vgui::Button::IsMouseClickEnabled()=55 8B EC 8B D1 B8=pdb
virtual bool vgui::Button::IsSelected()=0F ? ? ? ? ? ? C1 E8 07 83=pdb
virtual bool vgui::Button::IsUseCaptureMouseEnabled()=0F ? ? ? ? ? ? C1 E8 04 83=pdb
virtual void vgui::Button::NavigateFrom()=56 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A=pdb
virtual void vgui::Button::OnCursorEntered()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 0B=pdb
virtual void vgui::Button::OnCursorExited()=8A ? ? ? ? ? C0 E8 05 A8 01 75 08 8B 01=pdb
virtual void vgui::Button::OnMousePressed()=55 8B EC 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF=pdb
virtual void vgui::Button::OnMouseReleased()=55 8B EC 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 74 0D=pdb
virtual void vgui::Button::OnSetState()=55 8B EC 83 7D 08 00 56 8B F1 0F 95=pdb=CNewActionButton=285
virtual void vgui::Button::PerformLayout()=55 8B EC 83 EC 0C 56 57 8B F9 0F=pdb
virtual void vgui::Button::RecalculateDepressedState()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8D=pdb=CNewActionButton=254
virtual void vgui::Button::SetArmed()=55 8B EC 53 8A 5D 08 56 8B F1 8A=pdb
virtual void vgui::Button::SetBlink()=55 8B EC 56 8B F1 8A 4D 08 66=pdb=CNewActionButton=257
virtual void vgui::Button::SetButtonBorderEnabled()=55 8B EC 8A ? ? ? ? ? 8A 55=pdb
virtual void vgui::Button::SetMouseClickEnabled()=55 8B EC 8B 45 08 83 C0 95=pdb
virtual void vgui::Button::SetSelected()=55 8B EC 56 8B F1 8A 4D 08 8A ? ? ? ? ? C0 E8 07=pdb
virtual void vgui::ComboBox::ApplySchemeSettings()=55 8B EC 53 56 8B 75 08 8B D9 57 56 E8 ? ? ? ? 8B 06 8B CE 8B 3B 68=pdb
virtual void vgui::ComboBox::HideMenu()=56 8B F1 8B ? ? ? ? ? 85 C9 74 21=pdb=vgui::ComboBox=305
virtual void vgui::ComboBox::OnKeyCodeTyped()=55 8B EC 57 8B F9 8B ? ? ? ? ? 6A=pdb
virtual void vgui::ComboBox::OnMouseDoublePressed()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 8B=pdb=vgui::ComboBox=106
virtual void vgui::ComboBox::OnMousePressed()=55 8B EC 56 8B F1 83 ? ? ? ? ? ? 74 58=pdb=vgui::ComboBox=105
virtual void vgui::ComboBox::SetMenu()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 08=pdb=vgui::ComboBox=302
virtual void vgui::ComboBox::ShowMenu()=56 8B F1 8B ? ? ? ? ? 85 C9 74 15 8B 01 6A=pdb=vgui::ComboBox=304
virtual void CheckImage::Paint()=55 8B EC 83 EC 14 53 8B D9 56 89=pdb=CheckImage=0
virtual void vgui::Image::SetBkColor()=55 8B EC 8B 01 FF 75 08 FF 50 48=pdb
vgui::FileData_t::~FileData_t()=56 8B F1 C7 ? ? ? ? ? ? 83 7E 70=pdb
void vgui::FileOpenDialog::BuildFileList()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 8D=pdb
int vgui::FileOpenDialog::CountSubstringMatches()=55 8B EC 83 EC 08 53 57 33=pdb
virtual void vgui::FileOpenDialog::MoveUpFolder()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B F1 68 ? ? ? ? 52 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8D=pdb
virtual void vgui::FileOpenDialog::OnItemSelected()=57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 83=pdb=vgui::FileOpenDialog=289
virtual void vgui::FileOpenDialog::OnKeyCodeTyped()=55 8B EC 83 ? ? ? ? ? ? 8B 45 08=pdb=vgui::FileOpenDialog=122
void vgui::FileOpenDialog::SetStartDirectory()=55 8B EC 81 ? ? ? ? ? 56 FF 75 08=pdb
virtual void vgui::Label::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B F1 57 E8=pdb
virtual wchar_t vgui::Label::CalculateHotkey()=55 8B EC 56 8B 75 08 80 3E 00=pdb=CNewActionButton=242
virtual void vgui::Label::ComputeAlignment()=55 8B EC 83 EC 24 53 56 57 8B F9 8D=pdb=CNewActionButton=243
virtual void vgui::Label::DrawDashedLine()=55 8B EC 8B 55 14 8B C2=pdb=CNewActionButton=245
virtual void vgui::Label::EnsureImageCapacity()=55 8B EC 56 8B F1 57 8B 7D 08 39 ? ? ? ? ? 7F=pdb=CNewActionButton=247
virtual void vgui::Label::GetContentSize()=55 8B EC 83 EC 1C 56 8B F1 57=pdb
virtual class Color vgui::Label::GetFgColor()=55 8B EC FF 75 08 E8 ? ? ? ? 8B 45 08 5D=pdb
virtual void vgui::Label::ResetToSimpleTextImage()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 6A 00 FF ? ? ? ? ? FF=pdb=CNewActionButton=236
virtual void vgui::Label::SetHotkey()=55 8B EC 66 8B 45 08 66=pdb
virtual void vgui::Label::SetImage()=55 8B EC 56 8B F1 8B 06 FF ? ? ? ? ? FF=pdb=CNewActionButton=230
virtual void vgui::Label::SetImageAtIndex()=55 8B EC 53 56 8B 75 08 57 8B F9 56 8B 07=pdb=CNewActionButton=231
virtual void vgui::Label::SetImageBounds()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 8D=pdb=CNewActionButton=237
virtual void vgui::Label::SetImagePreOffset()=55 8B EC 8B 45 08 8B D1 85 C0 78 3F=pdb=CNewActionButton=232
virtual void vgui::Label::SetText()=55 8B EC 8B 45 08 85 C0 53 56 57=pdb
virtual int vgui::Label::SetTextImageIndex()=55 8B EC 53 8B 5D 08 57 8B F9 8B ? ? ? ? ? 3B=pdb=CNewActionButton=239
virtual vgui::ListPanel::~ListPanel()=53 56 8B F1 57 C7 ? ? ? ? ? E8=pdb
virtual void vgui::ListPanel::AddColumnHeader()=55 8B EC 56 8B 75 18=pdb=COperationListPanel=211
virtual void vgui::ListPanel::ApplyItemChanges()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 FF=pdb=COperationListPanel=239
virtual void ColumnButton::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 8B F1=pdb
virtual void vgui::ListPanel::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B F9 6A 00=pdb
AscendingSortFunc()=55 8B EC 8B 45 08 8B ? ? ? ? ? 56 57=pdb
FastSortFunc()=55 8B EC 8B 45 0C 8B 4D 10 56 8B 50=pdb
virtual bool vgui::ListPanel::GetColumnHeaderText()=55 8B EC 8B 55 08 3B ? ? ? ? ? 7D=pdb
virtual int vgui::ListPanel::GetItemCurrentRow()=55 8B EC 8B ? ? ? ? ? 33 C0 56 85 D2 7E 1C=pdb=COperationListPanel=233
virtual int vgui::ListPanel::GetItemIDFromUserData()=55 8B EC 53 56 8B F1 57 8B ? ? ? ? ? 83=pdb=COperationListPanel=238
virtual int vgui::ListPanel::GetStartItem()=55 8B EC 51 56 57 8B F9 8B 07=pdb=COperationListPanel=278
void vgui::ListPanel::HandleAddSelection()=55 8B EC 53 56 8B 75 08 33 C0 57 8B F9 8B ? ? ? ? ? 85 D2 7E 15=pdb
void vgui::ListPanel::HandleMultiSelection()=55 8B EC 51 53 8B D9 56 57 8B 7D 0C=pdb
virtual bool vgui::ListPanel::IsItemSelected()=55 8B EC 8B 55 08 56 8B F1 57=pdb=COperationListPanel=257
virtual void Dragger::OnMousePressed()=55 8B EC 83 EC 08 53 8B D9 80 ? ? ? ? ? ? 74 39=pdb=Dragger=105
virtual void vgui::ListPanel::OnSetSortColumn()=55 8B EC 56 8B F1 8B ? ? ? ? ? 3B 45=pdb=COperationListPanel=274
static bool vgui::ListPanel::RBTreeLessFunc()=55 8B EC 56 8B 75 0C 57 8B 7D 08 FF=pdb
virtual void vgui::ListPanel::SetColumnHeaderText()=55 8B EC 8B ? ? ? ? ? 8B 45 08 6A 00 FF=pdb=COperationListPanel=217
virtual void vgui::ListPanel::SetColumnTextAlignment()=55 8B EC 8B ? ? ? ? ? 8B 45 08 8B ? ? ? ? ? 0F=pdb=COperationListPanel=220
virtual void vgui::ListPanel::SetColumnVisible()=55 8B EC 8B 45 08 56 57 8B F9=pdb
virtual void vgui::ListPanel::SetEmptyListText()=55 8B EC 56 8B F1 6A 00 FF 75 08 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 06 8B CE FF=pdb=COperationListPanel=266
virtual void vgui::ListPanel::SetFont()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 27=pdb=COperationListPanel=252
virtual void vgui::ListPanel::SetImageList()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 85 FF 74 1B=pdb=COperationListPanel=253
virtual void Dragger::SetMovable()=55 8B EC 53 8A 5D 08 56 8B F1 8B 06=pdb=Dragger=211
virtual void vgui::ListPanel::SetSelectedCell()=55 8B EC 56 8B F1 F6 ? ? ? ? ? ? 75 10=pdb=COperationListPanel=262
virtual void vgui::ListPanel::SetSortColumnEx()=55 8B EC 8B 45 08 89 ? ? ? ? ? 8B 45 0C 89 ? ? ? ? ? 8A=pdb=COperationListPanel=279
virtual void vgui::ListPanel::SetSortFunc()=55 8B EC 53 8B 5D 0C 56 8B F1 8B 4D=pdb=COperationListPanel=223
virtual void vgui::ListPanel::SetUserData()=55 8B EC 8B 55 08 85 D2 78 30=pdb=COperationListPanel=237
virtual vgui::Menu::~Menu()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8D=pdb
virtual void vgui::Menu::ActivateItem()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 78 4E=pdb=vgui::Menu=251
virtual void vgui::Menu::ActivateItemByRow()=55 8B EC 56 8B 75 08 85 F6 78=pdb=vgui::Menu=252
virtual void vgui::Menu::AddScrollBar()=56 8B F1 6A 01 8B ? ? ? ? ? 8B 01=pdb
void vgui::Menu::CalculateWidth()=55 8B EC 83 EC 08 56 8B F1 F6=pdb
void vgui::Menu::ClearCurrentlyHighlightedItem()=56 8B F1 8B ? ? ? ? ? 85 D2 78=pdb
int vgui::Menu::ComputeFullMenuHeightWithInsets()=55 8B EC 83 EC 14 53 57 8B F9 8D=pdb
int vgui::Menu::CountVisibleItems()=55 8B EC 51 53 8B D1=pdb
void vgui::Menu::DeleteAllItems()=53 56 57 8B F9 8B ? ? ? ? ? 83 F8=pdb
bool vgui::CMenuManager::IsWithinMenuOrRelative()=55 8B EC 53 8B 5D 08 8B CB 56 57=pdb
virtual void vgui::Menu::LayoutMenuBorder()=53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 50 50=pdb
void vgui::Menu::MoveAlongMenuItemList()=55 8B EC 81 ? ? ? ? ? 57 8B F9 83=pdb
virtual void vgui::Menu::MoveMenuItem()=55 8B EC 51 8B C1 53 56 33=pdb=vgui::Menu=238
virtual void vgui::Menu::OnCursorExitedMenuItem()=55 8B EC 83 ? ? ? ? ? ? 75 27 8B 01=pdb
virtual void vgui::Menu::OnHotKey()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 83 F8=pdb
virtual void vgui::Menu::OnKeyTyped()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 66 85=pdb=vgui::Menu=123
virtual void vgui::Menu::OnKillFocus()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 56 57 89=pdb
virtual void vgui::Menu::OnMouseWheeled()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 2E=pdb=vgui::Menu=108
virtual void vgui::Menu::OnSliderMoved()=56 6A 00 8B F1 E8 ? ? ? ? 8B 06=pdb=vgui::Menu=260
virtual void vgui::Menu::OnTypeAhead()=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 ? ? ? ? ? ? 0F=pdb=vgui::Menu=264
virtual void vgui::Menu::RemoveScrollBar()=56 8B F1 6A 00 8B ? ? ? ? ? 8B=pdb
void vgui::Menu::SetCurrentlyHighlightedItem()=55 8B EC 53 8B 5D 08 56 57 53 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 33=pdb
void vgui::Menu::SetCurrentlySelectedItem()=55 8B EC 8B D1 53 83=pdb
virtual void vgui::Menu::SetFont()=55 8B EC 8B 55 08 56 8B F1 89=pdb=vgui::Menu=256
virtual void vgui::Menu::UpdateMenuItem()=55 8B EC 56 8B F1 8B 4D 08 85 C9 78 57=pdb=vgui::Menu=237
virtual void vgui::MenuButton::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74=pdb=CNewActionButton=88
virtual void vgui::MenuButton::OnKeyCodeTyped()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 6A=pdb=CNewActionButton=122
virtual void vgui::MenuButton::SetMenu()=55 8B EC 56 8B F1 8B 4D 08 89 ? ? ? ? ? 85 C9 74 28=pdb=CNewActionButton=289
virtual void vgui::ToggleButton::DoClick()=56 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 8B=pdb
virtual void vgui::ToggleButton::OnKeyCodePressed()=55 8B EC 8B 45 08 83 F8 40 74=pdb
virtual void vgui::Slider::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B D9 57=pdb
virtual void vgui::Slider::DrawNob()=55 8B EC 83 EC 14 53 56 8B D9 8D=pdb=CPrecisionSlider=227
virtual void vgui::Slider::DrawTickLabels()=55 8B EC 83 EC 18 56 8B F1 8D 4D F0=pdb=CPrecisionSlider=229
virtual void vgui::Slider::DrawTicks()=55 8B EC 83 EC 1C 53 56 8B D9 8D=pdb=CPrecisionSlider=228
virtual int vgui::Slider::EstimateValueAtPos()=55 8B EC 83 EC 10 56 8B F1 8D 4D F4=pdb=CPrecisionSlider=221
virtual void vgui::Slider::GetTrackRect()=55 8B EC 83 EC 08 56 8B F1 8D 4D F8 51 8D 4D FC 51 8B 06 8B CE FF ? ? ? ? ? 8B 45 08 8B=pdb=vgui::Slider=230
virtual void vgui::Slider::OnKeyCodeTyped()=55 8B EC 83 EC 08 56 8B F1 8B 4D 08 8D=pdb=CPrecisionSlider=122
virtual void vgui::Slider::Paint()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8B 06 8B CE 5E=pdb=CPrecisionSlider=128
virtual void vgui::Slider::PaintBackground()=55 8B EC 83 EC 10 53 56 57 8B D9=pdb
virtual void vgui::Slider::SetRange()=55 8B EC 8B 55 08 8B ? ? ? ? ? 56 8B 75 0C 89=pdb=CPrecisionSlider=213
virtual void vgui::Slider::SetSliderThumbSubRange()=55 8B EC 8A 45 08 02 C0 32 ? ? ? ? ? 24 02 30 ? ? ? ? ? 8B=pdb=CPrecisionSlider=226
virtual void vgui::Slider::SetValue()=55 8B EC 8B 45 08 56 8B F1 57 8B ? ? ? ? ? 8B=pdb
virtual void vgui::RichText::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8B=pdb
void vgui::RichText::CalculateFade()=55 8B EC 83 EC 08 53 56 8B 75 08 8B D9 57 8B=pdb
void vgui::RichText::CursorToPixelSpace()=55 8B EC 83 EC 0C 53 56 8B F1 57 33=pdb
virtual void vgui::RichText::CutSelected()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 6A 00 FF 50=pdb
int vgui::RichText::DrawString()=55 8B EC 83 EC 08 53 56 57 FF 75 14=pdb
void vgui::RichText::GotoTextEnd()=55 8B EC 83 EC 08 56 8B F1 8D 55=pdb
void vgui::RichText::GotoTextStart()=56 8B F1 6A 00 8B ? ? ? ? ? C7=pdb
void vgui::RichText::GotoWordLeft()=56 8B F1 8B ? ? ? ? ? 83 F8 01 7C=pdb
void vgui::RichText::GotoWordRight()=56 8B F1 8B ? ? ? ? ? 40 89=pdb
virtual void vgui::RichText::MoveScrollBar()=55 8B EC 8B 45 08 8B 11 8D=pdb
virtual void vgui::RichText::MoveScrollBarDirect()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 27=pdb=vgui::RichText=219
virtual void vgui::RichText::OnKeyCodeTyped()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 6A=pdb=vgui::RichText=122
virtual void vgui::RichText::OnMouseDoublePressed()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 76=pdb=vgui::RichText=106
virtual void vgui::RichText::OnMouseReleased()=56 8B F1 6A 00 C6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF 50 08 8B ? ? ? ? ? 83=pdb=vgui::RichText=107
virtual void vgui::RichText::OnSliderMoved()=8B 01 C6 ? ? ? ? ? ? FF 60=pdb
virtual void vgui::RichText::OnThink()=56 8B F1 80 ? ? ? ? ? ? 74 1D=pdb=vgui::RichText=101
bool vgui::RichText::UpdateRenderState()=55 8B EC 56 8B 75 0C 57 8B F9 8B=pdb
virtual void vgui::ScrollBar::OnMouseFocusTicked()=56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 05=pdb=vgui::ScrollBar=126
_anonymous_namespace_::ScrollBarButton::OnMouseReleased()=55 8B EC 56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 4A=pdb
virtual void vgui::ScrollBar::OnSizeChanged()=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B ? ? ? ? ? 6A 00 6A=pdb=vgui::ScrollBar=9
virtual void vgui::ScrollBar::OnSliderMoved()=55 8B EC 56 FF 75 08 8B F1 8B 06 FF ? ? ? ? ? 8B=pdb
virtual void vgui::ScrollBar::SetButton()=55 8B EC 56 57 8B 7D 0C 8B F1 8B=pdb
virtual void vgui::ScrollBar::SetSlider()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 0A=pdb=vgui::ScrollBar=221
virtual vgui::ListViewPanel::~ListViewPanel()=56 8B F1 57 C7 ? ? ? ? ? E8 ? ? ? ? 8B=pdb
virtual void vgui::ListViewPanel::AddSelectedItem()=55 8B EC 53 56 8B 75 08 33 C0 57 8B F9 8B ? ? ? ? ? 85 D2 7E 20=pdb=vgui::ListViewPanel=228
virtual void vgui::ListViewItem::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03 8D=pdb
virtual void vgui::ListViewPanel::ClearSelectedItems()=56 8B F1 57 33 FF 39 ? ? ? ? ? 7E 76=pdb
virtual void vgui::ListViewPanel::DeleteAllItems()=56 8B F1 8B ? ? ? ? ? 83 F8 FF 74 25=pdb
void vgui::ListViewPanel::FinishKeyPress()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 6A=pdb
void vgui::ListViewPanel::OnItemMousePressed()=55 8B EC 51 53 8B 5D 08 56 57 8B F9 8B ? ? ? ? ? 83=pdb
virtual void vgui::ListViewPanel::OnKeyCodeTyped()=55 8B EC 51 53 8B D9 56 8B ? ? ? ? ? 85=pdb
virtual void vgui::ListViewItem::OnMousePressed()=55 8B EC FF 75 08 51=pdb
virtual void vgui::ListViewPanel::OnMouseWheeled()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 2B=pdb
virtual void vgui::ListViewItem::PerformLayout()=55 8B EC 83 EC 08 53 8B D9 56 57 8B 03 FF ? ? ? ? ? 80=pdb=vgui::ListViewItem=132
virtual void vgui::ListViewPanel::RemoveItem()=55 8B EC 51 56 8B 75 08 89=pdb=vgui::ListViewPanel=215
virtual void vgui::ListViewPanel::SetImageList()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 85 F6=pdb=vgui::ListViewPanel=223
virtual void vgui::ListViewPanel::SetSortFunc()=55 8B EC 8B 45 08 85 C0 74 0E 89=pdb
virtual void RadioImage::ApplySchemeSettings()=55 8B EC 51 56 8B 75 08 8D 55=pdb=RadioImage=33
virtual void vgui::RadioButton::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 8B 07 8B=pdb
virtual void vgui::RadioButton::OnKeyCodeTyped()=55 8B EC 56 57 8B 7D 08 8B F1 8D 47 C0=pdb=vgui::RadioButton=122
virtual void RadioImage::Paint()=55 8B EC 51 57 8B F9 8B 07 FF 77=pdb=RadioImage=0
virtual void vgui::RadioButton::PerformLayout()=55 8B EC 51 57 8B F9 8B 07 8B=pdb
vgui::ImageList::~ImageList()=56 8B F1 80 7E 14 00 74=pdb
virtual void vgui::DirectorySelectDialog::DoModal()=53 8B D9 56 8B ? ? ? ? ? 57 8B 03 8B 3E FF 10 50 8B CE=pdb=vgui::DirectorySelectDialog=267
void vgui::DirectorySelectDialog::SetStartDirectory()=55 8B EC 53 57 8B D9=pdb
virtual void vgui::ProgressBar::SetProgress()=55 8B EC F3 ? ? ? ? 0F ? ? ? ? ? ? 9F=pdb=vgui::ContinuousProgressBar=211
virtual void vgui::AnimatingImagePanel::OnTick()=56 8B F1 80 ? ? ? ? ? ? 74 53=pdb
virtual void vgui::CBitmapImagePanel::PaintBorder()=55 8B EC 83 EC 10 56 8B F1 8D 4D F8=pdb
virtual void vgui::Divider::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 68=pdb=vgui::Divider=88
virtual void vgui::MenuBar::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 03 8B CB 8B 37 68 ? ? ? ? FF 50 08 50 8B CF FF ? ? ? ? ? 8B 3F=pdb
virtual void vgui::MenuBar::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 57 83=pdb
virtual void vgui::MenuBar::OnMenuClose()=8B 01 6A 00 FF 50 30=pdb
virtual void vgui::MenuBar::Paint()=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 89=pdb
virtual void vgui::MenuItem::ApplySchemeSettings()=55 8B EC 83 EC 14 53 56 57 8B 7D 08 8B F1=pdb
virtual void vgui::MenuItem::GetContentSize()=55 8B EC 53 8B 5D 08 56 57 8B 7D 0C 8B F1 57 53 E8 ? ? ? ? 8B=pdb=vgui::MenuItem=215
virtual void MenuItemCheckImage::Paint()=55 8B EC 51 56 57 8B F9 8B 37=pdb=MenuItemCheckImage=0
virtual void vgui::MenuItem::PerformLayout()=55 8B EC 51 56 57 8B F9 E8=pdb=vgui::MenuItem=132
virtual void vgui::MenuItem::RepositionTextImage()=55 8B EC 83 EC 0C 83 ? ? ? ? ? ? 75 39=pdb=vgui::MenuItem=249
void vgui::MessageBox::SetCancelButtonText()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 06 8B CE 6A=pdb
virtual void vgui::MessageBox::SetOKButtonText()=55 8B EC 56 8B F1 6A 00 FF 75 08 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B 06 8B CE 6A=pdb=vgui::MessageBox=285
virtual void vgui::MessageBox::ShowWindow()=55 8B EC 8B 45 08 56 8B F1 6A 01=pdb=vgui::MessageBox=280
virtual vgui::TreeView::~TreeView()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 FF 74 25=pdb
virtual void vgui::TreeView::AddSelectedItem()=55 8B EC 53 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 3B=pdb=CVGuiTree=224
virtual void vgui::TreeNode::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B 07=pdb=vgui::TreeNode=88
virtual void vgui::TreeNodeText::ApplySchemeSettings()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 FF ? ? ? ? ? 8B=pdb=vgui::TreeNodeText=88
virtual void vgui::TreeView::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 03 8B CB 8B 37 68 ? ? ? ? FF 50 08 50 8B CF FF ? ? ? ? ? 8B 37=pdb
virtual bool vgui::TreeView::CanCurrentlyEditLabel()=55 8B EC 83 ? ? ? ? ? ? 75 18 8B=pdb=CVGuiTree=254
int vgui::TreeNode::ComputeInsertionPosition()=55 8B EC 51 53 8B D9 8B ? ? ? ? ? 83 ? ? ? ? ? ? 75=pdb
int vgui::TreeNode::CountVisibleIndex()=55 8B EC 83 EC 14 56 57 8B F9 C7 ? ? ? ? ? ? 8B=pdb
int vgui::TreeNode::CountVisibleNodes()=53 8B D9 56 BE=pdb
virtual void vgui::TreeView::ExpandItem()=55 8B EC 8B 55 08 56 8B F1 85 D2 78 40=pdb=CVGuiTree=243
int vgui::TreeNode::FindChild()=55 8B EC 51 53 8B D9 56 8B ? ? ? ? ? 83=pdb
virtual int vgui::TreeView::GetChild()=55 8B EC 8B 45 08 8D 14 40 8B ? ? ? ? ? 8B 04 90 8B ? ? ? ? ? 8B=pdb=CVGuiTree=214
virtual bool vgui::TreeNode::GetDropContextMenu()=55 8B EC 8B ? ? ? ? ? FF 75 0C FF=pdb=vgui::TreeNode=154
virtual unsigned long vgui::TreeNode::GetDropCursor()=55 8B EC 8B ? ? ? ? ? FF 75 08 FF=pdb=vgui::TreeNode=169
virtual int vgui::TreeView::GetFirstSelectedItem()=83 ? ? ? ? ? ? 7F 04 83=pdb
virtual int vgui::TreeView::GetItemParent()=55 8B EC 8B 45 08 8D 14 40 8B ? ? ? ? ? 8B 04 90 8B ? ? ? ? ? 5D=pdb
int vgui::TreeNode::GetNextChildItemIndex()=55 8B EC 56 8B ? ? ? ? ? 33 D2 57 85 F6 7E 1B=pdb
virtual int vgui::TreeView::GetNumChildren()=55 8B EC 8B 45 08 8B D1 83 F8 FF=pdb=CVGuiTree=213
int vgui::TreeNode::GetPrevChildItemIndex()=55 8B EC 8B ? ? ? ? ? 33 C0 56 57=pdb
virtual int vgui::TreeView::GetRootItemIndex()=8B ? ? ? ? ? 85 C0 74 07 8B ? ? ? ? ? C3=pdb
virtual int vgui::TreeView::GetSelectedItem()=55 8B EC 8B 55 08 85 D2 78 1B=pdb=CVGuiTree=232
virtual void vgui::TreeView::GetSelectedItemsForDrag()=55 8B EC 8B 01 FF 75 0C=pdb
bool vgui::TreeNode::HasParent()=55 8B EC 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57=pdb
virtual bool vgui::TreeNode::IsDroppable()=55 8B EC 8B ? ? ? ? ? FF 75 08 6A 00 8B 10 FF ? ? ? ? ? 8B C8 8B=pdb=vgui::TreeNode=160
virtual bool vgui::TreeNodeDropPanel::IsDroppable()=55 8B EC 8B ? ? ? ? ? FF 75 08 6A 01 8B 10 FF ? ? ? ? ? 8B C8 8B=pdb=vgui::TreeNodeDropPanel=160
virtual bool vgui::TreeView::IsItemSelected()=55 8B EC 8B 55 08 56 85 D2 78 54=pdb=CVGuiTree=227
virtual bool vgui::TreeNodeText::IsKeyRebound()=55 8B EC 80 ? ? ? ? ? ? 74 06 32 C0 5D C2 08=pdb
virtual bool vgui::TreeView::IsLabelBeingEdited()=8A ? ? ? ? ? C0 E8 04=pdb
virtual void vgui::TreeView::MakeItemVisible()=55 8B EC 8B 45 08 53 56 57 8B F9 8D 14=pdb=CVGuiTree=245
virtual void vgui::TreeNode::OnCreateDragData()=55 8B EC 56 8B F1 8B ? ? ? ? ? FF ? ? ? ? ? 8B=pdb=vgui::TreeNode=159
virtual void vgui::TreeNode::OnKeyCodeTyped()=55 8B EC 51 53 56 8B 75 08 8B D9 8D=pdb=vgui::TreeNode=122
virtual void vgui::TreeNodeText::OnKeyCodeTyped()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 30=pdb
virtual void vgui::TreeNodeText::OnKillFocus()=56 8B F1 E8 ? ? ? ? 6A 00=pdb
virtual void vgui::TreeNodeText::OnMousePressed()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 0D FF 75 08 E8 ? ? ? ? 5E 5D C2 04 00 8B=pdb
virtual void vgui::TreeView::OnMouseWheeled()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 29=pdb=CVGuiTree=108
virtual void vgui::TreeNode::OnPanelDropped()=55 8B EC 8B ? ? ? ? ? FF 75 08 6A 00 8B 10 FF ? ? ? ? ? 8B C8 FF=pdb=vgui::TreeNode=163
virtual void vgui::TreeNodeDropPanel::OnPanelDropped()=55 8B EC 8B ? ? ? ? ? FF 75 08 6A 01 8B 10 FF ? ? ? ? ? 8B C8 FF=pdb=vgui::TreeNodeDropPanel=163
virtual void vgui::TreeNode::OnSetFocus()=8B ? ? ? ? ? 6A 00 8B 01 FF 50 30 C3=pdb
virtual void vgui::TreeView::OnSliderMoved()=56 8B F1 6A 00 6A 00 8B 06 FF ? ? ? ? ? 8B 06 8B CE FF 50=pdb
virtual void vgui::TreeNodeText::OnTextChanged()=8B 01 FF ? ? ? ? ? 6A 00 6A=pdb
virtual void vgui::TreeNode::Paint()=56 8B F1 83 ? ? ? ? ? ? 7F=pdb
virtual void vgui::TreeView::RangeSelectItems()=55 8B EC 83 EC 18 56 8B F1 8B ? ? ? ? ? 85=pdb
virtual void vgui::TreeView::RemoveAll()=56 57 8B F9 33 F6 39 ? ? ? ? ? 7E 41=pdb=CVGuiTree=218
void vgui::TreeNode::RemoveChildren()=56 57 8B F9 8B ? ? ? ? ? 83 EE 01 78 27=pdb
virtual void vgui::TreeView::RemoveChildrenOfNode()=55 8B EC 8B 55 08 85 D2 78 2F=pdb=CVGuiTree=270
virtual void vgui::TreeView::RemoveItem()=55 8B EC 83 EC 0C 53 57 8B 7D 08=pdb=CVGuiTree=217
virtual void vgui::TreeView::RemoveSelectedItem()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 0F ? ? ? ? ? 3B ? ? ? ? ? 0F=pdb=CVGuiTree=225
void vgui::TreeNode::SelectNextChild()=55 8B EC 53 56 57 8B F9 8B 4D=pdb
void vgui::TreeNode::SelectPrevChild()=55 8B EC 56 57 8B F9 33 D2=pdb
void vgui::TreeNode::SetFont()=55 8B EC 53 8B 5D 08 57 8B F9 85=pdb
virtual void vgui::TreeView::SetFont()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 3C=pdb=CVGuiTree=221
virtual void vgui::TreeView::SetImageList()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 85 FF 74 25=pdb=CVGuiTree=222
virtual void vgui::TreeView::SetLabelEditingAllowed()=55 8B EC 8B 55 08 85 D2 78 39=pdb=CVGuiTree=255
void vgui::TreeNode::SetNodeExpanded()=55 8B EC 8A 45 08 56 8B F1 88 ? ? ? ? ? 84 C0 74 51=pdb
virtual void vgui::TreeNode::StepInto()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 75=pdb=vgui::TreeNode=212
virtual void vgui::TreeNode::StepOver()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 85 D2=pdb
virtual void vgui::CTreeViewListControl::SetTreeView()=55 8B EC 56 8B F1 8B 4D 08 89 ? ? ? ? ? 85 C9 74 19=pdb=CProfileHierarchyPanel=211
virtual void vgui::URLLabel::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 8B C1 56 57=pdb
virtual void vgui::URLLabel::ApplySettings()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 56=pdb
virtual void vgui::URLLabel::OnMousePressed()=55 8B EC 83 7D 08 6B 75 1B=pdb
void vgui::BuildGroup::ChangeControlSettingsFile()=55 8B EC 53 56 57 6A 00 8B=pdb
virtual bool vgui::BuildGroup::MouseDoublePressed()=55 8B EC 8B 01 8B 40 2C=pdb
void vgui::BuildGroup::RegisterControlSettingsFile()=55 8B EC 53 56 57 FF 75 08 8B D9 8D=pdb
virtual void vgui::BuildGroup::SetContextPanel()=55 8B EC 8B 45 08 89 41 6C=pdb
virtual void vgui::BuildGroup::SetRulerLabelsVisible()=55 8B EC 56 8B 75 08 57 8B F9 56 8B=pdb=vgui::BuildGroup=15
virtual void vgui::BaseTooltip::HideTooltip()=8A 41 24 24 FE=pdb
virtual void vgui::BaseTooltip::SetText()=55 8B EC 83 EC 08 8B 45 08 56 8B=pdb
virtual void vgui::BaseTooltip::ShowTooltip()=8B 01 80 49=pdb
int CUtlRBTree<char const near *,int,bool ()=55 8B EC 8B 55 08 56 57 8B F9 83 FA FF 74 2B 8B 77 04 8D 04 92 8B 4C 86=pdb
virtual void vgui::BuildModeDialog::OnClose()=56 8B F1 8B ? ? ? ? ? 8B 01 8B 40 04=pdb=vgui::BuildModeDialog=235
virtual void vgui::BuildModeDialog::OnKeyCodeTyped()=55 8B EC 8B 45 08 83 F8 40 75=pdb=vgui::BuildModeDialog=122
virtual void vgui::BuildModeDialog::OnTextKillFocus()=83 ? ? ? ? ? ? 74 08 8B 01 FF ? ? ? ? ? C3=pdb
virtual unsigned long vgui::TextImage::GetFont()=F6 41 34 10=pdb
virtual void vgui::TextImage::GetTextSize()=55 8B EC 83 EC 24 8B 45 08 56=pdb=CheckImage=41
virtual void vgui::TextImage::Paint()=55 8B EC 83 EC 28 56 8B F1 8D=pdb=vgui::TextImage=0
void vgui::TextImage::RecalculateCenterWrapIndents()=55 8B EC 83 EC 14 56 8B F1 57 8D=pdb
void vgui::TextImage::RecalculateEllipsesPosition()=55 8B EC 83 EC 20 53 8B D9 89 5D E0 80=pdb
virtual void vgui::TextImage::SetFont()=55 8B EC 8B 45 08 80=pdb
virtual void vgui::TextImage::SetText()=55 8B EC 80 7D 0C 00 56 57=pdb
virtual void vgui::Image::DrawFilledRect()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 40=pdb=CheckImage=19
virtual void vgui::Image::DrawLine()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 4C=pdb=CheckImage=21
virtual void vgui::Image::DrawOutlinedRect()=55 8B EC 8B 45 14 03 41 08 53 8B ? ? ? ? ? 56 57 50 8B 45 10 03 41 04 8B 3B 50 8B 45 0C 03 41 08 50 8B 45 08 03 41 04 8B CB 50 FF 57 48=pdb=CheckImage=20
virtual void vgui::Image::DrawPolyLine()=55 8B EC 8B 45 0C 8B D1 53=pdb=CheckImage=22
virtual void vgui::Image::DrawPrintChar()=55 8B EC 8B 41 08 8B ? ? ? ? ? 03 45 0C 56 50 8B 41 04 8B CA 8B 32 03 45 08 50 FF 56 68 8B ? ? ? ? ? 6A 00 FF 75 10=pdb=CheckImage=29
virtual void vgui::Image::DrawPrintText()=55 8B EC 8B 41 08 8B ? ? ? ? ? 03 45 0C 56 50 8B 41 04 8B CA 8B 32 03 45 08 50 FF 56 68 8B ? ? ? ? ? 6A 00 FF 75 14=pdb=CheckImage=27
virtual void vgui::Image::DrawSetColor()=55 8B EC 8B ? ? ? ? ? 8B 01 5D FF 60 3C=pdb=CheckImage=18
virtual void vgui::Image::DrawSetTextColor()=55 8B EC 8B 45 08 8B C8 56 8B ? ? ? ? ? 8B D0 57 C1 EA 10 C1 E9 18 8B 3E 51 0F B6 D2 8B CE 52 8B D0 0F B6 C0 C1 EA 08 0F B6 D2 52 50 FF 57 64=pdb=CheckImage=25
virtual void vgui::Image::DrawSetTextPos()=55 8B EC 8B 41 08 8B ? ? ? ? ? 03 45 0C 56 50 8B 41 04 8B CA 8B 32 03 45 08 50 FF 56 68 5E=pdb=CheckImage=26
virtual class Color vgui::Image::GetColor()=55 8B EC 8B 45 08 8B 49 14=pdb
virtual void vgui::Image::GetContentSize()=55 8B EC 8B 01 5D FF 60 0C=pdb
virtual void vgui::Image::GetPos()=55 8B EC 8B 45 08 8B 51 04=pdb
virtual void vgui::Image::GetSize()=55 8B EC 8B 45 08 8B 51 0C=pdb
virtual void vgui::Image::SetColor()=55 8B EC 8B 45 08 89 41 14 8B=pdb
virtual void vgui::Image::SetPos()=55 8B EC 8B 45 08 89 41 04 8B=pdb
virtual void vgui::Image::SetSize()=55 8B EC 8B 45 08 89 41 0C 8B=pdb
virtual bool vgui::ScrollBarSlider::HasFullRange()=55 8B EC 83 EC 08 56 8B F1 8D 4D FC=pdb=vgui::ScrollBarSlider=220
virtual bool vgui::ScrollBarSlider::IsSliderVisible()=8B ? ? ? ? ? 2B ? ? ? ? ? 85 C0 7F 03=pdb
virtual void vgui::ScrollBarSlider::OnCursorMoved()=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 0F=pdb=vgui::ScrollBarSlider=102
virtual void vgui::ScrollBarSlider::Paint()=55 8B EC 83 EC 0C 56 8B F1 8D=pdb=vgui::ScrollBarSlider=128
virtual void vgui::ScrollBarSlider::PerformLayout()=56 8B F1 8B 06 FF ? ? ? ? ? 8B CE=pdb
virtual void vgui::ScrollBarSlider::SetRange()=55 8B EC 56 8B 75 08 8B D6=pdb=vgui::ScrollBarSlider=214
virtual void vgui::ScrollBarSlider::SetValue()=55 8B EC 8B 55 08 56 57 8B F9 8B ? ? ? ? ? 2B=pdb=vgui::ScrollBarSlider=211
void CPerforceFileListFrame::AddFileForOpen()=55 8B EC 53 56 8B 75 08 57 8B F9 8B ? ? ? ? ? 56=pdb
void CPerforceFileListFrame::AddFileForSubmit()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 4D 0C=pdb
virtual void CSaveDocumentQuery::DoModal()=56 8B F1 6A 01 8B 06 FF ? ? ? ? ? 8B 06=pdb=CSaveDocumentQuery=267
virtual vgui::PanelListPanel::~PanelListPanel()=56 57 8B F9 C7 ? ? ? ? ? E8 ? ? ? ? 8D ? ? ? ? ? E8=pdb
virtual void vgui::PanelListPanel::ApplySettings()=55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A=pdb
virtual void vgui::PanelListPanel::DeleteAllItems()=56 57 8B F9 8B ? ? ? ? ? 83 FE FF 74 29=pdb
virtual void vgui::PanelListPanel::OnMouseWheeled()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 74 2C=pdb=vgui::PanelListPanel=108
virtual void vgui::PanelListPanel::RemoveItem()=55 8B EC 83 EC 08 8B C1 56 8B=pdb=vgui::PanelListPanel=214
virtual void vgui::SplitterHandle::OnMousePressed()=53 8B D9 80 ? ? ? ? ? ? 75 1D=pdb=vgui::SplitterHandle=105
virtual void vgui::Splitter::OnSizeChanged()=55 8B EC 53 8B 5D 08 56 57 8B 7D 0C 8B F1 57 53 E8 ? ? ? ? 85=pdb=vgui::Splitter=9
CVTFTexture::CVTFTexture()=C7 ? ? ? ? ? 0F 57 C0 C7 ? ? ? ? ? ? C7=pdb
void CVTFTexture::BlendCubeMapFaceCorners()=55 8B EC 83 EC 44 53 56 8B D9 8D=pdb
void CVTFTexture::BuildCubeMapMatchLists()=55 8B EC 83 EC 18 80 7D=pdb
virtual float CVTFTexture::BumpScale()=D9 41 40=pdb
virtual void CVTFTexture::ComputeAlphaFlags()=55 8B EC 83 EC 18 56 8B F1 81=pdb
virtual int CVTFTexture::ComputeFaceSize()=55 8B EC FF 71 18=pdb
virtual void CVTFTexture::ComputeMipLevelDimensions()=55 8B EC 8B D1 8B 4D 08 56 8B 75=pdb=CVTFTexture=32
virtual int CVTFTexture::ComputeTotalSize()=56 8B F1 FF 76 18 6A=pdb
virtual bool CVTFTexture::ConstructLowResImage()=55 8B EC 83 EC 54 56 8B F1 83=pdb
virtual int CVTFTexture::FileSize()=55 8B EC 57 6A 30=pdb=CVTFTexture=13
virtual void CVTFTexture::GenerateHemisphereMap()=55 8B EC 83 EC 18 53 8B 5D 18=pdb=CVTFTexture=43
virtual void CVTFTexture::GenerateSpheremap()=8B 01 FF 50 74 C2=pdb
int CVTFTexture::GetImageOffset()=55 8B EC 51 53 56 57 FF 75 14=pdb
virtual bool CVTFTexture::HasResourceEntry()=55 8B EC FF 75 08 E8 ? ? ? ? 85 C0 0F=pdb
virtual unsigned char near * CVTFTexture::ImageData()=55 8B EC 56 8B F1 FF 76=pdb
virtual void CVTFTexture::ImageFileInfo()=55 8B EC 83 EC 0C 56 6A=pdb
virtual bool CVTFTexture::IsCubeMap()=8B 41 2C C1 E8 0E=pdb
virtual bool CVTFTexture::IsNormalMap()=8B 41 2C C1 E8 07 83=pdb
virtual bool CVTFTexture::IsVolumeTexture()=83 79 14 01=pdb
virtual int CVTFTexture::LowResHeight()=8B 41 54 C3=pdb
virtual int CVTFTexture::LowResWidth()=8B 41 50 C3=pdb
virtual void CVTFTexture::PostProcess()=55 8B EC 56 8B F1 8B 06 8B 40 74=pdb
virtual void CVTFTexture::PutOneOverMipLevelInAlpha()=55 8B EC 83 EC 18 57 8B F9=pdb=CVTFTexture=46
virtual void CVTFTexture::SetAlphaTestThreshholds()=55 8B EC F3 ? ? ? ? F3 ? ? ? ? F3 ? ? ? ? F3=pdb
virtual void CVTFTexture::SetPostProcessingSettings()=55 8B EC 56 8D ? ? ? ? ? 0F=pdb
virtual void CVTFTexture::SetReflectivity()=55 8B EC 8B 55 08 8B 02 89 41=pdb
void CVTFTexture::SetupTextureEdgeIncrements()=55 8B EC 83 EC 0C 56 57 8B F9 8D=pdb
std::_Lockit::_Lockit()=55 8B EC 8B 45 08 56 8B F1 89 06 85=pdb
std::_Lockit::~_Lockit()=8B 01 85 C0 0F=pdb
std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t()=56 EB 18=pdb
_sprintf_s()=55 8B EC 8D 45 14 50=pdb
__freea_crt()=55 8B EC 8B 45 08 85 C0 74 12 83 E8=pdb
void operator delete()=55 8B EC FF 75 08 E8 ? ? ? ? 59 5D C3=pdb
find_pe_section()=55 8B EC 8B 45 08 56 8B 48=pdb
___scrt_dllmain_after_initialize_c()=E8 ? ? ? ? 85 C0 74 07 E8=pdb
___scrt_dllmain_before_initialize_c()=6A 00 E8 ? ? ? ? 84 C0 59=pdb
___scrt_dllmain_crt_thread_detach()=E8 ? ? ? ? E8 ? ? ? ? B0 01 C3=pdb
___scrt_dllmain_uninitialize_c()=E8 ? ? ? ? 85 C0 74 0C 68 ? ? ? ? E8=pdb
___scrt_dllmain_uninitialize_critical()=6A 00 E8 ? ? ? ? 59 E9=pdb
___scrt_initialize_crt()=55 8B EC 83 7D 08 00 75 07=pdb
___scrt_is_nonwritable_in_current_image()=6A 08 68 ? ? ? ? E8 ? ? ? ? 83 65 FC 00 B8=pdb
___scrt_release_startup_lock()=55 8B EC E8 ? ? ? ? 85 C0 74=pdb
___scrt_uninitialize_crt()=55 8B EC 80 ? ? ? ? ? ? 74 06 80=pdb
_atexit()=55 8B EC FF 75 08 E8 ? ? ? ? F7=pdb
__alloca_probe_16()=51 8D 4C 24 08 2B C8 83 E1 0F=pdb
__alloca_probe_8()=51 8D 4C 24 08 2B C8 83 E1 07=pdb
__scrt_uninitialize_thread_safe_statics()=68 ? ? ? ? FF ? ? ? ? ? A1 ? ? ? ? 85=pdb
__allmul()=8B 44 24 08 8B 4C 24 10=pdb
__alldiv()=57 56 53 33=pdb
__allrem()=53 57 33 FF 8B 44=pdb
void near * operator new()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 89 65=pdb
__aulldiv()=53 56 8B 44 24=pdb
dllmain_crt_dispatch()=55 8B EC 8B 45 0C 83 E8=pdb
dllmain_dispatch()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 7D=pdb
_DllMainCRTStartup()=55 8B EC 83 7D 0C 01=pdb
__aulldvrm()=56 8B 44 24 14=pdb
__aullrem()=53 8B 44=pdb
__aullshr()=80 F9 40 73 15 80 F9 20 73 06 0F AD=pdb
___raise_securityfailure()=55 8B EC 6A 00 FF ? ? ? ? ? FF 75 08 FF=pdb
___report_rangecheckfailure()=55 8B EC 6A 08 E8=pdb
__EH_prolog3_catch()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 89=pdb
__SEH_prolog4()=68 ? ? ? ? 64 ? ? ? ? ? ? 8B 44 24 10 89 6C 24 10 8D 6C 24 10 2B E0 53 56 57 A1 ? ? ? ? 31 45 FC 33 C5 50=pdb
___common_sin_reduction_LA()=55 8B EC 83 E4 F0 56 57 53 83 EC 54 B8 ? ? ? ? 8B 55 0C 8B 5D 10 2B D0 0F ? ? ? ? ? 33 C0 66 ? ? ? ? D9 7C 24 46=pdb
void _JumpToContinuation()=55 8B EC 51 53 8B 45=pdb
void _UnwindNestedFrames()=55 8B EC 51 51 53 56 57 64=pdb
__CatchGuardHandler()=55 8B EC 56 FC=pdb
__CreateFrameInfo()=55 8B EC 8B 4D 0C 56 8B 75 08 89=pdb
__TranslatorGuardHandler()=55 8B EC 51 53 FC=pdb
___CxxFrameHandler3()=55 8B EC 83 EC 08 53 56 57 FC=pdb
_memset()=8B 4C 24 0C 0F ? ? ? ? 8B=pdb
_strstr()=8B 4C 24 08 8B 44 24 04=pdb
_strchr()=83 ? ? ? ? ? ? 72 5F=pdb
___std_exception_copy()=55 8B EC 57 8B 7D 08 80 7F 04=pdb
___std_exception_destroy()=55 8B EC 56 8B 75 08 80 7E=pdb
PMDtoOffset()=55 8B EC 56 8B 75 0C 33 D2 39=pdb
_strrchr()=55 8B EC 57 83=pdb
_longjmp()=55 8B EC FF 75 08 E8 ? ? ? ? 59 5D E9=pdb
___std_type_info_compare()=55 8B EC 8B 45 08 8B 4D 0C 3B=pdb
___std_type_info_destroy_list()=55 8B EC FF 75 08 FF ? ? ? ? ? 85 C0 74=pdb
__except_handler3()=55 8B EC 83 EC 08 53 56 57 55=pdb
__set_se_translator()=55 8B EC 56 E8 ? ? ? ? 8B 70=pdb
__IsExceptionObjectToBeDestroyed()=55 8B EC E8 ? ? ? ? 8B 40=pdb
___AdjustPointer()=55 8B EC 8B 4D 0C 8B 55 08 56=pdb
_memchr()=8B 44 24 0C 53 85=pdb
ValidateLocalCookies()=55 8B EC 56 8B 75 08 57 8B 7D 0C 8B=pdb
_memcmp()=55 8B EC 53 8B 5D 10 8B=pdb
___vcrt_thread_detach()=6A 00 E8 ? ? ? ? 59 B0 01 C3=pdb
__vcrt_freefls()=55 8B EC 8B 45 08 85 C0 74 0E 3D=pdb
___vcrt_freeptd()=55 8B EC A1 ? ? ? ? 83 F8 FF 74 27=pdb
___vcrt_getptd_noexit()=83 ? ? ? ? ? ? 75 03 33=pdb
___vcrt_initialize_ptd()=68 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 59=pdb
___vcrt_uninitialize_ptd()=A1 ? ? ? ? 83 F8 FF 74 0E=pdb
BuildCatchObjectHelperInternal___FrameHandler3_()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 DB 8B=pdb
BuildCatchObjectInternal___FrameHandler3_()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 55=pdb
int TypeMatchHelper<class __FrameHandler3>()=55 8B EC 8B 55 08 53 56 57=pdb
CallUnexpected()=6A 04 B8 ? ? ? ? E8 ? ? ? ? E8=pdb
ExFilterRethrow()=55 8B EC 8B 45 08 8B 00 81 ? ? ? ? ? 75=pdb
IsInExceptionSpec()=55 8B EC 83 EC 18 53 56 8B 75 0C=pdb
_CallSettingFrame()=55 8B EC 83 EC 04=pdb
___longjmp_internal()=55 8B EC 83 EC 50 8B 5C=pdb
__local_unwind2()=53 56 57 8B 44=pdb
__NLG_Notify()=53 51 BB ? ? ? ? 8B=pdb
pDNameNode::pDNameNode()=55 8B EC 8B 45 08 C7 ? ? ? ? ? 85=pdb
virtual char DNameStatusNode::getLastChar()=83 79 04 01 0F 95=pdb
virtual char pDNameNode::getLastChar()=8B 49 04 85 C9 0F ? ? ? ? ? 32 C0 C3=pdb
virtual char pcharNode::getLastChar()=8B 51 08 85 D2 74 08=pdb
static class DName UnDecorator::getReturnType()=55 8B EC A1 ? ? ? ? FF 75 0C=pdb
static class DName UnDecorator::getSignedDimension()=55 8B EC 51 51 A1 ? ? ? ? 8A 08 84 C9 75=pdb
virtual char near * charNode::getString()=55 8B EC 8B 45 08 3B 45=pdb
virtual char near * pDNameNode::getString()=55 8B EC 8B 49 04 85=pdb
virtual char near * pcharNode::getString()=55 8B EC FF 71 08=pdb
static class DName UnDecorator::getSymbolName()=55 8B EC A1 ? ? ? ? 80 38=pdb
virtual int pDNameNode::length()=8B 49 04 85 C9 0F ? ? ? ? ? 33=pdb
und_strncmp()=55 8B EC 8B 45 10 85 C0 75 02 5D C3 8B 4D 0C 8B 55 08 53=pdb
___unDNameEx()=6A 64 68 ? ? ? ? E8=pdb
ValidateScopeTableHandlers()=55 8B EC 8B 4D 10 33=pdb
__ValidateEH3RN()=55 8B EC 6A FE 68 ? ? ? ? 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 38=pdb
__local_unwind4()=53 56 57 8B 54=pdb
_unwind_handler4()=8B 4C 24 04 F7 ? ? ? ? ? ? B8 ? ? ? ? 74 33=pdb
_EH4_CallFilterFunc()=55 56 57 53=pdb
_EH4_TransferToHandler()=8B EA 8B F1=pdb
_EH4_LocalUnwind()=55 8B 6C 24 08 52=pdb
___vcrt_initialize_locks()=56 57 BF ? ? ? ? 33 F6 6A 00 68 ? ? ? ? 57 E8 ? ? ? ? 83=pdb
_rt_probe_read4()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 FC=pdb
___acrt_call_reportfault()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 83 7D 08=pdb
___acrt_initialize_invalid_parameter_handler()=8B FF 55 8B EC 8B 45 08 A3=pdb
__invalid_parameter_noinfo()=33 C0 50 50 50 50 50 E8 ? ? ? ? 83=pdb
__invalid_parameter_noinfo_noreturn()=8B FF 56 33 F6 56=pdb
common_vsprintf_s_char_()=8B FF 55 8B EC 83 7D 18=pdb
_lambda_0be4ab1c2a6918fda4e39227d83ea893_::operator()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B F1=pdb
___libm_sse2_powf()=F3 ? ? ? ? ? ? ? 83 EC 0C 66=pdb
_lambda_32aa245da1b5b882fa96db788295c8b2_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B6 00 50 E8 ? ? ? ? 8B 46 04 C6 00 00 8B 46 08 8B 0E 5E=pdb
_lambda_e128a58a467199df1f46ac2193393add_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B7 00 50 E8 ? ? ? ? 8B 46 04 33 C9 66 89 08 8B 46 08 8B 0E 5E=pdb
memcpy_s()=8B FF 55 8B EC 56 8B 75 14 85 F6 75=pdb
__fFMOD()=D9 C9 D9 F8=pdb
_strtok()=8B FF 55 8B EC E8 ? ? ? ? 83=pdb
___libm_sse2_acosf()=66 0F 7E C0 B9=pdb
___libm_sse2_asinf()=66 0F 7E C0 F3=pdb
___libm_sse2_atanf()=B9 ? ? ? ? 66 0F 6E D1 F3=pdb
___libm_sse2_expf()=F3 0F 10 C8 F3 0F 10 E0=pdb
___libm_sse2_log10f()=F3 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 0F DB=pdb
___libm_sse2_logf()=F3 ? ? ? ? ? ? ? F3 0F 10 F8=pdb
___libm_sse2_tanf()=66 ? ? ? ? 66 25 FF 7F 66 2D 80 00 66 3D FF=pdb
_fopen()=8B FF 55 8B EC 6A 40=pdb
_fread()=8B FF 55 8B EC FF 75 14 FF 75 10 FF 75 0C 6A=pdb
_fseek()=8B FF 55 8B EC FF 75 10=pdb
common_ftell_nolock_long_()=8B FF 55 8B EC FF 75 08 E8 ? ? ? ? 59 85=pdb
common_ftell_translated_utf8_nolock()=8B FF 55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53=pdb
_lambda_fd76cae15b6f790020ebaa7b78a868c2_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B7 00 50 E8 ? ? ? ? 8B 46 04 33 C9 66 89 08 8B 46 08 8B 0E FF=pdb
_lambda_f765c90ab33e8386abf09c0f079d37e9_::operator()=8B FF 56 8B F1 8B 46 04 8B 0E 0F B6 00 50 E8 ? ? ? ? 8B 46 04 C6 00 00 8B 46 08 8B 0E FF=pdb
unsigned int __crt_stdio_input::to_floating_point_length()=8B FF 55 8B EC 8B 45 08 85 C0 74 12=pdb
___libm_sse2_pow()=83 EC 14 66=pdb
_wcsncpy()=8B FF 55 8B EC 8B 4D 10 57=pdb
_iswalnum()=8B FF 55 8B EC 68=pdb
_iswascii()=8B FF 55 8B EC B8 ? ? ? ? 66=pdb
_iswcntrl()=8B FF 55 8B EC 6A 20=pdb
_iswdigit()=8B FF 55 8B EC 6A 04 FF=pdb
_iswspace()=8B FF 55 8B EC 6A 08=pdb
_strncpy()=8B 4C 24 0C 57 85 C9 0F ? ? ? ? ? 56=pdb
call_wfullpath()=8B FF 55 8B EC 56 57 E8 ? ? ? ? 8B 38=pdb
is_root_unc_name()=8B FF 55 8B EC 8B 55 08 8B=pdb
is_usable_drive_or_unc_root()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 68=pdb
common_dupenv_s_char_()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 0B E8 ? ? ? ? 59 83 65 FC 00 FF 75 1C=pdb
common_dupenv_s_nolock_char_()=8B FF 55 8B EC 51 56 57 8B=pdb
common_getenv_s_wchar_t_()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 0B E8 ? ? ? ? 59 83 65 FC 00 FF 75 14=pdb
__dupenv_s()=8B FF 55 8B EC 6A 00 6A 00 6A=pdb
is_valid_drive()=8B FF 55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
__crt_seh_guarded_call_bool_::operator()=6A 0C 68 ? ? ? ? E8 ? ? ? ? C6 45 E7 00 8B 45=pdb
_lambda_555255fdfb9471e5fa7bfca50021c162_::operator()=8B FF 55 8B EC 83 EC 18 53 8B D9=pdb
___acrt_errno_from_os_error()=8B FF 55 8B EC 8B 4D 08 33 C0 3B=pdb
___acrt_errno_map_os_error()=8B FF 55 8B EC 56 E8 ? ? ? ? 8B 4D=pdb
___doserrno()=E8 ? ? ? ? 85 C0 75 06 B8 ? ? ? ? C3 83 C0 14=pdb
__errno()=E8 ? ? ? ? 85 C0 75 06 B8 ? ? ? ? C3 83 C0 10=pdb
common_strtod_l_double_char_()=8B FF 55 8B EC 83 EC 1C 56 8B=pdb
___acrt_initialize_stdio()=A1 ? ? ? ? 56 6A 03=pdb
___acrt_iob_func()=8B FF 55 8B EC 6B 45 08 38=pdb
___acrt_uninitialize_stdio()=8B FF 56 E8 ? ? ? ? E8=pdb
int __crt_time_elapsed_leap_years<int>()=8B FF 55 8B EC 8B 45 08 56 BE=pdb
common_gmtime_s_long_()=8B FF 55 8B EC 51 51 56 8B 75 08 85 F6 75 16=pdb
__mktime32()=8B FF 55 8B EC 6A 01 FF 75 08 E8=pdb
__isindst()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 06=pdb
___acrt_initialize_clock()=8B FF 55 8B EC 83 EC 10 8D 45=pdb
__ftol()=55 8B EC 83 C4 F4 9B=pdb
atexit_exception_filter()=8B FF 55 8B EC 33 C0 81=pdb
__cexit()=6A 01 6A 00 6A 00 E8=pdb
__exit()=8B FF 55 8B EC 6A 00 6A 02=pdb
_exit()=8B FF 55 8B EC 6A 00 6A 00 FF=pdb
__fgetc_nolock()=8B FF 55 8B EC 8B 55 08 85=pdb
_ldiv()=8B FF 55 8B EC 8B 45 08 99=pdb
_strpbrk()=55 8B EC 56 33 C0 50 50 50 50 50 50 50 50 8B 55 0C 8D 49 00 8A 02 0A C0 74 09 83 C2 01 0F AB 04 24 EB F1 8B 75 08 8B=pdb
_wcsncat()=8B FF 55 8B EC 56 8B 75 08 33=pdb
_strncat()=8B 4C 24 0C 57 85 C9 0F ? ? ? ? ? 8B=pdb
int ()=8B FF 55 8B EC A1 ? ? ? ? 83=pdb
__set_new_handler()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 6A 00=pdb
___acrt_initialize_locks()=8B FF 56 57 BF=pdb
___acrt_uninitialize_locks()=8B FF 56 8B ? ? ? ? ? 85=pdb
_strcspn()=55 8B EC 56 33 C0 50 50 50 50 50 50 50 50 8B 55 0C 8D 49 00 8A 02 0A C0 74 09 83 C2 01 0F AB 04 24 EB F1 8B 75 08 83=pdb
__CIpow_default()=83 EC 14 D9=pdb
__pow_default()=8D 54 24 0C E8 ? ? ? ? 8B=pdb
_test_whether_TOS_is_int()=D9 C0 D9 FC D8 D9 B1=pdb
___strncnt()=8B FF 55 8B EC 8B 4D 08 33 C0 38=pdb
__seh_filter_dll()=8B FF 55 8B EC B8 ? ? ? ? 39=pdb
free_environment_wchar_t_()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 1F=pdb
___dcrt_uninitialize_environments_nolock()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? B9=pdb
__crt_atexit()=8B FF 55 8B EC FF 75 08 68=pdb
initialize_c()=68 ? ? ? ? E8 ? ? ? ? C7 ? ? ? ? ? ? E8 ? ? ? ? 59 B0=pdb
___acrt_uninitialize_critical()=8B FF 55 8B EC FF 75 08 E8 ? ? ? ? 59 B0=pdb
__errcode()=8B FF 55 8B EC 8B 45 08 A8 20=pdb
__except1()=8B FF 53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56=pdb
__handle_exc()=8B FF 55 8B EC 83 EC 10 53 8B 5D 08 56=pdb
__raise_exc()=8B FF 55 8B EC 6A 00 FF 75 1C=pdb
__raise_exc_ex()=8B FF 55 8B EC 8B 45 08 33 C9 53 33=pdb
__set_errno_from_matherr()=8B FF 55 8B EC 8B 45 08 83 F8 01=pdb
__umatherr()=8B FF 55 8B EC 8B 55 0C 83 EC=pdb
bool __acrt_stdio_parse_mode_D()=8B FF 55 8B EC 8B 4D 08 8B 01 A8=pdb
bool __acrt_stdio_parse_mode_T()=8B FF 55 8B EC 8B 4D 08 BA=pdb
__crt_seh_guarded_call_int_::operator()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 45 0C 8B 00 8B=pdb
__close_nolock()=8B FF 55 8B EC 56 57 8B 7D 08 57=pdb
translate_ansi_or_utf8_nolock()=8B FF 55 8B EC 51 51 53 FF=pdb
__read_nolock()=8B FF 55 8B EC 83 EC 28 53=pdb
_strcpy_s()=8B FF 55 8B EC 8B 55 08 56 85 D2 74 11=pdb
_wcsncmp()=8B FF 55 8B EC 8B 45 10 85 C0 75=pdb
__crt_seh_guarded_call_void_::operator()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 45 0C 8B 00 8B 00 8B 40=pdb
destroy_fls()=8B FF 55 8B EC 83 7D 08 00 74 12=pdb
replace_current_thread_locale_nolock()=8B FF 55 8B EC 56 8B 75 08 83=pdb
___acrt_freeptd()=A1 ? ? ? ? 83 F8 FF 74 21=pdb
___acrt_initialize_ptd()=68 ? ? ? ? E8 ? ? ? ? A3 ? ? ? ? 83=pdb
___acrt_uninitialize_ptd()=A1 ? ? ? ? 83 F8 FF 74 0D=pdb
_wctomb_s()=8B FF 55 8B EC 6A 00 FF 75 14=pdb
fp_format_f()=8B FF 55 8B EC 83 EC 0C 33=pdb
shift_bytes()=8B FF 55 8B EC 8B 55 14=pdb
__get_printf_count_output()=8B ? ? ? ? ? 33 C0 83 C9=pdb
_lambda_b57350f2640456a0859d250846f69caf_::operator()=8B FF 56 8B F1 8B 46 04 8B 00=pdb
___acrt_set_locale_changed()=33 C0 B9 ? ? ? ? 40=pdb
___lc_lctowcs()=8B FF 55 8B EC 56 57 8B 7D 10=pdb
___lc_wcstolc()=8B FF 55 8B EC 51 51 53 56 57 8B 7D 08 33 DB=pdb
_copytlocinfo_nolock()=8B FF 55 8B EC 56 8B 75 0C 85=pdb
__wcscats()=8B FF 55 8B EC 53 33=pdb
_wsetlocale_nolock()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 53 56=pdb
_wsetlocale_set_cat()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 0C=pdb
___acrt_initialize_lowio()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 6A=pdb
___acrt_uninitialize_lowio()=8B FF 56 33 F6 8B=pdb
__ctrandisp2()=55 8B EC 81 ? ? ? ? ? 53 FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 FF=pdb
cintrinexit()=83 ? ? ? ? ? ? 75 4F=pdb
__ctrandisp1()=55 8B EC 81 ? ? ? ? ? 53 FF 75 0C FF 75 08 E8 ? ? ? ? 83 C4 08 9B=pdb
__fload()=55 8B EC 83 C4 F4 53=pdb
__rtnospopde()=E8 ? ? ? ? EB E8=pdb
__rtzeronpop()=DD D8 D9 EE C3=pdb
__rtzerospop()=DD D8 DD D8 D9 EE 84=pdb
__rtonenpop()=DD D8 D9 E8 C3=pdb
__tosnan1()=DB ? ? ? ? ? DB ? ? ? ? ? F6 ? ? ? ? ? ? 74 08=pdb
__nan2()=DB ? ? ? ? ? DB ? ? ? ? ? F6 ? ? ? ? ? ? 74 20=pdb
__rtindfpop()=DD D8 DD D8 DB ? ? ? ? ? 80=pdb
__rttosnpopde()=C6 ? ? ? ? ? ? 0A C9=pdb
__rtatan2inf()=DD D8 DD D8 DB ? ? ? ? ? 0A=pdb
__rtchsifneg()=0A C9 74 02=pdb
fFEXPH()=D9 EA DE C9 33=pdb
ExpHypSum()=E8 ? ? ? ? DE C1=pdb
ExpHypCopyInv()=D9 C0 D9 E8=pdb
class __crt_stdio_stream __acrt_stdio_allocate_stream()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 FF=pdb
void __acrt_stdio_free_stream()=8B FF 55 8B EC 8B 45 08 33 C9 89=pdb
common_lseek_nolock___int64_()=8B FF 55 8B EC 51 51 56 8B 75 08 57=pdb
__acrt_LCMapStringA_stat()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 53=pdb
___acrt_LCMapStringA()=8B FF 55 8B EC 83 EC 10 FF 75 08 8D 4D F0 E8 ? ? ? ? FF 75 28=pdb
try_get_CompareStringEx()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 01 E8=pdb
___acrt_uninitialize_winapi_thunks()=8B FF 55 8B EC 80 7D 08 00 75=pdb
__wmkdir()=8B FF 55 8B EC 6A 00 FF 75 08 FF=pdb
__wrmdir()=8B FF 55 8B EC FF 75 08 FF=pdb
__get_osfhandle()=8B FF 55 8B EC 8B 4D 08 83 F9 FE 75 15=pdb
_wcscpy_s()=8B FF 55 8B EC 8B 55 08 56 85 D2 74 13=pdb
__strnicoll_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 14=pdb
__waccess_s()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08=pdb
_wcscat_s()=8B FF 55 8B EC 53 56 57 8B 7D=pdb
_strcat_s()=8B FF 55 8B EC 56 8B 75 08 57 85=pdb
___acrt_pack_narrow_command_line_and_environment()=8B FF 55 8B EC 51 51 56 8D=pdb
___acrt_initialize_heap()=FF ? ? ? ? ? 85 C0 A3=pdb
common_localtime_s_long_()=8B FF 55 8B EC 83 EC 10 56 8B 75=pdb
__log_default()=8D 54 24 04 E8 ? ? ? ? 52 9B D9 3C 24 74 4C 8B 44 24 0C 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? A9 ? ? ? ? 74 5E A9 ? ? ? ? 75 41 D9 ED=pdb
_mbstowcs_s()=8B FF 55 8B EC 6A 00 FF 75 18=pdb
___acrt_LCMapStringW()=8B FF 55 8B EC 56 8B 75 14 85 F6 7E=pdb
___ascii_strnicmp()=55 8B EC 57 56=pdb
__wcstombs_s_l()=8B FF 55 8B EC 51 56 8B 75 0C 33 C0=pdb
InternalGetLocaleInfoA()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 45=pdb
___acrt_GetLocaleInfoA()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 8B=pdb
__sptype()=8B FF 55 8B EC 81 ? ? ? ? ? ? 8B 45=pdb
__set_statfp()=8B FF 55 8B EC 8B 4D 08 83 EC=pdb
__fpclass()=8B FF 55 8B EC 66 8B=pdb
__CIpow_pentium4()=55 8B EC 83 EC 10 83 E4=pdb
__pow_pentium4()=66 ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 0F 54 F8=pdb
__fFEXP()=C6 ? ? ? ? ? ? 32 ED=pdb
__fFLN()=D9 ED D9 C9 D9 E4=pdb
__rtforexpinf()=0A C9 75 AF=pdb
__ffexpm1()=D9 C0 D9 E1 DB ? ? ? ? ? DE D9 9B ? ? ? ? ? ? 9B F6 ? ? ? ? ? ? 75 95=pdb
_isintTOS()=D9 C0 D9 FC D8 D9 9B=pdb
__startTwoArgErrorHandling()=55 8B EC 83 C4 E0 89 45 E0 8B=pdb
__startOneArgErrorHandling()=55 8B EC 83 C4 E0 89 45 E0 DD=pdb
__twoToTOS()=D9 C0 D9 FC DC=pdb
__load_CW()=8B 54 24 04 81 ? ? ? ? ? 83=pdb
__convertTOStoQNaN()=A9 ? ? ? ? 74 06=pdb
__fload_withFB()=8B 42 04 25 ? ? ? ? 3D=pdb
__checkTOS_withFB()=8B 44 24 08 25 ? ? ? ? 3D ? ? ? ? 74=pdb
__fast_exit()=66 ? ? ? ? ? 74 03 D9 2C=pdb
__math_exit()=66 8B 04 24 66 3D 7F 02 74 1E=pdb
__check_overflow_exit()=83 EC 08 DD 14 24 8B 44 24 04 83 C4 08 25 ? ? ? ? EB=pdb
__check_range_exit()=83 EC 08 DD 14 24 8B 44 24 04 83 C4 08 25 ? ? ? ? 74=pdb
__d_inttype()=8B FF 55 8B EC 51 51 DD 45 08 51=pdb
__powhlp()=8B FF 55 8B EC DD 45 08 B9=pdb
__crt_seh_guarded_call_void_()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B ? ? ? ? ? 8B=pdb
siglookup()=8B FF 55 8B EC 6B ? ? ? ? ? ? 8B=pdb
CPtoLocaleName()=8B FF 55 8B EC 8B 45 08 2D=pdb
getSystemCP()=8B FF 55 8B EC 83 EC 10 8D 4D F0 6A=pdb
setSBCS()=8B FF 55 8B EC 53 8B 5D=pdb
x_ismbbtype_l()=8B FF 55 8B EC 83 EC 10 56 FF=pdb
__ismbblead()=8B FF 55 8B EC 6A 04 6A=pdb
___acrt_initialize_command_line()=FF ? ? ? ? ? A3 ? ? ? ? FF=pdb
find_end_of_double_null_terminated_sequence()=8B FF 55 8B EC 8B 55 08 57=pdb
___acrt_add_locale_ref()=8B FF 55 8B EC 8B 45 08 F0=pdb
___acrt_free_locale()=8B FF 55 8B EC 51 53 56 8B 75 08 57=pdb
___acrt_locale_add_lc_time_reference()=8B FF 55 8B EC 8B 4D 08 85 C9 74 16 81 ? ? ? ? ? 74 0E 33=pdb
___acrt_locale_release_lc_time_reference()=8B FF 55 8B EC 8B 4D 08 85 C9 74 16 81 ? ? ? ? ? 74 0E 83=pdb
___acrt_release_locale_ref()=8B FF 55 8B EC 8B 45 08 85 C0 74 73=pdb
__updatetlocinfoEx_nolock()=8B FF 55 8B EC 56 8B 75 0C 57 85=pdb
___acrt_locale_free_monetary()=8B FF 55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 8B=pdb
___acrt_locale_initialize_monetary()=8B FF 55 8B EC 83 EC 18 53 8B 5D 08 33 C9=pdb
___acrt_locale_free_numeric()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 59=pdb
initialize_lc_time()=8B FF 55 8B EC 83 EC 14 8B=pdb
___acrt_locale_free_time()=8B FF 55 8B EC 56 8B 75 08 85 F6 0F ? ? ? ? ? 6A=pdb
GetLocaleNameFromDefault()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08 8D=pdb
GetPrimaryLen()=8B FF 55 8B EC 8B 4D 08 33 D2 85=pdb
LangCountryEnumProcEx()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 57 8B 7D 08 E8 ? ? ? ? 8B F0 8D ? ? ? ? ? 6A 40=pdb
LanguageEnumProcEx()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 57 8B 7D 08 E8 ? ? ? ? 8B F0 8D ? ? ? ? ? 6A 78=pdb
TranslateName()=8B FF 55 8B EC 51 56 8B 75 0C 33 D2=pdb
GetLcidFromCountry()=8B FF 55 8B EC 56 57 E8 ? ? ? ? 8B D0=pdb
GetLcidFromLangCountry()=8B FF 55 8B EC 53 56 57 E8 ? ? ? ? 8B F0 33 DB 6A 02 5A 8B 4E 50 8D 79 02 66 8B 01 03 CA 66 3B C3 75 F6 2B CF 33 C0 D1 F9 83 F9 03 8B=pdb
GetLcidFromLanguage()=8B FF 55 8B EC 53 56 57 E8 ? ? ? ? 8B F0 33 DB 6A 02 5A 8B 4E 50 8D 79 02 66 8B 01 03 CA 66 3B C3 75 F6 2B CF 33 C0 D1 F9 83 F9 03 0F=pdb
GetPrimaryLen_0()=8B FF 55 8B EC 8B 4D 08 33 D2 0F=pdb
LcidFromHexString()=8B FF 55 8B EC 8B 55 08 56 33=pdb
TestDefaultLanguage()=8B FF 55 8B EC 51 56 57 E8 ? ? ? ? 8B 75=pdb
___acrt_get_qualified_locale_downlevel()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 8B 45=pdb
__87except()=8B FF 53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B=pdb
start_2()=52 9B D9 3C 24 74 49 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? D9 FE=pdb
start_4()=52 9B D9 3C 24 74 4D=pdb
start_1()=52 9B D9 3C 24 74 49 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? D9 FF=pdb
create_file()=8B FF 55 8B EC 8B 45 20 0B=pdb
decode_options()=8B FF 55 8B EC 51 53 8B 5D 0C=pdb
__sopen_s()=8B FF 55 8B EC 6A 01 FF 75 08 FF=pdb
__wsopen_nolock()=8B FF 55 8B EC 83 EC 44=pdb
___acrt_DownlevelLCIDToLocaleName()=8B FF 55 8B EC 8B 4D 08 53=pdb
___acrt_DownlevelLocaleNameToLCID()=8B FF 55 8B EC 83 7D 08 00 74 1D=pdb
InternalCompareStringA()=8B FF 55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53 56=pdb
___acrt_CompareStringA()=8B FF 55 8B EC 83 EC 10 FF 75 08 8D 4D F0 E8 ? ? ? ? FF 75 24=pdb
initialize_multibyte()=E8 ? ? ? ? 33 C9 84 C0 0F 94 C1 8B=pdb
__dcrt_lowio_initialize_console_output()=33 C0 50 50 6A 03=pdb
___dcrt_terminate_console_output()=A1 ? ? ? ? 83 F8 FF 74 0C 83=pdb
_fegetenv()=8B FF 55 8B EC 56 E8 ? ? ? ? 8B 75=pdb
start_8()=52 9B D9 3C 24 74 4C 8B 44 24 0C 66 ? ? ? ? ? 74 06 D9 ? ? ? ? ? A9 ? ? ? ? 74 5E A9 ? ? ? ? 75 41 D9 EC=pdb
__FindPESection()=55 8B EC 8B 45 08 33 D2 53=pdb
__alldvrm()=57 56 55=pdb
_dynamic_atexit_destructor_for__g_AsyncWaveDataCache__()=B9 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 83=pdb
_dynamic_atexit_destructor_for__g_SoundMessages__()=B9 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 8B ? ? ? ? ? C7=pdb
_dynamic_atexit_destructor_for__s_DispDecalFragments__()=55 8B EC 51 66 ? ? ? ? ? ? 57=pdb
_dynamic_atexit_destructor_for__CWorldRenderList::g_Pool__()=56 B9 ? ? ? ? E8 ? ? ? ? 85 C0 74 26=pdb
_dynamic_atexit_destructor_for__g_Log__()=B9 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? C7=pdb
_dynamic_atexit_destructor_for__g_SteamSocketMgr__()=B9 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? F6=pdb
_dynamic_atexit_destructor_for__s_VProfListeners__()=57 8B ? ? ? ? ? 83 EF 01 78 2D=pdb
CryptoPP::_dynamic_initializer_for__DEFAULT_CHANNEL__()=B9 ? ? ? ? E8 ? ? ? ? 6A 00 68 ? ? ? ? B9 ? ? ? ? C7=lumina
CryptoPP::_dynamic_initializer_for__AAD_CHANNEL___2()=B9 ? ? ? ? E8 ? ? ? ? 6A 03=lumina
Poco::URIRedirection::~URIRedirection()=56 8B F1 8B 46 14 83 F8 10 72 0E 6A 01 40 50 FF 36 E8 ? ? ? ? 83 C4 0C C7 ? ? ? ? ? ? 83 7E 14 10 C7 ? ? ? ? ? ? 72 07=lumina
CEngineSoundClient::SetRoomType()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 11=lumina=CEngineSoundClient=10
CEngineSoundServices::OnSoundStopped()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 8B 40 48 FF D0 84 C0 0F ? ? ? ? ? 56=lumina=INetMessage=206
vgui::TreeNode::~TreeNode()=55 8B EC 51 A1 ? ? ? ? 56 85=lumina
DAS_DisplayRoomDEBUG()=55 8B EC 83 EC 34 53 56 8B F1=lumina
S_DumpFilePaths()=55 8B EC 8B 4D 08 83 39 02 74 0E=lumina
ENV_Alloc()=55 8B EC 83 EC 08 88=lumina
AMP_Alloc()=55 8B EC 83 EC 10 53 8A D9 F3 ? ? ? ? F3=lumina
_AllocDsps()=51 A1 ? ? ? ? BA=lumina
_CheckNewDspPresets()=55 8B EC A1 ? ? ? ? 83 EC 1C=lumina
snd_print_dsp_effect()=55 8B EC 8B 45 08 83 38 02 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? FF ? ? ? ? ? E8 ? ? ? ? 83=lumina
MXR_SetMixLayerTriggerFactor()=55 8B EC 8B 45 08 83 38 04 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 56 8B ? ? ? ? ? 57 FF ? ? ? ? ? 8B ? ? ? ? ? E8 ? ? ? ? 83=lumina
MXR_ParseLayerTriggers()=53 57 8B F9 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 8B=lumina
CAsyncWaveData::SetAsyncPriority()=55 8B EC 83 EC 08 56 8B F1 83 7E 28=lumina
CAudioSourceWave::ParseChunk()=55 8B EC 8B 45 0C 83 EC 54=lumina
CAudioSourceMemWave::ParseDataChunk()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 8B F1 57 8B=lumina
CBaseClient::GetNumPlayers()=53 8B D9 33 C0 56 57 BF=lumina
CSosOperator::StackShutdown()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 74=lumina=CSosOperator=8
CSosOperatorFunc1::Print()=55 8B EC 56 8B 75 14 57 8B 7D 08 56 FF 75 10 FF 75 0C 57 E8 ? ? ? ? 8B=lumina=CSosOperatorFunc1=4
CSosOperatorFloatAccumulate12::Execute()=55 8B EC 56 8B 75 08 0F 57 C0 8B=lumina=CSosOperatorFloatAccumulate12=3
CSosOperatorMixGroup::Print()=55 8B EC 56 FF 75 14 8B 75 08 FF 75 10 FF 75 0C 56 E8 ? ? ? ? 6A=lumina=CSosOperatorMixGroup=4
CSosOperatorMixLayer::Execute()=55 8B EC 8B 55 08 8B 4A 1C=lumina=CSosOperatorMixLayer=3
CSosOperatorStack::ExecuteIterator()=55 8B EC 83 EC 08 53 56 8B F1 8B ? ? ? ? ? 57 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 8B=lumina
CSosOperatorStack::Print()=55 8B EC 56 8B F1 E8 ? ? ? ? 84=lumina
CSosOperatorStack::GetSyncPointsKV()=55 8B EC 8B 4D 08 85 C9 75 54=lumina
S_GetTrackData()=51 56 8B F2 57=lumina
CSosOperatorStackList::Print()=53 56 57 8B ? ? ? ? ? 8B D9 6A=lumina
CSosOperatorSystem::SetOpVarFloat()=55 8B EC 83 EC 0C 53 56 57 8B 7D 08 0F=lumina
CVoiceWriter::Flush()=0F ? ? ? ? ? ? 53 56 BE=lumina
CVoiceWriter::Finish()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? 8B 40=lumina
CVoiceWriter::AddDecompressedData()=55 8B EC A1 ? ? ? ? 83 EC 3C=lumina
Voice_AddIncomingData()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 89 55=lumina
CUtlRBTree::Insert()=55 8B EC 83 EC 08 56 8D=lumina
CUtlRBTree::Find()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 56 0F B7 F0 66 3B C1 74 61 A1 ? ? ? ? 53 8B 5D 08 57 0F B7 FE 83 C0 08 C1 E7 06=lumina
CUtlRBTree::NextInorder()=55 8B EC 8B 4D 08 56 8B ? ? ? ? ? 57 BF ? ? ? ? 66 3B CF 74 36=lumina
WriteWaveFile()=55 8B EC 83 EC 0C 53 68=lumina
CL_NameCvarChanged()=55 8B EC 83 E4 F8 51 56 8B 75 08 6A=lumina
askconnect_accept_f()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? 84 C0 74=lumina
CBaseClientState::ResendGameDetailsRequest()=55 8B EC 83 E4 F8 83 EC 44 56=lumina=CBaseClientState=54
CBaseClientState::SVCMsg_SendTable()=55 8B EC 53 56 57 8B 7D 08 8B CF=lumina
string_operation()=55 8B EC 53 8B 5D 08 56 8B F1 8B 4D 0C 57 8B 43 10 3B C1 0F ? ? ? ? ? 8B 7D=lumina
buildcubemaps()=55 8B EC 83 E4 F8 51 8B ? ? ? ? ? 53=lumina
CreateAndCompileQCFile()=55 8B EC 81 ? ? ? ? ? B8 ? ? ? ? 80=lumina
WriteSMD()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? 8B 10=lumina
CVEngineServer::GetClientXUID()=55 8B EC 8B 4D 08 56 57 E8=lumina=CEngineClient=3
Map_VisCurrentCluster()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 85=lumina=CEngineClient=33
ShowAskConnectPanel()=A1 ? ? ? ? 56 8B 70 54=lumina=CEngineClient=153
CDmxAttribute::SetValue()=55 8B EC 53 56 57 E8 ? ? ? ? 8B 75=lumina=CEngineClient=76
S_SetMixLayerTriggerFactor()=55 8B EC 69 ? ? ? ? ? ? 8B 4D=lumina=CEngineClient=163
CBroadcastPlayer::ReadCmdHeader()=55 8B EC 56 8B F1 8B 4E 18 85=lumina
record()=55 8B EC 56 57 8B 7D 08 8B 37 83 FE 02=lumina
_record()=55 8B EC 83 ? ? ? ? ? ? 75 0E=lumina
CL_TimeDemo_VProfRecord_f()=55 8B EC 8B 4D 08 83 39 03=lumina
vtune()=55 8B EC 8B 45 08 83 38 02 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 56 8B=lumina
CBaseDemoAction::Init()=55 8B EC 83 E4 F8 51 53 8B 5D 08 56 57 68=lumina
CDemoActionScreenFadeStart::Init()=55 8B EC 83 EC 20 53 8B 5D 08 57=lumina=CDemoActionScreenFadeStart=1
CDemoActionTextMessageStart::Init()=55 8B EC 83 E4 F8 51 53 8B 5D 08 56 57 53=lumina=CDemoActionTextMessageStart=1
CDemoActionCDTrackStart::SaveKeysToBuffer()=55 8B EC 56 FF 75 0C 8B F1 FF 75 08 E8 ? ? ? ? FF=lumina=CDemoActionCDTrackStart=5
CDemoActionZoom::SaveKeysToBuffer()=55 8B EC 83 E4 C0 83 EC 34 53 8B 5D 0C=lumina=CDemoActionZoom=5
CBaseActionScreenFadeStartDialog::Init()=55 8B EC 83 E4 C0 83 EC 34 53 56 57 8B F1=lumina=CBaseActionScreenFadeStartDialog=279
CBaseActionTextMessageStartDialog::Init()=55 8B EC 83 E4 C0 83 EC 34 53 56 57 8B F9 6A=lumina=CBaseActionTextMessageStartDialog=279
CBaseActionTextMessageStartDialog::FillInFonts()=55 8B EC 83 EC 08 8B C1 53 56 57 8B=lumina
CBaseActionCDTrackStartDialog::Init()=56 57 8B F9 6A 00 6A 00 6A 00 8B 07 68 ? ? ? ? FF ? ? ? ? ? 8B CF E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 8B=lumina=CBaseActionCDTrackStartDialog=279
CDemoEditorPanel::CreateNewAction()=55 8B EC 53 8B D9 56 8B ? ? ? ? ? 83=lumina
CDemoSmootherPanel::OnTick()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 8B F1 57 83=lumina=CDemoSmootherPanel=27
CDemoSmootherPanel::OnCommand()=55 8B EC 83 E4 F8 81 ? ? ? ? ? BA=lumina=CDemoSmootherPanel=96
CFogUIPanel::OnCommand()=55 8B EC 56 8B 75 08 BA ? ? ? ? 57 8B F9 8B CE E8 ? ? ? ? 85 C0 75=lumina=CFogUIPanel=96
CFogUIPanel::OnMessage()=55 8B EC 53 8B 5D 0C 56 8B 75 08 57 53=lumina=CFogUIPanel=15
CL_RegisterResources()=51 8B ? ? ? ? ? 6A 01 8D=lumina
endmovie()=80 ? ? ? ? ? ? 75 0F 68=lumina
CL_GetBackgroundLevelName()=55 8B EC 83 EC 18 53 56 57 8B F9 8D=lumina
CPluginGameUIDialog::Show()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 6A=lumina=CPluginGameUIDialog=279
CPluginHudMessage::ApplySchemeSettings()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 6A=lumina=CPluginHudMessage=88
CPluginUIManager::OnTick()=56 57 8B F9 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=lumina
CPluginHudMessage::ShowMessage()=55 8B EC 83 EC 14 53 8B D9 56 57 6A 01=lumina
Sys_UnloadModule()=55 8B EC 51 53 8B ? ? ? ? ? 8B CB 56=lumina
CPluginUIManager::Show()=55 8B EC 83 EC 0C 53 8B ? ? ? ? ? 56 8B 75 08=lumina
CSteam3Client::OnClientGameServerDeny()=55 8B EC 8B ? ? ? ? ? 85 C9 74 07=lumina
CSteam3Client::OnGameServerChangeRequested()=55 8B EC 8B ? ? ? ? ? 85 C9 74 05=lumina
vgui::TileViewPanelEx::ApplySchemeSettings()=55 8B EC 51 53 8B 5D 08 56 57 8B F9 53=lumina=CRenderTexturesListViewPanel=88
CRenderTextureEditor::~CRenderTextureEditor()=56 8B F1 6A 00 6A 00 C7=lumina
CRenderTextureEditor::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 89 5D FC E8 ? ? ? ? 8B 1B=lumina=CRenderTextureEditor=88
CheckSimpleMaterial()=56 8B F1 85 F6 75 04=lumina
CColorLookupUIPanel::OnCommand()=55 8B EC 53 8B 5D 08 BA=lumina=CColorLookupUIPanel=96
CColorOperationListPanel::~CColorOperationListPanel()=56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=lumina
PrintColorCorrection()=55 8B EC 83 E4 C0 8B ? ? ? ? ? 83 EC=lumina
Con_DebugLog()=55 8B EC 83 EC 24 8D 45 DC 50=lumina
Con_LogLevelCallback()=55 8B EC 56 8B 75 0C BA=lumina
Con_LogColorCallback()=55 8B EC 51 56 51=lumina
Con_LogFlagsCallback()=55 8B EC 53 8B 5D 0C 8A=lumina
Con_Init()=53 56 8B ? ? ? ? ? FF D6 68=lumina
Draw_DecalMaterial()=F7 ? ? ? ? ? 74 1D=lumina
CDemoFile::WriteCmdHeader()=55 8B EC 83 EC 28 53 57=lumina
CDemoFile::WriteCustomData()=55 8B EC 51 57 8B F9 8D 4D FF 68 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74 45=lumina
CDemoFile::ReadDemoHeader()=55 8B EC 53 56 8B F1 68=lumina
CDemoStreamHttp::SendSync()=55 8B EC 8B 01 85=lumina
CDevShotGenerator::BuildMapList()=55 8B EC 51 56 57 8B F9 80=lumina
mat_edit()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 8B ? ? ? ? ? FF=lumina
R_CheckForLightingConfigChanges()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 8B 01 8B=lumina
r_cleardecals()=55 8B EC 56 8B ? ? ? ? ? 85 F6 74 3A=lumina
vgui::Slider::DrawTickLabels()=F3 0F 10 01 F3 ? ? ? ? ? ? ? 0F 2E C2=lumina
Shader_Connect()=55 8B EC 51 83 ? ? ? ? ? ? 88=lumina
CModelRender::DrawModelShadowSetup()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 14 53=lumina=CModelRender=13
CModelRender::FindOrCreateStaticPropColorData()=55 8B EC 66 8B 45 08 81=lumina
CModelRender::ChangeInstance()=55 8B EC 53 8B 5D 08 B8 ? ? ? ? 56 66=lumina=CModelRender=8
CPooledVBAllocator_ColorMesh::Deallocate()=55 8B EC 56 8B F1 83 7E 04 00 75=lumina=CPooledVBAllocator_ColorMesh=7
CMapLoadHelper::CMapLoadHelper()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 85=lumina
Mod_LoadSimpleWorldModel()=55 8B EC 81 ? ? ? ? ? 56 8B F1 68=lumina
Mod_LoadGameLumpDict()=55 8B EC 81 ? ? ? ? ? 53 56 57 51 6A 23=lumina
BuildSpriteLoadName()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F2=lumina
Mod_MarkWaterSurfaces()=55 8B EC 83 EC 10 56 8B F2=lumina
CModelLoader::SetupSubModels()=55 8B EC 83 EC 0C 53 56 8B F1 57 8D=lumina
CModelLoader::Sprite_LoadModel()=55 8B EC 51 8B 45 14 53 56=lumina
CModelLoader::Client_OnServerModelStateChanged()=55 8B EC 83 ? ? ? ? ? ? 53 8B D9 7D=lumina=CModelLoader=39
_TextMessageGet()=53 BA ? ? ? ? 8B D9 E8 ? ? ? ? 85 C0 75=lumina
CheckConnectionLessRateLimits()=55 8B EC 83 E4 F8 83 EC 40 53=lumina
logaddress_add_ts()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 8B C1=lumina
SV_CheatsChanged_f()=55 8B EC 83 E4 F8 8B 45 08 85 C0 56=lumina
CGameServer::InitMaxClients()=55 8B EC 83 EC 14 53 56 57 8B F9 B8 ? ? ? ? 8B=lumina
sv_ShutDown()=8A ? ? ? ? ? 8B ? ? ? ? ? 84 D2=lumina
CGameServer::BroadcastSound()=55 8B EC 51 53 56 8B 75 0C 8B D9 8B=lumina
CGameServer::SetMaxClients()=55 8B EC 56 8B F1 8B 4D 08 8B ? ? ? ? ? 3B=lumina=CGameServer=40
GetObjectClassName()=85 C9 78 25=lumina
Host_Stats_f()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 51 50=lumina
CServerRemoteAccess::LogCommand()=55 8B EC A1 ? ? ? ? 53 8B D9 B9 ? ? ? ? FF=lumina
CServerRemoteAccess::LookupStringValue()=55 8B EC 8B ? ? ? ? ? 56 8B 75 08 56=lumina
CServerRemoteAccess::GetStatsString()=55 8B EC 83 E4 C0 83 EC 38 56 57 8D 44=lumina
CSteam3Server::OnLogonFailure()=55 8B EC 56 8B F1 83 7E 04 00 0F=lumina
CSteam3Server::OnLoggedOff()=55 8B EC 53 8B 5D 08 56 8B ? ? ? ? ? 57 8B F9=lumina
CSteam3Server::OnValidateAuthTicketResponseHelper()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D9=lumina
CVEngineServer::ChangeLevel()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 3B=lumina=CCallbackImpl<8>=1682
CVEngineServer::GetPVSForCluster()=55 8B EC 8B 4D 10 56=lumina=CCallbackImpl<8>=1695
CVEngineServer::SentenceGroupPick()=55 8B EC 83 7D 0C 00 75 0D 68 ? ? ? ? E8 ? ? ? ? 83 C4 04 FF 75 10=lumina=CCallbackImpl<8>=1713
CVEngineServer::SentenceGroupPickSequential()=55 8B EC 83 7D 0C 00 75 0D 68 ? ? ? ? E8 ? ? ? ? 83 C4 04 FF 75 18=lumina=CCallbackImpl<8>=1714
CVEngineServer::SentenceGroupIndexFromName()=55 8B EC 83 7D 08 00 75 0D=lumina=CCallbackImpl<8>=1717
CVEngineServer::MessageEnd()=80 ? ? ? ? ? ? 75 0E 68 ? ? ? ? E8=lumina=CCallbackImpl<8>=1727
CVEngineServer::ClientPrintf()=55 8B EC 8B 4D 08 2B ? ? ? ? ? C1 F9 04 83 F9 01 7C 2D=lumina=CCallbackImpl<8>=1729
SvPasswordChangeCallback()=55 8B EC 83 E4 F8 8B 45 08 85 C0 8B=lumina
CBaseServer::CheckProtocol()=55 8B EC 8B 55 0C 56 8B ? ? ? ? ? 3B=lumina=CGameServer=60
CBaseServer::CheckMasterServerRequestRestart()=56 FF ? ? ? ? ? 68 ? ? ? ? 8B=lumina
CBaseServer::BroadcastMessage()=55 8B EC 51 53 8B 5D 0C 56 8B F1 8B=lumina
sv_showtags()=56 8B ? ? ? ? ? 68 ? ? ? ? FF D6 83 ? ? ? ? ? ? B8=lumina
CBugUIPanel::TakeSnapshot()=A1 ? ? ? ? 53 56 8B F1 57 51=lumina
CBugUIPanel::OnSaveGame()=56 57 8B F9 51 8D ? ? ? ? ? 56=lumina
CBugUIPanel::WipeData()=56 8B F1 68 ? ? ? ? 8B ? ? ? ? ? 66=lumina
CBugUIPanel::UploadFile()=55 8B EC 51 53 56 FF=lumina
CBugUIPanel::SuccessSound()=55 8B EC 51 8B ? ? ? ? ? C7 ? ? ? ? ? ? 85=lumina
_bugreporter_restart()=55 8B EC 56 57 8B 7D 08 8B 37 83 FE 01 7F=lumina
CEngineBugReporter::Shutdown()=56 8B ? ? ? ? ? 85 F6 74 3E=lumina=CBugReportFinishedDialog=281
BindToggle()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8B 06 83 F8 02 7F=lumina
Cmd_ExecuteCommand()=56 52 8B F1 E8 ? ? ? ? 83=lumina
CM_Vis()=55 8B EC 56 8B F1 57 8B FA 85 F6 74=lumina
COM_CheckGameDirectory()=55 8B EC 81 ? ? ? ? ? 56 8B F1 85 F6 0F ? ? ? ? ? 80 3E 00 0F ? ? ? ? ? 68=lumina
DownloadCache::Init()=55 8B EC 51 56 57 8B ? ? ? ? ? 8B 37=lumina
SendTable_GetPropsExcluded()=55 8B EC 83 EC 0C 53 33 DB 89=lumina
SetRecursiveProxyIndices_R()=55 8B EC 51 53 8B 5D 08 56 57 8B FA=lumina
String_Decode()=55 8B EC 53 56 57 8B 7D 08 8B 77=lumina
CEntityListAlongRay::EnumElement()=55 8B EC 8B 51 04 81=lumina=CEntityListAlongRay=0
CEngineTraceClient::GetDebugName()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 56 8B 75 08 56 8B 40 30 FF D0 84 C0 74 0A B8 ? ? ? ? 5E 5D C2 04 00 85 F6 75=lumina=CEngineTraceClient=32
OcclusionStats_t::Dump()=55 8B EC 83 E4 C0 83 EC 34 80 7D=lumina
LoadGameInfoFile()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B F2=lumina
CC_TransmitEvents()=55 8B EC 56 8B 75 08 8B 46 04 85=lumina
CHLTVBroadcast::RecordServerClasses()=55 8B EC 83 EC 20 53 8B 59=lumina
CHLTVClientState::Disconnect()=55 8B EC 83 E4 F8 FF 75 08=lumina=CHLTVClientState=48
CHLTVDemoRecorder::StopRecording()=57 8B F9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 07 56=lumina
CHLTVServer::FireGameEvent()=55 8B EC 83 EC 4C 57=lumina=CHLTVServer=1
CActiveHltvServerSelector::CActiveHltvServerSelector()=55 8B EC 51 56 57 8B F1 8B=lumina
Snd_Restart_Cmd()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 75 0F 68=lumina
MemTest()=A1 ? ? ? ? B9 ? ? ? ? 53 FF 50 34=lumina
GetFileFromRemoteStorage()=55 8B EC 83 EC 08 53 56 57 8B F9 32=lumina
CHostSubscribeForProfileEvents::OnEvent()=55 8B EC 57 8B 7D 08 85 FF 74 1F=lumina=CHostSubscribeForProfileEvents=0
host_writeconfig()=55 8B EC 83 E4 F8 8B 4D 08 83 EC 60=lumina
host_writeconfig_ss()=55 8B EC 83 E4 F8 83 EC 64 56 8B=lumina
host_reset_config()=55 8B EC 8B 4D 08 8B 01 83 F8 01 7E 17=lumina
Host_RecomputeSpeed_f()=68 ? ? ? ? FF ? ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 51=lumina
Host_ShouldRun()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 75 03 B0=lumina
host_runofftime()=55 8B EC 83 E4 C0 8B 45=lumina
CanShowHostTvStatus()=8B ? ? ? ? ? 85 C9 75 03 B0=lumina
GetSteamUniverse()=8B ? ? ? ? ? 85 C9 74 05 8B 01 FF 60 08 8B=lumina
Host_Status_PrintClient()=55 8B EC 83 EC 08 53 56 8B F1 88=lumina
stringtabledictionary()=83 ? ? ? ? ? ? 7D 0F 68=lumina
quit()=55 8B EC 8B 4D 08 8B 01 83 F8 01 7E 47=lumina
Host_Maps_f()=55 8B EC 8B 4D 08 56 33=lumina
CPhoneHome::IsExternalBuild()=56 57 8B ? ? ? ? ? 8B F1 FF D7 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 74=lumina=CFunctorJob=2675
CSaveRestore::GetSaveDir()=55 8B EC 83 EC 08 80 ? ? ? ? ? ? 75 56=lumina=CSaveRestore=6
CSaveRestore::DirectoryCopy()=55 8B EC 51 A1 ? ? ? ? B9 ? ? ? ? 56=lumina
SetLoadLaunchOptions()=56 8B ? ? ? ? ? 85 F6 74 15=lumina
CSaveRestore::Init()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 C7=lumina=CSaveRestore=0
CFocusOverlayPanel::DrawTitleSafeOverlay()=55 8B EC 51 A1 ? ? ? ? 56 8B ? ? ? ? ? 6A 18 8B 08 8B 01 FF 50 04 8B C8=lumina
CHostState::State_LoadGame()=56 8B F1 8B ? ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 48 8B=lumina
key_findbinding()=55 8B EC 53 8B 5D 08 83 3B=lumina
CMsg_CVars::Clear()=55 8B EC 56 8B 75 08 8B 06 3D=lumina
MapReslistGenerator_Init()=55 8B EC 51 53 56 8B ? ? ? ? ? 57 FF=lumina
CMapReslistGenerator::BuildMapList()=55 8B EC 51 57 8B F9 80 7F 01=lumina
CNetchanParanoidMode::MessageItem_t::Dump()=53 56 8B F1 57 8B ? ? ? ? ? 83 3E=lumina
CThreadedSocketQueue::CSocketThread::CSocketThread()=55 8B EC 8B 45 08 56 8B F1 57 89=lumina
CSteamSocketMgr::CreateConnection()=55 8B EC 83 EC 1C 53 8B D9 56 57 89=lumina
NET_TerminateSteamConnection()=55 8B EC 51 53 56 8B 75 08 8B D9 57 8B 7D 0C 8B C6=lumina
CNetSupportImpl::Connect()=55 8B EC 8B 45 08 8D 4D=lumina=CNetSupportImpl=0
CNetSupportImpl::UpdateServerReservation()=55 8B EC 83 E4 F8 68=lumina=CNetSupportImpl=12
CryptoPP::Algorithm::AlgorithmName()=55 8B EC 56 8B 75 08 8B CE 6A 07=lumina=CryptoPP::ByteQueue::Walker=2
virtual bool physx::PxBase::isKindOf()=55 8B EC 8B 45 08 B9 ? ? ? ? 0F=lumina=CryptoPP::OAEP<class CryptoPP::SHA1,class CryptoPP::P1363_MGF1>=1
CUiComponent_Inventory::UiComponentFunction_SetCraftTarget()=55 8B EC 83 EC 0C 56 FF 75=lumina
CNetworkStringTableDictionaryManager::WriteDictionaryToBSP()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? FF 75 08 68 ? ? ? ? 68 ? ? ? ? 50 E8 ? ? ? ? 8B=lumina
ED_Free()=57 8B F9 8B ? ? ? ? ? 85 C9 75 12=lumina
CPureServerWhitelist::~CPureServerWhitelist()=53 56 57 8B F9 8D 4F 08 E8=lumina
CSaveRestoreFileSystemPassthrough::AsyncWrite()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 14=lumina=CSaveRestoreFileSystem=86
CSaveRestoreFileSystemPassthrough::DirectoryExtract()=55 8B EC 83 EC 0C A1 ? ? ? ? 89 4D=lumina
GClientState::SVCMsg_VoiceData()=55 8B EC 83 E4 F8 A1 ? ? ? ? 81 ? ? ? ? ? 53 56 8B F1 B9 ? ? ? ? 57 FF 50 34 8B=lumina
CClientState::SVCMsg_BSPDecal()=55 8B EC 83 EC 0C 56 8B 75 08 57 83=lumina=CClientState=28
CClientState::SVCMsg_GameEvent()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 56 57 8B=lumina=CClientState=34
std::less<std::pair<std::string,int>>::operator()=55 8B EC 53 8B D9 56 57 8D 4B=lumina=CSpatialPartition=32
Status_Update()=55 8B EC 83 EC 7C 83 65=lumina
__vfscanf_l()=55 8B EC 83 E4 F8 FF 75 0C 6A 00 52 51=lumina
_printf()=55 8B EC 51 8D 45 0C=lumina
Sys_InitMemory()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 FF=lumina
DeveloperChangeCallback()=55 8B EC 8B 45 08 B9 ? ? ? ? 85 C0 53=lumina
UnloadEntityDLLs()=A1 ? ? ? ? 85 C0 74 39=lumina
CEngineAPI::HandleSetModeError()=56 8B ? ? ? ? ? FF D6 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 74=lumina
Sys_Version()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 6A=lumina
CModAppSystemGroup::Main()=80 79 64=lumina=CModAppSystemGroup=3
CVideoMode_Common::TakeSnapshotTGA()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 8B 03 FF=lumina
CVideoMode_Common::WriteMovieFrame()=55 8B EC 83 E4 F8 83 EC 0C 80 ? ? ? ? ? ? 8B 45=lumina=CVideoMode_MaterialSystem=23
CVideoMode_Common::TakeSnapshotJPEG()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 83 ? ? ? ? 53=lumina
Test_WaitForCheckPoint()=55 8B EC 51 FF ? ? ? ? ? 68=lumina
Test_LoopCount()=55 8B EC FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 75 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 8B 4D 08 8B 01 83 F8 03=lumina
CTestScriptMgr::StartTestScript()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 6A 00=lumina
CTestScriptMgr::CheckPoint()=55 8B EC 83 EC 10 53 56 8B F1 57 83=lumina
CTestScriptMgr::SetWaitCheckPoint()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? 81=lumina
CAskConnectPanel::OnTick()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B F9 F2=lumina=CAskConnectPanel=27
vprof_vtune_group()=55 8B EC 8B 45 08 83 38 02 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 57=lumina
vprof_reset_Impl()=56 68 ? ? ? ? FF ? ? ? ? ? 8B ? ? ? ? ? 83 C4 04 FF=lumina
vprof_record_start()=55 8B EC 8B 45 08 83 38 02 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? FF ? ? ? ? ? E8 ? ? ? ? 5D=lumina
vprof_playback_average()=55 8B EC 8B 4D 08 8B 01 83 F8 02 7C 2C=lumina
CXboxSystem::GameHasSavegames()=80 ? ? ? ? ? ? 75 4A 8B ? ? ? ? ? BA=lumina=CXboxSystem=4
CXboxSystem::GetArcadeRemainingTrialTime()=55 8B EC 83 EC 10 51=lumina=CXboxSystem=43
compress_block()=55 8B EC 83 EC 14 53 56 8B F1 89 55 F8=lumina
send_bits()=55 8B EC 51 53 8B 5D 08 57 89=lumina
copy_block()=55 8B EC 51 53 56 57 89 55=lumina
lm_init()=55 8B EC 56 57 8B FA 8B F1 8D 47 FF 83=lumina
CUserCmd::GetChecksum()=55 8B EC 51 56 8B 75 08 8D 45=lumina
CAudioSourceMP3::IsAsyncLoad()=55 8B EC A1 ? ? ? ? 85 C0 74 17=lumina=CEngineTool=19
CEngineTool::StartMovieRecording()=55 8B EC 83 E4 F8 83 EC 0C 80 ? ? ? ? ? ? 8B C1=lumina=CEngineTool=67
CToolFrameworkInternal::LoadFilmmaker()=56 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B C8 E8 ? ? ? ? 85 C0 74=lumina=CEngineTool=376
CToolFrameworkInternal::UnloadFilmmaker()=56 8B F1 E8 ? ? ? ? BA ? ? ? ? 8B C8 E8 ? ? ? ? 85 C0 75=lumina=CEngineTool=377
Tool_Unload_f()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? 8B ? ? ? ? ? FF D0 84 C0 0F ? ? ? ? ? 56=lumina
Tool_Load_f()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? 8B ? ? ? ? ? FF D0 84 C0 0F ? ? ? ? ? 8B=lumina
VGui_DrawHierarchy()=8B ? ? ? ? ? 56 81 ? ? ? ? ? 75 0C=lumina
CVProfGraphPanel::CVProfGraphPanel()=55 8B EC 51 53 56 57 68 ? ? ? ? 8B=lumina
CNetworkStringTable::GetStringUserData()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? C7=lumina
vprof_expand_group()=55 8B EC 68 ? ? ? ? FF ? ? ? ? ? 8B 4D 08 83 C4 04 8B=lumina
ChangeVProfScopeCallback()=55 8B EC 8B 45 08 B9 ? ? ? ? 85 C0 56 0F 45 C8 FF=lumina
CAppSystemGroup::AddSystem()=55 8B EC 83 EC 0C 53 8B 5D 08 56 57 8B=lumina
CDmxSerializerKeyValues2::UnserializeElement()=55 8B EC 83 EC 34 83 65 F8=lumina
_jpeg_suppress_tables()=8B 41 58 85 C0 74 07=lumina
CProceduralTexturePanel::Init()=55 8B EC 8B 55 0C 81 ? ? ? ? ? 80=lumina=CLookupViewPanel=236
int Scaleform::SFstrcmp()=8A 01 3A 02 75 19=lumina
V_snprintf()=55 8B EC 51 56 8B 75 0C 8D 45 14 57 8B 7D 08 8B D6 50 51 FF 75 10 8B CF E8 ? ? ? ? 83 C4 0C 85 C0 78 08 85 F6 7E 0C=lumina
_swprintf_s()=55 8B EC 83 E4 F8 8D 45 14=lumina
CUtlBuffer::Put()=55 8B EC 56 57 8B 7D 0C 8B F1 85 FF 74=lumina
C_SDK::Hash::CRC32::ProcessBuffer()=55 8B EC 53 8B D9 56 57 8B 7D 08 8B F2 8B 03=lumina
KeyValuesJSONParser::ParseFile()=56 57 8B F9 8B ? ? ? ? ? 83 F8 FF 75=lumina
KeyValuesJSONParser::ParseObject()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 8B=lumina
Unserialize()=56 8B F1 57 8B FA 80=lumina
CExpressionEvaluator::MakeExpression()=55 8B EC 8A 55 0C 81=lumina
InFileRIFF::InFileRIFF()=55 8B EC 51 56 FF 75 08 8B F1 B9=lumina
CSocketCreator::ConfigureSocket()=55 8B EC 51 57 8B 7D 08 8D=lumina
CKeyBindingsMgr::AddPanelToContext()=55 8B EC 56 8B 75 0C 8B CE 8B=lumina
vgui::Panel::Init()=53 56 57 8B D9 6A=lumina
CColorOperationListPanel::OnReadFileFromDisk()=55 8B EC 83 EC 10 56 8B 75 08 57 56 E8=lumina=CBaseActionZoomDialog=117
vgui::Panel::OnKeyCodePressed()=55 8B EC 56 8B F1 8B ? ? ? ? ? 6A=lumina
vgui::Panel::AddPropertyConverter()=55 8B EC 83 EC 10 56 57 89=lumina
vgui::Panel::InitPropertyConverters()=51 80 ? ? ? ? ? ? 0F=lumina
vgui::Frame::Frame()=55 8B EC 56 8B 75 08 57 68=lumina
vgui::Frame::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 8B D9 57 6A=lumina=CBaseActionZoomDialog=89
vgui::Frame::GetSysMenu()=53 56 57 8B F9 83 ? ? ? ? ? ? 0F ? ? ? ? ? A1=lumina
vgui::Button::ApplySettings()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B 7D 08=lumina
vgui::CheckButton::ApplySchemeSettings()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 8B F1=lumina=CConVarCheckButton=88
vgui::FileOpenDialog::ApplySchemeSettings()=55 8B EC 56 57 FF 75 08 8B F9 E8 ? ? ? ? 8B ? ? ? ? ? 8B ? ? ? ? ? 6A=lumina=vgui::FileOpenDialog=88
IntersectRayWithRay()=55 8B EC 83 EC 14 8B 45 08 8D=lumina
Helper_CanUseSprays()=55 8B EC 56 8B ? ? ? ? ? 57 85 F6 74 2C=lumina=CBaseActionZoomDialog=217
vgui::MenuSeparator::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 07=lumina=vgui::MenuSeparator=88
vgui::Menu::ApplySchemeSettings()=55 8B EC 83 EC 10 53 8B 5D 08 56 57 53=lumina=vgui::Menu=88
vgui::Menu::SetCurrentlySelectedItem()=55 8B EC 56 8B F1 57 8B 7D 08 8B ? ? ? ? ? 3B FA=lumina
vgui::Panel::InternalMouseFocusTicked()=55 8B EC 53 8B D9 83 ? ? ? ? ? ? 75 5D=lumina=vgui::Menu=266
vgui::ToggleButton::DoClick()=53 56 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 8B=lumina=CConVarCheckButton=261
vgui::ToggleButton::ApplySchemeSettings()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? FF 75 08 8B=lumina=vgui::ToggleButton=88
vgui::Slider::RecomputeNobPosFromValue()=55 8B EC 83 EC 10 53 56 8B F1 8D=lumina
vgui::Slider::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 6A 00=lumina=CPrecisionSlider=89
vgui::PropertyDialog::ActivateBuildMode()=55 8B EC 83 EC 10 53 8B D9 80 ? ? ? ? ? ? 74=lumina=vgui::RichText=102
vgui::ScrollBar::ApplySchemeSettings()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 57 56=lumina=vgui::ScrollBar=88
vgui::ListViewPanel::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 33 8D 45 08 57 68 ? ? ? ? 50 8B CB FF ? ? ? ? ? 8B CB FF 30 FF ? ? ? ? ? 8B 07=lumina=vgui::ListViewPanel=88
vgui::RadioButton::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 07=lumina=vgui::RadioButton=88
vgui::RadioButton::GetDescription()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 68=lumina=vgui::RadioButton=92
vgui::FileOpenStateMachine::OverwriteFileDialog()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 53 56 57=lumina
vgui::DirectorySelectDialog::ApplySchemeSettings()=55 8B EC 51 A1 ? ? ? ? 56 57 8B F9 8B 08 6A 18=lumina=vgui::DirectorySelectDialog=88
vgui::ComboBox::OnMenuItemSelected()=55 8B EC 51 56 8B F1 81=lumina=vgui::CvarToggleCheckButton<class ConVarRef>=128
vgui::CvarToggleCheckButton<ConVarRef>::ApplySettings()=55 8B EC 83 E4 F8 51 53 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 68=lumina=vgui::CvarToggleCheckButton<class ConVarRef>=89
vgui::CvarToggleCheckButton<ConVarRef>::OnButtonChecked()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 3A=lumina=vgui::CvarToggleCheckButton<class ConVarRef>=290
vgui::ExpandButton::ApplySchemeSettings()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 03=lumina=vgui::ExpandButton=88
CIronSightController::IncreaseDotBlur()=55 8B EC 83 EC 18 53 8B D9 E8 ? ? ? ? 83 ? ? ? ? ? ? 0F=lumina=vgui::MenuItem=128
vgui::TreeView::ClearSelection()=56 8B F1 C7 ? ? ? ? ? ? ? ? ? FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 1B=lumina=CVGuiTree=223
vgui::BuildGroup::SaveControlSettings()=55 8B EC 81 ? ? ? ? ? 32=lumina=vgui::BuildGroup=4
vgui::TextTooltip::TextTooltip()=55 8B EC 83 EC 14 53 8B D9 56 57 6A 00=lumina
vgui::TextImage::SetUseAsianWordWrapping()=80 ? ? ? ? ? ? 56 57 8B F9 75 60=lumina
CUtlRBTree<char const*,int,bool ()=55 8B EC 83 EC 10 53 56 8B D9 57 89 5D F0=lumina=vgui::BaseInputDialog=132
vgui::BuildModeDialog::OnCommand()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 56 57=lumina
vgui::BuildModeDialog::OnCreateNewControl()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 74=lumina=vgui::BuildModeDialog=295
vgui::ScrollBarSlider::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 8B F9 53 89 7D FC E8 ? ? ? ? 8B 37=lumina=vgui::ScrollBarSlider=88
CClientState::PacketEnd()=55 8B EC 83 EC 18 53 8B D9 E8 ? ? ? ? 83 ? ? ? ? ? ? 74=lumina=CPerforceFileListFrame=132
CPerforceFileListFrame::PerformOperation()=55 8B EC 51 53 56 8B F1 57 8B ? ? ? ? ? 8B 01=lumina=CPerforceFileListFrame=279
CDemoActionStopPlayback::Update()=55 8B EC 53 56 57 8B D9 FF ? ? ? ? ? 6A=lumina
vgui::PanelListPanel::ApplySchemeSettings()=55 8B EC 51 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B 07=lumina=vgui::PanelListPanel=88
vgui::Splitter::ApplySettings()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8B D9 57 56=lumina=vgui::Splitter=89
CopyDefaultVideoToCurrentVideoConfig()=55 8B EC 8B ? ? ? ? ? 83 EC 30=lumina
BLoadUserVideoConfigFileFromDisk()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 53 56 57 8B F9 89=lumina
SocketWouldBlock()=55 8B EC 53 56 8B F1 57 FF=lumina
unsigned int CryptoPP::BitPrecision<unsigned int>()=8B 44 24 04 57 8B 38 85 FF 75 04 33 C0 5F C3 56 33 F6 BA ? ? ? ? 8D 0C 32 8B C7 D1 E9 D3 E8 85 C0 74 04 8B F1 EB 02 8B D1 8B CA 2B CE 83 F9 01=lumina
CryptoPP::BERGeneralDecoder::BERGeneralDecoder()=53 56 6A 00 8B F1=lumina
static void CryptoPP::OID::EncodeValue()=83 EC 08 53 8B 5C=lumina
CryptoPP::Algorithm::Algorithm()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 56 50=lumina
CryptoPP::BitBucket::AlgorithmName()=51 56 8B 74 24 0C 8B CE 6A 09=lumina=CryptoPP::BitBucket=2
virtual void CryptoPP::SimpleKeyingInterface::SetKey()=57 FF 74 24 0C=lumina
unsigned int CryptoPP::BytePrecision<unsigned int>()=8B 44 24 04 57 8B 38 85 FF 75 04 33 C0 5F C3 56 33 F6 BA ? ? ? ? 8D 0C 32 8B C7 D1 E9 D3 E8 85 C0 74 04 8B F1 EB 02 8B D1 8B CA 2B CE 83 F9 08=lumina
std::locale::~locale()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 49=lumina
void CryptoPP::Baseline_Multiply2()=53 55 8B 6C 24 14 33=lumina
void CryptoPP::Baseline_Multiply4()=53 55 8B 6C 24 14 56=lumina
void CryptoPP::Baseline_Multiply8()=53 8B 5C 24 0C 55 8B 6C=lumina
void CryptoPP::Baseline_MultiplyTop2()=53 8B 5C 24 0C 55 56 57 8B 03 8B=lumina
CEconItemDescription::Generate_ScorecardDesc_PostPhoenix()=8B 4C 24 0C 56 57 85=lumina
CryptoPP::Decrement()=57 8B 7C 24 08=lumina
virtual void CryptoPP::KDF2_RNG::GenerateBlock()=8B 41 04 8B 51=lumina=CryptoPP::KDF2_RNG=8
CryptoPP::Increment()=8B 54 24 04 8B 44=lumina
void CryptoPP::Integer::swap()=8B 54 24 04 56 8B F1=lumina
class CryptoPP::Integer CryptoPP::GCD()=51 FF 74 24 10 C7=lumina
CryptoPP::HashFilter::IsolatedInitialize()=51 56 8B 74 24 0C 57=lumina=CryptoPP::HashFilter=7
class CryptoPP::Integer CryptoPP::ModularExponentiation()=51 FF 74 24 14 C7=lumina
bool CryptoPP::TrialDivision()=51 53 55 56 57 8D=lumina
CScriptedIconLesson::PreReadLessonsFromFile()=83 EC 34 A1 ? ? ? ? 33 C4=lumina
memcpy_s_0()=56 8B 74 24 14 85=lumina
virtual bool CryptoPP::MessageQueue::AnyRetrievable()=83 EC 0C 8D 04 24 83 C1 38 50=lumina=CryptoPP::MessageQueue=16
virtual bool CryptoPP::MessageQueue::GetNextMessage()=83 EC 18 56 8B F1 8B 06=lumina=CryptoPP::MessageQueue=25
vgui::FileData_t::FileData_t()=55 8B EC 53 8B 5D 0C 8B CB=lumina
ceng::CBitMask<int>::~CBitMask<int>()=55 8B EC 51 56 8B F1 8B 06 50=lumina
AutoReleaseThreadContext::~AutoReleaseThreadContext()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 09 85=lumina
CCoreDispInfo::CalcMinMaxBoundingBoxAtNode()=55 8B EC 8B 45 08 33 C9 56=lumina
___stdio_common_vfprintf()=8B FF 55 8B EC 83 EC 2C 8B=lumina
common_get_or_create_environment_nolock_char_()=A1 ? ? ? ? 85 C0 75 25=lumina
__close()=8B FF 55 8B EC 51 56 8B 75 08 83 FE FE 75 15=lumina
_lambda_b163b37eafe0a13f2c371fafeb0365c9_::operator()=8B FF 55 8B EC 83 EC 14 56=lumina
_anonymous_namespace_::argument_list_wchar_t_::append_0()=8B FF 55 8B EC 56 57 8B F1=lumina
CL_Move()=55 8B EC 81 EC ? ? ? ? 53 56 8A F9=lumina
ChangeClantag()=53 56 57 8B DA 8B F9 FF=lumina
FireEventIntern()=55 8B EC 83 E4 F8 83 EC 0C 53 8B D9 56 57 89 5C 24 0C=lumina
CNetChan::SendDatagram()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 18=lumina
virtual void CDemoRecorder::StopRecording()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 12 6A 01=partial pdb
void vgui::RichText::SetText()=53 56 57 BF ? ? ? ? BE=partial pdb
void COM_Init()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 FF=partial pdb
CBitWriteMasksInit::CBitWriteMasksInit()=55 8B EC 51 53 56 57 33=partial pdb
StartSoundParams_t::StartSoundParams_t()=80 61 61=partial pdb
virtual void CEngineSoundClient::StopSound()=55 8B EC 83 EC 0C A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF=partial pdb
virtual int CEngineSoundClient::EmitAmbientSound()=55 8B EC 83 EC 68 F3=partial pdb
virtual bool CEngineSoundClient::IsSoundPrecached()=55 8B EC 56 8B 75 08 85 F6 74 0D=partial pdb
virtual void CEngineSoundServer::SetPlayerDSP()=55 8B EC 83 EC 14 80 7D=partial pdb
virtual void CEngineSoundServer::StopSound()=55 8B EC 83 EC 1C 56 8B F1 C7=partial pdb
virtual void CEngineSoundServices::OnExtraUpdate()=83 ? ? ? ? ? ? 74 20 8B ? ? ? ? ? 85=partial pdb
virtual int CEngineSoundServices::GetViewEntity()=55 8B EC 8B ? ? ? ? ? 85 C9 74 0C 8B=partial pdb
bool CClientState::SendNetMsg()=55 8B EC 8B ? ? ? ? ? 85 C9 74 0B=partial pdb
void HostState_LoadGame()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 83=partial pdb
char const near * CCommand::operator[]()=55 8B EC 8B 45 08 85 C0 78 0F=partial pdb
virtual void CEngineClient::ClientCmd()=55 8B EC 56 8B ? ? ? ? ? 33 C0=partial pdb
void S_SoundInfo_f()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 53 56 57 FF 50 28=partial pdb
vgui::Panel::Panel()=55 8B EC 83 EC 4C 80 ? ? ? ? ? ? 56=partial pdb
void S_Shutdown()=55 8B EC 83 E4 F8 83 EC 54 B9=partial pdb
void S_DumpClientSounds()=55 8B EC 81 ? ? ? ? ? 53 56 57 83 CF=partial pdb
void CVoiceWriter::Finish()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 89=partial pdb
void DrawSavedModelDebugOverlays()=55 8B EC 8A ? ? ? ? ? 83 EC 0C 56 8B F2 3C=partial pdb
void VoiceSE_Idle()=55 8B EC 83 EC 14 80 ? ? ? ? ? ? 53=partial pdb
virtual void CDemoPlayer::InterpolateViewpoint()=F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 0F ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F ? ? ? ? ? ? 9F F6 C4 44 0F=partial pdb
bool CM_IsFullyOccluded()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? A1=partial pdb
bool DAS_CalcRoomProps()=55 8B EC 8B ? ? ? ? ? 83 EC 38 56=partial pdb
bool DAS_StartTraceChecks()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 8D=partial pdb
void bf_write::WriteBitCoordMP()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B ? ? ? ? ? 81=partial pdb
void DAS_CheckNewRoomDSP()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 0C 56=partial pdb
void ChannelClearVolumes()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? 81 ? ? ? ? ? 0F 57=partial pdb
virtual bool CGameClient::CLCMsg_FileCRCCheck()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 B9=partial pdb
virtual void CNetChan::Reset()=56 83 C2 08=partial pdb
virtual void CGameClient::SetUpdateRate()=55 8B EC 83 EC 14 A1 ? ? ? ? 56 8B=partial pdb
void ChannelUpdateVolXfade()=83 C1 64 BA=partial pdb
void DumpFilePaths()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 83 ? ? ? ? 8D 44=partial pdb
int S_StartSound()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 8B 7E=partial pdb
bool S_IsSoundStillPlaying()=55 8B EC 51 A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 85 C0 0F ? ? ? ? ? 57=partial pdb
void S_StopAllSounds()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8A=partial pdb
void S_ExtraUpdate()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 18=partial pdb
void S_RestartSong()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 57 8B F9 8A=partial pdb
S_PlayHRTF()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 83=partial pdb
S_PlayDelay()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 83 3E 03=partial pdb
void S_PurgeSoundsDueToLanguageChange()=55 8B EC 81 ? ? ? ? ? 53 56 68 ? ? ? ? FF=partial pdb
void S_SoundList()=55 8B EC 81 ? ? ? ? ? 0F ? ? ? ? ? ? 8B=partial pdb
void DEBUG_StopSoundMeasure()=56 57 3B ? ? ? ? ? 0F=partial pdb
S_Say()=55 8B EC 83 E4 F8 A1 ? ? ? ? 81 ? ? ? ? ? 80=partial pdb
float S_GetMono16Samples()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B FA E8=partial pdb
void SteamDatagramClient_Kill()=55 8B EC 8B 45 08 83 38 02 74 0E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 56 FF=partial pdb
struct TSLNodeBase_t near * CTSListBase::Push()=55 8B EC 83 E4 F8 56 57 8B F9 8B 4D=partial pdb
void Ray_t::Init()=55 8B EC 8B 45 0C 8B 55 08 F3=partial pdb
void DLY_Print()=55 8B EC 83 EC 18 80 ? ? ? ? ? ? 53 56 8B=partial pdb
struct dly_t near * DLY_Params()=55 8B EC 83 EC 74 F3=partial pdb
int MDY_GetNext()=55 8B EC 53 56 8B 75 08 57 8B 7D 0C 80=partial pdb
void near * MDY_VParams()=55 8B EC 83 EC 0C 56 8B 75 08 BA=partial pdb
void RVA_Free()=55 8B EC 51 8B 45 08 85=partial pdb
struct rva_t near * RVA_Alloc()=55 8B EC 83 E4 F8 83 EC 24 F3=partial pdb
struct dfr_t near * DFR_Params()=55 8B EC F3 ? ? ? ? 81=partial pdb
struct ptc_t near * PTC_Alloc()=55 8B EC 83 E4 F8 83 EC 10 0F=partial pdb
int PTC_GetNext()=55 8B EC 8B 45 0C 53 56 8B 75 08 57 8B=partial pdb
int EFO_GetNext()=55 8B EC 53 8B 5D 0C 8B C3=partial pdb
struct crs_t near * CRS_Alloc()=55 8B EC 83 EC 08 53 56 F3=partial pdb
int AMP_GetNext()=55 8B EC 8B 4D 0C 56 8B 75 08 57=partial pdb
bool PRC_InitAll()=55 8B EC 83 EC 08 53 56 8B F1 85=partial pdb
void PRC_CheckParams()=53 8B 1A 85=partial pdb
struct pset_t near * PSET_Alloc()=56 57 33 C0 8B=partial pdb
_DSP_InitAll()=51 56 57 84=partial pdb
int DSP_Alloc()=55 8B EC 83 EC 10 53 8B DA F3=partial pdb
void DSP_FreePrevPreset()=55 8B EC 83 EC 0C 57 8B F9 32=partial pdb
void ADSP_GetAutoShape()=53 56 8B F1 32 DB 38=partial pdb
int DSP_ConstructPreset()=55 8B EC 81 ? ? ? ? ? 83 7D 1C=partial pdb
void DSP_Process5To5()=55 8B EC 83 EC 28 80 7D 10 00 53 56 57=partial pdb
void DSP_CheckRestorePresets()=55 8B EC 83 EC 08 80 ? ? ? ? ? ? 56=partial pdb
_DSP_ClearState()=80 ? ? ? ? ? ? 75 7A=partial pdb
_DSP_Process()=55 8B EC 83 EC 10 57 8B F9 89=partial pdb
float DSP_LookupStringToken()=55 8B EC 51 A0 ? ? ? ? 66=partial pdb
void DSP_DEBUGReloadPresetFile()=55 8B EC 8B ? ? ? ? ? 83 EC 08 53 56 57 81=partial pdb
void RVA_GetNext_Opt<1,2>()=55 8B EC 83 EC 08 53 56 8B 75 08 8B DA=partial pdb
virtual int COM_IOReadBinary::read()=55 8B EC 8B 55 10 85 D2 75=partial pdb
class CVoiceData near * CMouthInfo::AddSource()=55 8B EC 53 8B D9 33 C0 56 33 D2=partial pdb
_MIX_InitAllPaintbuffers()=55 8B EC 51 A1 ? ? ? ? 53 56 8B 40=partial pdb
void S_FreeChannel()=55 8B EC 81 ? ? ? ? ? 57 8B F9 8A=partial pdb
void S_Interpolate2xLinear_3()=55 8B EC 83 EC 18 53 56 8B F2=partial pdb
virtual bool CBaseClient::SendServerInfo()=55 8B EC 83 EC 60 69=partial pdb
void CChannelCullList::Initialize()=55 8B EC 83 EC 10 8B 55 08 53 56=partial pdb
void MIX_BuildChannelList()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 56 8B F1 57=partial pdb
void mat_texture_list_on_f()=55 8B EC 81 ? ? ? ? ? A0=partial pdb
bool MIX_ScaleChannelVolume()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 38 56 8B=partial pdb
void SW_Mix8Stereo_Interp()=55 8B EC 83 EC 0C C1=partial pdb
void SW_Mix16Stereo_Interp()=55 8B EC 51 C1 6D 10 0E 53 56 8B 75 0C 33 DB 57=partial pdb
_Mix8StereoWavtype()=55 8B EC 51 A1 ? ? ? ? 53 56 8B F1 B9=partial pdb
_SND_InitMouth()=56 8B F1 8B ? ? ? ? ? 85 C9 0F ? ? ? ? ? 83=partial pdb
MXR_AccumulateMasterMixLayer()=55 8B EC F3 ? ? ? ? ? ? ? 81 ? ? ? ? ? 33=partial pdb
void MXR_GetMixGroupFromSoundsource()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 8B F1 8D=partial pdb
void MXR_UpdateAllDuckerVolumes()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B ? ? ? ? ? 81=partial pdb
void MXR_GetVolFromMixGroup()=55 8B EC 83 EC 0C A1 ? ? ? ? 89 55=partial pdb
char const near * MXR_ParseMixGroup()=53 8B D9 8B ? ? ? ? ? 56 57 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 8B ? ? ? ? ? 8B=partial pdb
char const near * MXR_ParseSoundMixer()=55 8B EC 83 EC 44 53 56 8B D9 89=partial pdb
MXR_GetSoundMixer()=55 8B EC 83 E4 C0 83 EC 34 53 8B ? ? ? ? ? 8B=partial pdb
virtual bool CAudioSourceMP3::IsAsyncLoad()=55 8B EC 51 56 8B F1 8B 46 08=partial pdb
virtual void vgui::FileOpenDialog::ValidatePath()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 57 8B F9 68=partial pdb
virtual void CAudioSourceMP3::CheckAudioSourceCache()=56 8B F1 8B 4E 10 E8=partial pdb
virtual bool CSentenceMixer::IsReadyToMix()=55 8B EC 51 57 8B F9 83 7F 08=partial pdb
virtual int CSentenceMixer::MixDataToDevice()=55 8B EC 51 56 8B F1 83 7E 08=partial pdb
virtual bool CEngineVoiceSteam::IsLocalPlayerTalking()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 6A=partial pdb
virtual bool CEngineVoiceSteam::VoiceUpdateData()=53 56 8B F1 8B ? ? ? ? ? 6A 00=partial pdb
virtual void CEngineVoiceSteam::GetVoiceData()=55 8B EC 69 ? ? ? ? ? ? 8D=partial pdb
void CEngineVoiceSteam::AudioInitializationUpdate()=51 53 56 8B F1 83 7E 14 00 0F=partial pdb
bool CAsyncWaveData::BlockingCopyData()=55 8B EC 81 ? ? ? ? ? 56 8B F1 F6=partial pdb
virtual bool CAsyncWavDataCache::IsStreamedDataReady()=55 8B EC 8B 45 08 83 F8 FF 75 06=partial pdb
virtual bool CAsyncWavDataCache::IsDataLoadCompleted()=55 8B EC 56 FF 75 08 E8=partial pdb
virtual void CAsyncWavDataCache::RestartDataLoad()=55 8B EC 56 8B 75 08 57 8B F9 FF=partial pdb
void CAsyncWavDataCache::SpewMemoryUsage()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 83=partial pdb
_anonymous_namespace_::ProcessPhononJob()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F9 89 7C 24 10=partial pdb
virtual bool CWaveDataHRTF::IsReadyToMix()=55 8B EC A1 ? ? ? ? 83 EC 08 56 8B=partial pdb
int CWaveDataHRTF::SamplesAvailableToRead()=8B ? ? ? ? ? 8B ? ? ? ? ? 3B D0 77 0C=partial pdb
class IWaveData near * CreateWaveDataHRTF()=55 8B EC 8B 45 0C 56 8B F1 B9=partial pdb
void CWaveDataHRTF::TrySubmitJob()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 E8=partial pdb
void S_Update_()=A1 ? ? ? ? 6A 14 8B 08 8B 01 FF 50 04 85=partial pdb
virtual CAudioMixerWave::~CAudioMixerWave()=55 8B EC 56 8B F1 8B 4E 20=partial pdb
virtual void CAudioMixerWave::SetSampleStart()=55 8B EC 56 8B F1 8B 06 FF 50 10 85=partial pdb
jpeg()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 57 80=partial pdb
virtual int CAudioMixerWaveMP3::GetOutputData()=55 8B EC 57 8B F9 8B ? ? ? ? ? 3B=partial pdb
CFunctorJob::CFunctorJob()=56 8B F1 C7 ? ? ? ? ? ? 8D 4E 14=partial pdb
CAudioSourceWave::CAudioSourceWave()=55 8B EC 8B 45 08 56 8B F1 57 8B 7D=partial pdb
virtual void CAudioSourceWave::GetCacheData()=55 8B EC 51 57 8D=partial pdb
virtual void CAudioSourceWave::CheckAudioSourceCache()=56 8B F1 8B 4E 20 E8=partial pdb
virtual int vgui::ListPanel::GetItem()=55 8B EC 53 8B D9 8B 03 FF=partial pdb
virtual void CAudioSourceStreamWave::ParseChunk()=55 8B EC 8B 45 0C 56 8B F1 3D=partial pdb
virtual void vgui::TextEntry::ShowIMECandidates()=55 8B EC 81 ? ? ? ? ? 57 8B F9 8B 07=partial pdb
void MaybeReportMissingWav()=55 8B EC A1 ? ? ? ? 83 EC 10 56 8B F1 57=partial pdb
void CAudioSourceCachedInfo::Clear()=56 8B F1 57 8B 7E 20=partial pdb
bool CAudioSourceCache::LoadMasterCache()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 8B D9 B9 ? ? ? ? FF 50 34 85 C0 74=partial pdb
enum StopChannelResult S_StopChannelUnlocked()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? 56=partial pdb
void WaveCreateTmpFile()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? B9=partial pdb
virtual void near * COM_IOReadBinary::open()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 68=partial pdb
virtual void CDemoEditorPanel::OnCommand()=55 8B EC 83 EC 14 53 56 8B F1 B3=partial pdb
void CSosEntryMatchList::Update()=55 8B EC 51 F3 ? ? ? ? ? ? ? 53 56 57=partial pdb
void CSosOperator::ResolveInputValues()=55 8B EC 83 EC 14 53 8B D9 33=partial pdb
struct msurface2_t near * R_LightVec()=55 8B EC 83 E4 F0 A1 ? ? ? ? 81 ? ? ? ? ? 8B 40 34=partial pdb
int CSosOperatorStack::GetOperatorOutputOffset()=55 8B EC 83 EC 10 53 56 8B 75 08 8B=partial pdb
bool CSosOperatorStack::ShouldPrintOperators()=F7 ? ? ? ? ? ? ? ? ? 56 8B F1 74=partial pdb
void CSosOperatorStack::Execute()=55 8B EC 83 EC 08 53 56 8B F1 8B ? ? ? ? ? 57 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85=partial pdb
void CSosOperatorSystem::Init()=55 8B EC 83 EC 08 53 56 57 8B F9 89 7D FC 80=partial pdb
void CSosOperatorSystem::StopChannelOnTrack()=55 8B EC 83 E4 F8 83 EC 0C 8B 45 08 F3=partial pdb
void CSosOperatorSystem::DEBUG_ShowOpvarList()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B ? ? ? ? ? 81=partial pdb
CVBRHeader::CVBRHeader()=55 8B EC 83 E4 F8 8B 45 0C 83 EC 10 56=partial pdb
void SND_RecordBuffer()=55 8B EC 51 53 8B 5D 0C 56 57 8B F9 89=partial pdb
void Voice_UpdateVoiceTweakMode()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 80=partial pdb
int Voice_GetCompressedData()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B FA=partial pdb
int VoiceTweak_StartVoiceTweakMode()=80 ? ? ? ? ? ? 74 03 33 C0 C3 A1 ? ? ? ? 85=partial pdb
bool CMixerControls::Init()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 8B 43=partial pdb
void InitMixerControls()=83 ? ? ? ? ? ? 56 75 53=partial pdb
void VoiceRecord_DSound::Term()=56 8B F1 8B 4E 0C 85 C9 74 06 8B 01 51=partial pdb
bool ReadWaveFile()=55 8B EC 51 56 68=partial pdb
_VOX_Init()=68 ? ? ? ? 6A 00 68 ? ? ? ? C7 ? ? ? ? ? ? ? ? ? E8 ? ? ? ? 6A=partial pdb
char near * VOX_LookupGlobalVirtual()=55 8B EC 83 EC 0C A1 ? ? ? ? 53 56 89 4D FC B9 ? ? ? ? 8B=partial pdb
char near * VOX_LookupGlobalSeqVirtual()=55 8B EC 51 A1 ? ? ? ? 53 56 57 8B 40=partial pdb
void SV_SetSteamCrashComment()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B C1=partial pdb
int VOX_GroupAdd()=55 8B EC 51 53 56 57 8B F9 8B F7=partial pdb
void VOX_GroupInitAllLRUs()=56 33 D2 33 F6 39=partial pdb
void VOX_AddSentenceWavesToResList()=55 8B EC 83 EC 5C 53 56 8B ? ? ? ? ? 57=partial pdb
char near * VOX_LookupRndVirtual()=55 8B EC 51 56 85=partial pdb
void Voice_Deinit()=53 56 8B F1 8D ? ? ? ? ? 6A=partial pdb
virtual bool CBaseClientState::SetSignonState()=55 8B EC 83 E4 F8 83 EC 3C 53 56 57 8B 7D 08 8B D9 83=partial pdb
virtual void vgui::CBitmapImagePanel::GetSettings()=55 8B EC 81 ? ? ? ? ? 53 56 57 51 8D=partial pdb
void CBaseClientState::SetConnectionPassword()=55 8B EC 83 E4 F8 83 EC 40 56=partial pdb
virtual bool CHLTVClientState::SVCMsg_Prefetch()=55 8B EC 83 EC 34 57 8B F9 83 ? ? ? ? ? ? 74=partial pdb
virtual unsigned int CBrushConvexInfo::GetContents()=55 8B EC 8B ? ? ? ? ? 83 EC 24=partial pdb
bool CVTFTexture::ReadHeader()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 F8 05=partial pdb
void CBaseClientState::CopyEntityBaseline()=55 8B EC 83 E4 F8 83 EC 0C 8B 45 0C=partial pdb
void CBaseClientState::UpdateInstanceBaseline()=55 8B EC 83 EC 08 8B 45 08 56 57 8B F9 89=partial pdb
bool CBaseClientState::GetClassBaseline()=55 8B EC 83 EC 74 53 8B=partial pdb
bool CGameEventManager::RegisterEvent()=55 8B EC 83 E4 F8 83 EC 44 53 56 57 8B=partial pdb
virtual void CRConServer::OnSocketAccepted()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 56=partial pdb
SteamDatagramTransport::FindOrCreateIdleClient()=55 8B EC 83 EC 0C 33 C0 53 56 8B F1=partial pdb
CSosOperatorSystem::CSosOperatorSystem()=56 8B F1 C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 66 ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
vgui::ContextLabel::ApplySchemeSettings()=55 8B EC 83 EC 5C 8B 45 14=partial pdb
void DrawLightSprites()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 80=partial pdb
void CL_TriggerMoved()=55 8B EC 83 EC 50 53 56 8B 75=partial pdb
Shader_DrawChainsStatic()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 8D ? ? ? ? ? C7=partial pdb
void CVertexBuilder::AdvanceVertex()=FF ? ? ? ? ? 8B ? ? ? ? ? 3B ? ? ? ? ? 7E 06 89 ? ? ? ? ? 8B 01=partial pdb
void CIndexBuilder::GenerateIndices()=55 8B EC 56 8B F1 83 7E 0C=partial pdb
void CIndexBuilder::FastPolygon()=55 8B EC 51 53 8B 5D 08 56 57 8B F9 33=partial pdb
BuildSingleCubemap()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B F2 8B 4D=partial pdb
plugin_unload()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 83 3E 02 7D 13 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 5E 8B E5 5D C3 8B=partial pdb
void CBaseClientState::SetEntityBaseline()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 C7 ? ? ? ? ? ? B8=partial pdb
void Cubemap_CreateDefaultCubemap()=55 8B EC 81 ? ? ? ? ? 53 56 57 6A 00 89=partial pdb
buildmodelforworld()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 53 8B=partial pdb
void WriteSurfaceToSMD()=55 8B EC 83 EC 38 F3=partial pdb
SessionClient_t::SessionClient_t()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 0C 8B F9 8D=partial pdb
virtual bool CDemoActionPausePlayback::Init()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 53 56=partial pdb
bench_end()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 8B F1 57 6A=partial pdb
float ChannelLoudestCurVolume()=55 8B EC 83 E4 F8 83 EC 4C 8B 4D=partial pdb
virtual bool CEngineClient::GetPlayerInfo()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 83 EC 08=partial pdb
float CBaseDemoAction::GetStartTime()=A1 ? ? ? ? D9 ? ? ? ? ? C3=partial pdb
SetNodeFlagBits()=56 8B F1 83 3E 00 7D 2D=partial pdb
int CGameServer::PrecacheDecal()=55 8B EC 8B 55 0C 85 D2 75 07=partial pdb
virtual bool CEngineClient::DoesBoxTouchAreaFrustum()=55 8B EC 8B 4D 10 8B ? ? ? ? ? ? 3B=partial pdb
bool R_ShouldUseAreaFrustum()=55 8B EC 8B 45 08 8B ? ? ? ? ? ? 3B ? ? ? ? ? 0F=partial pdb
void Host_SetAudioState()=55 8B EC 8B 45 08 0F 10 00 0F ? ? ? ? ? ? F3=partial pdb
float clamp<float>()=55 8B EC 83 EC 08 F3 ? ? ? ? ? ? ? 8B ? ? ? ? ? F3 ? ? ? ? 81 ? ? ? ? ? 75 16=partial pdb
virtual bool CEngineClient::IsHLTV()=A1 ? ? ? ? 80 ? ? ? ? ? ? 75 0C=partial pdb
MXR_ListMixGroups()=55 8B EC A1 ? ? ? ? 85 C0 78=partial pdb
int S_GetMixGroupIndex()=55 8B EC 8B 4D 08 E8 ? ? ? ? 83=partial pdb
void S_SetMixLayerLevel()=55 8B EC 69 ? ? ? ? ? ? F3=partial pdb
CCoreDispInfo::~CCoreDispInfo()=51 51 BA=partial pdb
void ClientDLL_Init()=55 8B EC 81 ? ? ? ? ? 53 56 57 E8 ? ? ? ? 83=partial pdb
unknown_libname_2()=55 8B EC 51 89 4D FC 8B 45 FC 8B E5=partial pdb
virtual int pairNode::raw_length()=55 8B EC 51 89 4D FC 8B 45 FC 8B 40=partial pdb
unknown_libname_3()=55 8B EC 83 C8 FF 5D=partial pdb
___scrt_stub_for_initialize_mta()=55 8B EC 33 C0 5D=partial pdb
__vsprintf_s_l()=55 8B EC FF 75 18 FF=partial pdb
void CBroadcastPlayer::ResyncStream()=55 8B EC 83 EC 14 56 8B F1 8B ? ? ? ? ? F3=partial pdb
bool CBroadcastPlayer::PreparePacket()=55 8B EC 83 E4 C0 83 EC 34 53 56 57 8B F9 FF=partial pdb
void CEngineVGui::ToggleDebugSystemUI()=55 8B EC 56 57 8B 7D 08 8B F1 8D 47 08=partial pdb
void DemoOverlay::Tick()=55 8B EC 83 E4 F0 83 EC 2C=partial pdb
virtual void CDemoRecorder::RecordServerClasses()=55 8B EC 83 E4 F8 83 EC 48 53 8B=partial pdb
void R_LoadSkys()=56 8B F1 E8 ? ? ? ? 51=partial pdb
virtual int CEngineClient::GetGenericMemoryStats()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 57 89 5D F8=partial pdb
void CDemoRecorder::CloseDemoFile()=55 8B EC 83 E4 C0 83 EC 38 56 8B F1 57 8B 46=partial pdb
void CDemoRecorder::WriteMessages()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B 46=partial pdb
virtual CDemoPlayer::~CDemoPlayer()=55 8B EC 83 E4 C0 83 EC 34 53 56 8B F1 57 8B=partial pdb
virtual void CDemoPlayer::SkipToImportantTick()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B 45=partial pdb
virtual CBroadcastPlayer::~CBroadcastPlayer()=55 8B EC 51 57 8B F9 C7=partial pdb
void CVoxelHash::RenderGrid()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 89 7C 24 08=partial pdb
DemoRecord()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 8B=partial pdb
occlusion_stats()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 53 56 57 FF 50 3C=partial pdb
demo_goto()=55 8B EC 83 EC 0C 53 8B 5D 08 56 57 C6=partial pdb
CNETMsg_Tick_t::CNETMsg_Tick_t()=55 8B EC 83 EC 08 56 57 F3=partial pdb
static void CBaseDemoAction::BufPrintf()=55 8B EC 81 ? ? ? ? ? 8D 45 14 BA ? ? ? ? 50 51 FF 75 10 8D ? ? ? ? ? E8 ? ? ? ? 83=partial pdb
virtual void CBaseDemoAction::SaveKeysToBuffer()=55 8B EC 83 E4 C0 83 EC 34 53 8B 5D 08 56 8B=partial pdb
void CBaseDemoAction::SaveToBuffer()=55 8B EC 56 8B 75 10 57 FF 75 0C=partial pdb
bool CClientFrameManager::DeleteUnusedClientFrame()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? 84 C0 75 06 5F 5E 5D C2 04 00 80=partial pdb
virtual bool VoiceRecord_DSound::Init()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 E8=partial pdb
virtual void CDemoActionManager::ReloadFromDisk()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 8B D9 56 57 68 ? ? ? ? 8D=partial pdb
virtual void CDemoActionManager::Update()=55 8B EC 83 EC 10 53 57 8B F9 8B=partial pdb
virtual void CDemoActionManager::SaveToBuffer()=55 8B EC 51 53 56 57 8B 7D 08 68=partial pdb
virtual void CDemoEditorPanel::OnTick()=56 57 8B F9 B9 ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
Ease_Both()=55 8B EC F3 ? ? ? ? 0F 28=partial pdb
void CDemoSmootherPanel::OnRevert()=56 8B F1 80 ? ? ? ? ? ? 8D ? ? ? ? ? 50=partial pdb
int CDemoSmootherPanel::GetFrameForTick()=55 8B EC 51 8B ? ? ? ? ? 56 57 8B ? ? ? ? ? 8D=partial pdb
virtual void CDemoPlayer::SkipToTick()=55 8B EC 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 80=partial pdb
void CDemoSmootherPanel::OnSmoothSelectionOrigin()=55 8B EC 83 EC 38 53 8B D9 89 5D FC 80=partial pdb
struct rva_t near * RVA_Params()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 8B F9 89=partial pdb
void CDemoSmootherPanel::PushRedo()=55 8B EC A1 ? ? ? ? 56 8B F1 57 68=partial pdb
void CDemoSmootherPanel::WipeUndo()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 53=partial pdb
void CDemoSmootherPanel::ClearSmoothingInfo()=55 8B EC 8B 45 08 53 8B ? ? ? ? ? 85=partial pdb
void CDemoUIPanel::GetDriveViewPoint()=55 8B EC 51 8B ? ? ? ? ? 8B 4D 08 8B=partial pdb
bool GoToImportantTickHelper()=55 8B EC 83 EC 08 56 8B F1 88=partial pdb
virtual void CDemoUIPanel::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 8B=partial pdb
void CDemoSmootherPanel::OnVDMChanged()=56 8B F1 8B ? ? ? ? ? 83 FA FF 74 62=partial pdb
virtual bool CDemoUIPanel::OverrideView()=55 8B EC 56 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 74 75=partial pdb
void CL_RecordEntityBits()=55 8B EC 56 8B 75 08 81 ? ? ? ? ? 0F=partial pdb
virtual void CSaveRestoreFileSystem::DirectoryClear()=55 8B EC 51 53 56 57 68 ? ? ? ? FF 75 08 8B F1 89=partial pdb
virtual void CEntityReportPanel::ApplyEffect()=55 8B EC F2 ? ? ? ? ? ? ? 56=partial pdb
virtual void CEntityReportPanel::Paint()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 5D BC=partial pdb
bool CL_ProcessPacketEntities()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56=partial pdb
virtual void CFogUIPanel::OnTick()=55 8B EC 83 EC 08 57 8B F9 8B 07=partial pdb
virtual void CFogUIPanel::OnTextNewLine()=55 8B EC 56 6A 00 8B F1 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? 85 C0 0F=partial pdb
class CDevShotGenerator near & DevShotGenerator()=68 ? ? ? ? 6A 00 68 ? ? ? ? E8 ? ? ? ? 83 C4 0C C7 ? ? ? ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? B9=partial pdb
void CL_PrintWhitelistInfo()=A1 ? ? ? ? 8B ? ? ? ? ? 85 C0 74 37=partial pdb
void R_UnloadSkys()=55 8B EC 83 E4 F8 A1 ? ? ? ? 81 ? ? ? ? ? 56 8B=partial pdb
void CL_PlayDemo_f()=55 8B EC 8B 4D 08 81 ? ? ? ? ? 83=partial pdb
connect_splitscreen()=55 8B EC 8B 45 08 83 EC 18 83=partial pdb
void CL_CheckClientState()=55 8B EC 51 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C=partial pdb
void CL_TakeSnapshotAndSwap()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 8B 01 53 56 8B=partial pdb
void CL_EndMovie()=80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? F3=partial pdb
startmovie()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B 1F=partial pdb
void SteamDatagramTransport::SpewMsg()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 81=partial pdb
void CL_DemoCheckGameUIRevealTime()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 0F=partial pdb
void CL_SetSteamCrashComment()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? C6=partial pdb
void CL_ChangeCloudSettingsCvar()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 85 C9 74=partial pdb
void vgui::PanelListPanel::MoveScrollBarToTop()=55 8B EC 81 ? ? ? ? ? 56 33=partial pdb
setinfo()=55 8B EC 83 E4 F8 8B 45 08 83 EC=partial pdb
void Callback_UserInfoChanged()=55 8B EC 53 8B 5D 18=partial pdb
void CL_InstallAndInvokeClientStringTableCallbacks()=55 8B EC 83 EC 14 8B ? ? ? ? ? 8B ? ? ? ? ? 89=partial pdb
virtual void CPluginGameUIDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8D=partial pdb
virtual void CPluginUIManager::OnTick()=55 8B EC 83 EC 10 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 83=partial pdb
void CL_RunPrediction()=57 8B ? ? ? ? ? 83 ? ? ? ? ? ? 75 4A=partial pdb
void S_PrintOperatorList()=53 56 8D 71 34=partial pdb
CDebugSystemPanel::CDebugSystemPanel()=55 8B EC 83 EC 34 53 56 57 8B F9 8B=partial pdb
virtual bool CSplitScreen::Init()=53 8B D9 B9 ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
void CSteam3Client::Shutdown()=56 8B F1 B9 ? ? ? ? E8 ? ? ? ? A1=partial pdb
void CSteam3Client::Activate()=56 8B F1 80 ? ? ? ? ? ? 75 57=partial pdb
void CSteam3Client::CancelAuthTicket()=56 8B F1 C6 ? ? ? ? ? ? 81=partial pdb
void CSteam3Client::OnLowBattery()=55 8B EC 8B 45 08 0F B6=partial pdb
virtual bool vgui::TileViewPanelEx::GetTileOrg()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 7F=partial pdb
virtual void vgui::TileViewPanelEx::Paint()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 49=partial pdb
CAutoMatSysDebugMode::CAutoMatSysDebugMode()=56 8B F1 6A 00 C7 ? ? ? ? ? ? C7=partial pdb
FmtCommaNumber()=55 8B EC 83 EC 0C 53 8B D9 89 55=partial pdb
mat_texture_list_txlod()=55 8B EC 56 8B 75 08 83 3E 02 0F ? ? ? ? ? 8B ? ? ? ? ? BA=partial pdb
void MatViewOverride::DisplaySelectedTextures()=55 8B EC 81 ? ? ? ? ? 66 ? ? ? ? ? ? ? 53=partial pdb
virtual void CVmtTextEntry::OpenEditMenu()=55 8B EC 83 EC 08 53 56 57 8B F9 8B ? ? ? ? ? FF=partial pdb
virtual void CVmtTextEntry::OpenVmtSelected()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8D 4D FC=partial pdb
virtual void CDragDropHelperPanel::PostChildPaint()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 45 0C 53 8B=partial pdb
void vgui::Menu::LayoutScrollBar()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B D9 57 89 5C 24 18=partial pdb
void CBugUIPanel::ParseCommands()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B D9 57 89=partial pdb
virtual void CRenderTextureEditor::Paint()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8D 4D=partial pdb
KilobytesSortFunc()=55 8B EC 83 E4 F8 8B 4D 0C 56=partial pdb
ToLowerInplace()=56 8B F1 80 3E 00 74 2C=partial pdb
virtual void CTextureListPanel::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 0E 57=partial pdb
virtual void CBaseActionPlayCommandsDialog::Init()=55 8B EC 53 8B 5D 08 56 57 8B F9 8B CB=partial pdb
virtual void CTextureListPanel::Paint()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 57 89=partial pdb
CSaveRestoreData::CSaveRestoreData()=56 57 8B F9 E8 ? ? ? ? 8D ? ? ? ? ? E8 ? ? ? ? C7=partial pdb
void CClientState::SendLoadingProgress()=55 8B EC 83 EC 34 56 8B F1 83 ? ? ? ? ? ? 74=partial pdb
virtual bool CClientState::SetSignonState()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 FF 75=partial pdb
int CGameServer::PrecacheGeneric()=55 8B EC 53 8B D9 56 57 8B ? ? ? ? ? 85 C9 0F=partial pdb
float CClientState::GetTime()=55 8B EC 51 56 8B F1 80 ? ? ? ? ? ? 66=partial pdb
float CClientState::GetClientInterpAmount()=55 8B EC 8B ? ? ? ? ? 83 EC 08 85 C9 75=partial pdb
void vgui::RichText::RecalculateDefaultState()=55 8B EC 51 56 8B F1 83 ? ? ? ? ? ? 0F=partial pdb
virtual void CClientState::FullConnect()=55 8B EC 83 E4 F8 83 EC 44 53 8B 5D=partial pdb
struct model_t near * CClientState::GetModel()=55 8B EC 53 8B D9 56 57 8B ? ? ? ? ? 85 C9 75=partial pdb
virtual bool CGameClient::CLCMsg_ClientInfo()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 8B F9 85=partial pdb
void CClientState::DumpPrecacheStats()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 57 85=partial pdb
void CClientState::CheckFileCRCsWithServer()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 5D F8=partial pdb
void CClientState::FinishSignonState_New()=55 8B EC 83 EC 54 53 56 57 8B F9=partial pdb
virtual void CClientState::RunFrame()=55 8B EC 83 E4 F8 83 EC 2C 53 56 57 8B F9 E8=partial pdb
CNETMsg_SignonState_t::CNETMsg_SignonState_t()=55 8B EC 56 57 8B F9 8D 4F 04=partial pdb
int CClientFrameManager::AddClientFrame()=55 8B EC 8B 51 04 85=partial pdb
void CClientFrameManager::DeleteClientFrames()=55 8B EC 53 56 57 8B F9 33 DB=partial pdb
virtual void CPrecisionSlider::OnMouseWheeled()=55 8B EC 56 57 8B F1 FF=partial pdb
virtual void CColorCorrectionUIChildPanel::OnClose()=53 56 57 8B D9 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 10=partial pdb
void CLevelsColorOperation::UpdateOutputLevelArray()=55 8B EC F3 ? ? ? ? ? ? ? 0F 28=partial pdb
virtual void CColorHistogramPanel::PaintBackground()=55 8B EC 83 EC 08 56 8B ? ? ? ? ? 8D 45 F8 57 50 8D 45 FC 8B 3E 50 8B 01 FF 10 50 8B CE FF 57 14 8B ? ? ? ? ? 68=partial pdb
virtual void CColorHistogramPanel::Paint()=55 8B EC 83 EC 14 8D 45 EC 53=partial pdb
void CColorSlider::SetNormalizedValue()=55 8B EC 8B 45 08 F3 ? ? ? ? ? ? ? ? 83=partial pdb
virtual void CColorSlider::OnMouseReleased()=55 8B EC 83 7D 08 6B 56 8B F1 75 20=partial pdb
void CColorSlider::PaintKnob()=55 8B EC 83 EC 3C 53 56 8B ? ? ? ? ? 8D 45 F4=partial pdb
virtual bool CCurvesColorOperation::Serialize()=55 8B EC 83 EC 08 53 8B D9 56 57 8B 7D 08 8B CF=partial pdb
virtual void CUncorrectedImagePanel::OnCursorMoved()=55 8B EC 83 EC 28 53 8B D9 56 57 89 5D F0=partial pdb
virtual void CSelectedHSVUIPanel::OnMessage()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 8B=partial pdb
void CSelectedHSVUIPanel::PickColorFromTextEntry()=55 8B EC 83 EC 1C 53 56 8B F1 8B=partial pdb
virtual void CSelectedHSVUIPanel::OnCommand()=55 8B EC A1 ? ? ? ? 53 8B 5D 08=partial pdb
R_DecalVertsLight()=55 8B EC 81 ? ? ? ? ? 83 ? ? ? ? ? ? 89=partial pdb
void CColorLookupOperation::GetLookupValue()=55 8B EC 53 8B ? ? ? ? ? 85 DB 0F ? ? ? ? ? 8B=partial pdb
void CColorLookupOperation::LoadLookupTable()=55 8B EC 83 E4 F8 83 EC 0C 53 89=partial pdb
virtual void CColorLookupUIPanel::OnFileSelected()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? E8=partial pdb
void HSLToRGB()=55 8B EC 66 0F 6E 0A=partial pdb
void CL_ScanDemo_f()=A1 ? ? ? ? 56 57 8B F9 8B 08 68 ? ? ? ? 8B 01 FF 50 04 85 C0 74 0B 8B C8 E8 ? ? ? ? 8B F0 EB 02 33 F6 0F=partial pdb
virtual void CNewOperationDialog::OnCommand()=55 8B EC 81 ? ? ? ? ? BA ? ? ? ? 56 57 8B 7D 08 8B F1 8B CF E8 ? ? ? ? 85 C0 0F ? ? ? ? ? 8B=partial pdb
virtual void COperationListPanel::ClearSelectedItems()=56 8B F1 E8 ? ? ? ? FF ? ? ? ? ? 6A=partial pdb
virtual void COperationListPanel::SetSortColumn()=55 8B EC 83 7D 08 00 56 8B F1 0F ? ? ? ? ? 8B=partial pdb
virtual void COperationListPanel::OnTextNewLine()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B F1 68 ? ? ? ? 52 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B=partial pdb
virtual void CAudioSourceCache::RebuildCacheEntry()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 8B F9 56=partial pdb
virtual void CColorOperationListPanel::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 59=partial pdb
void CColorOperationListPanel::PopulateList()=55 8B EC 83 EC 0C 53 8B D9 56 8B ? ? ? ? ? 8B=partial pdb
void CColorCorrectionUIPanel::Shutdown()=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
virtual void CColorCorrectionUIPanel::OnThink()=55 8B EC 83 EC 34 53 56 57 8B F9 89=partial pdb
bool CColorOperationListPanel::SaveRawFile()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 53=partial pdb
virtual void CColorCorrectionTools::Init()=A1 ? ? ? ? 56 8B F1 85 C0 74 14=partial pdb
void Con_ShowConsole_f()=8B ? ? ? ? ? 8B 01 FF 50 4C 85 C0 75=partial pdb
Con_LogFunctionHelper()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B F1 89=partial pdb
void Con_ColorPrint()=55 8B EC 83 EC 14 A1 ? ? ? ? 53 56 89=partial pdb
virtual void CConPanel::DrawNotify()=55 8B EC 83 EC 1C 53 57 8B F9=partial pdb
virtual void CConPanel::DrawDebugAreas()=55 8B EC 83 EC 10 57 8B F9 80 ? ? ? ? ? ? 0F=partial pdb
bool CullNodeSIMD()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 0F=partial pdb
leafvis_t::leafvis_t()=56 8B F1 6A 30 6A=partial pdb
virtual int CEngineBSPTree::ListLeavesInBox()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B C2=partial pdb
void LeafVisBuild()=55 8B EC 83 E4 F0 B8 ? ? ? ? E8 ? ? ? ? 56 8B=partial pdb
void RecomputeClipbrushes()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 70 56 57=partial pdb
void LeafVisDraw()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 53 56 57 85=partial pdb
void OverlayText_t::SetEndTime()=55 8B EC 51 A1 ? ? ? ? 0F 57 C0 0F 2F C1 56 8B F1 8B ? ? ? ? ? 89 ? ? ? ? ? F3=partial pdb
virtual void CIVDebugOverlay::AddTextOverlay()=57 8B F9 8B ? ? ? ? ? 8D 49=partial pdb
virtual void CIVDebugOverlay::AddLineOverlay()=55 8B EC 83 EC 30 8B 45=partial pdb
virtual void CIVDebugOverlay::AddTextOverlayRGB()=55 8B EC 56 57 8B 7D 08 8D 45 1C=partial pdb
SHClip_CPlane_Left_()=55 8B EC 56 57 8B FA 33=partial pdb
void SendTable_Term()=0F ? ? ? ? ? ? BA ? ? ? ? 56 57=partial pdb
virtual bool CDiskDemoBuffer::Init()=55 8B EC 56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF 75 08 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
virtual void CDiskDemoBuffer::Put()=55 8B EC 57 FF 75 0C 8B F9 FF 75 08 8B=partial pdb
CDbgPrint::CDbgPrint()=55 8B EC A1 ? ? ? ? 53 8B D9 40=partial pdb
void CDemoFile::WriteCmdInfo()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 8D 4D=partial pdb
void CDemoFile::ReadCmdHeader()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B 01 8B=partial pdb
void CDemoFile::WriteUserCmd()=55 8B EC 51 57 8B F9 8D 4D FF 68 ? ? ? ? E8 ? ? ? ? 8B ? ? ? ? ? 85 C9 74 62=partial pdb
int CDemoFile::ReadCustomData()=55 8B EC 51 A1 ? ? ? ? 53 56 8B F1 57=partial pdb
int CDemoFile::ReadRawData()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 3C=partial pdb
void CDemoFile::WriteDemoHeader()=55 8B EC 83 E4 C0 83 EC 34 53 56 57 8B D9 8D=partial pdb
void CDemoStreamHttp::BeginBuffering()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 8B 75 08 8B D9 89=partial pdb
void CDemoStreamHttp::Update()=55 8B EC 83 EC 08 0F 57 C9=partial pdb
void CDemoStreamHttp::StopStreaming()=55 8B EC 83 E4 F8 51 53 8B D9 56 57 89=partial pdb
virtual void CDemoStreamHttp::CPendingRequest::Run()=55 8B EC F2 ? ? ? ? ? ? ? 83 EC 08 53=partial pdb
void CDevShotGenerator::StartDevShotGeneration()=55 8B EC 81 ? ? ? ? ? 56 8B F1 80 3E=partial pdb
void CDispInfo::ClearAllDecalFragments()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 BB=partial pdb
void CDispInfo::InitializeActiveVerts()=53 57 8B F9 8D ? ? ? ? ? 85=partial pdb
void CDispInfo::ClearDecalFragments()=55 8B EC 51 0F B7 45 08 B9=partial pdb
void CDispInfo::ClearShadowDecalFragments()=55 8B EC 51 0F B7 45 08 53=partial pdb
virtual bool CDispInfo::ComputeShadowFragments()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 8B 45 08 0F B7=partial pdb
void DispInfo_BatchDecals()=55 8B EC 83 EC 14 53 56 8B F1 8B DA=partial pdb
AddCombo()=55 8B EC 51 A1 ? ? ? ? 56 6A 34=partial pdb
void AddEmptyMesh()=55 8B EC 81 ? ? ? ? ? 89 4D EC=partial pdb
int CDispInfo::NumLightMaps()=55 8B EC 83 E4 F8 B8 ? ? ? ? E8 ? ? ? ? 83=partial pdb
CDispInfo::CDispInfo()=C7 ? ? ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
void CMeshBuilder::Reset()=55 8B EC 83 EC 24 56 57 8B F9=partial pdb
void Host_FinishSecureSignatureChecks()=56 8B F1 83 7E 08 00 7C 4B=partial pdb
Shader_DrawDynamicChain()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? F3=partial pdb
void DrawLightDebuggingInfo()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 53 56 57 81 ? ? ? ? ? 75 12=partial pdb
void VectorMatrix()=55 8B EC 83 E4 F8 83 EC 58 56 8B=partial pdb
void VOX_LookupRangeHeadingOrGrid()=55 8B EC A1 ? ? ? ? 83 EC 50=partial pdb
AccumulateLightstyles()=55 8B EC 83 E4 F8 51 53 8B 5D 08 0F=partial pdb
AccumulateLightstylesFlat()=55 8B EC 83 E4 F8 51 53 56 57 8B 7D 08=partial pdb
AccumulateBumpedLightstyles()=55 8B EC 83 E4 F8 83 EC 14 F3=partial pdb
void CacheAndUnloadLightmapData()=55 8B EC 83 EC 0C 80 ? ? ? ? ? ? 53 56 57=partial pdb
void DiscardStaticLightmapData()=55 8B EC 83 EC 4C 80 ? ? ? ? ? ? 53=partial pdb
SortSurfacesByLightmapID()=55 8B EC 81 ? ? ? ? ? 53 8B DA 56=partial pdb
void DrawLeafvis()=55 8B EC 83 EC 54 53 56 57 FF=partial pdb
GenerateTexCoordsForPrimVerts()=55 8B EC 83 EC 34 57 8B ? ? ? ? ? C7=partial pdb
class IMaterial near * GetMaterialAtCrossHair()=55 8B EC 83 EC 18 F3 ? ? ? ? ? ? ? 8D 45 E8 F3 ? ? ? ? ? ? ? 8D 55 F4 F3 0F 59 C1 83=partial pdb
void R_AnimateLight()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8B ? ? ? ? ? 85=partial pdb
int R_MarkLights()=55 8B EC 83 E4 F8 83 EC 10 56 8B 75=partial pdb
ComputeLightmapColorFromAverage()=55 8B EC 83 EC 0C F3 ? ? ? ? ? ? ? 84=partial pdb
ComputeLightmapColor()=55 8B EC 83 EC 10 53 56 89=partial pdb
void S_SoundFade()=55 8B EC 83 EC 18 53 56 8B 75 08 33 DB 57 89=partial pdb
void R_DrawScreenRect()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 56 F3=partial pdb
PrintRenderedFaceInfoCallback()=55 8B EC 83 E4 F8 83 EC 18 56 8B 75=partial pdb
virtual void vgui::Menu::AddSeparator()=55 8B EC 83 EC 08 53 8B D9 8B ? ? ? ? ? 56 8D=partial pdb
virtual bool CRender::ClipTransform()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? FF 50 38=partial pdb
void near * AMP_VParams()=55 8B EC 83 E4 F8 83 EC 10 56 8B F1=partial pdb
RenderTexturedRect()=55 8B EC 81 ? ? ? ? ? 56 57 8D ? ? ? ? ? E8=partial pdb
void R_LevelInit()=55 8B EC 51 57 68=partial pdb
struct cplane_t const near & R_GetBrushModelPlane()=55 8B EC 51 8B ? ? ? ? ? 53 8B 5D 08=partial pdb
virtual CWorldRenderList::~CWorldRenderList()=53 8B D9 56 57 C7 ? ? ? ? ? C7=partial pdb
void CWorldRenderList::Reset()=56 8B F1 FF 76 10=partial pdb
DrawSurfaceID()=55 8B EC 83 EC 20 8D 45 E0 FF=partial pdb
DrawSurfaceIDAsInt()=55 8B EC A1 ? ? ? ? 83 EC 20 8B 4D=partial pdb
DrawSurfaceMaterial()=55 8B EC 8B 45 0C 56 57 0F=partial pdb
bool DispInfoRenderDebugModes()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 28 8B=partial pdb
Shader_DrawChains()=55 8B EC 83 EC 2C 53 56 57 8B F9 8B F2=partial pdb
void R_DLightEndView()=53 56 57 8B F9 C7 ? ? ? ? ? ? ? ? ? 8B ? ? ? ? ? 81=partial pdb
Shader_DrawWorldDecalsAndOverlays()=55 8B EC 83 EC 18 53 56 57 8B F9 B8=partial pdb
class IMaterial near * R_GetFogVolumeMaterial()=56 85 C9 78 65=partial pdb
void SurfComputeTextureCoordinate()=55 8B EC 51 8B 41 04=partial pdb
void R_DrawBrushModelShadow()=55 8B EC 83 EC 10 53 8B 5D 0C 0F=partial pdb
CBrushModelTransform::~CBrushModelTransform()=57 8B F9 80 7F 0C 00 75=partial pdb
EnumerateLeavesAlongRay_R()=55 8B EC 83 EC 08 53 56 8B F1 0F 28 FB=partial pdb
float X360GammaToLinear()=55 8B EC 83 E4 F8 83 EC 18 56 8B F1 F3=partial pdb
bool R_LoadNamedSkys()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 C7=partial pdb
void SND_SetSpatialDelays()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? F3=partial pdb
virtual void CModelRender::SetupLightingEx()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
void VectorTransform()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 0C 56 57 8B 7D=partial pdb
virtual int CModelRender::DrawModelEx()=55 8B EC 83 E4 F8 83 EC 54 53 56 57 8B 7D=partial pdb
bool CModelRender::UpdateStaticPropColorData()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8B=partial pdb
virtual void CModelRender::RemoveAllDecals()=55 8B EC 66 8B 45 08 BA ? ? ? ? 66 3B C2 74 3E=partial pdb
void CDatatableStack::Init()=55 8B EC 8B 45 08 56 8B F1 8D 14=partial pdb
void Host_BeginThreadedSound()=55 8B EC A1 ? ? ? ? 56 8B F1 6A 1C=partial pdb
OverrideMaterialSystemConfigFromCommandLine()=55 8B EC 83 EC 08 56 57 8B ? ? ? ? ? 8B=partial pdb
mat_configcurrent()=53 56 8B D9 57 8B ? ? ? ? ? FF=partial pdb
void InitWellKnownRenderTargets()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? FF=partial pdb
void ShutdownWellKnownRenderTargets()=A1 ? ? ? ? B9 ? ? ? ? FF 50 34 85 C0 74 0E 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 8B ? ? ? ? ? 85 C9 74 18=partial pdb
int FindOrAddMesh()=55 8B EC 83 EC 14 53 8B D9 89 55=partial pdb
void SurfSetupSurfaceContext()=55 8B EC 83 EC 08 53 56 0F=partial pdb
ViewWeaponEntry_t::ViewWeaponEntry_t()=55 8B EC C7=partial pdb
static void CMapLoadHelper::Init()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 40=partial pdb
static void CMapLoadHelper::Shutdown()=A1 ? ? ? ? 48 A3 ? ? ? ? 56=partial pdb
char near * CMapLoadHelper::GetDiskName()=8B 41 20 8D ? ? ? ? ? ? 2B D0 83=partial pdb
bool Map_CheckForHDR()=53 8B D9 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 3A=partial pdb
void Mod_LoadWorldlights()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 88=partial pdb
void CL_CheckForPureServerWhitelist()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 57 51=partial pdb
CalcSurfaceExtents()=55 8B EC 83 EC 4C F3=partial pdb
void Mod_LoadLump()=55 8B EC 81 ? ? ? ? ? 56 57 51 8B F9 8D ? ? ? ? ? 52=partial pdb
void Mod_LoadNodes()=55 8B EC 81 ? ? ? ? ? 53 56 57 51 6A 05=partial pdb
void Mod_LoadLeafs_Version_1()=55 8B EC 83 EC 30 53 56 57 8B F9=partial pdb
void Mod_LoadCubemapSamples()=55 8B EC 81 ? ? ? ? ? 53 56 57 51 6A 2A=partial pdb
void CMDLCacheNotify::ComputeModelFlags()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 53 56 57 8B 01=partial pdb
virtual void CMDLCacheNotify::OnCombinerPreCache()=55 8B EC 8B ? ? ? ? ? 57 FF=partial pdb
void CollisionBSPData_LinkPhysics()=56 8B F1 8D 4E 04 E8=partial pdb
virtual void CModelLoader::UnMountCompatibilityPaths()=55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 83=partial pdb
virtual void CModelLoader::PurgeUnusedModels()=53 56 8B ? ? ? ? ? 8B D9 57 8B ? ? ? ? ? 83=partial pdb
bool Mod_NeedsLightstyleUpdate()=0F ? ? ? ? ? ? 56 57 66 85=partial pdb
Mod_ComputeBrushModelFlags()=55 8B EC 83 EC 30 8B C1=partial pdb
int Mod_GetMaterialCount()=55 8B EC 83 EC 20 8B ? ? ? ? ? 89 4D F4=partial pdb
int Mod_GetModelMaterials()=55 8B EC 51 53 8B D9 56 57 8B FA 33=partial pdb
vgui::ClickPanel::ClickPanel()=55 8B EC 83 EC 0C A1 ? ? ? ? 56 57=partial pdb
void CModelLoader::Map_LoadModelGuts()=55 8B EC 81 ? ? ? ? ? FF ? ? ? ? ? 53=partial pdb
virtual void CModelLoader::Studio_ReloadModels()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 89 75 FC 57=partial pdb
void CModelLoader::DumpVCollideStats()=55 8B EC 83 EC 3C 53 56 57 0F=partial pdb
void CModelLoader::Studio_UnloadModel()=55 8B EC 81 ? ? ? ? ? 57 8B 7D 08 F7=partial pdb
virtual void CModelLoader::Print()=55 8B EC 83 EC 08 53 8B ? ? ? ? ? 56 57 8B F9=partial pdb
virtual bool CModelLoader::Map_IsValid()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 85 F6 0F ? ? ? ? ? 80 3E 00 0F ? ? ? ? ? 80=partial pdb
enum modtype_t CModelLoader::GetTypeFromName()=55 8B EC 8B 4D 08 56 E8 ? ? ? ? 8B F0 85 F6 74=partial pdb
bool CModelLoader::ProcessWeaponModelCacheOperations()=55 8B EC 83 EC 08 57 8B F9 C6=partial pdb
void CModelLoader::DumpWeaponModelCache()=55 8B EC 83 EC 3C 80 ? ? ? ? ? ? 0F=partial pdb
void CModelLoader::InternalUpdateDynamicModels()=55 8B EC 83 EC 10 53 8B D9 56 89=partial pdb
RenderToAtlasedTexture()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? B9 ? ? ? ? 53=partial pdb
void CModelLoader::DebugPrintDynamicModels()=55 8B EC 83 EC 08 53 56 57 8B ? ? ? ? ? 68=partial pdb
CWingedEdgeList::CWingedEdgeList()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
bool CWingedEdgeList::AdvanceActiveEdgeList()=F3 ? ? ? ? ? ? ? 8B D1 53 56 57=partial pdb
void CWingedEdgeList::QueueVisualization()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 89=partial pdb
CEdgeList::CEdgeList()=A1 ? ? ? ? 56 8B F1 68 ? ? ? ? C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? 8B=partial pdb
virtual int vgui::Label::AddImage()=55 8B EC 83 EC 08 8B C1 8B ? ? ? ? ? 53=partial pdb
void CEdgeList::AddEdge()=55 8B EC 83 EC 08 56 8B 75 08 57 8B F9 8B=partial pdb
void CEdgeList::CullSmallOccluders()=55 8B EC 83 EC 0C 53 56 57 8B D9 68=partial pdb
void CEdgeList::IntroduceNewActiveEdges()=53 56 8B F1 0F 28 D9=partial pdb
void MIX_ScalePaintBuffer()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B 73 08=partial pdb
virtual void COcclusionSystem::SetView()=55 8B EC 83 E4 F8 83 EC 08 8B D1=partial pdb
virtual void CShadowMgr::DrawVolumetrics()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 83 ? ? ? ? ? ? 53 56 57 0F=partial pdb
void COverlayMgr::DrawBatches()=55 8B EC 53 57 8B 7D 08 8B D9 FF=partial pdb
virtual void COverlayMgr::RenderAllUnlitOverlays()=55 8B EC 51 53 56 8B F1 33 DB 57 8B=partial pdb
virtual void COverlayMgr::CreateFragments()=55 8B EC 83 E4 F8 83 EC 30 8B D1=partial pdb
void COverlayMgr::BuildStaticBuffers()=55 8B EC 81 ? ? ? ? ? 53 8B D1=partial pdb
virtual void COverlayMgr::ReSortMaterials()=55 8B EC 83 E4 F8 83 EC 64 53 8B=partial pdb
GetPortalScreenExtents()=55 8B EC 83 EC 40 8B 45 08=partial pdb
R_FlowThroughArea()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 89=partial pdb
void R_DecalGetMaterialAndSize()=55 8B EC 83 EC 0C 56 8B F2=partial pdb
void R_DecalInit()=51 8B ? ? ? ? ? 56 57 81=partial pdb
void R_DecalUnlink()=53 56 8B F1 57 85 F6=partial pdb
DecalDepthCompare()=55 8B EC 8B 45 08 8A ? ? ? ? ? 8B=partial pdb
R_DecalShoot_()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 8B 43 0C=partial pdb
void decalcontext_t::InitSurface()=55 8B EC 83 EC 08 53 8B 5D 08 89 4D=partial pdb
void KeyValuesJSONParser::ParseNumberToken()=55 8B EC 83 EC 08 53 56 8B D9 B9=partial pdb
char const near * Draw_DecalNameFromIndex()=55 8B EC 0F B7 45 08 8D=partial pdb
void Linefile_Read_f()=55 8B EC 83 E4 F8 8B ? ? ? ? ? 81 ? ? ? ? ? 83=partial pdb
int CJob::Execute()=57 8B F9 8B 47 0C 83 F8 01=partial pdb
virtual void CShadowMgr::LevelShutdown()=56 8B F1 80 ? ? ? ? ? ? 74 33=partial pdb
virtual bool vgui::PropertySheet::RequestFocusPrev()=55 8B EC 57 FF 75 08 8B F9 E8 ? ? ? ? FF 75 08 8D=partial pdb
void CShadowMgr::FreeVertices()=55 8B EC 8B 45 08 0F B7=partial pdb
bool CShadowMgr::AddDecalToShadowList()=55 8B EC 83 EC 1C A1 ? ? ? ? 53=partial pdb
void CShadowMgr::RemoveShadowDecalFromSurface()=55 8B EC 83 EC 08 0F B7 45=partial pdb
virtual int CShadowMgr::GetShadowsOnModel()=55 8B EC 56 8B 75 08 B8 ? ? ? ? 57=partial pdb
virtual void CEngineClient::GetViewAngles()=55 8B EC 51 53 57 8B F9 8D=partial pdb
virtual void CShadowMgr::PopFlashlightScissorBounds()=55 8B EC 51 53 56 8B F1 8B ? ? ? ? ? 8B=partial pdb
virtual void CShadowMgr::DrawFlashlightDepthTexture()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B D1=partial pdb
int ParseFloats()=55 8B EC 53 56 8B F1 8B DA=partial pdb
int ParseDirective()=55 8B EC 83 EC 20 56 8B F1 85=partial pdb
void V_RenderView()=55 8B EC 83 EC 14 53 56 57 8B ? ? ? ? ? 8B CF 8B 07 FF=partial pdb
bool Shader_LeafContainsTranslucentSurfaces()=55 8B EC 8B 45 08 8B ? ? ? ? ? 8B 45=partial pdb
virtual bool CEngineClient::CopyLocalFile()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 6A 00 FF 75 18=partial pdb
void CBspDebugLog::AddBrush()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? A1=partial pdb
void CSerializedEntity::Clear()=56 8B F1 B8 ? ? ? ? 66=partial pdb
void CSerializedEntity::ReservePathAndOffsetMemory()=55 8B EC 53 56 8B F1 57 0F B7 16=partial pdb
virtual void CMsgSteamDatagramRouterHealth::Clear()=8B 41 38 84 C0 74 3F=partial pdb
void RecvProxy_Int64ToInt64()=55 8B EC 8B 4D 08 8B 41 04 3B 41 08 73 22=partial pdb
void protobuf_AssignDesc_steamdatagram_5fmessages_2eproto()=55 8B EC 83 E4 F8 83 EC 44 53 56 33=partial pdb
virtual void CNETMsg_File::Clear()=8B 41 18 84 C0 74 2F=partial pdb
virtual int CSVCMsg_Prefetch::ByteSize()=56 57 8B F9 33 F6 80 7F 10 00 74 2C=partial pdb
virtual void CSVCMsg_UpdateStringTable::Clear()=8B 41 18 84 C0 74 31=partial pdb
virtual int CSVCMsg_ServerInfo::ByteSize()=55 8B EC 83 E4 F8 51 53 56 57 8B F9 33 F6 80=partial pdb
virtual void CSVCMsg_SendTable::Clear()=56 8B F1 57 8B 46 24 84 C0 74 2A=partial pdb
virtual void CSVCMsg_CreateStringTable::Clear()=80 79 2C 00 74 6F=partial pdb
virtual void CSVCMsg_VoiceInit::Clear()=8B 41 18 84 C0 74 30=partial pdb
virtual void CSVCMsg_VoiceData::Clear()=8B 41 34 84=partial pdb
void std::_Func_class<void,>::_Set()=55 8B EC 8B 45 08 89 41 24 5D=partial pdb
virtual void CSVCMsg_GameEvent::Clear()=56 8B F1 57 80 7E 28=partial pdb
CSVCMsg_TempEntities::CSVCMsg_TempEntities()=A1 ? ? ? ? 56 6A 1C 8B 08 8B 01 FF 50 04 8B F0 85 F6 74 32=partial pdb
virtual void CSVCMsg_TempEntities::Clear()=8B 41 18 84 C0 74 2E=partial pdb
virtual int CNETMsg_SetConVar::ByteSize()=56 57 8B F9 33 F6 39 77 08 7E 1A=partial pdb
CDemoPlayer::CDemoPlayer()=56 57 8B F9 0F 57 C0=partial pdb
virtual CBaseClient::~CBaseClient()=53 8B D9 B9 ? ? ? ? 56 57 53=partial pdb
void CBaseClient::SetSignonState()=55 8B EC 53 56 8B F1 57 8B 46=partial pdb
virtual void CBaseClient::Clear()=57 8B F9 8B ? ? ? ? ? 85 C9 74 1C=partial pdb
virtual bool CBaseClient::ProcessSignonStateMsg()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 8B 43=partial pdb
virtual void CBaseClient::ActivatePlayer()=56 68 ? ? ? ? 8B F1 FF ? ? ? ? ? 8B=partial pdb
virtual void CBaseClient::SpawnPlayer()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 68 ? ? ? ? 8B F9 FF ? ? ? ? ? 8B 47=partial pdb
virtual void CBaseClient::Disconnect()=55 8B EC 83 EC 34 57 8B F9 83 ? ? ? ? ? ? 0F=partial pdb
void CBaseClient::FireGameEvent()=55 8B EC 83 EC 4C 53 56 8B D9 C7=partial pdb
virtual void CBaseClient::OnSteamServerLogonSuccess()=55 8B EC 83 ? ? ? ? ? ? 74 63=partial pdb
void CBaseClient::OnPlayerAvatarDataChanged()=55 8B EC 51 53 33=partial pdb
void CBaseClient::ApplyConVars()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B 7D 08 33=partial pdb
bool CBaseClient::CLCMsg_BaselineAck()=55 8B EC 51 8B 45 08 57 8B=partial pdb
void CBaseClient::TraceNetworkData()=55 8B EC 81 ? ? ? ? ? 57 8B 7D 08 83 ? ? ? ? ? ? 74=partial pdb
virtual bool CBaseClient::ShouldSendMessages()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B 46 04 8D 4E 04 8B ? ? ? ? ? FF D0 84 C0 74=partial pdb
virtual void CBaseClient::UpdateSendState()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? C6=partial pdb
virtual void CBaseClient::UpdateUserSettings()=53 56 8B D9 57 68 ? ? ? ? 68=partial pdb
void CBaseClient::OnRequestFullUpdate()=55 8B EC 56 8B F1 8B ? ? ? ? ? 85 C9 74 0F=partial pdb
virtual bool CBaseClient::IgnoreTempEntity()=55 8B EC 8B 41 04 83 C1=partial pdb
void HostValidateSessionImpl()=55 8B EC 83 E4 F8 83 EC 54 80=partial pdb
bool CBaseClient::IsSplitScreenPartner()=55 8B EC 56 8B 75 08 57 8B F9 85 F6 74 36=partial pdb
virtual int CBaseClient::GetNumPlayers()=56 8B F1 8B 06 8B ? ? ? ? ? FF D0 84 C0 74 18 8B 4E=partial pdb
virtual void CGameClient::SetRate()=56 8B F1 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0F A1=partial pdb
CGameClient::CGameClient()=55 8B EC 53 56 57 8B F9 E8 ? ? ? ? 8D=partial pdb
virtual bool CGameClient::SVCMsg_UserMessage()=55 8B EC 53 56 8B 75 08 8B D9 57 8B 56=partial pdb
void CGameClient::SetupPackInfo()=55 8B EC 51 53 56 57 8B F9 8B ? ? ? ? ? 8D=partial pdb
virtual void CGameClient::Inactivate()=55 8B EC 83 E4 F8 83 EC 0C 56 8B=partial pdb
virtual void CGameClient::Clear()=55 8B EC 83 EC 08 56 8B F1 80 ? ? ? ? ? ? 74 3E=partial pdb
virtual bool CGameClient::ProcessSignonStateMsg()=55 8B EC 56 8B 75 08 57 8B F9 83 FE=partial pdb
virtual void CGameClient::WriteGameSounds()=55 8B EC 83 EC 44 56 8B F1 83=partial pdb
virtual bool CGameClient::SendSignonData()=55 8B EC 83 EC 44 80=partial pdb
void InitializeEntityDLLFields()=55 8B EC 83 EC 68 80=partial pdb
void CGameClient::WriteViewAngleUpdate()=55 8B EC 83 EC 40 56 57=partial pdb
virtual bool CGameClient::SendNetMsg()=55 8B EC 57 8B F9 80 ? ? ? ? ? ? 74 4E=partial pdb
virtual bool CGameClient::CanStartHltvReplay()=55 8B EC 51 56 57 8B F9 C7 ? ? ? ? ? ? 8D=partial pdb
virtual bool CGameClient::StartHltvReplay()=55 8B EC 83 E4 F8 83 EC 78=partial pdb
void CGameClient::StepHltvReplayStatus()=56 8B F1 83 ? ? ? ? ? ? 0F ? ? ? ? ? 8B ? ? ? ? ? 85=partial pdb
virtual void CGameClient::FileRequested()=55 8B EC 56 8B F1 57 8B ? ? ? ? ? 8B 01 FF 50 04 8B 7D 08 50 57 68 ? ? ? ? FF ? ? ? ? ? A1 ? ? ? ? 83 C4 0C B9 ? ? ? ? FF 50 34 FF=partial pdb
virtual void CGameClient::PacketStart()=55 8B EC A1 ? ? ? ? 53 56 BE=partial pdb
class CClientFrame near * CGameClient::GetSendFrame()=55 8B EC 83 EC 08 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
SV_WritePropsFromPackedEntity()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 80 ? ? ? ? ? ? 0F=partial pdb
bool Filter_IsUserBanned()=55 8B EC 83 EC 08 53 56 8B F1 8B ? ? ? ? ? 81=partial pdb
bool Filter_ConvertString()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B DA C7=partial pdb
removeip()=55 8B EC 83 E4 F8 83 EC 24 53 56 8B 75 08 57=partial pdb
bool Filter_ShouldDiscard()=55 8B EC 83 EC 08 57 8B F9 8B ? ? ? ? ? 81=partial pdb
SV_AddToFatPVS()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 6A=partial pdb
virtual void CColorLevelsUIPanel::OnTextChanged()=55 8B EC 83 EC 08 8B 11=partial pdb
void FnChangeCallback_logaddress_token_secret()=55 8B EC 83 E4 F8 51 8B 45 08 B9=partial pdb
helper_logaddress_add()=55 8B EC 83 EC 2C 56 57 6A=partial pdb
void CLog::PrintServerVars()=51 80 ? ? ? ? ? ? 56 57 0F=partial pdb
virtual void CLog::FireGameEvent()=55 8B EC 83 EC 10 57 8B F9 80 7F 08=partial pdb
virtual void CBaseClient::ClientPrintf()=55 8B EC 8B 45 08 F3 0F 7E=partial pdb
void CGameServer::CreateEngineStringTables()=55 8B EC 83 EC 0C 53 8B ? ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
virtual void CGameServer::Init()=55 8B EC 56 FF 75 08 8B F1 E8 ? ? ? ? 80 7D=partial pdb
bool CBaseServer::IsSinglePlayerGame()=80 ? ? ? ? ? ? 75 0C 83 ? ? ? ? ? ? 7F 03 B0=partial pdb
vprof_playback_start()=55 8B EC 83 EC 60 53 56 8B D9=partial pdb
void CVoiceWriter::AddDecompressedData()=55 8B EC 83 EC 34 83 ? ? ? ? ? ? 56 8B=partial pdb
virtual CClientState::~CClientState()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 FF 74 1E=partial pdb
void CGameServer::SetHibernating()=55 8B EC 83 EC 18 80 ? ? ? ? ? ? 53 56 57=partial pdb
void CGameServer::UpdateHibernationState()=55 8B EC 83 E4 C0 83 EC 34 53 8B D9 56 57 89=partial pdb
UpdateVisibleLeafLists()=55 8B EC 81 ? ? ? ? ? 53 0F=partial pdb
void SV_ParallelSendSnapshot()=55 8B EC 56 8B 75 08 8B 0E=partial pdb
void SV_BroadcastVoiceData()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B D9 8B=partial pdb
bool SV_ActivateServer()=55 8B EC 83 E4 F8 83 EC 0C 53 8B ? ? ? ? ? 56=partial pdb
void CGameServer::ReloadWhitelist()=55 8B EC 83 E4 F8 A1 ? ? ? ? 81 ? ? ? ? ? 56 57=partial pdb
bool CGameServer::SpawnServer()=55 8B EC 81 ? ? ? ? ? 53 56 8B D9 57 89 5D F8 E8 ? ? ? ? FF=partial pdb
void SV_SendClientUpdates()=55 8B EC 51 A0 ? ? ? ? 8B=partial pdb
void SV_Frame()=55 8B EC 83 EC 14 8B D1 8B=partial pdb
void CServerPlugin::LoadPlugins()=56 8B F1 8B ? ? ? ? ? 85 C9 74 2A=partial pdb
bool CPlugin::Load()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 8B 5D=partial pdb
bool CServerPlugin::LoadPlugin()=55 8B EC A1 ? ? ? ? 83 EC 08 8B=partial pdb
plugin_pause_all()=56 33 F6 39 ? ? ? ? ? 7E 29 57 0F 1F 40 00 A1 ? ? ? ? 8B 3C B0 8B ? ? ? ? ? 8B 01 FF 50 08=partial pdb
plugin_unpause_all()=56 33 F6 39 ? ? ? ? ? 7E 29 57 0F 1F 40 00 A1 ? ? ? ? 8B 3C B0 8B ? ? ? ? ? 8B 01 FF 50 0C=partial pdb
virtual void CRConServer::OnSocketClosed()=55 8B EC 56 8B 75 10 C6=partial pdb
void SV_RedirectStart()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 8B=partial pdb
R_DecalAlloc()=55 8B EC 83 EC 10 8B ? ? ? ? ? 89 4D=partial pdb
void SV_RedirectFlush()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 83=partial pdb
virtual int CServerRemoteAccess::ReadDataResponse()=55 8B EC 83 EC 08 8B 55 08 8B=partial pdb
VOX_BuildVirtualNameList()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 56=partial pdb
void CUtlBuffer::Printf()=55 8B EC 83 EC 08 8B C1 89 45 F8 83=partial pdb
void CSteam3Server::Activate()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 53 56 8B D9=partial pdb
bool CSteam3Server::NotifyLocalClientConnect()=55 8B EC 83 EC 10 81=partial pdb
void CSteam3Server::SendUpdatedServerDetails()=55 8B EC 83 EC 14 53 8B D9 56 57 89 5D F4 83=partial pdb
void InvalidateSharedEdictChangeInfos()=66 ? ? ? ? ? B9 ? ? ? ? 66 3B C1 75 64=partial pdb
void SeedRandomNumberGenerator()=55 8B EC 83 EC 08 84=partial pdb
virtual int CVEngineServer::GetLocalClientIndex()=80 ? ? ? ? ? ? 74 03 33 C0 C3 A1 ? ? ? ? 8B=partial pdb
virtual int CVEngineServer::GetPlayerUserId()=55 8B EC 83 ? ? ? ? ? ? 7C 46=partial pdb
virtual bool CVEngineServer::IsUserIDInUse()=55 8B EC 83 ? ? ? ? ? ? 7D 06 32=partial pdb
void CHostState::OnClientConnected()=55 8B EC 83 E4 C0 83 EC 38 56 57 8B 7D 08 2B=partial pdb
virtual int CVEngineServer::CheckHeadnodeVisible()=55 8B EC FF 75 10 8B 55 0C 8B 4D 08 E8 ? ? ? ? 83 C4 04 0F=partial pdb
virtual void CVEngineServer::ClientCommand()=55 8B EC 83 EC 34 8D=partial pdb
virtual void CVEngineServer::SetView()=55 8B EC 83 EC 34 56 57=partial pdb
virtual void CVEngineServer::CrosshairAngle()=55 8B EC 83 EC 34 56 8B 75 08 2B=partial pdb
virtual bool CVEngineServer::GetEngineHltvInfo()=55 8B EC 56 57 8B 7D 08 6A=partial pdb
class ISpatialPartition near * CreateSpatialPartition()=55 8B EC A1 ? ? ? ? 56 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 0B 8B C8 E8 ? ? ? ? 8B F0 EB 02 33 F6 FF=partial pdb
virtual bool CVEngineServer::HasHltvReplay()=55 8B EC 51 8D 4D FC=partial pdb
void CLocalNetworkBackdoor::ForceFlushEntity()=55 8B EC 8B ? ? ? ? ? 85 C9 74 3E=partial pdb
virtual int CModelInfo::GetModelMaterials()=55 8B EC 8B 45 0C 8B D1 83=partial pdb
bool CServerRemoteAccess::LookupValue()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 8B=partial pdb
ServerNotifyVarChangeCallback()=55 8B EC 56 8B 75 08 8B CE 68=partial pdb
virtual CBaseServer::~CBaseServer()=56 8B F1 C7 ? ? ? ? ? E8 ? ? ? ? C7=partial pdb
virtual char const near * CBaseServer::GetPassword()=F7 ? ? ? ? ? ? ? ? ? 56 74 07 BE ? ? ? ? EB 17=partial pdb
void CHLTVServer::ReadCompleteDemoFile()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8B F9 C7=partial pdb
virtual void CBaseServer::UserInfoChanged()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 8B F1 57 83=partial pdb
virtual void CBaseServer::ReplyChallenge()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B 5D 08 56 57 53=partial pdb
virtual int CBaseServer::GetChallengeType()=8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF D0 84 C0 75 09=partial pdb
virtual void CBaseServer::CalculateCPUUsage()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 3C=partial pdb
void CBaseServer::InactivateClients()=55 8B EC 51 53 56 8B D9 57 33 FF 39 ? ? ? ? ? 7E=partial pdb
void CBaseServer::ReconnectClients()=55 8B EC 83 E4 F8 83 EC 54 53 8B C1=partial pdb
void CBaseServer::CheckTimeouts()=55 8B EC 81 ? ? ? ? ? 8B C1 53 33=partial pdb
virtual void CBaseServer::Clear()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0F 8B 01 FF 50 08=partial pdb
virtual void CBaseServer::RejectConnection()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8D 45 14=partial pdb
virtual void CBaseServer::SetPaused()=55 8B EC 83 EC 34 56 8B F1 83 7E=partial pdb
void CBaseServer::UpdateMasterServer()=55 8B EC 83 EC 08 53 56 8B F1 8B 06=partial pdb
void CBaseServer::RecalculateTags()=55 8B EC 83 EC 64 53 8B D9 56 57 89=partial pdb
void CBaseServer::RemoveTag()=55 8B EC 81 ? ? ? ? ? B9 ? ? ? ? 53=partial pdb
virtual bool CAudioSourceCache::Init()=55 8B EC 83 EC 1C 53 56 8B 75 0C 89=partial pdb
void CBaseServer::UpdateGameType()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B F9 6A=partial pdb
virtual char const near * CBlackBox::Get()=55 8B EC 8B 45 08 83 F8 02 76 06 33 C0 5D C2 08=partial pdb
virtual void CBlackBox::Flush()=56 8B F1 57 33 FF 39 7E 0C 7E 32=partial pdb
virtual CBlockingUDPSocket::~CBlockingUDPSocket()=55 8B EC 56 8B F1 68 ? ? ? ? FF 76=partial pdb
void CBugUIPanel::GetDataFileBase()=55 8B EC 81 ? ? ? ? ? 8D 45 DC 56=partial pdb
void CBugUIPanel::OnTakeSnapshot()=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? 89 ? ? ? ? ? C6=partial pdb
virtual void CDebugIncrementCVarButton::OnTick()=55 8B EC 81 ? ? ? ? ? 57 8B F9 8B ? ? ? ? ? 85=partial pdb
virtual void CBugUIPanel::OnDirectorySelected()=55 8B EC 53 56 57 8B F9 8D=partial pdb
void PreparePanelMessageMap()=55 8B EC 57 8B 7D 08 85 FF 0F ? ? ? ? ? 8B=partial pdb
void CBugUIPanel::OnSubmit()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 57 89=partial pdb
void vgui::TextEntry::CreateEditMenu()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 85=partial pdb
virtual bool CEngineBugReporter::ShouldPause()=8B ? ? ? ? ? 85 C9 74 2D 8B 01 8B=partial pdb
virtual void CBaseServer::FillServerInfo()=55 8B EC 81 ? ? ? ? ? 53 56 57 68 ? ? ? ? 8D=partial pdb
bool CalcBarycentricCooefs()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 08 56 8B F1 8B 4B 08 57 8B FA=partial pdb
void CCoreDispInfo::CalcDispSurfCoords()=55 8B EC 83 EC 3C 8B 45=partial pdb
void CCoreDispInfo::GenerateDispSurfTangentSpaces()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 1C 8B=partial pdb
InterpSpeakerVol()=55 8B EC 83 EC 14 F3 ? ? ? ? ? ? ? 8B D1=partial pdb
void CCoreDispInfo::GenerateDispSurfNormals()=55 8B EC 83 EC 1C 8B D1=partial pdb
bool CCoreDispInfo::Create()=51 56 57 8B F9 83=partial pdb
void CCoreDispInfo::CreateTris()=8B C1 83 ? ? ? ? ? ? 74=partial pdb
CChangeFrameList::CChangeFrameList()=55 8B EC 53 56 8B F1 57 8B 7D 08 C7=partial pdb
bool CRC_MapFile()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 89 4D=partial pdb
virtual float CBoundedCvar_UpdateRate::GetFloat()=55 8B EC 8B 51 1C 83 EC 0C=partial pdb
GetClockAdjustmentAmount()=55 8B EC 83 EC 10 8B ? ? ? ? ? F3=partial pdb
void ChannelSetVolTargets()=55 8B EC 80 ? ? ? ? ? ? 53 56 8B=partial pdb
void Cbuf_Execute()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF ? ? ? ? ? 84=partial pdb
CMPAException::CMPAException()=55 8B EC 83 EC 10 53 56 57 8B ? ? ? ? ? 8B=partial pdb
echo()=55 8B EC 8B ? ? ? ? ? 53 8B 5D 08 56 BE=partial pdb
alias()=55 8B EC 8B 55 08 81 ? ? ? ? ? 53=partial pdb
void Cmd_ForwardToServer()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 06 85=partial pdb
void PushTraceVisits()=FF ? ? ? ? ? 8B ? ? ? ? ? 83 ? ? ? ? ? ? ? 75 44=partial pdb
void R_DecalLeaf()=55 8B EC 83 E4 F8 83 EC 18 83=partial pdb
int CM_TransformedPointContents()=55 8B EC 83 EC 38 8B 45 08=partial pdb
void CM_TestBoxInBrush()=55 8B EC 83 E4 F8 0F 10=partial pdb
void CM_GetTraceDataForBSP()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? F3 0F 10 22=partial pdb
void DisplaySystemVersion()=55 8B EC 51 56 8B F1 8B ? ? ? ? ? 57 8B=partial pdb
int CM_WriteAreaBits()=55 8B EC 83 EC 08 53 56 8B 75 08 89 4D FC=partial pdb
bool CM_GetAreaPortalPlane()=55 8B EC 51 89 55=partial pdb
void CM_WorldSpaceCenter()=55 8B EC 83 EC 10 53 56 8B F1 8B=partial pdb
void CM_WorldSpaceBounds()=55 8B EC 53 56 57 8B F9 8B DA 8B 07 FF=partial pdb
int CFastPointLeafNum::GetLeaf()=55 8B EC 8B 55 08 53 56 8B F1 57 8B 06=partial pdb
bool CM_RecursiveOcclusionPass()=55 8B EC 83 E4 F8 83 EC 20 56 57 8B F9 F3=partial pdb
void CollisionBSPData_Destroy()=53 56 8B F1 57 33 FF 39 ? ? ? ? ? 7E=partial pdb
void NET_RemoveAllExtraSockets()=55 8B EC 81 ? ? ? ? ? 53 56 57 51 8B D9 8D ? ? ? ? ? 6A 02=partial pdb
bool CollisionBSPData_Load()=55 8B EC 81 ? ? ? ? ? 56 8B F1 51=partial pdb
virtual void CVirtualTerrain::GetWorldspaceBounds()=55 8B EC 8B 45 08 8B ? ? ? ? ? 8B 4D=partial pdb
virtual void vgui::PropertySheet::PerformLayout()=55 8B EC 83 EC 14 53 56 57 51 51=partial pdb
bool CStaticProp::Init()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 68 F3=partial pdb
void AngleVectors()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 40 F3 ? ? ? ? 8B=partial pdb
bool IntersectRayWithBox()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 8B 01=partial pdb
void GetBumpNormals()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? F3 0F 10 01=partial pdb
void ImageLoader::ConstructGammaTable()=55 8B EC 81 ? ? ? ? ? F3 ? ? ? ? F3=partial pdb
bool COM_CopyFile()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 8B F1 8B ? ? ? ? ? 57 83=partial pdb
void COM_CopyFileChunk()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B F1 89=partial pdb
unsigned char near * COM_LoadStackFile()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 0C 89 ? ? ? ? ? C7=partial pdb
void COM_SetupLogDir()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 57 8B F9 BE ? ? ? ? 8B C8 2B F1 0F 1F 40 00 8A 14 06 84 D2 74 0D=partial pdb
char const near * COM_GetModDirectory()=55 8B EC 51 B9=partial pdb
char const near * COM_DXLevelToString()=53 56 8B F1 32 DB 8B=partial pdb
char const near * COM_FormatSeconds()=51 56 57 8B F9 B8=partial pdb
void ClientDLL_VoiceStatus()=55 8B EC FF 75 0C FF 75 08 FF ? ? ? ? ? 5D=partial pdb
bool CCvarUtilities::IsCommand()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B 3B=partial pdb
CVarSortFunc()=55 8B EC 8B 45 0C 56 8B 08=partial pdb
int FindFlagsCompletionCallback()=55 8B EC 51 8B 55 08 8B CA=partial pdb
findflags()=55 8B EC 51 8B 4D 08 56 57 8B=partial pdb
int _V_UTF8ToUnicode()=55 8B EC 57 8B FA 33=partial pdb
FindNeighborCornerVert()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 18 F3=partial pdb
UpdateTangentSpace()=55 8B EC 53 8B D9 56 57 8B FA=partial pdb
BuildDispSurfInit()=55 8B EC 8B 45 08 53 56 57 8B 30=partial pdb
bool CDispCollTree::AABBTree_Ray()=55 8B EC 83 EC 0C 53 56 8B 75 08 8B D9 57 51=partial pdb
bool CL_FileDenied()=55 8B EC 8B ? ? ? ? ? 85 C9 75 06 32 C0 5D C2 0C=partial pdb
bool CL_DownloadUpdate()=56 8B ? ? ? ? ? 83 EE 01 78 7F=partial pdb
void DownloadManager::CheckActiveDownload()=55 8B EC 8B ? ? ? ? ? 83 EC 08 85 C9 0F=partial pdb
void CDownloadListGenerator::OnLevelLoadStart()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B ? ? ? ? ? 85=partial pdb
void CDownloadListGenerator::OnResourcePrecached()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 4D 08=partial pdb
void CDownloadListGenerator::ForceExactFile()=55 8B EC 81 ? ? ? ? ? 8B C1 89=partial pdb
void CDownloadListGenerator::ForceModelBounds()=55 8B EC 81 ? ? ? ? ? 53 57 8B F9=partial pdb
void CleanUpDownload()=55 8B EC 8B 45 08 56 8B F1 57 8B ? ? ? ? ? 89=partial pdb
unsigned int DownloadThread()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? C7=partial pdb
CDeltaBitsWriter::CDeltaBitsWriter()=55 8B EC 56 8B 75 08 57 8B F9 B9=partial pdb
CDeltaBitsWriter::~CDeltaBitsWriter()=56 57 8B F9 8B 17=partial pdb
void CDeltaBitsWriter::WritePropIndex()=55 8B EC 8B 45 08 8B D1 56 8B=partial pdb
CDeltaBitsReader::CDeltaBitsReader()=55 8B EC 8B 55 08 C7 ? ? ? ? ? ? 89=partial pdb
virtual void CBugUIPanel::ClearBugSubmissionCount()=8B D1 C7 ? ? ? ? ? 8D=partial pdb
bool CNetworkStringTable::ReadStringTable()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 8B=partial pdb
virtual void CModelLoader::Init()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 57 89 5D F8 8B=partial pdb
bool Sendprop_UsingDebugWatch()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 83 F8 FF=partial pdb
CExpressionCalculator::CExpressionCalculator()=55 8B EC 8B 45 10 83 EC 14=partial pdb
DecodeVector()=55 8B EC 83 E4 F8 83 EC 08 56 8B C1 8B=partial pdb
void Generic_FastCopy()=55 8B EC 83 E4 F8 83 EC 2C 8B 55 08=partial pdb
int Int_CompareDeltas()=55 8B EC 51 56 57 8B 7D 08 8B 47=partial pdb
bool Vector_IsEncodedZero()=55 8B EC 83 EC 0C 8B 55 0C=partial pdb
void Vector_SkipProp()=55 8B EC 56 8B 75 0C 57 8B 7D 08 56=partial pdb
bool bf_write::WriteBitsFromBuffer()=55 8B EC 83 EC 08 B9 ? ? ? ? 53=partial pdb
void String_DecodeZero()=55 8B EC 8B 4D 08 8D 41 38=partial pdb
int Int64_CompareDeltas()=55 8B EC 83 E4 F8 8B 4D 08 83 EC 14=partial pdb
void DTI_Init()=55 8B EC 81 ? ? ? ? ? FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 74=partial pdb
void DTI_Flush()=55 8B EC 83 E4 C0 83 EC 34 80 ? ? ? ? ? ? 53 56 57=partial pdb
void ServerDTI_Term()=0F ? ? ? ? ? ? 53 BB ? ? ? ? 66 ? ? ? ? ? ? 74=partial pdb
_RecvTable_Init_::_4_::CPropVisitor::Visit_R()=56 8B F1 80 7E 11 00=partial pdb
void RecvTable_DecodeZeros()=55 8B EC 81 ? ? ? ? ? 56 8B 71=partial pdb
void CWorldRenderList::QueueDecalSurf()=55 8B EC 53 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
virtual void CPropCullStack::RecurseAndCallProxies()=55 8B EC 51 53 8B 5D 08 56 8B F1 B9=partial pdb
ShowEncodeDeltaWatchInfo()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 0C 8B D9 57=partial pdb
int SendTable_WriteAllDeltaProps()=55 8B EC 83 EC 34 56 8D 45 CC=partial pdb
void CM_NullVis()=55 8B EC 83 E4 C0 83 EC 34 53 56 8B ? ? ? ? ? 57 33=partial pdb
virtual int CEngineTrace::GetBrushInfo()=55 8B EC 51 57 8B 7D 08 85 FF 0F ? ? ? ? ? 3B=partial pdb
bool CBlockingUDPSocket::WaitForMessage()=55 8B EC 83 EC 18 56 8D 45 F4=partial pdb
void SpinUpOcclusionJob()=55 8B EC 51 8B ? ? ? ? ? 53 56 57 85=partial pdb
virtual int COcclusionQueryJob::DoExecute()=55 8B EC 83 EC 08 53 56 57 89=partial pdb
virtual void CEngineTrace::FlushOcclusionQueries()=55 8B EC 83 EC 08 53 56 57 8B F9 89 7D FC FF=partial pdb
void FileSystem_UpdateAddonSearchPaths()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B D9 8D ? ? ? ? ? 68=partial pdb
void CopyStagedAddons()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 57 FF 75 08 8B=partial pdb
bool FileSystem_GetExecutableDir()=53 56 8B ? ? ? ? ? 57 FF D6 8B F8 FF D6 8B 17 8B F0 6A=partial pdb
FileSystem_AddLoadedSearchPath()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 0C 8B F9 8B=partial pdb
void KeyValues::SetFloat()=55 8B EC 8B 49 08 6A 01 FF 75 08 E8 ? ? ? ? 85 C0 74 0E=partial pdb
bool KeyValues::IsEmpty()=55 8B EC 8B 49 08 6A 00 FF 75 08 E8 ? ? ? ? 85 C0 75=partial pdb
virtual bool CGameEvent::ForEventData()=55 8B EC 83 EC 08 8B C1 89 45 FC 53=partial pdb
void CGameEventManager::ConPrintEvent()=55 8B EC 53 8B 5D 08 56 57 6A 00=partial pdb
void CHLTVBroadcast::StartRecording()=55 8B EC 83 E4 F8 51 56 8B F1 E8 ? ? ? ? A1=partial pdb
occlusion_test_run()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 57 89 5D F0=partial pdb
void CHLTVBroadcast::CMemoryStream::WriteCmdHeader()=55 8B EC 56 8B F1 8B 56 0C 83=partial pdb
virtual bool CHLTVClient::SendSignonData()=55 8B EC 83 EC 44 56 8B F1 8B ? ? ? ? ? 3B=partial pdb
virtual bool CHLTVClient::ProcessSignonStateMsg()=55 8B EC 53 56 FF 75 0C 8B 75=partial pdb
virtual void CHLTVClient::SpawnPlayer()=55 8B EC 83 EC 34 56 8B F1 8D=partial pdb
void SV_Think()=55 8B EC 80 7D 0C 00 56 8B F1 0F ? ? ? ? ? 80=partial pdb
virtual void CGameClient::StopHltvReplay()=55 8B EC 83 EC 4C 56 8B F1 83=partial pdb
virtual bool CHLTVClientState::NETMsg_StringCmd()=55 8B EC 8B 45 08 83 EC 34=partial pdb
virtual bool CHLTVClientState::SVCMsg_ClassInfo()=55 8B EC 8B 45 08 56 8B F1 80=partial pdb
void CHLTVClientState::ReadDeltaEnt()=55 8B EC 83 EC 1C 53 8B 5D 08 56 57=partial pdb
virtual void CHLTVClientState::RunFrame()=55 8B EC 83 EC 34 56 8B F1 83 ? ? ? ? ? ? 7D=partial pdb
void CHLTVDemoRecorder::StartAutoRecording()=55 8B EC 81 ? ? ? ? ? 8D 45 DC 53=partial pdb
void CHLTVDemoRecorder::WriteServerInfo()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 83=partial pdb
void CBaseClientState::HandleDeferredConnection()=55 8B EC 83 EC 50 56=partial pdb
virtual void CBugUIPanel::Activate()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 80=partial pdb
void CWorldRenderList::Purge()=53 56 57 8B F9 83 ? ? ? ? ? ? C7=partial pdb
void CHLTVServer::StartMaster()=55 8B EC 83 EC 10 53 56 57 8B F9 8B=partial pdb
virtual void CHLTVServer::GetLocalStats()=55 8B EC 8B ? ? ? ? ? 53 8D=partial pdb
void CHLTVServer::GetRelayStats()=55 8B EC 83 EC 08 8B 45 10 53 56=partial pdb
virtual void CHLTVServer::GetGlobalStats()=55 8B EC 56 8B F1 8B 06 8B 40 20=partial pdb
void CHLTVServer::BroadcastLocalTitle()=55 8B EC 83 EC 50 A1 ? ? ? ? 53=partial pdb
void CHLTVServer::BroadcastLocalChat()=55 8B EC 83 EC 54 A1 ? ? ? ? 53=partial pdb
void CHLTVServer::LinkInstanceBaselines()=55 8B EC 83 EC 20 53 57 8B F9=partial pdb
void CHLTVServer::EntityPVSCheck()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 83=partial pdb
void CHLTVServer::ExpandDeltaFramesToTick()=55 8B EC 83 EC 08 53 56 57 8B F9 8D=partial pdb
virtual void CHLTVServer::SendClientMessages()=53 8B D9 57 33 FF 39 ? ? ? ? ? 7E=partial pdb
void CHLTVServer::UpdateStats()=55 8B EC 83 EC 18 F2=partial pdb
bool CHLTVServer::SendNetMsg()=55 8B EC 83 E4 F8 83 EC 3C 83=partial pdb
virtual void CBlackBox::Record()=55 8B EC 51 A1 ? ? ? ? 57 8B=partial pdb
void CSteam3Server::RunFrame()=55 8B EC 83 EC 0C 53 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
void CDispInfo::TesselateDisplacement()=55 8B EC 83 E4 F8 51 53 56 57 33=partial pdb
void CHLTVDemoRecorder::WriteMessages()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 8B D9=partial pdb
bool CHLTVServer::CheckHltvPasswordMatch()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 56 57=partial pdb
HandleEngineKey()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 8D=partial pdb
sv_getinfo()=55 8B EC 57 8B 7D 08 8B 07=partial pdb
tv_record()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 83 3E 02 7D 13 68 ? ? ? ? FF ? ? ? ? ? 83 C4 04 5E 8B E5 5D C3 57=partial pdb
void OnTvBroadcast()=55 8B EC 51 53 56 57 8D 4D FC C7 ? ? ? ? ? ? E8=partial pdb
void CVProfRecorder::Playback_Restart()=55 8B EC 51 53 56 57 8D 4D FC C7 ? ? ? ? ? ? 33=partial pdb
void CFmtStrN<256,0>::AppendFormat()=55 8B EC 53 56 8B 75 08 BB=partial pdb
void ReserveThreads()=8B ? ? ? ? ? 81 ? ? ? ? ? 75 11 A1=partial pdb
threadpool_run_tests()=55 8B EC 8B 4D 08 56 8B 01 83=partial pdb
void Host_Error()=55 8B EC 81 ? ? ? ? ? 80 ? ? ? ? ? ? 74 0D=partial pdb
void WaveAppendTmpFile()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 57 68=partial pdb
void Host_WriteConfiguration()=55 8B EC 83 E4 F8 81 ? ? ? ? ? A1 ? ? ? ? 53 8B=partial pdb
void Host_ReadConfiguration()=55 8B EC 83 EC 0C 80 ? ? ? ? ? ? 53 56 8B D9 57 89 5D F8=partial pdb
void Host_AccumulateTime()=55 8B EC 83 EC 0C 8B ? ? ? ? ? 0F=partial pdb
void CDemoStreamHttp::StartStreamingCached()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 85=partial pdb
void Host_BuildConVarUpdateMessage()=55 8B EC 83 EC 08 53 56 89 4D FC=partial pdb
void CFrameTimer::MarkFrame()=55 8B EC 81 ? ? ? ? ? F2=partial pdb
void Host_CheckDumpMemoryStats()=55 8B EC A1 ? ? ? ? 83 EC 48=partial pdb
void _Host_RunFrame_Input()=55 8B EC 83 EC 10 53 8A D9 F3 ? ? ? ? 8B=partial pdb
void DFR_GetNextN_Opt()=55 8B EC 51 A1 ? ? ? ? B9 ? ? ? ? 53 56=partial pdb
void Host_ShowIPCCallCount()=55 8B EC 8B ? ? ? ? ? 83 EC 14 56=partial pdb
PrintHostFrameTimes()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 4C=partial pdb
void SV_FrameExecuteThreadDeferred()=55 8B EC 83 EC 64 53 56 57 F3=partial pdb
void Host_RunFrame()=55 8B EC 83 EC 14 80 ? ? ? ? ? ? 56=partial pdb
void NET_Init()=55 8B EC 83 E4 C0 81 ? ? ? ? ? A0=partial pdb
void Host_Shutdown()=55 8B EC 83 E4 F8 56 8B ? ? ? ? ? 57=partial pdb
unknown_libname_4()=55 8B EC 51 89 4D FC 8B 45 FC 8B 4D=partial pdb
void Host_LightCrosshair()=55 8B EC 83 EC 18 F3 ? ? ? ? ? ? ? 8D 45 E8 F3 ? ? ? ? ? ? ? 8D 55 F4 F3 0F 59 C1 B9=partial pdb
hltv_replay_status()=55 8B EC 83 E4 F8 83 EC 44 53 56 57 6A=partial pdb
ping()=55 8B EC 51 8B 4D 08 83=partial pdb
virtual void CEngineClient::SetViewAngles()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B DA 89=partial pdb
lightprobe()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8B 06 83 F8 02 7D=partial pdb
void Host_Changelevel2_f()=55 8B EC 56 8B 75 08 8B 06 83 F8 02 7D 0F 5E C7 ? ? ? ? ? ? 5D FF ? ? ? ? ? 83 ? ? ? ? ? ? 7D=partial pdb
void HostState_GameShutdown()=A1 ? ? ? ? 53 6A 00 6A=partial pdb
bool Voice_RecordStart()=55 8B EC 81 ? ? ? ? ? 53 57 8B 7D 08 33=partial pdb
void PerformKick()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 83=partial pdb
startdemos()=55 8B EC 83 EC 08 56 8B 75 08 57 8B ? ? ? ? ? 8B=partial pdb
soundfade()=55 8B EC 83 EC 1C 56 8B 75 08 8B 06 83 F8 03=partial pdb
class IAudioDevice near * Audio_CreateDirectSoundDevice()=55 8B EC 51 8B 4D 08 68=partial pdb
ss_connect()=55 8B EC 83 EC 34 83 ? ? ? ? ? ? 75 3A=partial pdb
ss_disconnect()=55 8B EC 8B 4D 08 81 ? ? ? ? ? B8=partial pdb
void CMapListManager::RefreshList()=55 8B EC 83 E4 F8 F3 ? ? ? ? ? ? ? 81 ? ? ? ? ? 0F ? ? ? ? ? ? 53=partial pdb
MapList_CountMaps()=55 8B EC 83 EC 18 53 8B C1=partial pdb
int _Host_Map_f_CompletionFunc()=55 8B EC 83 EC 58 53 56 8B D9=partial pdb
void FinishAsyncSave()=55 8B EC 83 E4 F8 51 A1 ? ? ? ? 57=partial pdb
void DispatchAsyncSave()=55 8B EC 83 E4 F8 51 53 B8=partial pdb
void SaveResetMemory()=55 8B EC 83 E4 C0 83 EC 3C 56 E8=partial pdb
void CSaveRestore::AgeSaveFile()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B 07 8B=partial pdb
virtual int CSaveRestore::IsValidSave()=8B ? ? ? ? ? 8B 01 8B 40 10 FF D0 84 C0 75 17=partial pdb
virtual void CSaveRestore::UpdateSaveGameScreenshots()=80 ? ? ? ? ? ? 74 08 C6=partial pdb
virtual bool CSaveRestore::LoadGame()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 C6=partial pdb
virtual bool CSaveRestore::SaveGameState()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 8B ? ? ? ? ? 57=partial pdb
virtual void CSaveRestore::Finish()=55 8B EC 83 E4 C0 83 EC 38 56 57 8B 7D 08 68=partial pdb
virtual void CSaveRestore::RestoreAdjacenClientState()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B 06 8B 40 78=partial pdb
void CSaveRestore::EntityPatchWrite()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 8B 06=partial pdb
virtual int CSaveRestore::LoadGameState()=55 8B EC 83 E4 F8 83 EC 6C BA=partial pdb
void CSaveRestore::DoClearSaveDir()=55 8B EC 81 ? ? ? ? ? 80 7D 08=partial pdb
virtual void CAudioSourceCache::Shutdown()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 56 8B F1 B9=partial pdb
minisave()=55 8B EC A1 ? ? ? ? 83 EC 54=partial pdb
void CSaveRestore::AddDeferredCommand()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 75 0C A1 ? ? ? ? 35 ? ? ? ? EB 05 8B 01 FF 50 34 85 C0 79=partial pdb
bool CBugUIPanel::IsValidSubmission()=55 8B EC 8B ? ? ? ? ? 83 EC 0C 8B 01 53 56 57 68=partial pdb
void MathLib_Init()=55 8B EC 83 E4 F8 83 EC 08 80=partial pdb
int CValveIpcMgr::RegisterServer()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 8B F1 89=partial pdb
void Con_ColorPrintf()=55 8B EC 81 ? ? ? ? ? 56 8B F1 83 7E 08=partial pdb
virtual int CValveIpcServerUtl::ExecuteCommand()=55 8B EC 83 E4 F8 83 EC 64 56 6A 08=partial pdb
bool CClientState::InstallEngineStringTableCallback()=55 8B EC 53 56 57 8B 7D 08 8B D9 57 E8 ? ? ? ? 8B F0=partial pdb
int GetJoystickForCode()=83 F9 72 7C 08 81 ? ? ? ? ? 7E 11=partial pdb
BindHelper()=55 8B EC 81 ? ? ? ? ? 53 8B D9 57 8B 3B=partial pdb
IsKeyBoundedToBinding()=55 8B EC 81 ? ? ? ? ? 56 8B ? ? ? ? ? ? 57 8B=partial pdb
int Key_CodeForBinding()=55 8B EC 51 53 56 57 85=partial pdb
key_listboundkeys()=56 57 8B ? ? ? ? ? 33 F6 66=partial pdb
HandleClientKey()=55 8B EC 8B 45 08 56 8B 30 81=partial pdb
FilterKey()=55 8B EC 53 56 57 8B F9 8B DA 8B 07 8B=partial pdb
void Key_Event()=56 8B F1 57 8B 7E 08 83=partial pdb
void R_StudioInitLightingCache()=51 56 57 68 ? ? ? ? 6A 00 68=partial pdb
void R_StudioCheckReinitLightingCache()=8B ? ? ? ? ? 56 81 ? ? ? ? ? 75 0E=partial pdb
LightcacheMark()=53 56 8B F1 0F ? ? ? ? ? ? 66=partial pdb
bench_upload()=55 8B EC 81 ? ? ? ? ? 80 ? ? ? ? ? ? 0F=partial pdb
void MatrixSetIdentity()=55 8B EC 85 D2 78=partial pdb
void _VectorNormalizeFast()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 56 8B F1 C7=partial pdb
AddWorldLightToLightCube()=55 8B EC 83 EC 0C 0F 28=partial pdb
float SND_GetDspMix()=55 8B EC 83 EC 3C 80 7D=partial pdb
WorldLightFromDynamicLight()=55 8B EC 83 E4 F8 51 53 56 8B F2 57=partial pdb
AddELights()=55 8B EC 83 EC 24 80 ? ? ? ? ? ? 53 56 57 89 55 E0 89 4D E4 75 0A 8B 45 10 5F 5E 5B 8B E5 5D C3 8B 75=partial pdb
AddStaticLighting()=55 8B EC 83 EC 40 80=partial pdb
void InvalidateStaticLightingCache()=55 8B EC 83 EC 70 53=partial pdb
static void CLocalNetworkBackdoor::InitFastCopy()=55 8B EC A1 ? ? ? ? 83 EC 18 8B=partial pdb
void CL_CreateTextureListPanel()=55 8B EC 8B 55 0C 83 7A=partial pdb
void Con_DebugLog()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 8B F9 8D=partial pdb
void CMapReslistGenerator::RunFrame()=55 8B EC 83 EC 10 56 57 8B F9 80=partial pdb
void CMapReslistGenerator::OnModelPrecached()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 80=partial pdb
void CMapReslistGenerator::OnSoundPrecached()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 57 8B F9 0F=partial pdb
void CMapReslistGenerator::WriteMapLog()=55 8B EC 81 ? ? ? ? ? 53 8B D9 80 ? ? ? ? ? ? 8D=partial pdb
void CMapReslistGenerator::EnableDeletionsTracking()=55 8B EC 81 ? ? ? ? ? 53 8B D9 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 83=partial pdb
void CDemoSmootherPanel::LoadSmoothingInfo()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 8B 75=partial pdb
void CMapReslistGenerator::SpewTrackedDeletionsLog()=55 8B EC 51 53 56 57 8B F9 80 3F=partial pdb
Handler()=FF ? ? ? ? ? 84 C0 74 01 CC FF ? ? ? ? ? 6A=partial pdb
void near * zcalloc()=55 8B EC A1 ? ? ? ? 56 57 8B 7D=partial pdb
VisMark_Cached()=55 8B EC 83 EC 0C 8B C1 53=partial pdb
VisCache_Build()=55 8B EC 83 EC 18 A1 ? ? ? ? 53 56 8B=partial pdb
bool Map_AreAnyLeavesVisible()=55 8B EC 51 53 56 57 8B 7D 08 33 C0=partial pdb
int CM_SurfacepropsForDisp()=55 8B EC 69 ? ? ? ? ? ? A1=partial pdb
virtual void CModelInfo::GetModelRenderBounds()=55 8B EC 8B 55 08 85 D2 75 32=partial pdb
virtual void near * CModelLoader::GetExtraData()=55 8B EC 8B 45 08 85 C0 74 13=partial pdb
virtual void near * CVEngineServer::SaveAllocMemory()=55 8B EC 8B 45 08 83 F8 FF 75 18=partial pdb
virtual int CModelInfoServer::RegisterDynamicModel()=55 8B EC 81 ? ? ? ? ? 80 7D 0C 00 56 8B F1 74=partial pdb
void CModelLoader::UnloadModel()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8B ? ? ? ? ? 83=partial pdb
virtual int CModelInfoClient::RegisterDynamicModel()=55 8B EC 81 ? ? ? ? ? 80 7D 0C 00 56 8B F1 75=partial pdb
virtual int CModelInfoClient::BeginCombinedModel()=55 8B EC 53 8B 5D 08 56 57 8B F9 53=partial pdb
void LogMultiline()=55 8B EC 83 EC 60 53 8B 5D=partial pdb
void NET_InitParanoidMode()=A1 ? ? ? ? C6 ? ? ? ? ? ? 53=partial pdb
void DispCollTrees_Free()=55 8B EC 80 ? ? ? ? ? ? 0F ? ? ? ? ? A1=partial pdb
virtual void CDemoSmootherPanel::DrawDebuggingInfo()=55 8B EC 81 ? ? ? ? ? 57 8B F9 80=partial pdb
virtual bool CNetChan::SendFile()=55 8B EC 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 74 07=partial pdb
virtual void CNetChan::SetMaxBufferSize()=55 8B EC 83 EC 08 56 8B 75 0C 8B=partial pdb
virtual void vgui::ListPanel::RemoveItem()=55 8B EC 8B 45 08 56 57 8D 04=partial pdb
bool CNetChan::CreateFragmentsFromBuffer()=55 8B EC 83 EC 1C 53 8B C1=partial pdb
bool CNetChan::NETMsg_File()=55 8B EC 53 56 57 8B 7D 08 8B D9 8B 77=partial pdb
bool CNetChan::_ProcessMessages()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 8B F9 B9=partial pdb
bool CNetChan::CheckReceivingList()=55 8B EC 81 ? ? ? ? ? 69=partial pdb
virtual bool CNetChan::SendNetMsg()=55 8B EC 83 EC 08 56 8B F1 8B 4D 04=partial pdb
virtual void CNetChan::GetPacketResponseLatency()=55 8B EC 8B 55 0C 69 ? ? ? ? ? ? 83 E2 7F 56=partial pdb
bool CEngineAPI::ModInit()=55 8B EC 81 ? ? ? ? ? 56 8B F1 85 F6 0F ? ? ? ? ? 80 3E 00 0F ? ? ? ? ? E8=partial pdb
void CNetChan::MergeSplitUserBuffers()=55 8B EC 83 EC 44 8B C1=partial pdb
bool netadr_s::SetFromSockadr()=55 8B EC 8B 55 08 C7 ? ? ? ? ? ? C7=partial pdb
int CDmxSerializationDictionary::Find()=55 8B EC 83 EC 08 8B 45 08 89 45 F8 8D 45 F8 50=partial pdb
virtual int CSteamSocketMgr::recvfrom()=55 8B EC 83 E4 F0 83 EC 48 56=partial pdb
virtual void CSteamSocketMgr::Init()=56 C6 41=partial pdb
virtual void CSteamSocketMgr::CloseSocket()=55 8B EC A1 ? ? ? ? 57 8B F9=partial pdb
virtual void CEngineClient::WriteScreenshot()=55 8B EC 83 EC 0C 53 8B 5D 08 56 8B F1 89 75 FC 66 3B 5E 10 0F ? ? ? ? ? 57 BF ? ? ? ? 89 7D 08 66 3B DF 74 2C 8B 56 04 0F B7 C3 8D 04 40=partial pdb
InternalFactory()=55 8B EC 56 8B 75 0C 85 F6 74 06=partial pdb
void DisconnectTier2Libraries()=8B ? ? ? ? ? 85 C9 74 1A 80=partial pdb
??_Ebad_cast@std@@UAEPAXI@Z_0()=55 8B EC 56 8B F1 8D 46 04 C7 ? ? ? ? ? 50 E8 ? ? ? ? 83=partial pdb
vprof_generate_report_AI_Impl()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 0F 57 C0 57=partial pdb
void CExpressionCalculator::SetVariable()=55 8B EC 83 EC 1C 53 56 57 8B FA 89 4D FC=partial pdb
class CNetChan near * NET_FindNetChannel()=55 8B EC 83 EC 08 53 56 57 8B DA 89=partial pdb
int NET_OpenSocket()=55 8B EC 83 EC 20 53 56 57 6A=partial pdb
void OcclusionStats_t::Dump()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 10 56 8B F2 8A=partial pdb
PackSurfacesAndBuildSurfaceList()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? A1 ? ? ? ? 8D=partial pdb
NET_ReceiveDatagram_Helper()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 8B F2 8B=partial pdb
bool CAudioMixerWaveADPCM::DecodeBlock()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B D9 56 57 8B=partial pdb
bool Serialize()=55 8B EC 83 E4 F8 83 EC 4C 53 56 57 8B 7D 0C=partial pdb
void NET_OutOfBandPrintf()=55 8B EC 81 ? ? ? ? ? 8D 45 14 C7=partial pdb
void NET_OutOfBandDelayedPrintf()=55 8B EC 81 ? ? ? ? ? 8D 45 18=partial pdb
sv_dump_serialized_entities_mem()=53 56 57 68 ? ? ? ? FF ? ? ? ? ? 83=partial pdb
void CLog::Init()=8B ? ? ? ? ? 56 BE ? ? ? ? 3B=partial pdb
void NET_PrintChannelStatus()=55 8B EC 83 E4 C0 83 EC 38 56 8B F1 57 8B 06=partial pdb
CPoolAllocatedRNG::CPoolAllocatedRNG()=53 56 57 8B D9 E8 ? ? ? ? 8B C8=partial pdb
void CSteam3Server::Shutdown()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 64 ? ? ? ? ? ? 81 ? ? ? ? ? 53 56 57 89 65 F0 C7 ? ? ? ? ? ? 83=partial pdb
virtual void CNetConsoleMgr::OnSocketAccepted()=55 8B EC A1 ? ? ? ? 56 8B F1 68 ? ? ? ? 8B 08 8B 01 FF 50 04 8B=partial pdb
void CNetConsoleMgr::SendStringToNetConsoles()=55 8B EC 83 EC 08 53 8B ? ? ? ? ? 56 57 89=partial pdb
virtual void CHLTVDemoRecorder::RecordPacket()=80 79 4C=partial pdb
virtual bool CNetworkStringDict::IsValidIndex()=55 8B EC 8B 55 08 8B C1 0F=partial pdb
virtual int CNetworkStringTable::AddString()=55 8B EC 53 8B 5D 0C 57 8B F9 85=partial pdb
void CNetworkStringTableContainer::WriteStringTables()=55 8B EC 83 EC 10 53 56 57 8B F9 89 7D F8=partial pdb
virtual int CNetworkStringTable::FindStringIndex()=55 8B EC 56 57 FF 75 08 8B F9 8B 4F=partial pdb
void CCommandBuffer::InsertImmediateCommand()=55 8B EC 53 56 57 8B F9 33 F6 39 77 1C=partial pdb
void CPaintmapDataManager::RemovePaint()=55 8B EC 8B 4D 08 83 EC 18 85=partial pdb
void CPaintmapDataManager::PaintAllSurfaces()=55 8B EC 56 8B ? ? ? ? ? 85 F6 74 5C=partial pdb
unsigned int CPaintTextureData::BlendLuxel()=55 8B EC 53 8A DA=partial pdb
unsigned int CPaintTextureData::AddSurroundingAlpha()=55 8B EC 83 EC 10 A1 ? ? ? ? 53 56=partial pdb
bool FUseHighQualityPitch()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 68 56 57=partial pdb
void R_PaintLeaf()=55 8B EC 83 EC 64 53 56 57 8B F9=partial pdb
void R_RedownloadAllPaintmaps()=51 80 ? ? ? ? ? ? 74 3F=partial pdb
virtual bool CBaseServer::GetPlayerInfo()=55 8B EC 56 8B 75 0C 57 8B F9 85 F6 0F ? ? ? ? ? 8B=partial pdb
void vgui::FileOpenDialog::AddSearchHistoryString()=55 8B EC 8B 45 08 53 56 8B F1 57 8D=partial pdb
void ED_ClearEdict()=56 8B F1 83 26 FD=partial pdb
struct edict_t near * ED_Alloc()=55 8B EC 51 56 8B F1 85 F6 78=partial pdb
void CPureServerWhitelist::PrintCommand()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 8B C8 53=partial pdb
void CPureServerWhitelist::Decode()=55 8B EC 56 8B 75 08 57 8B F9 56 8D=partial pdb
class CAudioSource near * Audio_CreateMemoryWave()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 56 8B 75 08=partial pdb
DecompressBZipToDisk()=55 8B EC 8B ? ? ? ? ? 81 ? ? ? ? ? 53 56 57 81 ? ? ? ? ? 75 16=partial pdb
virtual bool CVEngineServer::SpherePaintSurface()=55 8B EC F3 ? ? ? ? 83 EC 08 F3=partial pdb
virtual char const near * CRegistry::ReadString()=55 8B EC 83 EC 08 C6=partial pdb
CreateTeenyFBTexture()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 20 56=partial pdb
virtual int CSaveRestoreFileSystem::Write()=55 8B EC 8B 55 10 85 D2 74=partial pdb
virtual void CSaveRestoreFileSystem::Seek()=55 8B EC 8B 55 08 85 D2 74 6A=partial pdb
virtual unsigned int CSaveRestoreFileSystem::Tell()=55 8B EC 8B 55 08 85 D2 74 66=partial pdb
void CSaveRestoreFileSystem::DirectorCopyToMemory()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 08 8B D9 68=partial pdb
bool CheckConnectionLessRateLimits()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? B9 ? ? ? ? 53=partial pdb
virtual void vgui::ListViewPanel::SortList()=55 8B EC 83 EC 08 53 8B D9 56 8D=partial pdb
void CSentence::ParseDataVersionOnePointZero()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 57=partial pdb
void CSentence::ParseCloseCaption()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 8B 75 08 8D=partial pdb
void CSentence::InitFromDataChunk()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 57 8B F1=partial pdb
virtual void CClientState::PacketEnd()=56 8B F1 E8 ? ? ? ? 8B ? ? ? ? ? 3B=partial pdb
virtual void CClientState::Disconnect()=55 8B EC 83 E4 F8 56 57 FF=partial pdb
bool CBaseClient::NETMsg_Tick()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 57=partial pdb
virtual bool CClientState::SVCMsg_ServerInfo()=55 8B EC 83 E4 C0 83 EC 38 56 57 8B F1=partial pdb
bool CBaseClientState::SVCMsg_SendTable()=55 8B EC 8B 45 08 53 57=partial pdb
virtual bool CClientState::SVCMsg_VoiceInit()=55 8B EC 8B 55 08 8B 4A 08=partial pdb
virtual bool CClientState::SVCMsg_UserMessage()=55 8B EC 56 8B 75 08 57 8B 56 08=partial pdb
virtual bool CClientState::SVCMsg_EntityMsg()=55 8B EC 83 EC 24 56 57 8B 7D=partial pdb
virtual bool CSPSharedMemory::Init()=55 8B EC 57 8B F9 83 7F 1C=partial pdb
float FastPow10()=55 8B EC 83 E4 F8 83 EC 18 8B ? ? ? ? ? 0F=partial pdb
class CVarBitVec near * CVoxelTree::BeginVisit()=55 8B EC 51 56 57 8B F9 8B ? ? ? ? ? FF=partial pdb
virtual void CVoxelTree::Init()=55 8B EC 8B 45 08 BA ? ? ? ? 53=partial pdb
void CVoxelHash::UpdateListMask()=55 8B EC 83 EC 1C 8B C1 89=partial pdb
class Vector FindClosestPointToTriangle()=55 8B EC 83 EC 64 56 66=partial pdb
void CVoxelHash::RenderObjectsInPlayerLeafs()=55 8B EC 83 E4 F8 83 EC 44 8B=partial pdb
virtual CVoxelTree::~CVoxelTree()=55 8B EC 83 E4 F8 51 8B 45 08 53=partial pdb
void CVoxelTree::InsertIntoTree()=55 8B EC 83 EC 1C 8B 45 08 F3=partial pdb
void CVoxelTree::RemoveFromTree()=55 8B EC 83 EC 08 8B 45 08 56 57 8B F9 0F=partial pdb
CSpatialPartition::CSpatialPartition()=55 8B EC 51 53 56 8B F1 57 89 75 FC 8D=partial pdb
virtual void CSpatialPartition::DestroyHandle()=55 8B EC 53 8B 5D 08 B8 ? ? ? ? 56 8B=partial pdb
virtual void CSpatialPartition::Insert()=55 8B EC 53 8B 5D 0C 56 0F B7 C3 8B D0 57 8B F9 C1 E2 04 2B=partial pdb
virtual void CSpatialPartition::RemoveAndInsert()=55 8B EC 53 8B 5D 10 56 0F=partial pdb
virtual void CSpatialPartition::RemoveFromTree()=55 8B EC 53 8B 5D 08 56 0F B7 C3 57 8B D0 8B F9 C1 E2 04 2B D0 8B 47 18 F6=partial pdb
class Vector near & AllocTempVector()=A1 ? ? ? ? A8 01 75 08 83 C8 01 A3 ? ? ? ? A8=partial pdb
virtual char std::ctype<char>::do_widen()=55 8B EC 8A 45 08 5D=partial pdb
void protobuf_AssignDesc_network_5fconnection_2eproto()=55 8B EC 8B 55 08 8B 41 10 89=partial pdb
virtual int CStaticProp::DrawModel()=55 8B EC 83 E4 F8 83 EC 4C 53 56 57 8B F9 8B ? ? ? ? ? 8B=partial pdb
void CStaticPropMgr::UpdatePropVisibility()=55 8B EC 83 EC 10 53 8B D9 89 5D FC=partial pdb
virtual bool CSaveRestoreFileSystem::FileExists()=55 8B EC 81 ? ? ? ? ? 8D 45 08=partial pdb
virtual void CStaticPropMgr::LevelShutdown()=56 8B F1 80 7E 48 00 74=partial pdb
virtual void CStaticPropMgr::LevelShutdownClient()=55 8B EC 51 57 8B F9 80 7F 49=partial pdb
int vgui::Dar<unsigned long>::AddElement()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 56 57 8B 7D=partial pdb
virtual void CStaticPropMgr::RecomputeStaticLighting()=53 8B D9 56 8B 73 2C=partial pdb
int CWingedEdgeList::AddSurface()=55 8B EC 51 53 56 57 8B F9 8B 4D=partial pdb
void R_BuildCubemapSamples_PreBuild()=55 8B EC 83 E4 F0 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? 8D=partial pdb
void CSteamID::SetFromString()=55 8B EC 83 EC 0C 8B 45 08 53 56 57 80=partial pdb
void Sys_Error_Internal()=55 8B EC 6A FF 68 ? ? ? ? 68 ? ? ? ? 64 ? ? ? ? ? 50 64 ? ? ? ? ? ? 81=partial pdb
virtual void CEngineConsoleLoggingListener::Log()=55 8B EC 56 8B 75 08 F6=partial pdb
LoadThisDll()=56 8B F1 57 84 D2 75=partial pdb
void Sys_SetRegKeyValue()=55 8B EC 83 EC 08 8D 45 F8 50=partial pdb
star_memory()=55 8B EC 83 E4 C0 83 EC 7C=partial pdb
void F()=55 8B EC 6A 00 68 ? ? ? ? E8=partial pdb
DialogFunc()=55 8B EC 83 E4 F8 8B 45 0C 81=partial pdb
virtual bool CEngineAPI::SetStartupInfo()=55 8B EC 83 E4 F8 8B 55 08 81 ? ? ? ? ? 8A=partial pdb
void VideoMode_Destroy()=8B ? ? ? ? ? 85 C9 74 10 8B 01 6A 01 FF=partial pdb
virtual void CEngineAPI::SetEngineWindow()=55 8B EC 83 ? ? ? ? ? ? 56 8B F1 74=partial pdb
_WriteMiniDumpUsingExceptionInfo()=55 8B EC 80 ? ? ? ? ? ? 74 0C=partial pdb
ParseSteamInfFile()=55 8B EC 81 ? ? ? ? ? 8B ? ? ? ? ? 53 56 57 8B 41=partial pdb
ParsePerforceInfFile()=55 8B EC 83 EC 48 8B ? ? ? ? ? 53=partial pdb
void ClientDLL_Connect()=55 8B EC 83 E4 F8 83 EC 2C 53 56 57 8B F9 68=partial pdb
virtual bool CDedicatedServerAPI::Connect()=55 8B EC FF ? ? ? ? ? 68 ? ? ? ? 8B C8 8B 10 FF 52 2C 85 C0 74=partial pdb
void Host_GetHostInfo()=55 8B EC B9 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
void V_strncpy()=55 8B EC A1 ? ? ? ? B9 ? ? ? ? 56 FF 50 14=partial pdb
virtual bool CEngine::Load()=55 8B EC 0F B6 45 08 C7=partial pdb
class IVTFTexture near * CVideoMode_Common::LoadVTF()=55 8B EC 8B ? ? ? ? ? 6A 00 6A 00 83=partial pdb
void CVideoMode_Common::ApplySteamScreenshotTags()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 85=partial pdb
long SetupWindowsMixerPreferences()=55 8B EC 83 EC 0C 6A=partial pdb
void CRConClient::SendCmd()=55 8B EC 83 EC 34 83 65 FC FC C7=partial pdb
void CGame::AppActivate()=55 8B EC 80 ? ? ? ? ? ? B8=partial pdb
virtual void CGame::DispatchAllStoredGameMessages()=53 8B D9 8B ? ? ? ? ? 56 57 8B 01 FF 50 50=partial pdb
virtual bool CGame::Init()=55 8B EC 81 ? ? ? ? ? 56 8B F1 C7 ? ? ? ? ? ? ? ? ? 8D=partial pdb
void CTestScriptMgr::RunCommands()=55 8B EC 81 ? ? ? ? ? 53 8B D9 33=partial pdb
void Test_StartLoop()=55 8B EC 53 8B D9 56 57 8B ? ? ? ? ? 83 7B=partial pdb
virtual void CAskConnectPanel::ApplySettings()=55 8B EC 83 EC 10 56 8B 75 08 57 56 8B=partial pdb
virtual void CAskConnectPanel::OnTick()=55 8B EC 83 EC 10 53 33=partial pdb
ConsoleLogger::ConsoleLogger()=A0 ? ? ? ? 56 8B F1=partial pdb
virtual int CVProfExport::GetNumBudgetGroups()=55 8B EC 83 EC 14 53 8B D9 8B ? ? ? ? ? 56=partial pdb
void RemoveVProfDataListener()=55 8B EC 8B ? ? ? ? ? 53 56 33 F6=partial pdb
void PreUpdateProfile()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? 80 ? ? ? ? ? ? 56 57=partial pdb
void SV_TriggerMoved()=55 8B EC 83 EC 18 56 57 8B F9 8B=partial pdb
virtual CXboxSystem::~CXboxSystem()=56 8B ? ? ? ? ? 8B C6 C7=partial pdb
void gen_codes()=55 8B EC 83 EC 20 53 56 57 8B DA=partial pdb
void build_tree()=55 8B EC 83 EC 14 8B 42=partial pdb
void scan_tree()=55 8B EC 83 EC 14 8B 45 08 53 56 57 8B FA=partial pdb
int ct_tally()=55 8B EC 83 EC 08 8B ? ? ? ? ? 53 8B 5D 08 56 88=partial pdb
void fill_window()=55 8B EC 51 53 56 57 8B F1 0F=partial pdb
int unzOpenCurrentFile()=55 8B EC 83 EC 1C 53 56 8B F1 57 8B 7D=partial pdb
unsigned int TZip::read()=55 8B EC 51 53 56 57 8B F9 8B 57 58=partial pdb
unsigned long TZip::AddCentral()=55 8B EC 83 EC 0C 53 56 57 8B F9 33=partial pdb
virtual char const near * CEngineTool::GetCurrentMap()=80 ? ? ? ? ? ? 74 06 B8 ? ? ? ? C3 A1 ? ? ? ? 83 ? ? ? ? ? ? 7D 15=partial pdb
virtual bool CEngineTool::GetPlayerView()=55 8B EC 83 E4 F8 51 8B ? ? ? ? ? 56 85 C9 0F ? ? ? ? ? 8B 01 8B=partial pdb
virtual void CEngineTool::CreatePickingRay()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 8B 55 08 66=partial pdb
virtual bool CEngineTool::PrecacheSound()=55 8B EC 56 8B 75 08 85 F6 74 14 B2 21 8B CE E8 ? ? ? ? 84 C0 74 07 B0 01 5E 5D C2 08=partial pdb
virtual bool CEngineTool::PrecacheModel()=55 8B EC 51 56 6A=partial pdb
int build_number()=80 ? ? ? ? ? ? 75 06 B8=partial pdb
void CToolFrameworkInternal::ShutdownTools()=53 8B D9 56 57 8B 7B 24=partial pdb
virtual void vgui::PropertySheet::AddPage()=55 8B EC 81 ? ? ? ? ? 53 8B C1 33 DB=partial pdb
int VOX_ParseWordParams()=55 8B EC 81 ? ? ? ? ? 56 8B 75 08 8D=partial pdb
void CToolFrameworkInternal::UnloadTools()=55 8B EC 53 8B 5D 08 B9=partial pdb
virtual void CPerfUIPanel::Activate()=55 8B EC 83 EC 10 53 56 8B ? ? ? ? ? 8D 45 F8=partial pdb
virtual void CPerfUIPanel::OnTextChanged()=56 8B F1 57 8B ? ? ? ? ? 8B ? ? ? ? ? 8B 01 FF=partial pdb
int DrawTextLen()=55 8B EC 83 EC 14 53 8B C2=partial pdb
virtual bool CEngineVGui::SetVGUIDirectories()=55 8B EC 81 ? ? ? ? ? 51 68=partial pdb
virtual void CEngineVGui::Init()=55 8B EC 81 ? ? ? ? ? 53 56 8B ? ? ? ? ? 8B D9 57 89=partial pdb
virtual void CEngineVGui::Shutdown()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0F 8B 01 FF 50 34=partial pdb
virtual void CEngineVGui::ActivateGameUI()=56 8B F1 F6 ? ? ? ? ? ? 0F=partial pdb
virtual bool CEngineVGui::HideGameUI()=56 8B F1 F6 ? ? ? ? ? ? 74 04=partial pdb
virtual void CEngineVGui::OnLevelLoadingFinished()=56 8B F1 8B ? ? ? ? ? 85 C9 74 5E=partial pdb
virtual void CEngineVGui::UpdateProgressBar()=55 8B EC 83 EC 08 83 ? ? ? ? ? ? 56=partial pdb
virtual void CEngineVGui::NotifyOfServerConnect()=55 8B EC 8B ? ? ? ? ? 85 C9 74 06=partial pdb
virtual void CEngineVGui::NotifyOfServerDisconnect()=8B ? ? ? ? ? 85 C9 74 14 8B 11=partial pdb
vgui_togglepanel()=55 8B EC 83 EC 1C 56 8B 75 08 8B 06 83 F8 02=partial pdb
VGui_RecursePanel()=55 8B EC 83 EC 08 80 7D 10=partial pdb
void CEngineVGui::DrawMouseFocus()=55 8B EC A1 ? ? ? ? 83 EC 2C C7=partial pdb
virtual void CBudgetBarGraphPanel::Paint()=55 8B EC 83 EC 20 53 56 8B ? ? ? ? ? 8D=partial pdb
void IN_BudgetDown()=56 8B ? ? ? ? ? 85 F6 74 26 6A 00 6A 00 BA ? ? ? ? 33 C9 E8 ? ? ? ? 8B 06 83 C4 08 8B CE C6 ? ? ? ? ? ? 6A 01=partial pdb
void IN_BudgetUp()=56 8B ? ? ? ? ? 85 F6 74 26 6A 00 6A 00 BA ? ? ? ? 33 C9 E8 ? ? ? ? 8B 06 83 C4 08 8B CE C6 ? ? ? ? ? ? 6A 00=partial pdb
void Host_Client_Printf()=55 8B EC 81 ? ? ? ? ? 53 8B D9 8B ? ? ? ? ? 56 57 BE=partial pdb
void CDrawTreeFrame::RecalculateSelectedHighlight()=55 8B EC A1 ? ? ? ? 83 EC 14 56 8B F1 B9=partial pdb
void VGui_RecursivePrintTree()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 8B DA=partial pdb
virtual void CConVarCheckButton::SetSelected()=55 8B EC 53 8B 5D 08 56 53=partial pdb
virtual void CTextureBudgetPanel::OnTick()=A1 ? ? ? ? 56 8B F1 B9 ? ? ? ? FF 50 34 8B ? ? ? ? ? 85 C0 8B=partial pdb
virtual void CTextureBudgetPanel::PerformLayout()=55 8B EC 83 EC 14 53 8B D9 89 5D FC=partial pdb
void CTextureBudgetPanel::SnapshotTextureHistory()=55 8B EC 83 EC 0C A1 ? ? ? ? 53 8B D9=partial pdb
void CTextureBudgetPanel::DumpGlobalTextureStats()=55 8B EC 83 E4 F8 83 EC 54 8B ? ? ? ? ? 0F=partial pdb
virtual void CVProfGraphPanel::Paint()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 56 8B F1 57 89 74 24 0C=partial pdb
void CVProfGraphPanel::PaintLineArt()=55 8B EC 83 EC 08 56 8B F1 8B ? ? ? ? ? 40=partial pdb
virtual void CProfileHierarchyPanel::ModifyItem()=55 8B EC 83 EC 08 8B 41 10=partial pdb
virtual void CProfileHierarchyPanel::SetItemColors()=55 8B EC 83 E4 F8 83 EC 1C 53 56 57 8B F9 8B 07=partial pdb
virtual void CBaseServer::Shutdown()=55 8B EC 83 EC 10 8B D1 8D=partial pdb
virtual void CProfileHierarchyPanel::RemoveAll()=55 8B EC 83 EC 10 53 8B D9 57=partial pdb
virtual void CDedicatedServerAPI::Disconnect()=55 8B EC 83 EC 24 53 56 57 51=partial pdb
virtual void CVProfPanel::PerformLayout()=55 8B EC 81 ? ? ? ? ? 53 56 8B D9 57 89 5D EC=partial pdb
virtual void CVProfPanel::Close()=55 8B EC 83 EC 08 56 8B F1 6A 00 8B=partial pdb
SteamDatagramTransport::CreateSharedClusterData()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 56 57=partial pdb
virtual void CVProfPanel::OnCheckButtonChecked()=55 8B EC 8B 45 08 57 8B F9 8B=partial pdb
void CVProfPanel::UpdateProfile()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 F3=partial pdb
virtual void CVProfPanel::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 0E 50=partial pdb
void VideoMode_Create()=A1 ? ? ? ? 85 C0 75 45=partial pdb
class CAudioSource near * Audio_CreateMemoryMP3()=55 8B EC 56 8B F1 83 EC=partial pdb
int CAppSystemGroup::ReloadModule()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B D9 8B F7 8D=partial pdb
void CAppSystemGroup::UnloadAllModules()=53 8B D9 57 8B 7B 10 83 EF=partial pdb
bool CAppSystemGroup::LoadDependentSystems()=55 8B EC 83 E4 F8 83 EC 5C 53 56 57=partial pdb
enum InitReturnVal_t CAppSystemGroup::InitSystems()=55 8B EC 51 56 57 8B F9 33 F6 39 77=partial pdb
void CAppSystemGroup::OnShutdown()=56 8B F1 57 89 ? ? ? ? ? 8B 46=partial pdb
void FloatBitMap_t::RaiseToPower()=55 8B EC 83 EC 14 8B D1 33=partial pdb
void FloatBitMap_t::Clear()=8B D1 53 33 DB 39=partial pdb
bool ImageLoader::ResampleRGB323232F()=55 8B EC 83 EC 1C 53 8B D9 56 57 8B 43=partial pdb
bool ImageLoader::ResampleRGBA32323232F()=55 8B EC 83 EC 30 53 56 8B F1 C7 ? ? ? ? ? ? 57=partial pdb
int ImageLoader::GetNumMipMapLevels()=55 8B EC 53 56 8B 75 08 B8 ? ? ? ? 85=partial pdb
static float float16::Convert16bitFloatTo32bits()=55 8B EC 51 8B C1 BA=partial pdb
bool ImageLoader::ConvertToDXT()=55 8B EC 81 ? ? ? ? ? 53 56 57 6A 6C=partial pdb
bool ImageLoader::RotateImageLeft()=55 8B EC 83 EC 70 8B=partial pdb
bool ImageLoader::FlipImageHorizontally()=55 8B EC 83 EC 20 8B 45 10=partial pdb
ImageLoader::RGBA8888ToRGBA16161616F()=55 8B EC 8B 4D 08 8B 45 10 56 8D 34 81 3B CE 0F=partial pdb
ImageLoader::DecodeAlpha3BitLinear_BGRA4444_t_()=55 8B EC 51 8B C2 53 8B=partial pdb
void CUtlBuffer::GetType<int>()=55 8B EC 83 EC 08 57 8B F9 F6=partial pdb
void FloatBitMap_t::CompressTo8Bits()=55 8B EC 81 ? ? ? ? ? 53 56 57 8B F9 83 EC=partial pdb
void near * DMXAlloc()=51 83 ? ? ? ? ? ? 56 57=partial pdb
virtual int vgui::TileViewPanelEx::HitTest()=55 8B EC 53 56 8B 75 08 33 DB 57 8B 06=partial pdb
bool CDmxSerializer::Unserialize()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 0C 56 57 83=partial pdb
bool SerializeDMX()=55 8B EC 83 EC 48 53 56 8B F1 B9=partial pdb
void CUtlSymbolTable::RemoveAll()=56 57 8B F1 E8 ? ? ? ? C7=partial pdb
void CDmxElement::RemoveAllElementsRecursive()=53 56 8B F1 57 33 FF FE=partial pdb
int CValveIpcServer::Register()=55 8B EC 8B 41 08 83 EC 10=partial pdb
void KeyValuesJSONParser::ParseStringToken()=55 8B EC 83 EC 08 53 56 8B F2 8B D9 57 C7 ? ? ? ? ? ? F6 43 15 01 0F ? ? ? ? ? 8D 45 FC 50 E8 ? ? ? ? 8B 7D=partial pdb
bool CDmxSerializerKeyValues2::UnserializeId()=55 8B EC 83 EC 44 83 65 EC=partial pdb
void ConnectInterfaces()=A1 ? ? ? ? 53 8B D9 85=partial pdb
_jpeg_set_defaults()=56 8B F1 57 83 7E 14 64=partial pdb
_jpeg_finish_compress()=56 8B F1 8B 46 14 83 F8 65=partial pdb
_jpeg_write_scanlines()=55 8B EC 51 53 56 8B F1 8B DA 57 BF=partial pdb
emit_dht()=55 8B EC 83 EC 08 80 7D 08=partial pdb
write_frame_header()=55 8B EC 51 53 56 8B 75 08 33 D2=partial pdb
finish_pass()=55 8B EC 83 EC 08 8B C2 53=partial pdb
encode_mcu_DC_refine()=55 8B EC 56 8B 75 08 57 83 ? ? ? ? ? ? 8B=partial pdb
h2v1_downsample()=55 8B EC 51 8B 45 0C 53 8B 5D 10=partial pdb
h2v2_downsample()=55 8B EC 83 EC 0C 8B 45 0C 8B 4D=partial pdb
fullsize_smooth_downsample()=55 8B EC 83 EC 1C 8B 45 0C 53=partial pdb
start_pass_main()=55 8B EC 8B 55 08 80=partial pdb
process_data_simple_main()=55 8B EC 56 57 8B 7D 08 8B ? ? ? ? ? 8B 46 08=partial pdb
_jpeg_calc_jpeg_dimensions()=55 8B EC 51 57 8B F9 8B 47 3C=partial pdb
initial_setup()=55 8B EC 83 EC 18 53 56 8B F1=partial pdb
validate_script()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 57 83=partial pdb
per_scan_setup()=55 8B EC 83 EC 0C 56 8B F1 57 8B ? ? ? ? ? 83=partial pdb
start_iMCU_row()=83 ? ? ? ? ? ? 8B ? ? ? ? ? 7E 16=partial pdb
compress_first_pass()=55 8B EC 83 EC 2C 53 56 57 8B 7D 08=partial pdb
emit_restart_e()=53 56 8B DA 8B F1 E8=partial pdb
encode_mcu_AC_refine_0()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B 47=partial pdb
encode_mcu_huff()=55 8B EC 83 EC 28 56 57 8B 7D 08 89=partial pdb
finish_pass_huff()=55 8B EC 83 EC 24 56 8B 75 08 57=partial pdb
void String_Encode()=55 8B EC 83 EC 10 8B ? ? ? ? ? 89 45 F8 8B ? ? ? ? ? 53=partial pdb
jpeg_gen_optimal_table()=55 8B EC 81 ? ? ? ? ? 53 57 68=partial pdb
start_pass_huff()=55 8B EC 8A 4D 0C=partial pdb
forward_DCT()=55 8B EC 81 ? ? ? ? ? 83 7D 20 00 8B 45 08 8B 55 0C 56=partial pdb
forward_DCT_float()=55 8B EC 81 ? ? ? ? ? 83 7D 20 00 8B 45 08 8B 55 0C 53=partial pdb
start_pass_fdctmgr()=55 8B EC 83 EC 18 8B 55 08 53 56=partial pdb
_jpeg_fdct_7x7()=55 8B EC 83 EC 14 53 56 57 68=partial pdb
_jpeg_fdct_4x8()=55 8B EC 83 EC 08 53 56 57 68=partial pdb
_jpeg_fdct_9x9()=55 8B EC 83 EC 4C 8B 45=partial pdb
int BoxOnPlaneSide()=55 8B EC 8B 45 08 53 56 8A=partial pdb
void VectorAngles()=55 8B EC 83 E4 F0 83 EC 20 F3 ? ? ? ? 0F=partial pdb
void QuaternionAngles()=55 8B EC 83 EC 40 F3=partial pdb
int ClipPolyToPlane()=55 8B EC 83 EC 28 56 8B C2=partial pdb
void GeneratePerspectiveFrustum()=55 8B EC 83 E4 F8 83 EC 10 F3=partial pdb
void fourplanes_t::Set4Planes()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 43 08 0F 10 00 0F 29 01 0F 10 40 10 0F 28 21 0F 29 41 10 0F 28 DC 0F 10=partial pdb
bool Frustum_t::CullBox()=55 8B EC 83 E4 F0 83 EC 20 8B=partial pdb
void RGBtoHSV()=F3 ? ? ? ? F3 0F 10 19 0F=partial pdb
void FastSinCos()=55 8B EC 83 EC 48 56 89=partial pdb
float FastCos()=55 8B EC 83 EC 20 F3=partial pdb
float SrgbGammaTo360Gamma()=55 8B EC 51 F3 ? ? ? ? ? ? ? 0F 28=partial pdb
void VectorToColorRGBExp32()=55 8B EC 51 8B C1 F3=partial pdb
bool MatrixInverseGeneral()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 ? ? ? ? ? F3 ? ? ? ? ? ? ? B8=partial pdb
void AngleIMatrix()=55 8B EC 83 EC 20 8B 4D 0C=partial pdb
void Vector3DMultiplyPositionProjective()=55 8B EC 83 EC 24 56 8B 75 08 3B=partial pdb
AABBInsideFrustum()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 70=partial pdb
AABBTouchesOrInsideVolume()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 0F=partial pdb
CAudioSourceMP3Cache::CAudioSourceMP3Cache()=55 8B EC 56 FF 75 08 8B F1 8D=partial pdb
bool AlmostEqual()=55 8B EC 83 EC 10 F3 ? ? ? ? 8B 45=partial pdb
void SeedRandSIMD()=55 8B EC F2 ? ? ? ? ? ? ? 8D=partial pdb
virtual void CCurveEditorPanel::OnMousePressed()=55 8B EC 83 EC 1C 53 8B D9 8D 55 FC=partial pdb
virtual void CCurveEditorPanel::OnCursorMoved()=55 8B EC 83 EC 10 53 56 8B ? ? ? ? ? 8D 45 F4=partial pdb
virtual void CCurveEditorPanel::Paint()=55 8B EC 83 EC 24 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void CProceduralTexturePanel::Paint()=55 8B EC 83 EC 50 53 8B D9 8B=partial pdb
qhBuildCentroid()=55 8B EC 83 EC 0C A1 ? ? ? ? 53 8B 5D 08 89=partial pdb
qhBuildBounds()=55 8B EC 83 EC 20 A1 ? ? ? ? 56=partial pdb
qhWeldVertices()=55 8B EC 83 EC 10 56 57 8B 79=partial pdb
qhFindFarthestPointsAlongCardinalAxes()=55 8B EC 83 EC 6C 53 56 8B 75=partial pdb
qhFindFarthestPointFromLine()=55 8B EC 83 EC 10 F3 ? ? ? ? 8B C1=partial pdb
qhConvex::~qhConvex()=55 8B EC 83 EC 08 53 56 8B F1 57 89 75 FC 8B=partial pdb
void qhConvex::Construct()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 53=partial pdb
void qhArray<class qhVector3>::Reserve()=55 8B EC 53 8B D9 B8 ? ? ? ? 8B=partial pdb
void qhArray<struct qhHalfEdge near *>::Reserve()=55 8B EC 83 EC 0C 8B 55 08 53 8B D9 89=partial pdb
void qhMove<class qhVector3>()=55 8B EC 53 8B D9 3B=partial pdb
void qhNewellPlane()=55 8B EC 83 EC 34 8B ? ? ? ? ? A1=partial pdb
float TriangleArea()=53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B 53 14 83 EC 1C=partial pdb
CClockDriftMgr::CClockDriftMgr()=55 8B EC 83 EC 08 F3 ? ? ? ? ? ? ? 53 56 8B 75 08=partial pdb
void askconnect_accept_f()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 68=partial pdb
void CSentence::ParseWords()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 8B 5D 08=partial pdb
virtual void CAudioDirectSound::Shutdown()=8B ? ? ? ? ? 56 8B F1 85 D2 74=partial pdb
bool CNetChan::CreateFragmentsFromFile()=55 8B EC 83 EC 54 8B 45 14=partial pdb
int _V_stricmp()=56 57 8B FA 8B F1 3B=partial pdb
int V_strncmp()=55 8B EC 8B 45 08 53 85=partial pdb
double V_atod()=55 8B EC 83 E4 F8 8A 01=partial pdb
void V_hextobinary()=55 8B EC 83 EC 08 8B D1 89 4D=partial pdb
void V_DefaultExtension()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 8B F9 8B=partial pdb
void V_FixDoubleSlashes()=55 8B EC 51 53 8B D9 8B C3=partial pdb
bool V_StripLastDir()=56 8B F1 80 3E 00 0F=partial pdb
void V_ExtractFileExtension()=55 8B EC 56 8B F2 C6=partial pdb
void V_AppendSlash()=56 57 8B F9 8B F7 8D 4E 01 0F ? ? ? ? ? ? 8A 06 46 84 C0 75 F9 2B=partial pdb
bool V_MakeAbsolutePath()=55 8B EC 53 56 57 8B 7D 08 8B F1 8A=partial pdb
void V_ComposeFileName()=55 8B EC 56 8B F1 57 8B C6=partial pdb
void ConVar_Register()=8B ? ? ? ? ? 85 C9 74 7F 80=partial pdb
virtual void ConCommandBase::Create()=55 8B EC 8B 45 08 BA ? ? ? ? 89=partial pdb
CCommand::CCommand()=80 ? ? ? ? ? ? 56 8B F1 75=partial pdb
ConCommand::ConCommand()=55 8B EC 8B 45 0C 8B 55 18=partial pdb
virtual void ConVar::ChangeStringValue()=55 8B EC 51 53 56 57 8B F9 8B 77=partial pdb
void ConVar_PrintDescription()=55 8B EC 83 E4 C0 B8 ? ? ? ? E8 ? ? ? ? 53 56=partial pdb
Sys_LoadLibraryGuts()=55 8B EC 8D ? ? ? ? ? 81 ? ? ? ? ? 8B D0 2B CA 8A 14 01 84 D2 74 0A 88 10 40 8D 55 EF=partial pdb
Sys_LoadLibrary()=55 8B EC 81 ? ? ? ? ? 56 8B ? ? ? ? ? 57 8B=partial pdb
void Host_EndGame()=55 8B EC 81 ? ? ? ? ? 56 57 8B F9 8A=partial pdb
void CBitRead::ReadBits()=55 8B EC 83 EC 08 8B C1 53 8B=partial pdb
float CBitRead::ReadBitCellCoord()=55 8B EC 83 7D 0C 02=partial pdb
class KeyValues near * KeyValues::FindKey()=55 8B EC 83 EC 1C 53 8B D9 85=partial pdb
class KeyValues near * KeyValues::CreateNewKey()=55 8B EC 83 EC 10 53 8B C1 BB=partial pdb
char const near * KeyValues::GetString()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 53 8B 5D 08 56 57 6A=partial pdb
class Color KeyValues::GetColor()=55 8B EC 8B 45 10 83 EC 08 8B=partial pdb
class KeyValues near * KeyValues::MakeCopy()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8B D9=partial pdb
void VisualizeQueuedEdges()=55 8B EC 81 ? ? ? ? ? 83 7D 10=partial pdb
bool KeyValues::WriteAsBinary()=55 8B EC 83 EC 08 53 56 57 8B 7D 08 8B D9 89=partial pdb
bool KeyValues::ProcessResolutionKeys()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 8B C1 89=partial pdb
void bf_write::WriteSBitLong()=55 8B EC 8B 45 0C 56 8B F1 48=partial pdb
void bf_write::WriteUBitVar()=55 8B EC 56 8B 75 08 57 8B F9 51=partial pdb
void bf_write::WriteBitCoord()=55 8B EC 51 F3 ? ? ? ? ? ? ? 33=partial pdb
void bf_write::WriteBitNormal()=F2 ? ? ? ? ? ? ? 0F 57 D2 53 F3=partial pdb
virtual char CUtlCharConversion::FindConversion()=55 8B EC 53 56 57 8B F9 33 F6 8B 5F 10 85 DB 7E 3D=partial pdb
int CUtlBuffer::PeekDelimitedStringLength()=55 8B EC 83 EC 10 53 56 8B F1 F6=partial pdb
char CUtlBuffer::GetDelimitedCharInternal()=55 8B EC 53 56 57 6A 01=partial pdb
void CUtlBuffer::GetDelimitedString()=55 8B EC 83 EC 08 53 56 8B F1 F6=partial pdb
int CUtlBuffer::VaScanf()=55 8B EC 83 EC 10 57 8B F9 80 7F 14=partial pdb
bool CUtlBuffer::ParseToken()=55 8B EC 83 EC 08 8B 45 08 85=partial pdb
void CUtlBuffer::PutString()=55 8B EC 56 57 8B F9 8A=partial pdb
bool TGAWriter::WriteToBuffer()=55 8B EC 83 EC 10 53 8B ? ? ? ? ? 56 8B F1=partial pdb
void _Cmd_Exec_f()=55 8B EC B8 ? ? ? ? E8 ? ? ? ? 56 FF=partial pdb
CMemoryStack::CMemoryStack()=56 8B F1 56 C7=partial pdb
bool CMemoryStack::Init()=55 8B EC 8B 45 0C 83 EC 28 56=partial pdb
void CMemoryStack::RegisterAllocation()=55 8B EC 83 E4 F8 51 56 8B F1 80 7E 19 00 74 05 8B 46 20 EB 06 8B 46 08 2B 46 14 85 C0 74 14 80 7E 18 00 74=partial pdb
bool CMemoryStack::CommitTo()=55 8B EC 83 E4 F8 51 56 8B F1 80 7E 19 00 74 05 8B 46 20 EB 06 8B 46 08 2B 46 14 85 C0 74 14 80 7E 18 00 75=partial pdb
unsigned int CLZMA::Uncompress()=55 8B EC 83 EC 18 53 8B 5D 08 56 57=partial pdb
class CUtlSymbol CUtlSymbolTable::AddString()=55 8B EC 83 EC 0C 53 8B 5D 0C 57=partial pdb
char const near * CUtlSymbolTable::String()=55 8B EC 66 8B 45 08 56=partial pdb
void CharacterSetBuild()=56 57 8B F9 8B F2 85 FF 74 2A=partial pdb
void netadr_s::ToString()=55 8B EC 56 8B F1 8B 06 83=partial pdb
bool Unserialize()=55 8B EC 8B 55 08 81 ? ? ? ? ? 33=partial pdb
void CSOAContainer::AllocateData()=55 8B EC 51 8B 55 08 8B 45=partial pdb
void CSOAContainer::SetAttributeType()=55 8B EC 53 8B D9 83 7B 14=partial pdb
void CSOAContainer::CopyAttrFrom()=53 8B DC 83 EC 08 83 E4 F8 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83 EC 48 56 8B=partial pdb
MD5Transform()=55 8B EC 83 EC 4C 53 8B DA=partial pdb
void MD5Update()=55 8B EC 53 8B D9 56 57 8B 7D 08 8B F2 8B 4B=partial pdb
unsigned int MurmurHash2LowerCase()=56 8B F2 81=partial pdb
bool CCommandBuffer::InsertCommand()=55 8B EC 51 53 56 57 8B 7D 0C 8B F1 81=partial pdb
int CNetworkStringTable::WriteUpdate()=55 8B EC 83 EC 48 8B 55=partial pdb
void CCommand::Reset()=55 8B EC 56 57 8B F9 8B 4D=partial pdb
void CCommandBuffer::EndProcessingCommands()=56 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 40=partial pdb
void CMsg_CVars_CVar::set_name()=83 EC 08 C7 ? ? ? ? ? ? ? ? ? B9=partial pdb
unsigned char near * CLZSS::CompressNoAlloc()=55 8B EC 83 EC 20 53 8B 5D 0C 56=partial pdb
CountBinaryBytes()=55 8B EC 83 EC 08 53 56 8B F1 8B DA 57 89 5D=partial pdb
virtual bool CDemoActionTextMessageStart::Init()=55 8B EC 53 8B 5D 08 57 53=partial pdb
bool CExpressionEvaluator::MakeExpression()=55 8B EC 51 56 8B 75 08 57 56=partial pdb
bool CExpressionEvaluator::Evaluate()=55 8B EC 8B 55 0C 81 ? ? ? ? ? 56=partial pdb
struct interval_t ReadInterval()=55 8B EC 81 ? ? ? ? ? 8B D1 C7=partial pdb
void GenerateQuadIndexBuffer()=55 8B EC 85 C9 0F=partial pdb
void GeneratePolygonIndexBuffer()=55 8B EC 85 C9 74 41 B8=partial pdb
void GenerateLineLoopIndexBuffer()=55 8B EC 85 C9 74 41 8B=partial pdb
void RenderSphereInternal()=55 8B EC 83 E4 F0 81 ? ? ? ? ? 56 57 E8=partial pdb
void CCoreDispInfo::CalcTriSurfInfoAtNode()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 E8 ? ? ? ? 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 8B F0 89 74 24 2C=partial pdb
virtual void CGameServer::SendClientMessages()=55 8B EC 81 ? ? ? ? ? 89 4D F8 8B ? ? ? ? ? 53=partial pdb
void CSocketCreator::ProcessAccept()=55 8B EC 83 EC 24 53 56 57 8D 45=partial pdb
void CSocketCreator::CloseAllAcceptedSockets()=55 8B EC 51 53 8B D9 8B 43=partial pdb
CP4File::CP4File()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 56 8B D9 57=partial pdb
void CUtlStreamBuffer::Open()=55 8B EC 56 8B F1 83 7E 30=partial pdb
bool CUtlStreamBuffer::TryFlushToFile()=56 8B F1 80 7E 14 00 0F ? ? ? ? ? F6 46 15 08 0F ? ? ? ? ? 57 8B 7E=partial pdb
virtual void vgui::Panel::OnScreenSizeChanged()=55 8B EC 83 EC 20 53 8B D9 C7=partial pdb
void vgui::Panel::SetMessageContextId_R()=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF 75 08 8B 3E 89 5D F8 FF 10 50 8B CE FF ? ? ? ? ? 33=partial pdb
virtual void vgui::Panel::OnKeyFocusTicked()=55 8B EC 51 8B 01 53 89=partial pdb
virtual void vgui::Panel::InternalCursorMoved()=55 8B EC A1 ? ? ? ? 83 EC 0C 53 8B=partial pdb
ShouldHandleInputMessage()=56 8B F1 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? 85 C0=partial pdb
virtual void vgui::Panel::InternalKeyCodeTyped()=55 8B EC 51 57 8B F9 8B 07 FF 10=partial pdb
void vgui::Panel::InternalSetCursor()=53 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 8A=partial pdb
virtual void vgui::Panel::AddActionSignalTarget()=55 8B EC 56 57 FF 75 08 8B F9 8B ? ? ? ? ? 8B 01=partial pdb
virtual void vgui::Panel::PostActionSignal()=55 8B EC 83 EC 08 53 56 8B F1 57 8B 7D=partial pdb
virtual void vgui::Panel::InvalidateLayout()=55 8B EC 51 53 8B 5D 08 B8=partial pdb
virtual void vgui::Panel::ApplySchemeSettings()=55 8B EC 51 53 8B D9 56 57 8B 7D 08 F6=partial pdb
virtual void vgui::Panel::ApplySettings()=55 8B EC 83 E4 F8 83 EC 5C 53 8B D9 56=partial pdb
virtual void vgui::Panel::GetSettings()=55 8B EC 83 EC 44 53 8B D9 56 57 8B 03=partial pdb
virtual void vgui::Panel::InternalMove()=55 8B EC 83 EC 08 53 8B D9 56 57 89 5D F8 8B 03=partial pdb
void LFO_GetNextN()=55 8B EC 83 E4 F0 83 EC 38 56 8B F1 57=partial pdb
void vgui::Panel::OnOldMessage()=55 8B EC 83 EC 28 53 56 57 8B 7D 08 32=partial pdb
virtual void vgui::Panel::SetKeyBoardInputEnabled()=55 8B EC 83 EC 08 53 8B D9 56 8B ? ? ? ? ? 57 8B 03 FF 75 08 8B 3E 89 5D F8 FF 10 50 8B CE FF 57=partial pdb
CDragDropHelperPanel::CDragDropHelperPanel()=55 8B EC 83 EC 10 53 56 57 68 ? ? ? ? 8B=partial pdb
virtual bool CBaseActionPauseDialog::OnSaveChanges()=55 8B EC 83 EC 28 A1 ? ? ? ? 53 8B D9=partial pdb
void vgui::AnimationController::ReloadScriptFile()=55 8B EC 51 53 56 57 8B F9 8D=partial pdb
bool DSP_LoadPresetFile()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 8B ? ? ? ? ? 57=partial pdb
void vgui::AnimationController::UpdateAnimations()=55 8B EC 83 E4 F8 51 56 8B F1 F3=partial pdb
virtual void vgui::Frame::CloseModal()=56 8B F1 8B ? ? ? ? ? 8B 01 FF 50 54=partial pdb
virtual void vgui::Frame::OnThink()=55 8B EC 83 EC 08 53 8B D9 E8=partial pdb
virtual void vgui::Frame::SetTitle()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 83=partial pdb
virtual void vgui::Frame::GetClientArea()=55 8B EC 53 8B D9 8B 4D 08 56 57=partial pdb
virtual void vgui::Frame::ApplySchemeSettings()=55 8B EC 83 EC 08 53 8B 5D 08 56 57 53 8B F9 E8 ? ? ? ? 8B=partial pdb
virtual void vgui::Frame::GetSettings()=55 8B EC 81 ? ? ? ? ? 53 8B 5D 08 56 57 53=partial pdb
virtual void vgui::Frame::InternalFlashWindow()=53 8B D9 8A=partial pdb
virtual void vgui::Frame::LoadControlSettings()=55 8B EC 56 FF 75 14 8B F1 FF 75 10 FF 75 0C 8B ? ? ? ? ? FF 75 08 8B 01 FF 50 0C 8B CE E8 ? ? ? ? 8B 06 8B CE 6A 00 6A 00 FF ? ? ? ? ? 8B=partial pdb
virtual void vgui::Frame::OnKeyTyped()=55 8B EC 56 8B F1 57 8B 06 FF ? ? ? ? ? FF=partial pdb
virtual class Color vgui::Button::GetButtonFgColor()=55 8B EC 83 E4 F8 83 EC 08 56 57 8B F9 0F=partial pdb
virtual void vgui::Button::FireActionSignal()=55 8B EC 83 EC 08 53 56 57 8B F9 89 7D FC 8B ? ? ? ? ? 85=partial pdb
virtual void vgui::Button::OnKeyCodePressed()=55 8B EC 56 57 8B 7D 08 8B F1 8B CF=partial pdb
virtual void vgui::Button::OnKeyCodeReleased()=55 8B EC 56 8B F1 8B 4D 08 E8 ? ? ? ? 8A=partial pdb
struct flt_t near * FLT_Alloc()=55 8B EC 51 53 56 57 FF 75 0C 8B D9 FF 75 08 89=partial pdb
virtual void vgui::TextEntry::OnKillFocus()=55 8B EC 83 EC 20 53 56 8B F1 33 C0=partial pdb
virtual void vgui::TextEntry::SetCharAt()=55 8B EC 53 66 8B 5D 08 56 8B F1 57=partial pdb
virtual void vgui::TextEntry::RecalculateLineBreaks()=55 8B EC 83 EC 2C 56 8B F1=partial pdb
Helper_HLTV_VerifyOfficialPassword()=55 8B EC 83 EC 20 53 8B D9 83=partial pdb
virtual void vgui::TextEntry::SetVerticalScrollbar()=55 8B EC 8A 45 08 56 8B F1 88 ? ? ? ? ? 84 C0 74 4C=partial pdb
virtual void vgui::TextEntry::OnMousePressed()=55 8B EC 8B 45 08 83 EC 0C 53 8B D9 83 F8 6B 0F ? ? ? ? ? 8B 03 6A=partial pdb
virtual bool vgui::TextEntry::SelectCheck()=55 8B EC 83 EC 18 53 8B D9 C6=partial pdb
virtual void vgui::TextEntry::GotoEndOfLine()=53 56 8B F1 57 6A 00 8B=partial pdb
virtual void vgui::TextEntry::Paste()=55 8B EC 83 EC 24 56 8B F1 80=partial pdb
virtual float vgui::TextEntry::GetValueAsFloat()=55 8B EC 53 8B D9 56 57 8B 03 FF ? ? ? ? ? 8D=partial pdb
virtual void vgui::TextEntry::FireActionSignal()=56 8B F1 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 10 68 ? ? ? ? 8B C8 E8 ? ? ? ? 8B C8 EB 02 33 C9 8B 06 51 8B=partial pdb
void vgui::TextEntry::SetToFullWidth()=55 8B EC 83 EC 14 56 8B F1 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
virtual void vgui::TextEntry::OnSetFocus()=56 8B F1 F6 ? ? ? ? ? ? 74 34=partial pdb
virtual void vgui::TextEntry::UpdateIMECandidates()=55 8B EC 81 ? ? ? ? ? 53 8B D9 89 5D FC=partial pdb
class vgui::Panel near * ComboBox_Factory()=A1 ? ? ? ? 68 ? ? ? ? 8B 08 8B 01 FF 50 04 85 C0 74 10 6A=partial pdb
virtual int vgui::ComboBox::AddItem()=55 8B EC 57 8B F9 FF=partial pdb
virtual bool vgui::ComboBox::UpdateItem()=55 8B EC 56 FF 75 08 8B F1 8B ? ? ? ? ? 8B 01 8B ? ? ? ? ? FF=partial pdb
void vgui::Menu::GetItemText()=55 8B EC 8B ? ? ? ? ? 8B 4D 08 56 85=partial pdb
virtual void vgui::ComboBox::OnSetText()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 66 83=partial pdb
virtual void vgui::ComboBox::OnMenuClose()=56 8B F1 8B 06 FF ? ? ? ? ? 8B 06 8B CE 8B=partial pdb
virtual void vgui::MenuButton::DoClick()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? 8B 01 8B=partial pdb
virtual void vgui::ComboBox::OnMenuItemSelected()=55 8B EC 81 ? ? ? ? ? 56 8B F1 8B ? ? ? ? ? C6=partial pdb
virtual void vgui::Slider::PerformLayout()=56 8B F1 E8 ? ? ? ? 8B 06 8B CE FF ? ? ? ? ? 8B=partial pdb
virtual void vgui::ComboBox::OnKeyTyped()=55 8B EC 53 57 8B F9 8B 07=partial pdb
bool CDemoStreamHttp::OnSync()=55 8B EC 81 ? ? ? ? ? 56 57 8B 7D 08 8B F1 85=partial pdb
virtual void vgui::FileNameComboBox::OnKeyCodeTyped()=55 8B EC 83 7D 08 40=partial pdb
void vgui::FileOpenDialog::Init()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 57 6A=partial pdb
virtual vgui::FileOpenDialog::~FileOpenDialog()=56 8B F1 57 8B ? ? ? ? ? 8B ? ? ? ? ? C7=partial pdb
virtual void vgui::FileOpenDialog::OnClose()=57 8B F9 F6 ? ? ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
void vgui::Panel::UpdateSiblingPin()=53 8B D9 56 57 8B ? ? ? ? ? 83 FA FF 74=partial pdb
void vgui::FileOpenDialog::NewFolder()=55 8B EC 81 ? ? ? ? ? 8D ? ? ? ? ? 53 8B D9 56 57 68 ? ? ? ? 8B=partial pdb
void vgui::FileOpenDialog::FilterFileList()=55 8B EC 83 EC 0C 53 56 57 8B F9 C7=partial pdb
virtual void vgui::FileOpenDialog::OnTextChanged()=55 8B EC 56 6A 00 8B F1 8B 4D 08 68 ? ? ? ? E8 ? ? ? ? 85 C0 74 0B 80 78 10 04 75 05 8B 40 0C EB 02 33 C0 8B ? ? ? ? ? 3B ? ? ? ? ? 75=partial pdb
virtual void vgui::EditablePanel::OnKeyCodeTyped()=55 8B EC 8B 45 08 56 8B F1 83 F8 40=partial pdb
virtual void vgui::EditablePanel::SetControlString()=55 8B EC 53 56 6A 00 FF 75 08 8B F1=partial pdb
virtual void vgui::MenuButton::HideMenu()=56 8B F1 8B ? ? ? ? ? 85 C9 74 52=partial pdb
virtual void vgui::MenuButton::OnKillFocus()=55 8B EC 56 57 6A 00 8B F1 8B=partial pdb
virtual void vgui::MenuButton::OnCursorEntered()=55 8B EC 51 53 8B D9 56 57 8B 03 8B ? ? ? ? ? FF D0 84 C0 74 0A=partial pdb
virtual void vgui::MenuButton::Paint()=55 8B EC 83 EC 1C 53 8B D9 89 5D F0=partial pdb
virtual void vgui::MenuSeparator::Paint()=55 8B EC 83 EC 0C 53 56 8B ? ? ? ? ? 8D 45 F8=partial pdb
virtual int vgui::Menu::AddMenuItem()=55 8B EC 53 56 57 8B 7D 08 8B F1 56=partial pdb
virtual void vgui::Menu::PerformLayout()=55 8B EC 83 EC 34 53 8B 5D=partial pdb
void vgui::Menu::PositionCascadingMenu()=55 8B EC 83 EC 3C 53 56 8B ? ? ? ? ? 8D 45 C4=partial pdb
void vgui::MenuItem::CloseCascadeMenu()=55 8B EC 53 8B D9 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::Menu::OnKeyCodeTyped()=55 8B EC 53 56 57 8B 7D 08 8B F1 8B CF E8=partial pdb
virtual void vgui::Menu::SetItemEnabled()=55 8B EC 57 8B F9 8B ? ? ? ? ? 83=partial pdb
virtual void vgui::Menu::SetItemVisible()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 F8 FF=partial pdb
virtual void vgui::Menu::OnCursorMoved()=55 8B EC 56 8B F1 C7 ? ? ? ? ? ? ? ? ? FF ? ? ? ? ? 6A=partial pdb
virtual void vgui::Menu::OnKeyCodePressed()=55 8B EC 51 53 8B D9 8B 03 C7=partial pdb
virtual void vgui::TextEntry::OpenEditMenu()=55 8B EC 83 EC 18 53 8B DA 56=partial pdb
void vgui::ComboBox::SelectMenuItem()=56 8B F1 8B ? ? ? ? ? 83 FA FF 74 77=partial pdb
virtual void vgui::Label::Paint()=55 8B EC 83 EC 58 53 56 8B F1=partial pdb
virtual void vgui::Label::SetFgColor()=55 8B EC 51 56 8B F1 8D 4D=partial pdb
virtual void vgui::Label::OnRequestFocus()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 83 FA=partial pdb
virtual void vgui::Label::PerformLayout()=55 8B EC 83 EC 1C 53 56 8B ? ? ? ? ? 8D 45 EC=partial pdb
virtual void ColumnButton::OnMousePressed()=55 8B EC 53 8B D9 8B 03 8B ? ? ? ? ? FF D0 84 C0 0F=partial pdb
virtual void Dragger::OnCursorMoved()=55 8B EC 51 53 8B D9 80 ? ? ? ? ? ? 0F ? ? ? ? ? 8B=partial pdb
void vgui::ListPanel::ResortColumnRBTree()=55 8B EC 8B 45 08 83 EC 14 53=partial pdb
virtual void vgui::ListPanel::SetColumnHeaderImage()=55 8B EC 56 8B 75 08 57 8B F9 6A FF=partial pdb
virtual void vgui::ListPanel::SetColumnSortable()=55 8B EC 80 7D 0C 00 56 8B F1 74=partial pdb
virtual void vgui::ListPanel::RemoveColumn()=55 8B EC 51 53 8B D9 8B 4D 08=partial pdb
virtual void vgui::ListPanel::RemoveAll()=55 8B EC 51 56 57 8B F9 33 F6 39 ? ? ? ? ? 7E=partial pdb
virtual void vgui::ListPanel::GetCellText()=55 8B EC 83 E4 F8 51 53 56 57 8B 7D 10 8B=partial pdb
virtual void vgui::EditablePanel::OnChildAdded()=55 8B EC 81 ? ? ? ? ? 53 56 8B F1 8B 4D=partial pdb
virtual void vgui::ListPanel::PerformLayout()=55 8B EC 83 EC 78 53 8B D9=partial pdb
void vgui::ListPanel::UpdateSelection()=55 8B EC 53 8B 5D 14 56 8B F1=partial pdb
virtual void vgui::ListPanel::OnMousePressed()=55 8B EC 83 EC 0C 56 57 8B 7D 08 8B F1 83=partial pdb
virtual void vgui::ListPanel::OnMouseWheeled()=55 8B EC 56 8B F1 8B ? ? ? ? ? 83 FA FF 74 6B=partial pdb
virtual void vgui::ListPanel::SortList()=55 8B EC 83 EC 18 56 8B F1 89=partial pdb
float VProfPlayback_GetCurrentPercent()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8D 45 FC 57 50 8B D9 8D 45 F8 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 45 FC 2B=partial pdb
void SV_WriteSendTables()=55 8B EC 81 ? ? ? ? ? 56 8B F1 89 75 FC=partial pdb
virtual void vgui::ListPanel::ResizeColumnToContents()=55 8B EC 81 ? ? ? ? ? 53 8B D9 57 8B 7D=partial pdb
virtual bool CBaseClient::ChangeSplitscreenUser()=55 8B EC 57 8B F9 8B 07 8B ? ? ? ? ? FF D0 84 C0 74 10=partial pdb
virtual void vgui::CircularProgressBar::Paint()=55 8B EC 83 EC 08 56 57 8B F1=partial pdb
virtual void vgui::Slider::SetTickCaptions()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 39=partial pdb
virtual void vgui::Slider::OnCursorMoved()=55 8B EC 83 EC 18 53 8B D9 80=partial pdb
virtual void vgui::Slider::OnMousePressed()=55 8B EC 83 EC 28 53 8B D9 8B=partial pdb
vgui::ContinuousProgressBar::ContinuousProgressBar()=55 8B EC 51 53 56 57 6A 00 FF=partial pdb
virtual void vgui::RichText::SetFgColor()=55 8B EC 51 56 8B F1 83 ? ? ? ? ? ? 75=partial pdb
virtual void vgui::RichText::OnKillFocus()=55 8B EC 83 EC 18 89 4D F8=partial pdb
int vgui::RichText::PixelToCursorSpace()=55 8B EC 83 EC 40 53 8B D9 8B ? ? ? ? ? 56=partial pdb
virtual void vgui::RichText::Paint()=55 8B EC 83 E4 F0 83 EC 58 56 8B F1=partial pdb
void CHLTVServer::StopRecordingAndFreeFrames()=55 8B EC 51 57 8B F9 83 ? ? ? ? ? ? 0F=partial pdb
void vgui::RichText::CreateEditMenu()=56 8B F1 8B ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01=partial pdb
void vgui::RichText::OpenEditMenu()=55 8B EC 83 EC 1C 8D 55=partial pdb
virtual void vgui::RichText::OnClickPanel()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 56 57 8B 7D 08 8B F1=partial pdb
vgui::ImagePanel::ImagePanel()=55 8B EC 51 53 56 57 FF 75 0C 8B F1=partial pdb
virtual void vgui::ImagePanel::PaintBackground()=55 8B EC 83 EC 1C 53 8B D9 56 57 80=partial pdb
virtual void vgui::ImagePanel::ApplySettings()=55 8B EC 83 E4 F8 A1 ? ? ? ? 83 EC 1C 53 8B=partial pdb
virtual void vgui::ListViewItem::PaintBackground()=55 8B EC 83 EC 0C 8D 45 F8=partial pdb
DefaultSortFunc_0()=55 8B EC 83 E4 F8 51 8B 4D 08=partial pdb
virtual int vgui::ListViewPanel::AddItem()=55 8B EC A1 ? ? ? ? 53 56 8B F1 8B 08 57 68=partial pdb
virtual void vgui::ListViewPanel::ApplyItemChanges()=55 8B EC 51 8B 55 08 85 D2 0F ? ? ? ? ? 3B ? ? ? ? ? 0F=partial pdb
virtual void vgui::ListViewPanel::SetFont()=55 8B EC 51 8B 55 08 56 8B F1 85=partial pdb
virtual void vgui::ListViewPanel::PerformLayout()=55 8B EC 83 EC 28 56 8B F1 80=partial pdb
virtual void vgui::ListViewPanel::OnMousePressed()=55 8B EC 56 57 8B 7D 08 8B F1 83 FF 6B=partial pdb
void vgui::ListViewPanel::OnShiftSelect()=55 8B EC 51 53 56 8B F1 57 8B ? ? ? ? ? 85 D2=partial pdb
virtual void vgui::ListViewPanel::OnKeyTyped()=55 8B EC 83 E4 F8 83 EC 14 53 56 8B 75 08 8B D9=partial pdb
virtual void vgui::RadioButton::SetSelected()=55 8B EC 83 EC 10 80 7D 08=partial pdb
CColorSlider::CColorSlider()=55 8B EC 56 57 FF 75 0C 8B F9 FF 75 08 E8 ? ? ? ? C7=partial pdb
virtual void vgui::ProgressBar::Paint()=55 8B EC 83 EC 18 53 56 8B ? ? ? ? ? 8D=partial pdb
virtual void vgui::ProgressBar::GetSettings()=55 8B EC 56 57 8B 7D 08 8B F1 57 E8 ? ? ? ? F3=partial pdb
virtual void vgui::ContinuousProgressBar::Paint()=55 8B EC 83 EC 0C 8D 45 FC=partial pdb
virtual void CreateDirectoryDialog::OnCommand()=55 8B EC 56 57 8B 7D 08 8B F1 BA ? ? ? ? 8B CF E8 ? ? ? ? 85 C0 75 5C=partial pdb
void vgui::DirectorySelectDialog::BuildDriveChoices()=55 8B EC 81 ? ? ? ? ? 8B C1 53 56 57 8B=partial pdb
void vgui::DirectorySelectDialog::BuildDirTree()=56 57 8B F9 8B ? ? ? ? ? 8B 01 FF ? ? ? ? ? FF=partial pdb
void vgui::DirectorySelectDialog::ExpandTreeNode()=55 8B EC 81 ? ? ? ? ? 89 4D F8 8B ? ? ? ? ? 57=partial pdb
virtual void vgui::MenuBar::AddMenu()=55 8B EC A1 ? ? ? ? 56 57 8B F9 8B 08 68=partial pdb
virtual void vgui::MenuBar::OnKeyTyped()=55 8B EC 66 ? ? ? ? 57 8B=partial pdb
void vgui::CircularProgressBar::SetImage()=55 8B EC 8B 55 08 53 56 8B F1 57 8D=partial pdb
void vgui::CircularProgressBar::DrawCircleSegment()=55 8B EC 83 E4 F8 83 EC 4C 53 8B D9 F3=partial pdb
virtual vgui::MenuItem::~MenuItem()=56 8B F1 57 8B ? ? ? ? ? C7 ? ? ? ? ? 85 C9 74 0A 8B 01 6A 01 FF ? ? ? ? ? 8B=partial pdb
virtual void vgui::MenuItem::Init()=56 8B F1 8B ? ? ? ? ? C7 ? ? ? ? ? ? ? ? ? C7=partial pdb
virtual void vgui::MenuItem::FireActionSignal()=55 8B EC 51 53 8B D9 83 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::MenuItem::OnKeyModeSet()=55 8B EC 51 53 56 57 89 4D FC FF=partial pdb
bool Voice_RecordStop()=55 8B EC 83 E4 F8 83 EC 6C 53 56 8B=partial pdb
void vgui::URLLabel::SetURL()=55 8B EC 53 56 57 8B 7D 08 8B D9 8B F7 8D=partial pdb
virtual void vgui::TreeNodeText::PaintBackground()=55 8B EC 83 EC 0C 53 8B D9 E8=partial pdb
virtual void vgui::TreeNodeText::OnTick()=53 8B D9 80 ? ? ? ? ? ? 74 5B=partial pdb
virtual void vgui::TreeNodeText::OnMouseReleased()=55 8B EC 51 53 8B D9 80 ? ? ? ? ? ? 74=partial pdb
void CDemoSmootherPanel::OnSmoothEdges()=55 8B EC 81 ? ? ? ? ? 56 8B F1 80 ? ? ? ? ? ? 0F=partial pdb
void CDemoSmootherPanel::OnSave()=55 8B EC 81 ? ? ? ? ? 53 8B D9 80 ? ? ? ? ? ? 0F=partial pdb
virtual void vgui::TreeNode::OnLabelChanged()=55 8B EC 83 E4 F8 51 53 56 57 68 ? ? ? ? 8B F9=partial pdb
void vgui::TreeNode::SetKeyValues()=55 8B EC 53 8B 5D 08 56 57 8B F9 8B ? ? ? ? ? 3B=partial pdb
virtual void vgui::TreeNode::PerformLayout()=55 8B EC 83 EC 0C 53 56 57 8B D9 E8=partial pdb
virtual void vgui::TreeNode::SetVisible()=55 8B EC 51 8B 01 53 8B=partial pdb
virtual void vgui::TreeNode::ClosePreviousParents()=55 8B EC 83 EC 14 56 8B F1 C7=partial pdb
virtual void vgui::TreeNode::StepOut()=55 8B EC 53 8B D9 57 8B ? ? ? ? ? 8B=partial pdb
void vgui::TreeNode::PositionAndSetVisibleNodes()=55 8B EC 51 53 56 57 8B ? ? ? ? ? 8B F1=partial pdb
virtual void CSaveRestoreFileSystem::Close()=55 8B EC 53 56 57 8B 7D 08 8B D9 33 F6 C7 ? ? ? ? ? ? 8B ? ? ? ? ? 89 45 08 85 C0 7E 1F=partial pdb
virtual void vgui::TreeView::GetVBarInfo()=55 8B EC 83 EC 08 53 56 8B ? ? ? ? ? 8D 45 FC 57 50 8B D9 8D 45 F8 8B 3E 50 8B 03 FF 10 50 8B CE FF 57 14 8B 45 FC 99=partial pdb
virtual void vgui::TreeView::OnMousePressed()=55 8B EC 83 EC 14 53 8B D9 8B ? ? ? ? ? 6A=partial pdb
virtual void vgui::CBitmapImagePanel::setTexture()=55 8B EC 8A 45 0C 56 8B F1=partial pdb
virtual void vgui::MessageBox::OnCommand()=55 8B EC 56 57 8B F9 8B ? ? ? ? ? 8B 01 FF 50 4C=partial pdb
bool vgui::VGui_InitInterfacesList()=68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 68 ? ? ? ? 6A=partial pdb
vgui::BuildGroup::BuildGroup()=55 8B EC 56 8B F1 C7 ? ? ? ? ? C7 ? ? ? ? ? ? C7 ? ? ? ? ? ? C7=partial pdb
vgui::BuildGroup::~BuildGroup()=56 8B F1 C7 ? ? ? ? ? 8B 56=partial pdb
virtual void vgui::BuildGroup::SetEnabled()=55 8B EC 8A 45 08 56 8B F1 38=partial pdb
virtual void vgui::BuildGroup::ToggleRulerDisplay()=56 8B F1 80 ? ? ? ? ? ? 0F 94=partial pdb
virtual void vgui::BuildGroup::DrawRulers()=55 8B EC 83 EC 48 53 8B D9 89=partial pdb
virtual bool vgui::BuildGroup::CursorMoved()=55 8B EC 83 EC 0C 53 8B D9 56 8B 53=partial pdb
void vgui::BuildGroup::ActivateBuildDialog()=55 8B EC 83 EC 18 53 8B D9 8B 53=partial pdb
virtual bool vgui::BuildGroup::KeyCodeTyped()=55 8B EC 83 EC 1C 53 8B D9 8B 53=partial pdb
virtual bool vgui::BuildGroup::KeyCodeReleased()=55 8B EC 56 8B F1 57 8B 56=partial pdb
void vgui::BuildGroup::ReloadControlSettings()=56 8B F1 8B 56 68=partial pdb
virtual void vgui::BuildGroup::ApplySettings()=56 57 8B F9 BE ? ? ? ? 39=partial pdb
virtual void vgui::BuildGroup::GetSettings()=55 8B EC 53 57 8B F9 33=partial pdb
virtual void vgui::BuildGroup::RemoveSettings()=53 56 8B F1 57 33 FF 39 ? ? ? ? ? 0F=partial pdb
virtual void vgui::TextTooltip::ShowTooltip()=55 8B EC A1 ? ? ? ? 56 8B F1 83 F8=partial pdb
virtual void vgui::TextTooltip::PerformLayout()=55 8B EC 83 EC 08 53 8B D9 F6=partial pdb
virtual void vgui::TextTooltip::HideTooltip()=A1 ? ? ? ? 56 8B F1 83 F8 FF 74=partial pdb
vgui::CBuildFactoryHelper::CBuildFactoryHelper()=55 8B EC 53 56 8B ? ? ? ? ? 8B D9 57 8B 7D 08 85 F6=partial pdb
virtual void vgui::TextImage::GetText()=55 8B EC 56 57 FF 75 0C 8B 7D=partial pdb
virtual void vgui::TextImage::GetUnlocalizedText()=55 8B EC 8B 51 2C 83=partial pdb
CCurveEditorPanel::CCurveEditorPanel()=55 8B EC 53 56 83=partial pdb
void vgui::BuildModeDialog::PanelList::RemoveAll()=55 8B EC 51 8B C1 56=partial pdb
virtual void CBuildModeNavCombo::OnShowMenu()=55 8B EC 83 EC 10 53 8B D9 8B 4D=partial pdb
char const near * ParseTokenFromString()=55 8B EC 83 EC 0C 8B C1 C6=partial pdb
void CBaseClientState::BuildReserveServerPayload()=55 8B EC 81 ? ? ? ? ? 8B 45 08 53 8B D9 89=partial pdb
virtual void CPropFadeUIPanel::Activate()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 8B D9 57 6A=partial pdb
virtual void vgui::BuildModeDialog::OnCommand()=55 8B EC 53 56 8B 75 08 8B D9 BA=partial pdb
virtual void vgui::BuildModeDialog::DoUndo()=56 8B F1 8B ? ? ? ? ? 85 D2 74 4A=partial pdb
virtual void vgui::BuildModeDialog::OnTextChanged()=55 8B EC 81 ? ? ? ? ? 56 8B F1 57 8B 7D=partial pdb
int _V_strlen()=55 8B EC 8B 45 08 8D 50=partial pdb
void CUtlMemory<struct PanelItem_t,int>::Grow()=55 8B EC 53 8B D9 8B 53 08 85 D2 78 67 8B 4B 04 56 57 8B 7D 08 03 F9 6A 54=partial pdb
bool vgui::FocusNavGroup::CanButtonBeDefault()=55 8B EC 83 7D 08 00 75 06 32=partial pdb
vgui::ListPanel::ListPanel()=55 8B EC 51 56 57 FF 75 0C=partial pdb
OperationSortFunc()=55 8B EC 83 E4 F8 51 53 56 57 8B 7D 0C=partial pdb
void COperationFileListFrame::AddOperation()=55 8B EC 56 57 8B F9 FF ? ? ? ? ? 6A 24 8B C8 8B 10 FF 52 04 85 C0 74 18=partial pdb
void COperationFileListFrame::DoModal()=55 8B EC 8B 45 0C BA=partial pdb
void CPerforceFileListFrame::AddFile()=55 8B EC 53 56 8B F1 8B ? ? ? ? ? 83 C1=partial pdb
vgui::GraphPanel::GraphPanel()=55 8B EC 53 56 57 51 6A 01 68 ? ? ? ? FF 75 08 8B F9=partial pdb
virtual void vgui::PanelListPanel::PerformLayout()=55 8B EC 83 EC 60 53 56 8B ? ? ? ? ? 8D=partial pdb
void vgui::Splitter::RecreateSplitters()=55 8B EC 81 ? ? ? ? ? 53 8B D9 56 57 8B ? ? ? ? ? 85=partial pdb
void vgui::Splitter::SetSplitterPosition()=55 8B EC 83 EC 0C 53 56 8B ? ? ? ? ? 8D 45 F4 57 8B=partial pdb
void vgui::Splitter::EvenlyRespaceSplitters()=55 8B EC 83 EC 10 8B D1 89=partial pdb
virtual void vgui::Splitter::ApplyUserConfigSettings()=55 8B EC 81 ? ? ? ? ? 53 56 57 FF 75 08 8B D9 89=partial pdb
bool CVTFTexture::AllocateImageData()=55 8B EC 56 8B 75 08 57 8B F9 8B 4F 28=partial pdb
virtual bool CVTFTexture::Init()=55 8B EC 8B 45 10 85 C0 53=partial pdb
virtual void CVTFTexture::LowResFileInfo()=55 8B EC 56 6A 01 8B=partial pdb
virtual void near * CVTFTexture::SetResourceData()=55 8B EC 51 53 8B 5D 10 8B=partial pdb
virtual void near * CVTFTexture::GetResourceData()=55 8B EC 8B 45 08 56 25=partial pdb
virtual unsigned int CVTFTexture::GetResourceTypes()=55 8B EC 53 57 8B F9 8B ? ? ? ? ? 8B ? ? ? ? ? 8D=partial pdb
ReadHeaderFromBufferPastBaseHeader()=8B 42 08 56 8B=partial pdb
bool CVTFTexture::RemoveResourceEntryInfo()=55 8B EC 53 8B D9 56 57 33 FF=partial pdb
virtual int CVTFTexture::ComputeMipSize()=55 8B EC 83 EC 0C 8B 01 8D 55 FC=partial pdb
virtual void CVTFTexture::ComputeMipLevelSubRect()=55 8B EC 83 E4 C0 8B 4D=partial pdb
virtual void CVTFTexture::ConvertImageFormat()=55 8B EC 83 EC 38 57=partial pdb
CalcInit()=55 8B EC 66 0F 6E CA=partial pdb
CalcColor()=55 8B EC 51 8B C1 89 45 FC 56 57 8B 78=partial pdb
void vgui::ProgressBar::PaintSegment()=55 8B EC 53 8B D9 83 FA=partial pdb
ConvertPcTo360SrgbRGBA8888()=55 8B EC 83 EC 1C 83 7D 08 00 89=partial pdb
virtual void CVTFTexture::ComputeReflectivity()=55 8B EC 83 EC 08 56 8B F1 83 7E 18=partial pdb
virtual void CVTFTexture::MatchCubeMapBorders()=55 8B EC 83 E4 F8 81 ? ? ? ? ? 53 8B D9 56 57 83 7B 18=partial pdb
virtual void CGameServer::Clear()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 68 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=partial pdb
void Host_FreeStateAndWorld()=55 8B EC 83 E4 F0 83 EC 38 56 57 8B 7D=partial pdb
bool S_GetSoundChannelVolume()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53=partial pdb
bool CWin32UploadGameStats::DoBlockingReceive()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 30 A1 ? ? ? ? 33 C5 89 45 F0 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B F1=partial pdb
bool WorldLightToMaterialLight()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 64 A1 ? ? ? ? 33 C5 89 45 F0 53 56 57 50 8D 45 F4 64 ? ? ? ? ? 89=partial pdb
virtual void CAudioSourceCache::LevelInit()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 56 FF=partial pdb
static char near * std::char_traits<char>::copy()=55 8B EC FF 75 10 FF 75 0C FF 75 08 E8=partial pdb
bool CExpressionCalculator::Parse2ArgFunc()=55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B 75 08=partial pdb
__std_parallel_algorithms_hw_threads()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 68=partial pdb
bench_start()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 80=partial pdb
void CMapReslistGenerator::OnLevelLoadStart()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 F0 56 57 50 8D 45 F4 64 ? ? ? ? ? 8B 4D=partial pdb
void DispInfo_DeleteArray()=55 8B EC 8B 55 0C 8B CA 8B 45 08 56 8B F2 C1 F9 1F 0F A4 C2 01 C1 FE 1F 03=partial pdb
bool IsSoundSourceViewEntity()=55 8B EC 56 8B 75 08 57 8B 7D 0C 0F ? ? ? ? 8B=partial pdb
void R_DrawLightmaps()=55 8B EC 56 8B 75 0C 39=partial pdb
void CTextureBudgetPanel::SendConfigDataToBase()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 83 EC 1C 53 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 75=partial pdb
CSosOperator::CSosOperator()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 51 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 89 7D F0 8B 45 08 89=partial pdb
virtual int CEngineTrace::GetPointContents_WorldOnly()=55 8B EC 83 EC 08 56 FF=partial pdb
virtual void CSpatialPartition::Init()=55 8B EC 53 56 8B 31=partial pdb
CWordTag::CWordTag()=56 57 8B F9 8B 4F 10=partial pdb
std::_Init_locks::_Init_locks()=33 C0 57 8B F9 40=partial pdb
std::_Fac_node::~_Fac_node()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B 79=partial pdb
int std::_New_handler_interface()=56 8B ? ? ? ? ? 8B CE E8 ? ? ? ? FF D6 33=partial pdb
int initialize_pointers()=56 68 ? ? ? ? FF ? ? ? ? ? 8B F0 68=partial pdb
___crtInitializeCriticalSectionEx()=55 8B EC 56 8B ? ? ? ? ? 33 ? ? ? ? ? 74=partial pdb
__Mtxinit()=55 8B EC 6A 00 68 ? ? ? ? FF=partial pdb
_Init_atexit::~_Init_atexit()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? EB=partial pdb
___scrt_acquire_startup_lock()=E8 ? ? ? ? 85 C0 75 03 32=partial pdb
___scrt_dllmain_exception_filter()=55 8B EC E8 ? ? ? ? 85 C0 75=partial pdb
___scrt_initialize_onexit_tables()=55 8B EC 83 EC 0C 56 8B 75 08 85 F6 74=partial pdb
__onexit()=55 8B EC A1 ? ? ? ? 8B C8=partial pdb
int dllmain_crt_process_attach()=6A 10 68 ? ? ? ? E8 ? ? ? ? 6A=partial pdb
int dllmain_crt_process_detach()=6A 0C 68 ? ? ? ? E8 ? ? ? ? A1=partial pdb
int dllmain_raw()=55 8B EC 56 8B ? ? ? ? ? 85 F6 75 05=partial pdb
__security_check_cookie()=3B ? ? ? ? ? F2 75=partial pdb
int __scrt_initialize_thread_safe_statics()=53 56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? E8=partial pdb
__Init_thread_abort()=55 8B EC E8 ? ? ? ? 8B 45=partial pdb
__Init_thread_footer()=55 8B EC E8 ? ? ? ? 8B ? ? ? ? ? 8B=partial pdb
__Init_thread_header()=55 8B EC 56 E8 ? ? ? ? 8B 75 08 EB=partial pdb
__Init_thread_wait()=55 8B EC 83 ? ? ? ? ? ? 56 75=partial pdb
void `eh vector constructor iterator'()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 DB 89=partial pdb
void `eh vector destructor iterator'()=6A 0C 68 ? ? ? ? E8 ? ? ? ? C6 45 E7 00 8B 5D=partial pdb
void __ArrayUnwind()=6A 18 68 ? ? ? ? E8 ? ? ? ? 33=partial pdb
__alloca_probe()=51 8D 4C 24 04 2B=partial pdb
___report_gsfailure()=55 8B EC 81 ? ? ? ? ? 6A 17 E8 ? ? ? ? 85 C0 74 05 6A=partial pdb
___report_securityfailure()=55 8B EC 81 ? ? ? ? ? 6A 17 E8 ? ? ? ? 85 C0 74 05 8B=partial pdb
__ftoui3()=B9 ? ? ? ? F2 ? ? ? ? ? ? ? EB 1C B9 ? ? ? ? F2 ? ? ? ? ? ? ? EB 0D B9 ? ? ? ? F2 ? ? ? ? ? ? ? 66 0F 7E=partial pdb
__ftol3_except()=83 EC 20 9B=partial pdb
__dtoul3()=B9 ? ? ? ? F2 ? ? ? ? ? ? ? EB 0D B9 ? ? ? ? F2 ? ? ? ? ? ? ? 66 0F 6F=partial pdb
__ultod3()=0F 57 C0 F2 0F 2A C1 C1 E9 1F F2 ? ? ? ? ? ? ? ? 85=partial pdb
__ltod3()=0F 57 C9 F2 0F 2A CA 0F=partial pdb
__EH_epilog3()=8B 4D F4 64 ? ? ? ? ? ? 59 5F 5F=partial pdb
__EH_prolog3()=50 64 ? ? ? ? ? ? 8D 44 24 0C 2B 64 24 0C 53 56 57 89 28 8B E8 A1 ? ? ? ? 33 C5 50 FF=partial pdb
___isa_available_init()=55 8B EC 83 ? ? ? ? ? ? 83 EC=partial pdb
___scrt_fastfail()=55 8B EC 81 ? ? ? ? ? 53 56 6A=partial pdb
__SEH_epilog4()=8B 4D F0 64 ? ? ? ? ? ? 59 5F 5F=partial pdb
___security_init_cookie()=55 8B EC 83 EC 14 83 65=partial pdb
___scrt_initialize_default_local_stdio_options()=E8 ? ? ? ? 8B 48 04 83 08 04=partial pdb
_wcschr()=53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 8B=partial pdb
__get_purecall_handler()=33 C9 BA ? ? ? ? 33 C0=partial pdb
__purecall()=56 E8 ? ? ? ? 8B F0 85 F6 74 09=partial pdb
__set_purecall_handler()=55 8B EC FF 75 08 E8 ? ? ? ? 8B D0 B8=partial pdb
_wcsstr()=53 8B DC 51 51 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 83=partial pdb
___std_type_info_name()=55 8B EC 83 EC 0C 33 C9=partial pdb
___DestructExceptionObject()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 45 08 85=partial pdb
unknown_libname_10()=55 8B EC 56 8B F1 8D 46 04 C7 ? ? ? ? ? 50 E8 ? ? ? ? F6=partial pdb
void near * CallCatchBlock()=6A 38 68 ? ? ? ? E8=partial pdb
void CatchIt()=55 8B EC 83 7D 20=partial pdb
void FindHandler()=55 8B EC 83 EC 44 53 8B 5D 0C=partial pdb
void FindHandlerForForeignException()=55 8B EC 51 51 57=partial pdb
unsigned char Is_bad_exception_allowed()=55 8B EC 53 56 57 8B 7D 08 33=partial pdb
___FrameUnwindFilter()=55 8B EC 8B 45 08 8B 00 81 ? ? ? ? ? 74=partial pdb
___FrameUnwindToState()=6A 10 68 ? ? ? ? E8 ? ? ? ? 8B 45=partial pdb
___InternalCxxFrameHandler()=55 8B EC 53 56 57 FF 75 10 E8=partial pdb
___uncaught_exception()=E8 ? ? ? ? 83 78 18 00 0F=partial pdb
_CxxThrowException()=55 8B EC 83 EC 20 53 8B 5D 08 56 57 6A=partial pdb
void near * _CallCatchBlock2()=55 8B EC 83 EC 18 A1 ? ? ? ? 8D=partial pdb
int _CallSETranslator()=55 8B EC 83 EC 38 53 81=partial pdb
__FindAndUnlinkFrame()=55 8B EC 56 E8 ? ? ? ? 8B 75 08 3B=partial pdb
void near * FindCompleteObject()=55 8B EC 8B 55 08 8B 02 8B=partial pdb
___RTDynamicCast()=6A 18 68 ? ? ? ? E8 ? ? ? ? 8B 7D 08=partial pdb
__except_handler4()=55 8B EC 83 EC 1C 53 56 8B 75 0C 57 C6=partial pdb
___vcrt_initialize()=E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 84 C0=partial pdb
___vcrt_uninitialize()=55 8B EC 80 7D 08 00 75 12=partial pdb
___vcrt_initialize_pure_virtual_call_handler()=A1 ? ? ? ? 83 E0 1F 6A 20 59 2B C8 33 C0 D3 C8 33 ? ? ? ? ? A3 ? ? ? ? C3=partial pdb
DName::DName()=55 8B EC 53 56 8B F1 57 8B 7D 08 83=partial pdb
unknown_libname_11()=55 8B EC 56 8B F1 83 26=partial pdb
UnDecorator::UnDecorator()=55 8B EC 83 09=partial pdb
pcharNode::pcharNode()=55 8B EC 53 56 8B F1 57 8B 7D 0C C7=partial pdb
class DName Replicator::operator[]()=55 8B EC 8B 55 0C 83 FA 09=partial pdb
UnDecorator::operator char near *()=55 8B EC 83 EC 20 8B 4D F4=partial pdb
void _HeapManager::Destructor()=57 8B F9 83 7F 04 00 74 2E=partial pdb
static char const near * UnDecorator::UScore()=55 8B EC A1 ? ? ? ? F7=partial pdb
unknown_libname_12()=55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 2E=partial pdb
static class DName UnDecorator::composeDeclaration()=55 8B EC 83 EC 60 81=partial pdb
void DName::doPchar()=55 8B EC 56 8B F1 57 33=partial pdb
static class DName UnDecorator::getArgumentList()=55 8B EC 83 EC 18 53 56 8B 75 08 33 DB 43=partial pdb
static class DName UnDecorator::getArgumentTypes()=55 8B EC A1 ? ? ? ? 83 EC 10 0F=partial pdb
static class DName UnDecorator::getArrayType()=55 8B EC A1 ? ? ? ? 83 EC 30 80 38=partial pdb
static class DName UnDecorator::getBasedType()=55 8B EC 83 EC 10 6A=partial pdb
static class DName UnDecorator::getBasicDataType()=55 8B EC 8B ? ? ? ? ? 83 EC 1C 8A=partial pdb
static class DName UnDecorator::getDataIndirectType()=55 8B EC 83 EC 54 8B 45 C8=partial pdb
static class DName UnDecorator::getDataType()=55 8B EC 83 EC 18 8D 4D=partial pdb
static class DName UnDecorator::getDecoratedName()=55 8B EC A1 ? ? ? ? 83 EC 24 53=partial pdb
static class DName UnDecorator::getDimension()=55 8B EC 8B ? ? ? ? ? 83 EC 18 56=partial pdb
static class DName UnDecorator::getDispatchTarget()=55 8B EC 8B ? ? ? ? ? 8A=partial pdb
static class DName UnDecorator::getECSUDataType()=55 8B EC A1 ? ? ? ? 83 EC 20 8B D0=partial pdb
static class DName UnDecorator::getEnumType()=55 8B EC 83 EC 18 A1 ? ? ? ? 83=partial pdb
static class DName UnDecorator::getExternalDataType()=55 8B EC 83 EC 18 B9=partial pdb
char DName::getLastChar()=57 8B 39 85 FF 75 04 32=partial pdb
virtual char pairNode::getLastChar()=53 8B D9 56 57 8B 7B 08=partial pdb
static class DName UnDecorator::getLexicalFrame()=55 8B EC 83 EC 18 8D 45 F0=partial pdb
void near * _HeapManager::getMemory()=55 8B EC 56 8B 75 08 83 C6=partial pdb
static int UnDecorator::getNumberOfDimensions()=8B ? ? ? ? ? 8A 01 84 C0 75 03=partial pdb
static class DName UnDecorator::getOperatorName()=55 8B EC 83 EC 28 53 56 8B ? ? ? ? ? B9=partial pdb
static class DName UnDecorator::getPrimaryDataType()=55 8B EC 83 EC 10 8B ? ? ? ? ? BA=partial pdb
static class DName UnDecorator::getPtrRefDataType()=55 8B EC A1 ? ? ? ? 83 EC 18 8A 08 84 C9 0F=partial pdb
static class DName UnDecorator::getPtrRefType()=55 8B EC 51 51 A1 ? ? ? ? 56 57 8A 00=partial pdb
static class DName UnDecorator::getRestrictionSpec()=55 8B EC 51 51 A1 ? ? ? ? 56 57 8A 08=partial pdb
static class DName UnDecorator::getScope()=55 8B EC 81 ? ? ? ? ? 53 56 8B 75 08 57 C6=partial pdb
static class DName UnDecorator::getScopedName()=55 8B EC 83 EC 18 53 56 8B 75 08 33 DB 57 BF=partial pdb
char near * DName::getString()=55 8B EC 57 8B 39=partial pdb
virtual char near * DNameStatusNode::getString()=55 8B EC 83 79 04 01=partial pdb
virtual char near * pairNode::getString()=55 8B EC 53 56 8B D9 57 FF=partial pdb
static class DName UnDecorator::getStringEncoding()=55 8B EC 83 EC 10 8D 4D F8=partial pdb
unknown_libname_13()=55 8B EC 8B 45 0C 8B 55 08 2B=partial pdb
static class DName UnDecorator::getTemplateConstant()=55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC A1=partial pdb
static class DName UnDecorator::getTemplateName()=55 8B EC A1 ? ? ? ? 81 ? ? ? ? ? 80=partial pdb
static class DName UnDecorator::getThisType()=55 8B EC 83 EC 10 83 65=partial pdb
static class DName UnDecorator::getThrowTypes()=55 8B EC A1 ? ? ? ? 83 EC 18 8A 08 84 C9 74=partial pdb
static int UnDecorator::getTypeEncoding()=55 8B EC 51 8B ? ? ? ? ? 53 56 57 6A=partial pdb
static class DName UnDecorator::getVCallThunkType()=55 8B EC A1 ? ? ? ? 8A 08=partial pdb
static class DName UnDecorator::getVdispMapType()=55 8B EC 51 51 8B 4D 0C=partial pdb
static class DName UnDecorator::getVfTableType()=55 8B EC 8B 4D 0C 83 EC 20=partial pdb
static class DName UnDecorator::getZName()=55 8B EC 83 EC 3C A1=partial pdb
int DName::length()=57 8B 39 85 FF 75 04 33=partial pdb
virtual int pairNode::length()=55 8B EC 51 8B C1 89 45 FC 83 78=partial pdb
_unexpected()=56 E8 ? ? ? ? 8B 70 04=partial pdb
_seh_longjmp_unwind4()=55 FF 74 24 08 E8 ? ? ? ? 83 C4 04 8B 4C 24 08 8B 29 FF=partial pdb
_EH4_GlobalUnwind2()=55 8B EC 53 56 57 6A 00 52=partial pdb
__global_unwind2()=55 8B EC 53 56 57 55=partial pdb
__unwind_handler()=8B 4C 24 04 F7 ? ? ? ? ? ? B8 ? ? ? ? 74 32=partial pdb
__abnormal_termination()=33 C0 64=partial pdb
__NLG_Notify1()=53 51 BB ? ? ? ? EB=partial pdb
unknown_libname_17()=8B FF 55 8B EC 8D 41=partial pdb
__invalid_parameter()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8 ? ? ? ? 85=partial pdb
__invoke_watson()=6A 17 E8 ? ? ? ? 85 C0 74 05 6A 05=partial pdb
bool __crt_stdio_output::is_wide_character_specifier<char>()=8B FF 55 8B EC 8B 45 14 48 83 E8 01 74 2E=partial pdb
unknown_libname_18()=8B FF 55 8B EC 53 56 8B F1 57=partial pdb
unknown_libname_19()=8B FF 55 8B EC 51 51 53 56 8B F1 57 8D=partial pdb
_LocaleUpdate::_LocaleUpdate()=8B FF 55 8B EC 57 8B=partial pdb
void __crt_stdio_output::crop_zeroes()=8B FF 55 8B EC 8B 45 0C 8B 4D 08 53 8B=partial pdb
unknown_libname_24()=8B FF 55 8B EC 8A 4D 08 8D 41 E0 3C 5A 77 0F 0F BE C1 0F ? ? ? ? ? ? 83 E0=partial pdb
unknown_libname_25()=8B FF 55 8B EC 8A 4D 08 8D 41 E0 3C 5A 77 0F 0F BE C1 0F ? ? ? ? ? ? 83 E1=partial pdb
unknown_libname_26()=8B FF 55 8B EC 8B 4D 08 8D=partial pdb
void __crt_stdio_output::force_decimal_point()=8B FF 55 8B EC 56 8B 75 08 0F=partial pdb
unknown_libname_27()=8B FF 55 8B EC 51 53 56 8B F1 8D 4D FC 57 6A 0A 51 8B 7E 0C 8B 1F 83 27 00 8B 46 10 83 65 FC 00 48=partial pdb
unknown_libname_28()=8B FF 55 8B EC 51 53 56 8B F1 8D 4D FC 57 6A 0A 51 8B 7E 0C 8B 1F 83 27 00 8B 46 10 83 65 FC 00 83=partial pdb
unknown_libname_29()=0F BE 41 31=partial pdb
unknown_libname_30()=0F B7 41 32 83 E8=partial pdb
unknown_libname_31()=8D 51 18 C6=partial pdb
unsigned int __crt_stdio_output::to_integer_size()=8B FF 55 8B EC 8B 45 08 83 F8 0B=partial pdb
unknown_libname_34()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 78 FC 85 FF 74 36 8B 5F 04 85 DB 74 2F FF 76 2C 0F B6=partial pdb
unknown_libname_35()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 78 FC 85 FF 74 36 8B 5F 04 85 DB 74 2F FF 76 2C 0F B7=partial pdb
unknown_libname_36()=8B FF 55 8B EC 51 51 56 8B F1 57 83=partial pdb
unknown_libname_37()=8B FF 55 8B EC 51 51 56 57 8B F1=partial pdb
unknown_libname_38()=8B FF 56 8B F1 57 FF=partial pdb
unknown_libname_39()=8B FF 55 8B EC 51 53 56 8B F1 57=partial pdb
unknown_libname_40()=8B FF 56 8B F1 57 83=partial pdb
void CUtlBuffer::Clear()=6A 01 6A 10 C7=partial pdb
unknown_libname_41()=8B FF 53 56 8B F1 57 83 46 14 04 8B 46 14 8B 7E 28 8B 58 FC 89 5E 34 83 FF FF 75 05 BF ? ? ? ? FF 76 2C 0F B6=partial pdb
unknown_libname_42()=8B FF 55 8B EC 56 57 8B F9=partial pdb
unknown_libname_43()=8B 01 85 C0 75 13=partial pdb
unknown_libname_44()=83 79 1C 00 74 19=partial pdb
unknown_libname_47()=8B FF 55 8B EC 51 51 53 56 8B F1 57 80=partial pdb
bool __crt_strtox::is_overflow_condition<unsigned long>()=8B FF 55 8B EC 8B 45 08 A8 04 74 04 B0 01 5D C3 A8 01 74 1B=partial pdb
bool __crt_strtox::is_overflow_condition<unsigned __int64>()=8B FF 55 8B EC 8B 45 08 A8 04 74 04 B0 01 5D C3 A8 01 74 2B=partial pdb
unknown_libname_48()=83 39 00 75 13 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 32 C0 C3 B0=partial pdb
__chvalidchk_l()=8B FF 55 8B EC 8B 45 10 85 C0 74=partial pdb
__ischartype_l()=8B FF 55 8B EC 8B 4D 10 85=partial pdb
void __crt_strtox::assemble_floating_point_ind<double>()=8B FF 55 8B EC 8B 4D 08 81=partial pdb
void __crt_strtox::assemble_floating_point_snan<double>()=8B FF 55 8B EC 33 C0 38 45 08 56 8B 75 0C 0F 95 C0 99 C1 E0 1F 33 D2 8B 4E 04 0B 16 81 ? ? ? ? ? 0B C1 89 46 04 8B C2 81 ? ? ? ? ? ? 8B=partial pdb
void __crt_strtox::assemble_floating_point_infinity()=8B FF 55 8B EC 8B 4D 0C 80 79 04 00 74 12 E8 ? ? ? ? 50 FF 75 08 E8 ? ? ? ? 59 59 5D C3 E8 ? ? ? ? 33 C9 38 4D 08 0F 95 C1 C1 E1 1F 81=partial pdb
enum SLD_STATUS __crt_strtox::assemble_floating_point_value()=8B FF 55 8B EC 83 EC 24 53=partial pdb
void __crt_strtox::assemble_floating_point_zero()=8B FF 55 8B EC 8B 4D 0C 80 79 04 00 74 12 E8 ? ? ? ? 50 FF 75 08 E8 ? ? ? ? 59 59 5D C3 E8 ? ? ? ? 33 C9 38 4D 08 0F 95 C1 C1 E1 1F 89=partial pdb
unsigned __int64 __crt_strtox::divide()=8B FF 55 8B EC 81 ? ? ? ? ? 53 8B=partial pdb
void shortsort()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 53 8B 5D 0C 3B D9 76 6C=partial pdb
_qsort()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08=partial pdb
unknown_libname_50()=8B FF 55 8B EC 8B 45 08 8B 4D=partial pdb
void shortsort_s()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 08 53 8B 5D 0C 3B D9 76 6F=partial pdb
void swap()=8B FF 55 8B EC 8B 45 0C 57=partial pdb
_qsort_s()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 18=partial pdb
long common_ftell<long>()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 C0 39 45 08 0F 95 C0 85 C0 75 15 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 83 C8 FF EB 2D=partial pdb
__int64 common_ftell_nolock<__int64>()=8B FF 55 8B EC 83 EC 10 83 7D 08 00 75 1A=partial pdb
__int64 common_ftell_read_mode_nolock()=8B FF 55 8B EC 83 EC 1C 57=partial pdb
struct _iobuf near * common_fsopen<char>()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 08 85 F6 0F 95 C0 85 C0 75 14 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 33 C0 EB 73=partial pdb
__fclose_nolock()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 15=partial pdb
_fclose()=6A 10 68 ? ? ? ? E8 ? ? ? ? 8B 75 08 89 75 E0 33 C0 85 F6 0F 95 C0 85 C0 75 15=partial pdb
long LongLongSub()=8B FF 55 8B EC 53 56 8B 75 08 2B=partial pdb
int common_fseek()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 C0 39 45 08 0F 95 C0 85 C0 75 15 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 83 C8 FF EB 47=partial pdb
bool common_fseek_binary_mode_read_only_fast_track_nolock()=8B FF 55 8B EC 83 7D 14=partial pdb
int common_fseek_nolock()=8B FF 55 8B EC 8B 45 08 8B 40=partial pdb
__fwrite_nolock()=8B FF 55 8B EC 83 EC 0C 53 56 8B 75 0C=partial pdb
_fwrite()=8B FF 55 8B EC 83 EC 10 83 7D 0C=partial pdb
__fread_nolock_s()=8B FF 55 8B EC 83 EC 14 53 56 8B=partial pdb
_fread_s()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 7D=partial pdb
bool internal_islower_l()=8B FF 55 8B EC FF 75 0C 6A 02=partial pdb
bool internal_isupper_l()=8B FF 55 8B EC FF 75 0C 6A 01=partial pdb
_tolower()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 10 6A 00 FF 75 08 E8 ? ? ? ? 59 59 8B C8 EB 0E 8B 4D 08 8D 41 BF=partial pdb
_toupper()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 10 6A 00 FF 75 08 E8 ? ? ? ? 59 59 8B C8 EB 0E 8B 4D 08 8D 41 9F=partial pdb
int common_vsscanf<char>()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 57 8B=partial pdb
int common_vsscanf<wchar_t>()=8B FF 55 8B EC 83 EC 7C 57=partial pdb
unknown_libname_55()=8B FF 55 8B EC 8B 45 08 83 61=partial pdb
unknown_libname_56()=8B FF 55 8B EC 56 8B F1 FF=partial pdb
unknown_libname_57()=8B FF 55 8B EC 8B 45 08 3B=partial pdb
void __crt_stdio_input::scanset_buffer<wchar_t>::set()=8B FF 55 8B EC 56 0F B7=partial pdb
unsigned int __crt_stdio_input::to_integer_length()=8B FF 55 8B EC 8B 45 08 83 F8 0A=partial pdb
unknown_libname_58()=83 79 08 00 75 13=partial pdb
unknown_libname_59()=83 39 00 75 13 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 32 C0 C3 83=partial pdb
unknown_libname_60()=8B 41 08 85 C0 75 13=partial pdb
unknown_libname_61()=8B FF 55 8B EC 51 53 56 33=partial pdb
__iscntrl_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 20=partial pdb
__isdigit_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 04=partial pdb
__isspace_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 08=partial pdb
__isupper_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8D 45 F4 50 6A 01=partial pdb
_iscntrl()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 20=partial pdb
_isdigit()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 04=partial pdb
_isspace()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 08=partial pdb
_isupper()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 74 0E 6A 00 FF 75 08 E8 ? ? ? ? 59 59 5D C3 8B 4D 08 A1 ? ? ? ? 0F B7 04 48 83 E0 01=partial pdb
__isleadbyte_l()=8B FF 55 8B EC 83 EC 10 FF 75 0C 8D 4D F0 E8 ? ? ? ? 8B=partial pdb
int common_stat<struct _stat64i32>()=8B FF 55 8B EC 83 EC 34 83=partial pdb
bool common_stat_handle_file_not_opened<struct _stat64i32>()=8B FF 55 8B EC 51 FF=partial pdb
bool common_stat_handle_file_opened<struct _stat64i32>()=8B FF 55 8B EC 83 EC 50=partial pdb
__int64 convert_large_integer_time_to_time_t<__int64>()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 83=partial pdb
bool compute_size()=8B FF 55 8B EC 8B 4D 0C 8B=partial pdb
unsigned short convert_to_stat_mode()=8B FF 55 8B EC 56 57 0F B6=partial pdb
bool get_drive_number_from_path()=8B FF 55 8B EC 8B 4D 08 33 D2 53=partial pdb
bool has_executable_extension()=8B FF 55 8B EC 83 7D 08 00 75 04 32=partial pdb
bool is_root_or_empty()=8B FF 55 8B EC 8B 4D 08 85 C9 74 47=partial pdb
bool is_slash()=8B FF 55 8B EC 66 ? ? ? ? 74 0B=partial pdb
__stat64i32()=8B FF 55 8B EC 51 83 7D 08 00 56=partial pdb
__access_s()=8B FF 55 8B EC 51 83 7D 08 00 75 0E=partial pdb
char near * common_getdcwd<char>()=8B FF 55 8B EC 51 56 8B 75 10=partial pdb
wchar_t near * common_getdcwd<wchar_t>()=8B FF 55 8B EC 83 EC 0C A1 ? ? ? ? 33 C5 89 45 FC 53 8B=partial pdb
int common_spawnv<char>()=8B FF 55 8B EC 83 EC 0C 56 8B 75 0C=partial pdb
int execute_command<char>()=8B FF 55 8B EC 83 EC 7C 83=partial pdb
char near * common_getenv<char>()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 08 85 F6 0F 95 C0 85 C0 75 14 E8 ? ? ? ? C7 ? ? ? ? ? E8 ? ? ? ? 33 C0 EB 40=partial pdb
char near * common_getenv_nolock<char>()=8B FF 55 8B EC 51 56 57 E8 ? ? ? ? 8B F8=partial pdb
int common_getenv_s_nolock<char>()=8B FF 55 8B EC 51 53 8B 5D 08=partial pdb
int common_xtox<unsigned long,char>()=8B FF 55 8B EC 8B 45 08 33 C9 53 8B=partial pdb
int common_xtox<unsigned long,wchar_t>()=8B FF 55 8B EC 8B 45 0C 8B 4D 08 53 56=partial pdb
int common_xtox_s<unsigned long,wchar_t>()=8B FF 55 8B EC 8B 4D 0C 56=partial pdb
unknown_libname_62()=8B FF 55 8B EC 51 83 7D 10=partial pdb
unknown_libname_63()=8B FF 55 8B EC 51 83 7D 14=partial pdb
_strnlen()=8B FF 55 8B EC A1 ? ? ? ? 56 57=partial pdb
_wcsnlen()=8B FF 55 8B EC 51 A1 ? ? ? ? 8B=partial pdb
___acrt_stdio_flush_nolock()=8B FF 55 8B EC 8B 4D 08 56 8D=partial pdb
__fflush_nolock()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 09=partial pdb
_common_flush_all()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 83=partial pdb
_fflush()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 75 08=partial pdb
_terminate()=6A 0C 68 ? ? ? ? E8 ? ? ? ? E8=partial pdb
unknown_libname_64()=8B FF 55 8B EC 8B 4D 08 8B C1=partial pdb
int compute_year()=8B FF 55 8B EC 56 57 8B 7D 08 B9=partial pdb
int _isindst_nolock()=8B FF 55 8B EC 51 53 8D=partial pdb
void cvtdate()=8B FF 55 8B EC 51 51 83 65 F8 00 83 7D=partial pdb
void tzset_from_environment_nolock()=8B FF 55 8B EC 83 EC 0C 53 56 E8=partial pdb
void tzset_from_system_nolock()=8B FF 55 8B EC 83 EC 10 53 56 E8=partial pdb
void tzset_nolock()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 83 ? ? ? ? ? ? 8D=partial pdb
___tzset()=6A 08 68 ? ? ? ? E8 ? ? ? ? A1=partial pdb
__tzset()=6A 08 68 ? ? ? ? E8 ? ? ? ? 6A=partial pdb
long common_mktime<long>()=8B FF 55 8B EC 83 EC 34 A1 ? ? ? ? 33 C5 89 45 FC 57=partial pdb
___ascii_stricmp()=8B FF 55 8B EC 56 8B 75 08 57 8B=partial pdb
__stricmp()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 28=partial pdb
__stricmp_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 10=partial pdb
_strncmp()=53 56 8B 4C=partial pdb
start_0()=8B C8 50 9B=partial pdb
__int64 scale_count()=8B FF 55 8B EC 51 51 53 56 8B ? ? ? ? ? 57=partial pdb
_clock()=8B FF 55 8B EC 51 51 8B ? ? ? ? ? 23=partial pdb
int common_timespec_get<struct _timespec64>()=8B FF 55 8B EC 51 51 56 8B 75 08 85 F6 75 14=partial pdb
__time64()=8B FF 55 8B EC 83 EC 10 33 C0 57=partial pdb
void common_exit()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 8B 75 10=partial pdb
void exit_or_terminate_process()=8B FF 55 8B EC E8 ? ? ? ? 84=partial pdb
___scrt_is_managed_app()=6A 00 FF ? ? ? ? ? 8B C8 85=partial pdb
void try_cor_exit_process()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 83=partial pdb
_ferror()=8B FF 55 8B EC 8B 45 08 85 C0 75 14=partial pdb
_fgetc()=6A 10 68 ? ? ? ? E8 ? ? ? ? 8B 75 08 89 75 E0 33 C0 85 F6 0F 95 C0 85 C0 75 18=partial pdb
__ungetc_nolock()=8B FF 55 8B EC 56 8B 75 0C 57 8D=partial pdb
_ungetc()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B=partial pdb
_roundf()=8B FF 55 8B EC 8D 45=partial pdb
int common_tcsncpy_s<wchar_t>()=8B FF 55 8B EC 51 8B 55 14 8B 4D 08 56 85 D2 75 0D 85 C9 75 0D 39 4D 0C 75 26=partial pdb
__strnicmp()=8B FF 55 8B EC A1 ? ? ? ? 56 85=partial pdb
__strnicmp_l()=8B FF 55 8B EC 83 EC 10 83 7D 10=partial pdb
_call_wsetlocale()=8B FF 55 8B EC 51 83 7D 0C=partial pdb
_setlocale()=6A 1C 68 ? ? ? ? E8 ? ? ? ? FF=partial pdb
_abort()=E8 ? ? ? ? 85 C0 74 08 6A=partial pdb
__fputc_nolock()=8B FF 55 8B EC 8B 55 0C 83 6A=partial pdb
___pctype_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 00=partial pdb
____lc_codepage_func()=8B FF 55 8B EC 51 E8 ? ? ? ? 8B 48 4C 89 4D FC 8D 4D FC 51 50 E8 ? ? ? ? 8B 45 FC 59 59 8B 40=partial pdb
___acrt_locale_initialize_ctype()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 53 56=partial pdb
__seh_filter_exe()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8=partial pdb
int common_configure_argv<char>()=8B FF 55 8B EC 83 EC 0C 83=partial pdb
void parse_command_line<char>()=8B FF 55 8B EC 51 8B 45 14=partial pdb
___acrt_allocate_buffer_for_argv()=8B FF 55 8B EC 56 8B 75 08 81=partial pdb
int common_initialize_environment_nolock<char>()=83 ? ? ? ? ? ? 74 03 33 C0 C3 56=partial pdb
char near * near * create_environment<char>()=8B FF 55 8B EC 51 51 53 56 57 8B 7D 08 33 D2=partial pdb
int initialize_environment_by_cloning_nolock<char>()=8B FF 57=partial pdb
unknown_libname_67()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B F1=partial pdb
__execute_onexit_table()=8B FF 55 8B EC 51 8D 45 08=partial pdb
__initialize_onexit_table()=8B FF 55 8B EC 56 8B 75 08 85 F6 75 05=partial pdb
__register_onexit_function()=8B FF 55 8B EC 51 51 8D=partial pdb
_initialize_pointers()=A1 ? ? ? ? 56 6A 20 83=partial pdb
_uninitialize_allocated_memory()=A1 ? ? ? ? 83 C9 FF=partial pdb
__initterm()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 8B 45=partial pdb
__initterm_e()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 08=partial pdb
__wcsicmp()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 75=partial pdb
__wcsicmp_l()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 FF=partial pdb
struct _iobuf near * common_fdopen<char>()=6A 24 68 ? ? ? ? E8=partial pdb
bool __acrt_stdio_parse_mode_plus()=8B FF 55 8B EC 8B 45 0C 80 38 00 74 04 32 C0 5D C3 8B 55=partial pdb
__fileno()=8B FF 55 8B EC 8B 45 08 85 C0 75 15=partial pdb
__setmode()=6A 18 68 ? ? ? ? E8 ? ? ? ? 8B 7D 0C=partial pdb
__setmode_nolock()=8B FF 55 8B EC 51 8B 45 08 53=partial pdb
int translate_text_mode_nolock<char>()=8B FF 55 8B EC 83 EC 18 8B 45 08 8B 4D 08 83 E0 3F 8B=partial pdb
int translate_text_mode_nolock<wchar_t>()=8B FF 55 8B EC 83 EC 18 8B 45 08 8B 4D 08 83 E0 3F 53=partial pdb
int translate_utf16_from_console_nolock()=8B FF 55 8B EC 8B 45 10 56=partial pdb
bool write_requires_double_translation_nolock()=8B FF 55 8B EC 51 56 8B 75 08 56=partial pdb
__write_nolock()=8B FF 55 8B EC 83 EC 30 A1=partial pdb
__wcsnicmp()=8B FF 55 8B EC 51 A1 ? ? ? ? 57=partial pdb
__wcsnicmp_l()=8B FF 55 8B EC 83 EC 14 53 56 33=partial pdb
_exp()=83 ? ? ? ? ? ? 74 6E=partial pdb
void __crt_seh_guarded_call<void>::operator()=6A 08 68 ? ? ? ? E8 ? ? ? ? 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 4D 0C 8B=partial pdb
void construct_ptd()=8B FF 55 8B EC 51 51 8B 45 08=partial pdb
void destroy_ptd()=8B FF 55 8B EC 51 8B 45 08 8B 08=partial pdb
___acrt_getptd()=8B FF 56 57 FF=partial pdb
___acrt_getptd_noexit()=8B FF 53 56 57 FF=partial pdb
__mbtowc_l()=8B FF 55 8B EC 83 EC 10 53 56 8B 75 0C=partial pdb
__wctomb_s_l()=8B FF 55 8B EC 83 EC 14 53 8B=partial pdb
enum __acrt_fp_class __acrt_fp_classify()=8B FF 55 8B EC 8B 45 08 B9=partial pdb
bool __acrt_fp_is_negative()=8B FF 55 8B EC 8B 45 08 33 D2 8B=partial pdb
int fp_format_a()=8B FF 55 8B EC 83 EC 30 53=partial pdb
int fp_format_e()=8B FF 55 8B EC 83 EC 0C 8D=partial pdb
int fp_format_e_internal()=8B FF 55 8B EC 83 EC 10 56 57 8B 7D 10=partial pdb
int fp_format_f_internal()=8B FF 55 8B EC 83 EC 10 8D 4D F0 53 56 57 FF 75 1C=partial pdb
int fp_format_g()=8B FF 55 8B EC 83 EC 10 53 56 57 FF=partial pdb
int fp_format_nan_or_infinity()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 8B=partial pdb
___acrt_fp_format()=8B FF 55 8B EC 51 51 56 57 8B 7D 0C=partial pdb
___acrt_stdio_begin_temporary_buffering_nolock()=8B FF 55 8B EC 56 8B 75 08 56=partial pdb
___acrt_stdio_end_temporary_buffering_nolock()=8B FF 55 8B EC 80 7D 08 00 74=partial pdb
___acrt_copy_locale_name()=8B FF 55 8B EC 83 7D 08 00 75 04 33=partial pdb
___acrt_uninitialize_locale()=6A 08 68 ? ? ? ? E8 ? ? ? ? BE=partial pdb
__expandlocale()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 45 0C 53 8B=partial pdb
__wsetlocale()=8B FF 55 8B EC 83 EC 28 83=partial pdb
__wsetlocale_get_all()=8B FF 55 8B EC 83 EC 0C 53 56 33=partial pdb
void initialize_inherited_file_handles_nolock()=8B FF 55 8B EC 83 EC 48 8D=partial pdb
void initialize_stdio_handles_nolock()=8B FF 53 56 57 33=partial pdb
_iswctype()=8B FF 55 8B EC 51 51 66=partial pdb
__isctype_l()=8B FF 55 8B EC 83 EC 24 A1 ? ? ? ? 33 C5 89 45 FC 53=partial pdb
_fegetround()=E8 ? ? ? ? 25 ? ? ? ? C3=partial pdb
___acrt_strtok_s_novalidation()=8B FF 55 8B EC 83 EC 28 A1 ? ? ? ? 33 C5 89 45 FC 8B 45 10=partial pdb
__int64 common_lseek<__int64>()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
struct _iobuf near * common_openfile<char>()=8B FF 55 8B EC 83 EC 1C 56 57=partial pdb
___acrt_stdio_free_buffer_nolock()=8B FF 55 8B EC 56 8B 75 08 57 8D=partial pdb
int common_flush_and_write_nolock<char>()=8B FF 55 8B EC 57 FF=partial pdb
bool write_buffer_nolock<char>()=8B FF 55 8B EC 56 57 FF=partial pdb
int common_refill_and_read_nolock<char>()=8B FF 55 8B EC 8B 45 08 56 85=partial pdb
___acrt_copy_path_to_wide_string()=8B FF 55 8B EC 51 83 7D 08 00 75 17=partial pdb
int get_drive_number_from_path()=8B FF 55 8B EC 8B 4D 08 0F=partial pdb
__getdrive()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 57 33=partial pdb
wchar_t near * common_fullpath_dynamic_buffer<wchar_t>()=8B FF 55 8B EC 57 33 FF 57 57 57 FF 75 08 FF ? ? ? ? ? 85 C0 75 11 FF ? ? ? ? ? 50 E8 ? ? ? ? 59 33 C0 EB 4A=partial pdb
wchar_t near * common_fullpath_user_buffer<wchar_t>()=8B FF 55 8B EC 56 8B 75 10=partial pdb
__wfullpath()=8B FF 55 8B EC 8B 45 0C 85=partial pdb
_wcspbrk()=8B FF 55 8B EC 8B 45 08 33 C9 53 56=partial pdb
unknown_libname_68()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B ? ? ? ? ? 8B CE 33 ? ? ? ? ? 83 E1 1F 6A=partial pdb
int __crt_seh_guarded_call<int>::operator()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 8B 45 08 FF 30 E8 ? ? ? ? 59 83 65 FC 00 8B 45 0C 8B 00 FF=partial pdb
void near * try_get_function()=8B FF 55 8B EC 8B 45 08 53=partial pdb
struct HINSTANCE__ near * try_get_module()=8B FF 55 8B EC 8B 45 08 57=partial pdb
__acrt_AreFileApisANSI()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 00=partial pdb
__acrt_CompareStringEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 E8 ? ? ? ? 8B=partial pdb
__acrt_EnumSystemLocalesEx()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68=partial pdb
__acrt_FlsAlloc()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 03=partial pdb
__acrt_FlsFree()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 04=partial pdb
__acrt_FlsGetValue()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 05=partial pdb
__acrt_FlsSetValue()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 06=partial pdb
__acrt_GetFileInformationByHandleEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0B=partial pdb
__acrt_GetLocaleInfoEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0D=partial pdb
__acrt_GetSystemTimePreciseAsFileTime()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 0F=partial pdb
__acrt_GetUserDefaultLocaleName()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 11=partial pdb
__acrt_InitializeCriticalSectionEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 14=partial pdb
__acrt_IsValidLocaleName()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 15=partial pdb
__acrt_LCIDToLocaleName()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 17=partial pdb
__acrt_LCMapStringEx()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 16=partial pdb
__acrt_LocaleNameToLCID()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 68 ? ? ? ? 68 ? ? ? ? 68 ? ? ? ? 6A 18=partial pdb
___uncaught_exception_0()=E8 ? ? ? ? F7 D8 1B C0 F7 D8 C3=partial pdb
___acrt_initialize_winapi_thunks()=A1 ? ? ? ? 57 6A 20=partial pdb
___acrt_is_packaged_app()=8B FF 55 8B EC 51 51 A1 ? ? ? ? 33 C5 89 45 FC 8B ? ? ? ? ? 85=partial pdb
___vcrt_uninitialize_winapi_thunks()=55 8B EC 80 7D 08 00 75 27=partial pdb
___acrt_lowio_create_handle_array()=8B FF 55 8B EC 51 51 53 57=partial pdb
___acrt_lowio_destroy_handle_array()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 25=partial pdb
___acrt_lowio_ensure_fh_exists()=6A 14 68 ? ? ? ? E8 ? ? ? ? 81=partial pdb
___acrt_lowio_set_os_handle()=8B FF 55 8B EC 51 53 56 8B 75 08 85=partial pdb
__alloc_osfhnd()=6A 1C 68 ? ? ? ? E8 ? ? ? ? 6A=partial pdb
__free_osfhnd()=8B FF 55 8B EC 53 56 8B 75 08 57=partial pdb
__int64 common_loctotime_t<__int64>()=8B FF 55 8B EC 83 EC 48 A1 ? ? ? ? 33 C5 89 45 FC 53 8B=partial pdb
bool __crt_time_is_day_valid()=8B FF 55 8B EC 83 7D 10 00 7F=partial pdb
int common_set_variable_in_environment_nolock<char>()=8B FF 55 8B EC 83 EC 0C 53 8B 5D 08 85=partial pdb
char near * near * copy_environment<char>()=8B FF 55 8B EC 51 57=partial pdb
int find_in_environment_nolock<char>()=8B FF 55 8B EC 53 56 57 8B ? ? ? ? ? 8B=partial pdb
int construct_command_line<char>()=8B FF 55 8B EC 51 8B 45 0C=partial pdb
int construct_environment_block<char>()=8B FF 55 8B EC 83 EC 34 A1 ? ? ? ? 33 C5 89 45 FC 8B=partial pdb
__strnicoll()=8B FF 55 8B EC A1 ? ? ? ? 85 C0 75 06=partial pdb
__fcloseall()=6A 10 68 ? ? ? ? E8 ? ? ? ? 83=partial pdb
__commit()=8B FF 55 8B EC 51 56 8B 75 08 83 FE FE 75 0D=partial pdb
int common_tcsncpy_s<char>()=8B FF 55 8B EC 51 8B 55 14 8B 4D 08 56 85 D2 75 0D 85 C9 75 0D 39 4D 0C 75 21=partial pdb
___acrt_initialize_timeset()=68 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 6A 01=partial pdb
___libm_error_support()=8B FF 55 8B EC 83 EC 24 A1 ? ? ? ? 33 C5 89 45 FC 83=partial pdb
___acrt_stdio_allocate_buffer_nolock()=8B FF 55 8B EC FF ? ? ? ? ? 53=partial pdb
unsigned int _mbstowcs_l_helper()=8B FF 55 8B EC 83 EC 18 53 8B 5D 10=partial pdb
__mbstowcs_s_l()=8B FF 55 8B EC 83 EC 10 53 8B 5D 10=partial pdb
__fd_int()=8B FF 55 8B EC 51 56 8B 75 08 B8=partial pdb
unsigned int _wcstombs_l_helper()=8B FF 55 8B EC 83 EC 2C A1 ? ? ? ? 33 C5 89 45 FC 8B 45 08 53 8B=partial pdb
___acrt_get_sigabrt_handler()=8B FF 55 8B EC 51 8D 45 FF=partial pdb
___acrt_initialize_signal_handlers()=8B FF 55 8B EC FF 75 08 B9 ? ? ? ? E8 ? ? ? ? FF=partial pdb
___fpecode()=E8 ? ? ? ? 83 C0 08=partial pdb
_raise()=6A 2C 68 ? ? ? ? E8=partial pdb
___acrt_GetStringTypeA()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 53 56 57 FF 75 08 8D 4D E8 E8 ? ? ? ? 8B 4D=partial pdb
__decomp()=8B FF 55 8B EC DD 45 08 D9=partial pdb
__set_exp()=8B FF 55 8B EC 51 51 8B 4D=partial pdb
__clrfp()=8B FF 55 8B EC 51 DD=partial pdb
__ctrlfp()=8B FF 55 8B EC 51 51 9B=partial pdb
__statfp()=8B FF 55 8B EC 51 9B=partial pdb
unknown_libname_70()=8B FF 55 8B EC 8B 45 0C 3B=partial pdb
int common_expand_argv_wildcards<char>()=8B FF 55 8B EC 8B 45 0C 83=partial pdb
int copy_and_add_argument_to_buffer<char>()=8B FF 55 8B EC 51 8B 4D 08 8D=partial pdb
int expand_argument_wildcards<char>()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 8B 4D 0C 53=partial pdb
unknown_libname_71()=8B FF 56 57 8B=partial pdb
unknown_libname_72()=8B FF 56 8B F1 57 8B 7E=partial pdb
void setSBUpLow()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 56 8B 75 08 8D=partial pdb
int setmbcp_internal()=8B FF 55 8B EC 83 EC 0C E8=partial pdb
___acrt_initialize_multibyte()=80 ? ? ? ? ? ? 75 12 6A 01=partial pdb
___acrt_update_thread_multibyte_data()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 33 F6 89 75 E4 E8=partial pdb
__setmbcp_nolock()=8B FF 55 8B EC 83 EC 20 A1=partial pdb
___dcrt_get_narrow_environment_from_os()=8B FF 55 8B EC 51 53 56 57=partial pdb
___acrt_execute_initializers()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 57=partial pdb
___acrt_execute_uninitializers()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B 75 0C=partial pdb
___acrt_has_user_matherr()=A1 ? ? ? ? 8B C8 33 ? ? ? ? ? 83 E1 1F D3=partial pdb
___acrt_invoke_user_matherr()=8B FF 55 8B EC 51 A1 ? ? ? ? 33 C5 89 45 FC 56 8B ? ? ? ? ? 8B CE 33 ? ? ? ? ? 83 E1 1F D3=partial pdb
__isatty()=8B FF 55 8B EC 8B 4D 08 83 F9 FE 75 0D=partial pdb
__putwch_nolock()=8B FF 55 8B EC 51 A1 ? ? ? ? 83=partial pdb
start_3()=66 0F 14 C0 66 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66 ? ? ? ? ? ? ? 66=partial pdb
__cintrindisp2()=55 8B EC 81 ? ? ? ? ? 53 9B ? ? ? ? ? ? 9B=partial pdb
__cintrindisp1()=55 8B EC 81 ? ? ? ? ? 53 9B ? ? ? ? ? ? 50=partial pdb
___acrt_locale_free_lc_time_if_unreferenced()=8B FF 55 8B EC 56 8B 75 08 85 F6 74 20=partial pdb
___acrt_update_thread_locale_data()=6A 0C 68 ? ? ? ? E8 ? ? ? ? 83 65 E4 00 E8=partial pdb
___acrt_fp_strflt_to_string()=8B FF 55 8B EC 8B 55 08 56 85 D2 75=partial pdb
___acrt_fltout()=8B FF 55 8B EC 81 ? ? ? ? ? A1 ? ? ? ? 33 C5 89 45 FC 53 8B 5D 18=partial pdb
___acrt_locale_initialize_numeric()=8B FF 55 8B EC 83 EC 18 53 8B 5D 08 33 C0=partial pdb
void free_crt_array_internal()=8B FF 55 8B EC 8B 45 0C 53=partial pdb
___acrt_locale_initialize_time()=8B FF 55 8B EC 56 57 8B 7D 08 83=partial pdb
_wcscspn()=8B FF 55 8B EC 51 8B 4D 08 33=partial pdb
_GetLocaleNameFromLangCountry()=8B FF 55 8B EC 51 53 56 8B 75 08 33 DB=partial pdb
_GetLocaleNameFromLanguage()=8B FF 55 8B EC 53 56 8B 75 08 33 DB 57 6A=partial pdb
_TestDefaultCountry()=8B FF 55 8B EC 83 EC 18 A1 ? ? ? ? 33 C5 89 45 FC 56=partial pdb
___acrt_get_qualified_locale()=8B FF 55 8B EC 51 51 53 56 57 E8=partial pdb
_TestDefaultCountry_0()=8B FF 55 8B EC 8B 4D 08 33 C0 66=partial pdb
_TranslateName_0()=8B FF 55 8B EC 53 56 8B 75 0C=partial pdb
___get_abstract_control_sse2()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 67=partial pdb
___get_abstract_control_x87()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 5D=partial pdb
___get_machine_control()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 5B=partial pdb
___get_machine_control_sse2()=8B FF 55 8B EC 8B 55 08 33 C9 F7 ? ? ? ? ? 74 6A=partial pdb
__getfpcontrolword()=8B FF 55 8B EC 51 51 33 C0 21=partial pdb
__getfpstatusword()=8B FF 55 8B EC 51 51 33 C0 33=partial pdb
int common_sopen_dispatch<char>()=6A 10 68 ? ? ? ? E8 ? ? ? ? 33 C0 8B 75 18=partial pdb
int configure_text_mode()=8B FF 55 8B EC 51 8B 45 08 8B 55=partial pdb
unsigned long decode_open_create_flags()=8B FF 55 8B EC 8B 45 08 BA=partial pdb
int truncate_ctrl_z_if_present()=8B FF 55 8B EC 51 56 8B 75 08 8B=partial pdb
__sopen_nolock()=8B FF 55 8B EC 51 83 65=partial pdb
int GetTableIndexFromLocaleName()=8B FF 55 8B EC 83 EC 10 53 56 57 33=partial pdb
__frnd()=8B FF 55 8B EC 51 51 DD 45 08 D9=partial pdb
__mbsdec_l()=8B FF 55 8B EC 83 EC 10 83 7D 08 00 75 14=partial pdb
_fesetenv()=8B FF 55 8B EC 51 51 83 65 F8 00 83 65=partial pdb
_feholdexcept()=8B FF 55 8B EC 51 51 83 65 F8 00 8D=partial pdb
__chsize_nolock()=8B FF 55 8B EC 83 EC 10 56 57 8B 7D 08=partial pdb
__clearfp()=8B FF 55 8B EC 83 EC 0C DD=partial pdb
__ExceptionPtr::__ExceptionPtr()=55 8B EC 8A 45 0C 83=partial pdb
__ExceptionPtr::~__ExceptionPtr()=55 8B EC 6A FF 68 ? ? ? ? 64 ? ? ? ? ? 50 56 57 A1 ? ? ? ? 33 C5 50 8D 45 F4 64 ? ? ? ? ? 8B F9 80=partial pdb
unknown_libname_14()=55 8B EC F6 45 08 01 56 8B F1 C7 ? ? ? ? ? 74 0A 6A 60=partial pdb
void __ExceptionPtr::_CallCopyCtor()=6A 04 B8 ? ? ? ? E8 ? ? ? ? 8B=partial pdb
void std::_Ref_count_base::_Decref()=57 8B F9 83 C8 FF F0 ? ? ? ? 75 19=partial pdb
unknown_libname_15()=57 8B F9 85 FF 74 14=partial pdb
void std::_Ptr_base<class __ExceptionPtr>::_Reset0()=55 8B EC 56 8B F1 8B 4E 04 85 C9 74 05=partial pdb
void near * _StaticAlloc()=55 8B EC 51 56 8B 75 08 B8 ? ? ? ? 2B=partial pdb
void near * std::align()=55 8B EC 8B 45 08 53 56 57 8B 7D=partial pdb
__ftol2_sse()=83 ? ? ? ? ? ? 74 37 55=partial pdb
__ftol2()=55 8B EC 83 EC 20 83=partial pdb
__ValidateImageBase()=55 8B EC 8B 45 08 B9 ? ? ? ? 66=partial pdb
__SEH_prolog4_GS()=68 ? ? ? ? 64 ? ? ? ? ? ? 8B 44 24 10 89 6C 24 10 8D 6C 24 10 2B E0 53 56 57 A1 ? ? ? ? 31 45 FC 33 C5 89=partial pdb
__SEH_epilog4_GS()=8B 4D E4 33 CD=partial pdb
_wcsrchr()=55 8B EC 56 33 F6 83 ? ? ? ? ? ? 7D=partial pdb
_TestInt()=57 8B 7C 24 0C 81=partial pdb
__vmldPow_HA_scalar()=55 8B EC 83 E4 F8 56 57 53=partial pdb
__raise_zerodivide()=66 0F 76 DB=partial pdb
_pow_scalar()=60 8B C4=partial pdb
___sse2_pow2()=8B C4 81 ? ? ? ? ? 83 E4 F0 89 ? ? ? ? ? ? 66=partial pdb
__raise_invalid()=66 0F 76 D2=partial pdb
___sse2_powf4()=55 8B EC 83 E4 C0 81 ? ? ? ? ? 0F=partial pdb
___sse2_sin2()=8B C4 81 ? ? ? ? ? 83 E4 F0 89 44=partial pdb
___common_spow_cout_rare()=56 57 53 55 83=partial pdb
___common_srl()=8B 44 24 04 8B 54 24 08 8B 4C 24 0C 80 F9 40 73 16=partial pdb
___common_sll()=8B 44 24 04 8B 54 24 08 8B 4C 24 0C 80 F9 40 73 15=partial pdb
_seh_longjmp_unwind()=55 FF 74 24 08 E8 ? ? ? ? 83 C4 04 8B 4C 24 08 8B 29 8B=partial pdb
__setjmp3()=8B 54 24 04 89=partial pdb
_CallDestructExceptionObject()=55 8B EC 56 8B 75 08 81 ? ? ? ? ? 75=partial pdb
__fFSINH()=C6 ? ? ? ? ? ? E8 ? ? ? ? 0A DB 74 7B=partial pdb