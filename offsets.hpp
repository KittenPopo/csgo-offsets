#pragma once
// Updated on Sep 30 2020
// Dumped by KittenPopo

namespace Offsets {
        namespace DT_TestTraceline {
                auto m_clrRender = 0x70;
                auto m_vecOrigin = 0x138;
                auto m_angRotation_0_ = 0x12c;
                auto m_angRotation_1_ = 0x130;
                auto m_angRotation_2_ = 0x134;
                auto moveparent = 0x148;
        }

        namespace DT_TEWorldDecal {
                auto m_vecOrigin = 0x10;
                auto m_nIndex = 0x1c;
        }

        namespace DT_TESpriteSpray {
                auto m_vecOrigin = 0x10;
                auto m_vecDirection = 0x1c;
                auto m_nModelIndex = 0x28;
                auto m_fNoise = 0x30;
                auto m_nCount = 0x34;
                auto m_nSpeed = 0x2c;
        }

        namespace DT_TESprite {
                auto m_vecOrigin = 0x10;
                auto m_nModelIndex = 0x1c;
                auto m_fScale = 0x20;
                auto m_nBrightness = 0x24;
        }

        namespace DT_TESparks {
                auto m_nMagnitude = 0x1c;
                auto m_nTrailLength = 0x20;
                auto m_vecDir = 0x24;
        }

        namespace DT_TESmoke {
                auto m_vecOrigin = 0x10;
                auto m_nModelIndex = 0x1c;
                auto m_fScale = 0x20;
                auto m_nFrameRate = 0x24;
        }

        namespace DT_TEShowLine {
                auto m_vecEnd = 0x1c;
        }

        namespace DT_TEProjectedDecal {
                auto m_vecOrigin = 0x10;
                auto m_angRotation = 0x1c;
                auto m_flDistance = 0x28;
                auto m_nIndex = 0x2c;
        }

        namespace DT_FEPlayerDecal {
                auto m_nUniqueID = 0x9d8;
                auto m_unAccountID = 0x9dc;
                auto m_unTraceID = 0x9e0;
                auto m_rtGcTime = 0x9e4;
                auto m_vecEndPos = 0x9e8;
                auto m_vecStart = 0x9f4;
                auto m_vecRight = 0xa00;
                auto m_vecNormal = 0xa0c;
                auto m_nEntity = 0xa1c;
                auto m_nPlayer = 0xa18;
                auto m_nHitbox = 0xa20;
                auto m_nTintID = 0xa24;
                auto m_flCreationTime = 0xa28;
                auto m_nVersion = 0xa2c;
        }

        namespace m_ubSignature {
                auto m_ubSignature = 0xa2d;
        }

        namespace DT_TEPlayerDecal {
                auto m_vecOrigin = 0x14;
                auto m_vecStart = 0x20;
                auto m_vecRight = 0x2c;
                auto m_nEntity = 0x38;
                auto m_nPlayer = 0x10;
                auto m_nHitbox = 0x3c;
        }

        namespace DT_TEPhysicsProp {
                auto m_vecOrigin = 0x10;
                auto m_angRotation_0_ = 0x1c;
                auto m_angRotation_1_ = 0x20;
                auto m_angRotation_2_ = 0x24;
                auto m_vecVelocity = 0x28;
                auto m_nModelIndex = 0x34;
                auto m_nFlags = 0x3c;
                auto m_nSkin = 0x38;
                auto m_nEffects = 0x40;
                auto m_clrRender = 0x44;
        }

        namespace DT_TEParticleSystem {
                auto m_vecOrigin_0_ = 0x10;
                auto m_vecOrigin_1_ = 0x14;
                auto m_vecOrigin_2_ = 0x18;
        }

        namespace DT_TEMuzzleFlash {
                auto m_vecOrigin = 0x10;
                auto m_vecAngles = 0x1c;
                auto m_flScale = 0x28;
                auto m_nType = 0x2c;
        }

        namespace DT_TELargeFunnel {
                auto m_nModelIndex = 0x1c;
                auto m_nReversed = 0x20;
        }

        namespace DT_TEKillPlayerAttachments {
                auto m_nPlayer = 0x10;
        }

        namespace DT_TEImpact {
                auto m_vecOrigin = 0x10;
                auto m_vecNormal = 0x1c;
                auto m_iType = 0x28;
                auto m_ucFlags = 0x2c;
        }

        namespace DT_TEGlowSprite {
                auto m_vecOrigin = 0x10;
                auto m_nModelIndex = 0x1c;
                auto m_fScale = 0x20;
                auto m_fLife = 0x24;
                auto m_nBrightness = 0x28;
        }

        namespace DT_TEShatterSurface {
                auto m_vecOrigin = 0x10;
                auto m_vecAngles = 0x1c;
                auto m_vecForce = 0x28;
                auto m_vecForcePos = 0x34;
                auto m_flWidth = 0x40;
                auto m_flHeight = 0x44;
                auto m_flShardSize = 0x48;
                auto m_nSurfaceType = 0x50;
                auto m_uchFrontColor_0_ = 0x54;
                auto m_uchFrontColor_1_ = 0x55;
                auto m_uchFrontColor_2_ = 0x56;
                auto m_uchBackColor_0_ = 0x57;
                auto m_uchBackColor_1_ = 0x58;
                auto m_uchBackColor_2_ = 0x59;
        }

        namespace DT_TEFootprintDecal {
                auto m_vecOrigin = 0x10;
                auto m_vecDirection = 0x1c;
                auto m_nEntity = 0x34;
                auto m_nIndex = 0x38;
                auto m_chMaterialType = 0x3c;
        }

        namespace DT_TEFizz {
                auto m_nEntity = 0x10;
                auto m_nModelIndex = 0x14;
                auto m_nDensity = 0x18;
                auto m_nCurrent = 0x1c;
        }

        namespace DT_TEExplosion {
                auto m_nModelIndex = 0x1c;
                auto m_fScale = 0x20;
                auto m_nFrameRate = 0x24;
                auto m_nFlags = 0x28;
                auto m_vecNormal = 0x2c;
                auto m_chMaterialType = 0x38;
                auto m_nRadius = 0x3c;
                auto m_nMagnitude = 0x40;
        }

        namespace DT_TEEnergySplash {
                auto m_vecPos = 0x10;
                auto m_vecDir = 0x1c;
                auto m_bExplosive = 0x28;
        }

        namespace DT_TEEffectDispatch {
        }

        namespace DT_EffectData {
                auto m_vOrigin_x = 0x0;
                auto m_vOrigin_y = 0x4;
                auto m_vOrigin_z = 0x8;
                auto m_vStart_x = 0xc;
                auto m_vStart_y = 0x10;
                auto m_vStart_z = 0x14;
                auto m_vAngles = 0x24;
                auto m_vNormal = 0x18;
                auto m_fFlags = 0x30;
                auto m_flMagnitude = 0x40;
                auto m_flScale = 0x3c;
                auto m_nAttachmentIndex = 0x48;
                auto m_nSurfaceProp = 0x4c;
                auto m_iEffectName = 0x64;
                auto m_nMaterial = 0x50;
                auto m_nDamageType = 0x54;
                auto m_nHitBox = 0x58;
                auto entindex = 0x0;
                auto m_nOtherEntIndex = 0x5c;
                auto m_nColor = 0x60;
                auto m_flRadius = 0x44;
                auto m_bPositionsAreRelativeToEntity = 0x61;
                auto m_EffectData = 0x10;
        }

        namespace DT_TEDynamicLight {
                auto m_vecOrigin = 0x10;
                auto r = 0x20;
                auto g = 0x24;
                auto b = 0x28;
                auto exponent = 0x2c;
                auto m_fRadius = 0x1c;
                auto m_fTime = 0x30;
                auto m_fDecay = 0x34;
        }

        namespace DT_TEDecal {
                auto m_vecOrigin = 0x10;
                auto m_vecStart = 0x1c;
                auto m_nEntity = 0x28;
                auto m_nHitbox = 0x2c;
                auto m_nIndex = 0x30;
        }

        namespace DT_TEClientProjectile {
                auto m_vecOrigin = 0x10;
                auto m_vecVelocity = 0x1c;
                auto m_nModelIndex = 0x28;
                auto m_nLifeTime = 0x2c;
                auto m_hOwner = 0x30;
        }

        namespace DT_TEBubbleTrail {
                auto m_vecMins = 0x10;
                auto m_vecMaxs = 0x1c;
                auto m_nModelIndex = 0x2c;
                auto m_flWaterZ = 0x28;
                auto m_nCount = 0x30;
                auto m_fSpeed = 0x34;
        }

        namespace DT_TEBubbles {
                auto m_vecMins = 0x10;
                auto m_vecMaxs = 0x1c;
                auto m_nModelIndex = 0x2c;
                auto m_fHeight = 0x28;
                auto m_nCount = 0x30;
                auto m_fSpeed = 0x34;
        }

        namespace DT_TEBSPDecal {
                auto m_vecOrigin = 0x10;
                auto m_nEntity = 0x1c;
                auto m_nIndex = 0x20;
        }

        namespace DT_TEBreakModel {
                auto m_vecOrigin = 0x10;
                auto m_angRotation_0_ = 0x1c;
                auto m_angRotation_1_ = 0x20;
                auto m_angRotation_2_ = 0x24;
                auto m_vecSize = 0x28;
                auto m_vecVelocity = 0x34;
                auto m_nModelIndex = 0x44;
                auto m_nRandomization = 0x40;
                auto m_nCount = 0x48;
                auto m_fTime = 0x4c;
                auto m_nFlags = 0x50;
        }

        namespace DT_TEBloodStream {
                auto m_vecDirection = 0x1c;
                auto r = 0x28;
                auto g = 0x2c;
                auto b = 0x30;
                auto a = 0x34;
                auto m_nAmount = 0x38;
        }

        namespace DT_TEBloodSprite {
                auto m_vecOrigin = 0x10;
                auto m_vecDirection = 0x1c;
                auto r = 0x28;
                auto g = 0x2c;
                auto b = 0x30;
                auto a = 0x34;
                auto m_nSprayModel = 0x3c;
                auto m_nDropModel = 0x38;
                auto m_nSize = 0x40;
        }

        namespace DT_TEBeamSpline {
                auto m_nPoints = 0xd0;
                auto m_vecPoints_0_ = 0x10;
                auto m_vecPoints = 0x0;
        }

        namespace DT_TEBeamRingPoint {
                auto m_vecCenter = 0x4c;
                auto m_flStartRadius = 0x58;
                auto m_flEndRadius = 0x5c;
        }

        namespace DT_TEBeamRing {
                auto m_nStartEntity = 0x4c;
                auto m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamPoints {
                auto m_vecStartPoint = 0x4c;
                auto m_vecEndPoint = 0x58;
        }

        namespace DT_TEBeamLaser {
                auto m_nStartEntity = 0x4c;
                auto m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamFollow {
                auto m_iEntIndex = 0x4c;
        }

        namespace DT_TEBeamEnts {
                auto m_nStartEntity = 0x4c;
                auto m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamEntPoint {
                auto m_nStartEntity = 0x4c;
                auto m_nEndEntity = 0x50;
                auto m_vecStartPoint = 0x54;
                auto m_vecEndPoint = 0x60;
        }

        namespace DT_BaseBeam {
                auto m_nModelIndex = 0x10;
                auto m_nHaloIndex = 0x14;
                auto m_nStartFrame = 0x18;
                auto m_nFrameRate = 0x1c;
                auto m_fLife = 0x20;
                auto m_fWidth = 0x24;
                auto m_fEndWidth = 0x28;
                auto m_nFadeLength = 0x2c;
                auto m_fAmplitude = 0x30;
                auto m_nSpeed = 0x44;
                auto r = 0x34;
                auto g = 0x38;
                auto b = 0x3c;
                auto a = 0x40;
                auto m_nFlags = 0x48;
        }

        namespace DT_TEArmorRicochet {
        }

        namespace DT_TEMetalSparks {
                auto m_vecPos = 0x10;
                auto m_vecDir = 0x1c;
        }

        namespace DT_SteamJet {
                auto m_SpreadSpeed = 0xac4;
                auto m_Speed = 0xac8;
                auto m_StartSize = 0xacc;
                auto m_EndSize = 0xad0;
                auto m_Rate = 0xad4;
                auto m_JetLength = 0xad8;
                auto m_bEmit = 0xadc;
                auto m_bFaceLeft = 0xae4;
                auto m_nType = 0xae0;
                auto m_spawnflags = 0xae8;
                auto m_flRollSpeed = 0xaec;
        }

        namespace DT_SmokeStack {
                auto m_SpreadSpeed = 0xb14;
                auto m_Speed = 0xb18;
                auto m_StartSize = 0xb1c;
                auto m_EndSize = 0xb20;
                auto m_Rate = 0xb24;
                auto m_JetLength = 0xb28;
                auto m_bEmit = 0xb2c;
                auto m_flBaseSpread = 0xb30;
                auto m_flTwist = 0xb84;
                auto m_flRollSpeed = 0xbc0;
                auto m_iMaterialModel = 0xb88;
                auto m_AmbientLight_m_vPos = 0xb34;
                auto m_AmbientLight_m_vColor = 0xb40;
                auto m_AmbientLight_m_flIntensity = 0xb4c;
                auto m_DirLight_m_vPos = 0xb50;
                auto m_DirLight_m_vColor = 0xb5c;
                auto m_DirLight_m_flIntensity = 0xb68;
                auto m_vWind = 0xb78;
        }

        namespace DT_DustTrail {
                auto m_SpawnRate = 0xac4;
                auto m_Color = 0xac8;
                auto m_ParticleLifetime = 0xad8;
                auto m_StopEmitTime = 0xae0;
                auto m_MinSpeed = 0xae4;
                auto m_MaxSpeed = 0xae8;
                auto m_MinDirectedSpeed = 0xaec;
                auto m_MaxDirectedSpeed = 0xaf0;
                auto m_StartSize = 0xaf4;
                auto m_EndSize = 0xaf8;
                auto m_SpawnRadius = 0xafc;
                auto m_bEmit = 0xb0c;
                auto m_Opacity = 0xad4;
        }

        namespace DT_FireTrail {
                auto m_nAttachment = 0xac4;
                auto m_flLifetime = 0xac8;
        }

        namespace DT_SporeTrail {
                auto m_flSpawnRate = 0xacc;
                auto m_vecEndColor = 0xac0;
                auto m_flParticleLifetime = 0xad0;
                auto m_flStartSize = 0xad4;
                auto m_flEndSize = 0xad8;
                auto m_flSpawnRadius = 0xadc;
                auto m_bEmit = 0xaec;
        }

        namespace DT_SporeExplosion {
                auto m_flSpawnRate = 0xac4;
                auto m_flParticleLifetime = 0xac8;
                auto m_flStartSize = 0xacc;
                auto m_flEndSize = 0xad0;
                auto m_flSpawnRadius = 0xad4;
                auto m_bEmit = 0xadc;
                auto m_bDontRemove = 0xadd;
        }

        namespace DT_RocketTrail {
                auto m_SpawnRate = 0xac4;
                auto m_StartColor = 0xac8;
                auto m_EndColor = 0xad4;
                auto m_ParticleLifetime = 0xae4;
                auto m_StopEmitTime = 0xae8;
                auto m_MinSpeed = 0xaec;
                auto m_MaxSpeed = 0xaf0;
                auto m_StartSize = 0xaf4;
                auto m_EndSize = 0xaf8;
                auto m_SpawnRadius = 0xafc;
                auto m_bEmit = 0xb0c;
                auto m_nAttachment = 0xb10;
                auto m_Opacity = 0xae0;
                auto m_bDamaged = 0xb0d;
                auto m_flFlareScale = 0xb20;
        }

        namespace DT_SmokeTrail {
                auto m_SpawnRate = 0xac4;
                auto m_StartColor = 0xac8;
                auto m_EndColor = 0xad4;
                auto m_ParticleLifetime = 0xae4;
                auto m_StopEmitTime = 0xae8;
                auto m_MinSpeed = 0xaec;
                auto m_MaxSpeed = 0xaf0;
                auto m_MinDirectedSpeed = 0xaf4;
                auto m_MaxDirectedSpeed = 0xaf8;
                auto m_StartSize = 0xafc;
                auto m_EndSize = 0xb00;
                auto m_SpawnRadius = 0xb04;
                auto m_bEmit = 0xb14;
                auto m_nAttachment = 0xb18;
                auto m_Opacity = 0xae0;
        }

        namespace DT_PropVehicleDriveable {
                auto m_hPlayer = 0x2984;
                auto m_nSpeed = 0x2988;
                auto m_nRPM = 0x298c;
                auto m_flThrottle = 0x2990;
                auto m_nBoostTimeLeft = 0x2994;
                auto m_nHasBoost = 0x2998;
                auto m_nScannerDisabledWeapons = 0x299c;
                auto m_nScannerDisabledVehicle = 0x29a0;
                auto m_bEnterAnimOn = 0x29c0;
                auto m_bExitAnimOn = 0x29c1;
                auto m_bUnableToFire = 0x2a0d;
                auto m_vecEyeExitEndpoint = 0x2a00;
                auto m_bHasGun = 0x2a0c;
                auto m_vecGunCrosshair = 0x29c8;
        }

        namespace DT_ParticleSmokeGrenade {
                auto m_flSpawnTime = 0xad4;
                auto m_FadeStartTime = 0xad8;
                auto m_FadeEndTime = 0xadc;
                auto m_MinColor = 0xae4;
                auto m_MaxColor = 0xaf0;
                auto m_CurrentStage = 0xac4;
        }

        namespace DT_ParticleFire {
                auto m_vOrigin = 0xacc;
                auto m_vDirection = 0xad8;
        }

        namespace DT_MovieExplosion {
        }

        namespace DT_TEGaussExplosion {
                auto m_nType = 0x1c;
                auto m_vecDirection = 0x20;
        }

        namespace DT_QuadraticBeam {
                auto m_targetPosition = 0x9d8;
                auto m_controlPosition = 0x9e4;
                auto m_scrollRate = 0x9f0;
                auto m_flWidth = 0x9f4;
        }

        namespace DT_Embers {
                auto m_nDensity = 0x9d8;
                auto m_nLifetime = 0x9dc;
                auto m_nSpeed = 0x9e0;
                auto m_bEmit = 0x9e4;
        }

        namespace DT_EnvWind {
        }

        namespace DT_EnvWindShared {
                auto m_iMinWind = 0xc;
                auto m_iMaxWind = 0x10;
                auto m_iMinGust = 0x18;
                auto m_iMaxGust = 0x1c;
                auto m_flMinGustDelay = 0x20;
                auto m_flMaxGustDelay = 0x24;
                auto m_iGustDirChange = 0x2c;
                auto m_iWindSeed = 0x8;
                auto m_iInitialWindDir = 0x6c;
                auto m_flInitialWindSpeed = 0x70;
                auto m_flStartTime = 0x4;
                auto m_flGustDuration = 0x28;
                auto m_EnvWindShared = 0x9d8;
        }

        namespace DT_Precipitation {
                auto m_nPrecipType = 0xa00;
        }

        namespace DT_PrecipitationBlocker {
        }

        namespace DT_BaseTempEntity {
        }

        namespace DT_NextBot {
        }

        namespace DT_WearableItem {
        }

        namespace DT_BaseAttributableItem {
                auto m_OriginalOwnerXuidLow = 0x31c0;
                auto m_OriginalOwnerXuidHigh = 0x31c4;
                auto m_nFallbackPaintKit = 0x31c8;
                auto m_nFallbackSeed = 0x31cc;
                auto m_flFallbackWear = 0x31d0;
                auto m_nFallbackStatTrak = 0x31d4;
        }

        namespace DT_AttributeContainer {
                auto m_hOuter = 0x1c;
                auto m_ProviderType = 0x24;
                auto m_iReapplyProvisionParity = 0x18;
        }

        namespace DT_ScriptCreatedItem {
                auto m_iItemDefinitionIndex = 0x1ea;
                auto m_iEntityLevel = 0x1f0;
                auto m_iItemIDHigh = 0x200;
                auto m_iItemIDLow = 0x204;
                auto m_iAccountID = 0x208;
                auto m_iEntityQuality = 0x1ec;
                auto m_bInitialized = 0x214;
                auto m_szCustomName = 0x27c;
        }

        namespace DT_AttributeList {
        }

        namespace _ST_m_Attributes_32 {
        }

        namespace _LPT_m_Attributes_32 {
                auto lengthprop32 = 0x0;
                auto lengthproxy = 0x0;
                auto m_Attributes = 0x0;
                auto m_NetworkedDynamicAttributesForDemos = 0x260;
                auto m_Item = 0x40;
                auto m_AttributeManager = 0x2d80;
        }

        namespace DT_EconEntity {
                auto m_OriginalOwnerXuidLow = 0x31c0;
                auto m_OriginalOwnerXuidHigh = 0x31c4;
                auto m_nFallbackPaintKit = 0x31c8;
                auto m_nFallbackSeed = 0x31cc;
                auto m_flFallbackWear = 0x31d0;
                auto m_nFallbackStatTrak = 0x31d4;
        }

        namespace DT_AttributeContainer {
                auto m_hOuter = 0x1c;
                auto m_ProviderType = 0x24;
                auto m_iReapplyProvisionParity = 0x18;
        }

        namespace DT_ScriptCreatedItem {
                auto m_iItemDefinitionIndex = 0x1ea;
                auto m_iEntityLevel = 0x1f0;
                auto m_iItemIDHigh = 0x200;
                auto m_iItemIDLow = 0x204;
                auto m_iAccountID = 0x208;
                auto m_iEntityQuality = 0x1ec;
                auto m_bInitialized = 0x214;
                auto m_szCustomName = 0x27c;
        }

        namespace DT_AttributeList {
        }

        namespace _ST_m_Attributes_32 {
        }

        namespace _LPT_m_Attributes_32 {
                auto lengthprop32 = 0x0;
                auto lengthproxy = 0x0;
                auto m_Attributes = 0x0;
                auto m_NetworkedDynamicAttributesForDemos = 0x260;
                auto m_Item = 0x40;
                auto m_AttributeManager = 0x2d80;
        }

        namespace DT_WeaponZoneRepulsor {
        }

        namespace DT_WeaponXM1014 {
                auto m_reloadState = 0x33d4;
        }

        namespace DT_WeaponTaser {
                auto m_fFireTime = 0x33f0;
        }

        namespace DT_WeaponTablet {
                auto m_flUpgradeExpirationTime_0_ = 0x33d8;
                auto m_flUpgradeExpirationTime = 0x0;
                auto m_vecLocalHexFlags_0_ = 0x33e8;
                auto m_vecLocalHexFlags = 0x0;
                auto m_nContractKillGridIndex = 0x3490;
                auto m_nContractKillGridHighResIndex = 0x3494;
                auto m_bTabletReceptionIsBlocked = 0x3498;
                auto m_flScanProgress = 0x349c;
                auto m_flBootTime = 0x34a0;
                auto m_flShowMapTime = 0x34a4;
                auto m_vecNotificationIds_0_ = 0x34b4;
                auto m_vecNotificationIds = 0x0;
                auto m_vecNotificationTimestamps_0_ = 0x34d4;
                auto m_vecNotificationTimestamps = 0x0;
                auto m_vecPlayerPositionHistory_0_ = 0x34f8;
                auto m_vecPlayerPositionHistory = 0x0;
                auto m_nLastPurchaseIndex = 0x34f4;
                auto m_vecNearestMetalCratePos = 0x34a8;
        }

        namespace DT_Snowball {
        }

        namespace DT_SmokeGrenade {
        }

        namespace DT_WeaponShield {
        }

        namespace DT_WeaponSG552 {
        }

        namespace DT_SensorGrenade {
        }

        namespace DT_WeaponSawedoff {
                auto m_reloadState = 0x33d4;
        }

        namespace DT_WeaponNOVA {
                auto m_reloadState = 0x33d4;
        }

        namespace DT_IncendiaryGrenade {
        }

        namespace DT_MolotovGrenade {
        }

        namespace DT_WeaponMelee {
                auto m_flThrowAt = 0x33d0;
        }

        namespace DT_WeaponM3 {
                auto m_reloadState = 0x33d4;
        }

        namespace DT_WeaponKnifeGG {
        }

        namespace DT_WeaponKnife {
        }

        namespace DT_HEGrenade {
        }

        namespace DT_Flashbang {
        }

        namespace DT_WeaponFists {
                auto m_bPlayingUninterruptableAct = 0x33d0;
        }

        namespace DT_WeaponElite {
        }

        namespace DT_DecoyGrenade {
        }

        namespace DT_WeaponDEagle {
        }

        namespace DT_WeaponUSP {
        }

        namespace DT_WeaponM249 {
        }

        namespace DT_WeaponUMP45 {
        }

        namespace DT_WeaponTMP {
        }

        namespace DT_WeaponTec9 {
        }

        namespace DT_WeaponSSG08 {
        }

        namespace DT_WeaponSG556 {
        }

        namespace DT_WeaponSG550 {
        }

        namespace DT_WeaponScout {
        }

        namespace DT_WeaponSCAR20 {
        }

        namespace DT_WeaponSCAR17 {
        }

        namespace DT_WeaponP90 {
        }

        namespace DT_WeaponP250 {
        }

        namespace DT_WeaponP228 {
        }

        namespace DT_WeaponNegev {
        }

        namespace DT_WeaponMP9 {
        }

        namespace DT_WeaponMP7 {
        }

        namespace DT_WeaponMP5Navy {
        }

        namespace DT_WeaponMag7 {
        }

        namespace DT_WeaponMAC10 {
        }

        namespace DT_WeaponM4A1 {
        }

        namespace DT_WeaponHKP2000 {
        }

        namespace DT_WeaponGlock {
        }

        namespace DT_WeaponGalilAR {
        }

        namespace DT_WeaponGalil {
        }

        namespace DT_WeaponG3SG1 {
        }

        namespace DT_WeaponFiveSeven {
        }

        namespace DT_WeaponFamas {
        }

        namespace DT_WeaponBizon {
        }

        namespace DT_WeaponAWP {
        }

        namespace DT_WeaponAug {
        }

        namespace DT_WeaponAK47 {
        }

        namespace DT_WeaponCSBaseGun {
                auto m_zoomLevel = 0x33d0;
                auto m_iBurstShotsRemaining = 0x33d4;
        }

        namespace DT_WeaponCSBase {
                auto m_weaponMode = 0x3318;
                auto m_fAccuracyPenalty = 0x3330;
                auto m_fLastShotTime = 0x33a8;
                auto m_iRecoilIndex = 0x3340;
                auto m_flRecoilIndex = 0x3344;
                auto m_hPrevOwner = 0x3384;
                auto m_bBurstMode = 0x3348;
                auto m_flPostponeFireReadyTime = 0x334c;
                auto m_bReloadVisuallyComplete = 0x3350;
                auto m_bSilencerOn = 0x3351;
                auto m_flDoneSwitchingSilencer = 0x3354;
                auto m_iOriginalTeamNumber = 0x335c;
                auto m_iIronSightMode = 0x33c4;
        }

        namespace DT_WeaponC4 {
                auto m_bStartedArming = 0x33f0;
                auto m_bBombPlacedAnimation = 0x33f8;
                auto m_fArmedTime = 0x33f4;
                auto m_bShowC4LED = 0x33f9;
                auto m_bIsPlantingViaUse = 0x33fa;
        }

        namespace DT_WeaponBumpMine {
        }

        namespace DT_BumpMineProjectile {
                auto m_nParentBoneIndex = 0x29d4;
                auto m_vecParentBonePos = 0x29d8;
                auto m_bArmed = 0x29e4;
        }

        namespace DT_WeaponBreachCharge {
        }

        namespace DT_BreachChargeProjectile {
                auto m_bShouldExplode = 0x29d0;
                auto m_weaponThatThrewMe = 0x29d4;
                auto m_nParentBoneIndex = 0x29d8;
                auto m_vecParentBonePos = 0x29dc;
        }

        namespace DT_WeaponBaseItem {
                auto m_bRedraw = 0x33dc;
        }

        namespace DT_BaseCSGrenade {
                auto m_bRedraw = 0x33d0;
                auto m_bIsHeldByPlayer = 0x33d1;
                auto m_bPinPulled = 0x33d2;
                auto m_fThrowTime = 0x33d4;
                auto m_bLoopingSoundPlaying = 0x33d8;
                auto m_flThrowStrength = 0x33dc;
        }

        namespace DT_SnowballProjectile {
        }

        namespace DT_SnowballPile {
        }

        namespace DT_SmokeGrenadeProjectile {
                auto m_bDidSmokeEffect = 0x2a14;
                auto m_nSmokeEffectTickBegin = 0x2a10;
        }

        namespace DT_SensorGrenadeProjectile {
        }

        namespace DT_MolotovProjectile {
                auto m_bIsIncGrenade = 0x2a10;
        }

        namespace DT_Item_Healthshot {
        }

        namespace DT_ItemDogtags {
                auto m_OwningPlayer = 0x3440;
                auto m_KillingPlayer = 0x3444;
        }

        namespace DT_DecoyProjectile {
        }

        namespace DT_PhysPropRadarJammer {
        }

        namespace DT_PhysPropWeaponUpgrade {
        }

        namespace DT_PhysPropAmmoBox {
        }

        namespace DT_PhysPropLootCrate {
                auto m_bRenderInPSPM = 0x29f4;
                auto m_bRenderInTablet = 0x29f5;
                auto m_iHealth = 0x100;
                auto m_iMaxHealth = 0x29f8;
        }

        namespace DT_ItemCash {
        }

        namespace DT_EnvGasCanister {
                auto m_flFlightSpeed = 0x29f4;
                auto m_flLaunchTime = 0x29f8;
                auto m_vecParabolaDirection = 0x2a0c;
                auto m_flFlightTime = 0x29f0;
                auto m_flWorldEnterTime = 0x2a18;
                auto m_flInitialZSpeed = 0x29fc;
                auto m_flZAcceleration = 0x2a00;
                auto m_flHorizSpeed = 0x2a04;
                auto m_bLaunchedFromWithinWorld = 0x2a08;
                auto m_vecImpactPosition = 0x29b4;
                auto m_vecStartPosition = 0x29c0;
                auto m_vecEnterWorldPosition = 0x29cc;
                auto m_vecDirection = 0x29d8;
                auto m_vecStartAngles = 0x29e4;
                auto m_vecSkyboxOrigin = 0x2a1c;
                auto m_flSkyboxScale = 0x2a28;
                auto m_bInSkybox = 0x2a2c;
                auto m_bDoImpactEffects = 0x2a2d;
                auto m_bLanded = 0x2980;
                auto m_hSkyboxCopy = 0x29a8;
                auto m_nMyZoneIndex = 0x2a30;
                auto m_vecOrigin = 0x138;
                auto m_vecOrigin_2_ = 0x140;
        }

        namespace DT_Dronegun {
                auto m_vecAttentionTarget = 0x2980;
                auto m_vecTargetOffset = 0x298c;
                auto m_iHealth = 0x100;
                auto m_bHasTarget = 0x2998;
        }

        namespace DT_ParadropChopper {
                auto m_vecOrigin = 0x138;
                auto m_vecOrigin_2_ = 0x140;
                auto m_hCallingPlayer = 0x2990;
        }

        namespace DT_SurvivalSpawnChopper {
                auto m_vecOrigin = 0x138;
                auto m_vecOrigin_2_ = 0x140;
        }

        namespace DT_BRC4Target {
                auto m_bBrokenOpen = 0x2984;
                auto m_flRadius = 0x2988;
        }

        namespace DT_InfoMapRegion {
                auto m_flRadius = 0x9d8;
                auto m_szLocToken = 0x9dc;
        }

        namespace DT_FireCrackerBlast {
        }

        namespace DT_Inferno {
                auto m_nFireEffectTickBegin = 0x13b4;
                auto m_fireCount = 0x13a8;
        }

        namespace m_fireXDelta {
        }

        namespace m_fireYDelta {
        }

        namespace m_fireZDelta {
        }

        namespace m_bFireIsBurning {
                auto m_fireXDelta = 0x9e4;
                auto m_fireYDelta = 0xb74;
                auto m_fireZDelta = 0xd04;
                auto m_bFireIsBurning = 0xe94;
        }

        namespace DT_CChicken {
                auto m_jumpedThisFrame = 0x29e8;
                auto m_leader = 0x29ec;
        }

        namespace DT_Drone {
                auto m_hMoveToThisEntity = 0x29d8;
                auto m_hDeliveryCargo = 0x29dc;
                auto m_bPilotTakeoverAllowed = 0x29e0;
                auto m_hPotentialCargo = 0x29e4;
                auto m_hCurrentPilot = 0x29e8;
                auto m_vecTagPositions_0_ = 0x29ec;
                auto m_vecTagPositions = 0x0;
                auto m_vecTagIncrements_0_ = 0x2b0c;
                auto m_vecTagIncrements = 0x0;
        }

        namespace DT_FootstepControl {
                auto m_source = 0xa10;
                auto m_destination = 0xa20;
        }

        namespace DT_CSGameRulesProxy {
        }

        namespace DT_CSGameRules {
                auto m_bFreezePeriod = 0x20;
                auto m_bMatchWaitingForResume = 0x40;
                auto m_bWarmupPeriod = 0x21;
                auto m_fWarmupPeriodEnd = 0x24;
                auto m_fWarmupPeriodStart = 0x28;
                auto m_bTerroristTimeOutActive = 0x2c;
                auto m_bCTTimeOutActive = 0x2d;
                auto m_flTerroristTimeOutRemaining = 0x30;
                auto m_flCTTimeOutRemaining = 0x34;
                auto m_nTerroristTimeOuts = 0x38;
                auto m_nCTTimeOuts = 0x3c;
                auto m_iRoundTime = 0x44;
                auto m_gamePhase = 0x60;
                auto m_totalRoundsPlayed = 0x64;
                auto m_nOvertimePlaying = 0x68;
                auto m_timeUntilNextPhaseStarts = 0x5c;
                auto m_flCMMItemDropRevealStartTime = 0x870;
                auto m_flCMMItemDropRevealEndTime = 0x874;
                auto m_fRoundStartTime = 0x4c;
                auto m_bGameRestart = 0x54;
                auto m_flRestartRoundTime = 0x50;
                auto m_flGameStartTime = 0x58;
                auto m_iHostagesRemaining = 0x6c;
                auto m_bAnyHostageReached = 0x70;
                auto m_bMapHasBombTarget = 0x71;
                auto m_bMapHasRescueZone = 0x72;
                auto m_bMapHasBuyZone = 0x73;
                auto m_bIsQueuedMatchmaking = 0x74;
                auto m_bIsValveDS = 0x75;
                auto m_bIsQuestEligible = 0x879;
                auto m_bLogoMap = 0x76;
                auto m_bPlayAllStepSoundsOnServer = 0x77;
                auto m_iNumGunGameProgressiveWeaponsCT = 0x78;
                auto m_iNumGunGameProgressiveWeaponsT = 0x7c;
                auto m_iSpectatorSlotCount = 0x80;
                auto m_bBombDropped = 0x99c;
                auto m_bBombPlanted = 0x99d;
                auto m_iRoundWinStatus = 0x9a0;
                auto m_eRoundWinReason = 0x9a4;
                auto m_flDMBonusStartTime = 0x44c;
                auto m_flDMBonusTimeLength = 0x450;
                auto m_unDMBonusWeaponLoadoutSlot = 0x454;
                auto m_bDMBonusActive = 0x456;
                auto m_bTCantBuy = 0x9a8;
                auto m_bCTCantBuy = 0x9a9;
                auto m_flGuardianBuyUntilTime = 0x9ac;
                auto m_MatchDevice = 0x444;
                auto m_bHasMatchStarted = 0x448;
                auto m_nNextMapInMapgroup = 0x458;
                auto m_nEndMatchMapVoteWinner = 0xc70;
                auto m_bIsDroppingItems = 0x878;
                auto m_iActiveAssassinationTargetMissionID = 0xc18;
                auto m_fMatchStartTime = 0x48;
                auto m_szTournamentEventName = 0x45c;
                auto m_szTournamentEventStage = 0x560;
                auto m_szTournamentPredictionsTxt = 0x768;
                auto m_nTournamentPredictionsPct = 0x86c;
                auto m_szMatchStatTxt = 0x664;
                auto m_nGuardianModeWaveNumber = 0x87c;
                auto m_nGuardianModeSpecialKillsRemaining = 0x880;
                auto m_nGuardianModeSpecialWeaponNeeded = 0x884;
                auto m_nHalloweenMaskListSeed = 0x998;
                auto m_numGlobalGiftsGiven = 0x890;
                auto m_numGlobalGifters = 0x894;
                auto m_numGlobalGiftsPeriodSeconds = 0x898;
                auto m_numBestOfMaps = 0x994;
                auto m_iNumConsecutiveCTLoses = 0xc74;
                auto m_iNumConsecutiveTerroristLoses = 0xc78;
        }

        namespace m_iMatchStats_RoundResults {
        }

        namespace m_iMatchStats_PlayersAlive_T {
        }

        namespace m_iMatchStats_PlayersAlive_CT {
        }

        namespace m_GGProgressiveWeaponOrderCT {
        }

        namespace m_GGProgressiveWeaponOrderT {
        }

        namespace m_GGProgressiveWeaponKillUpgradeOrderCT {
        }

        namespace m_GGProgressiveWeaponKillUpgradeOrderT {
        }

        namespace m_TeamRespawnWaveTimes {
        }

        namespace m_flNextRespawnWave {
        }

        namespace m_nEndMatchMapGroupVoteTypes {
        }

        namespace m_nEndMatchMapGroupVoteOptions {
        }

        namespace m_arrFeaturedGiftersAccounts {
        }

        namespace m_arrFeaturedGiftersGifts {
        }

        namespace m_arrProhibitedItemIndices {
        }

        namespace m_arrTournamentActiveCasterAccounts {
        }

        namespace DT_SurvivalGameRules {
                auto m_vecPlayAreaMins = 0x0;
                auto m_vecPlayAreaMaxs = 0xc;
                auto m_flSpawnSelectionTimeStart = 0x1f8;
                auto m_flSpawnSelectionTimeEnd = 0x1fc;
                auto m_flSpawnSelectionTimeLoadout = 0x200;
                auto m_spawnStage = 0x204;
                auto m_flTabletHexOriginX = 0x208;
                auto m_flTabletHexOriginY = 0x20c;
                auto m_flTabletHexSize = 0x210;
                auto m_flSurvivalStartTime = 0x6a8;
        }

        namespace m_iPlayerSpawnHexIndices {
        }

        namespace m_SpawnTileState {
        }

        namespace m_roundData_playerXuids {
        }

        namespace m_roundData_playerPositions {
        }

        namespace m_roundData_playerTeams {
        }

        namespace m_SurvivalGameRuleDecisionTypes {
        }

        namespace m_SurvivalGameRuleDecisionValues {
                auto m_iPlayerSpawnHexIndices = 0x18;
                auto m_SpawnTileState = 0x118;
                auto m_roundData_playerXuids = 0x218;
                auto m_roundData_playerPositions = 0x420;
                auto m_roundData_playerTeams = 0x524;
                auto m_SurvivalGameRuleDecisionTypes = 0x628;
                auto m_SurvivalGameRuleDecisionValues = 0x668;
                auto m_iMatchStats_RoundResults = 0x9b0;
                auto m_iMatchStats_PlayersAlive_T = 0xaa0;
                auto m_iMatchStats_PlayersAlive_CT = 0xa28;
                auto m_GGProgressiveWeaponOrderCT = 0x84;
                auto m_GGProgressiveWeaponOrderT = 0x174;
                auto m_GGProgressiveWeaponKillUpgradeOrderCT = 0x264;
                auto m_GGProgressiveWeaponKillUpgradeOrderT = 0x354;
                auto m_TeamRespawnWaveTimes = 0xb18;
                auto m_flNextRespawnWave = 0xb98;
                auto m_nEndMatchMapGroupVoteTypes = 0xc20;
                auto m_nEndMatchMapGroupVoteOptions = 0xc48;
                auto m_arrFeaturedGiftersAccounts = 0x89c;
                auto m_arrFeaturedGiftersGifts = 0x8ac;
                auto m_arrProhibitedItemIndices = 0x8bc;
                auto m_arrTournamentActiveCasterAccounts = 0x984;
                auto m_SurvivalRules = 0xcf8;
                auto cs_gamerules_data = 0x0;
        }

        namespace DT_WeaponCubemap {
        }

        namespace DT_WeaponCycler {
        }

        namespace DT_TEPlantBomb {
                auto m_vecOrigin = 0x14;
                auto m_iPlayer = 0x10;
                auto m_option = 0x20;
        }

        namespace DT_TEFireBullets {
                auto m_vecOrigin = 0x18;
                auto m_vecAngles_0_ = 0x24;
                auto m_vecAngles_1_ = 0x28;
                auto m_iWeaponID = 0x34;
                auto m_weapon = 0x30;
                auto m_iMode = 0x38;
                auto m_iSeed = 0x3c;
                auto m_iPlayer = 0x10;
                auto m_fInaccuracy = 0x40;
                auto m_fSpread = 0x48;
                auto m_nItemDefIndex = 0x14;
                auto m_iSoundType = 0x4c;
                auto m_flRecoilIndex = 0x44;
        }

        namespace DT_TERadioIcon {
                auto m_iAttachToClient = 0x10;
        }

        namespace DT_PlantedC4 {
                auto m_bBombTicking = 0x2980;
                auto m_nBombSite = 0x2984;
                auto m_flC4Blow = 0x2990;
                auto m_flTimerLength = 0x2994;
                auto m_flDefuseLength = 0x29a8;
                auto m_flDefuseCountDown = 0x29ac;
                auto m_bBombDefused = 0x29b0;
                auto m_hBombDefuser = 0x29b4;
        }

        namespace DT_CSTeam {
        }

        namespace DT_CSPlayerResource {
                auto m_iPlayerC4 = 0x165c;
                auto m_iPlayerVIP = 0x1660;
                auto m_bombsiteCenterA = 0x1664;
                auto m_bombsiteCenterB = 0x1670;
                auto m_bEndMatchNextMapAllVoted = 0x6b8c;
        }

        namespace m_bHostageAlive {
        }

        namespace m_isHostageFollowingSomeone {
        }

        namespace m_iHostageEntityIDs {
        }

        namespace m_hostageRescueX {
        }

        namespace m_hostageRescueY {
        }

        namespace m_hostageRescueZ {
        }

        namespace m_iMVPs {
        }

        namespace m_iArmor {
        }

        namespace m_bHasHelmet {
        }

        namespace m_bHasDefuser {
        }

        namespace m_iScore {
        }

        namespace m_iCompetitiveRanking {
        }

        namespace m_iCompetitiveWins {
        }

        namespace m_iCompetitiveRankType {
        }

        namespace m_iCompTeammateColor {
        }

        namespace m_iLifetimeStart {
        }

        namespace m_iLifetimeEnd {
        }

        namespace m_bControllingBot {
        }

        namespace m_iControlledPlayer {
        }

        namespace m_iControlledByPlayer {
        }

        namespace m_iBotDifficulty {
        }

        namespace m_szClan {
        }

        namespace m_nCharacterDefIndex {
        }

        namespace m_iTotalCashSpent {
        }

        namespace m_iGunGameLevel {
        }

        namespace m_iCashSpentThisRound {
        }

        namespace m_nEndMatchNextMapVotes {
        }

        namespace m_nActiveCoinRank {
        }

        namespace m_nMusicID {
        }

        namespace m_nPersonaDataPublicLevel {
        }

        namespace m_nPersonaDataPublicCommendsLeader {
        }

        namespace m_nPersonaDataPublicCommendsTeacher {
        }

        namespace m_nPersonaDataPublicCommendsFriendly {
        }

        namespace m_bHasCommunicationAbuseMute {
        }

        namespace m_szCrosshairCodes {
        }

        namespace m_iMatchStats_Kills_Total {
        }

        namespace m_iMatchStats_5k_Total {
        }

        namespace m_iMatchStats_4k_Total {
        }

        namespace m_iMatchStats_3k_Total {
        }

        namespace m_iMatchStats_Damage_Total {
        }

        namespace m_iMatchStats_EquipmentValue_Total {
        }

        namespace m_iMatchStats_KillReward_Total {
        }

        namespace m_iMatchStats_LiveTime_Total {
        }

        namespace m_iMatchStats_Deaths_Total {
        }

        namespace m_iMatchStats_Assists_Total {
        }

        namespace m_iMatchStats_HeadShotKills_Total {
        }

        namespace m_iMatchStats_Objective_Total {
        }

        namespace m_iMatchStats_CashEarned_Total {
        }

        namespace m_iMatchStats_UtilityDamage_Total {
        }

        namespace m_iMatchStats_EnemiesFlashed_Total {
                auto m_bHostageAlive = 0x167c;
                auto m_isHostageFollowingSomeone = 0x1688;
                auto m_iHostageEntityIDs = 0x1694;
                auto m_hostageRescueX = 0x16c4;
                auto m_hostageRescueY = 0x16d4;
                auto m_hostageRescueZ = 0x16e4;
                auto m_iMVPs = 0x16f4;
                auto m_iArmor = 0x187c;
                auto m_bHasHelmet = 0x1839;
                auto m_bHasDefuser = 0x17f8;
                auto m_iScore = 0x1980;
                auto m_iCompetitiveRanking = 0x1a84;
                auto m_iCompetitiveWins = 0x1b88;
                auto m_iCompetitiveRankType = 0x1c8c;
                auto m_iCompTeammateColor = 0x1cd0;
                auto m_iLifetimeStart = 0x1dd4;
                auto m_iLifetimeEnd = 0x1ed8;
                auto m_bControllingBot = 0x1fdc;
                auto m_iControlledPlayer = 0x2020;
                auto m_iControlledByPlayer = 0x2124;
                auto m_iBotDifficulty = 0x42a8;
                auto m_szClan = 0x43ac;
                auto m_nCharacterDefIndex = 0x47bc;
                auto m_iTotalCashSpent = 0x48c0;
                auto m_iGunGameLevel = 0x49c4;
                auto m_iCashSpentThisRound = 0x4ac8;
                auto m_nEndMatchNextMapVotes = 0x6a88;
                auto m_nActiveCoinRank = 0x4bcc;
                auto m_nMusicID = 0x4cd0;
                auto m_nPersonaDataPublicLevel = 0x4dd4;
                auto m_nPersonaDataPublicCommendsLeader = 0x4ed8;
                auto m_nPersonaDataPublicCommendsTeacher = 0x4fdc;
                auto m_nPersonaDataPublicCommendsFriendly = 0x50e0;
                auto m_bHasCommunicationAbuseMute = 0x51e4;
                auto m_szCrosshairCodes = 0x5225;
                auto m_iMatchStats_Kills_Total = 0x5b08;
                auto m_iMatchStats_5k_Total = 0x601c;
                auto m_iMatchStats_4k_Total = 0x5f18;
                auto m_iMatchStats_3k_Total = 0x5e14;
                auto m_iMatchStats_Damage_Total = 0x6120;
                auto m_iMatchStats_EquipmentValue_Total = 0x6224;
                auto m_iMatchStats_KillReward_Total = 0x6328;
                auto m_iMatchStats_LiveTime_Total = 0x642c;
                auto m_iMatchStats_Deaths_Total = 0x5d10;
                auto m_iMatchStats_Assists_Total = 0x5c0c;
                auto m_iMatchStats_HeadShotKills_Total = 0x6530;
                auto m_iMatchStats_Objective_Total = 0x6634;
                auto m_iMatchStats_CashEarned_Total = 0x6738;
                auto m_iMatchStats_UtilityDamage_Total = 0x683c;
                auto m_iMatchStats_EnemiesFlashed_Total = 0x6940;
        }

        namespace DT_CSPlayer {
                auto m_angEyeAngles_0_ = 0xb37c;
                auto m_angEyeAngles_1_ = 0xb380;
                auto m_iAddonBits = 0xa374;
                auto m_iPrimaryAddon = 0xa378;
                auto m_iSecondaryAddon = 0xa37c;
                auto m_iThrowGrenadeCounter = 0x396c;
                auto m_bWaitForNoAttack = 0x3970;
                auto m_bIsRespawningForDMBonus = 0x3971;
                auto m_iPlayerState = 0x392c;
                auto m_iAccount = 0xb364;
                auto m_iStartAccount = 0xa3a4;
                auto m_totalHitsOnServer = 0xa3a8;
                auto m_bInBombZone = 0x3968;
                auto m_bInBuyZone = 0x3969;
                auto m_bInNoDefuseArea = 0x396a;
                auto m_bKilledByTaser = 0x3981;
                auto m_iMoveState = 0x3984;
                auto m_iClass = 0xb374;
                auto m_ArmorValue = 0xb378;
                auto m_angEyeAngles = 0xb37c;
                auto m_bHasDefuser = 0xb388;
                auto m_bNightVisionOn = 0xa399;
                auto m_bHasNightVision = 0xa39a;
                auto m_bInHostageRescueZone = 0xb389;
                auto m_bIsDefusing = 0x3930;
                auto m_bIsGrabbingHostage = 0x3931;
                auto m_iBlockingUseActionInProgress = 0x3934;
                auto m_bIsScoped = 0x3928;
                auto m_bIsWalking = 0x3929;
                auto m_nIsAutoMounting = 0x3a98;
                auto m_bResumeZoom = 0x392a;
                auto m_fImmuneToGunGameDamageTime = 0x393c;
                auto m_bGunGameImmunity = 0x3944;
                auto m_bHasMovedSinceSpawn = 0x3945;
                auto m_bMadeFinalGunGameProgressiveKill = 0x3946;
                auto m_iGunGameProgressiveWeaponIndex = 0x3948;
                auto m_iNumGunGameTRKillPoints = 0x394c;
                auto m_iNumGunGameKillsWithCurrentWeapon = 0x3950;
                auto m_iNumRoundKills = 0x3954;
                auto m_fMolotovUseTime = 0x3960;
                auto m_fMolotovDamageTime = 0x3964;
                auto m_szArmsModel = 0x398b;
                auto m_hCarriedHostage = 0xa3f8;
                auto m_hCarriedHostageProp = 0xa3fc;
                auto m_bIsRescuing = 0x3938;
                auto m_flGroundAccelLinearFracLastTime = 0xa3a0;
                auto m_bCanMoveDuringFreezePeriod = 0x3988;
                auto m_isCurrentGunGameLeader = 0x3989;
                auto m_isCurrentGunGameTeamLeader = 0x398a;
                auto m_flGuardianTooFarDistFrac = 0x3974;
                auto m_flDetectedByEnemySensorTime = 0x3978;
                auto m_bIsPlayerGhost = 0x3a95;
                auto m_bHasParachute = 0xb350;
                auto m_unMusicID = 0xb354;
                auto m_bHasHelmet = 0xb36c;
                auto m_bHasHeavyArmor = 0xb36d;
                auto m_nHeavyAssaultSuitCooldownRemaining = 0xb370;
                auto m_flFlashDuration = 0xa420;
                auto m_flFlashMaxAlpha = 0xa41c;
                auto m_iProgressBarDuration = 0xa380;
                auto m_flProgressBarStartTime = 0xa384;
                auto m_hRagdoll = 0xa3ec;
                auto m_hPlayerPing = 0xa3f0;
                auto m_cycleLatch = 0xb48c;
                auto m_unCurrentEquipmentValue = 0xb330;
                auto m_unRoundStartEquipmentValue = 0xb332;
                auto m_unFreezetimeEndEquipmentValue = 0xb334;
                auto m_bIsControllingBot = 0xb9f9;
                auto m_bHasControlledBotThisRound = 0xba08;
                auto m_bCanControlObservedBot = 0xb9fa;
                auto m_iControlledBotEntIndex = 0xb9fc;
                auto m_vecAutomoveTargetEnd = 0x3aa8;
                auto m_flAutoMoveStartTime = 0x3ab8;
                auto m_flAutoMoveTargetTime = 0x3abc;
                auto m_bIsAssassinationTarget = 0xb9f8;
                auto m_bHud_MiniScoreHidden = 0xb3aa;
                auto m_bHud_RadarHidden = 0xb3ab;
                auto m_nLastKillerIndex = 0xb3ac;
                auto m_nLastConcurrentKilled = 0xb3b0;
                auto m_nDeathCamMusic = 0xb3b4;
                auto m_bIsHoldingLookAtWeapon = 0xb921;
                auto m_bIsLookingAtWeapon = 0xb920;
                auto m_iNumRoundKillsHeadshots = 0x3958;
                auto m_unTotalRoundDamageDealt = 0x395c;
                auto m_flLowerBodyYawTarget = 0x3a90;
                auto m_bStrafing = 0x3a94;
                auto m_flThirdpersonRecoil = 0xb998;
                auto m_bHideTargetID = 0xb99c;
                auto m_bIsSpawnRappelling = 0xa3ad;
                auto m_vecSpawnRappellingRopeOrigin = 0xa3b0;
                auto m_nSurvivalTeam = 0xa3c0;
                auto m_hSurvivalAssassinationTarget = 0xa3c4;
                auto m_flHealthShotBoostExpirationTime = 0xa3c8;
                auto m_flLastExoJumpTime = 0x3ac0;
        }

        namespace DT_CSLocalPlayerExclusive {
                auto m_vecOrigin = 0x138;
                auto m_vecOrigin_2_ = 0x140;
                auto m_flStamina = 0xa388;
                auto m_iDirection = 0xa38c;
                auto m_iShotsFired = 0xa390;
                auto m_nNumFastDucks = 0xa394;
                auto m_bDuckOverride = 0xa398;
                auto m_flVelocityModifier = 0xa39c;
                auto m_unActiveQuestId = 0xb328;
                auto m_nQuestProgressReason = 0xb32c;
        }

        namespace m_bPlayerDominated {
        }

        namespace m_bPlayerDominatingMe {
        }

        namespace m_iWeaponPurchasesThisRound {
                auto m_bPlayerDominated = 0xb494;
                auto m_bPlayerDominatingMe = 0xb4d5;
                auto m_iWeaponPurchasesThisRound = 0xb518;
        }

        namespace DT_CSNonLocalPlayerExclusive {
                auto m_vecOrigin = 0x138;
                auto m_vecOrigin_2_ = 0x140;
        }

        namespace DT_CSTeamExclusive {
        }

        namespace m_iWeaponPurchasesThisMatch {
        }

        namespace m_EquippedLoadoutItemDefIndices {
                auto m_iWeaponPurchasesThisMatch = 0xaa7c;
                auto m_EquippedLoadoutItemDefIndices = 0xb254;
        }

        namespace m_iMatchStats_Kills {
        }

        namespace m_iMatchStats_Damage {
        }

        namespace m_iMatchStats_EquipmentValue {
        }

        namespace m_iMatchStats_MoneySaved {
        }

        namespace m_iMatchStats_KillReward {
        }

        namespace m_iMatchStats_LiveTime {
        }

        namespace m_iMatchStats_Deaths {
        }

        namespace m_iMatchStats_Assists {
        }

        namespace m_iMatchStats_HeadShotKills {
        }

        namespace m_iMatchStats_Objective {
        }

        namespace m_iMatchStats_CashEarned {
        }

        namespace m_iMatchStats_UtilityDamage {
        }

        namespace m_iMatchStats_EnemiesFlashed {
        }

        namespace m_rank {
        }

        namespace m_passiveItems {
        }

        namespace m_vecPlayerPatchEconIndices {
                auto cslocaldata = 0x0;
                auto csnonlocaldata = 0x0;
                auto csteamdata = 0x0;
                auto m_iMatchStats_Kills = 0xa464;
                auto m_iMatchStats_Damage = 0xa4dc;
                auto m_iMatchStats_EquipmentValue = 0xa554;
                auto m_iMatchStats_MoneySaved = 0xa5cc;
                auto m_iMatchStats_KillReward = 0xa644;
                auto m_iMatchStats_LiveTime = 0xa6bc;
                auto m_iMatchStats_Deaths = 0xa734;
                auto m_iMatchStats_Assists = 0xa7ac;
                auto m_iMatchStats_HeadShotKills = 0xa824;
                auto m_iMatchStats_Objective = 0xa89c;
                auto m_iMatchStats_CashEarned = 0xa914;
                auto m_iMatchStats_UtilityDamage = 0xa98c;
                auto m_iMatchStats_EnemiesFlashed = 0xaa04;
                auto m_rank = 0xb338;
                auto m_passiveItems = 0xb350;
                auto m_vecPlayerPatchEconIndices = 0xb970;
        }

        namespace DT_PlayerPing {
                auto m_hPlayer = 0x9e4;
                auto m_hPingedEntity = 0x9e8;
                auto m_iType = 0x9ec;
        }

        namespace DT_CSRagdoll {
                auto m_vecOrigin = 0x138;
                auto m_vecRagdollOrigin = 0x2a0c;
                auto m_hPlayer = 0x29f0;
                auto m_nModelIndex = 0x258;
                auto m_nForceBone = 0x268c;
                auto m_vecForce = 0x2680;
                auto m_vecRagdollVelocity = 0x2a00;
                auto m_iDeathPose = 0x2a18;
                auto m_iDeathFrame = 0x2a1c;
                auto m_iTeamNum = 0xf4;
                auto m_bClientSideAnimation = 0x289c;
                auto m_flDeathYaw = 0x2a20;
                auto m_flAbsYaw = 0x2a24;
        }

        namespace DT_TEPlayerAnimEvent {
                auto m_hPlayer = 0x10;
                auto m_iEvent = 0x14;
                auto m_nData = 0x18;
        }

        namespace DT_CHostage {
                auto m_isRescued = 0x2f30;
                auto m_jumpedThisFrame = 0x2f31;
                auto m_iHealth = 0x100;
                auto m_iMaxHealth = 0x2f18;
                auto m_lifeState = 0x25f;
                auto m_fFlags = 0x104;
                auto m_nHostageState = 0x2f34;
                auto m_flRescueStartTime = 0x2f38;
                auto m_flGrabSuccessTime = 0x2f3c;
                auto m_flDropStartTime = 0x2f40;
                auto m_vel = 0x2f24;
                auto m_leader = 0x2f20;
        }

        namespace DT_HostageCarriableProp {
        }

        namespace DT_BaseCSGrenadeProjectile {
                auto m_vInitialVelocity = 0x29d0;
                auto m_nBounces = 0x29dc;
                auto m_nExplodeEffectIndex = 0x29e0;
                auto m_nExplodeEffectTickBegin = 0x29e4;
                auto m_vecExplodeEffectOrigin = 0x29e8;
        }

        namespace DT_HandleTest {
                auto m_Handle = 0x9d8;
                auto m_bSendHandle = 0x9dc;
        }

        namespace DT_TeamplayRoundBasedRulesProxy {
        }

        namespace DT_TeamplayRoundBasedRules {
                auto m_iRoundState = 0x28;
                auto m_bInWaitingForPlayers = 0x38;
                auto m_iWinningTeam = 0x30;
                auto m_bInOvertime = 0x2c;
                auto m_bInSetup = 0x2d;
                auto m_bSwitchedTeamsThisRound = 0x2e;
                auto m_bAwaitingReadyRestart = 0x39;
                auto m_flRestartRoundTime = 0x3c;
                auto m_flMapResetTime = 0x40;
                auto m_bStopWatch = 0xe4;
        }

        namespace m_flNextRespawnWave {
        }

        namespace m_TeamRespawnWaveTimes {
        }

        namespace m_bTeamReady {
                auto m_flNextRespawnWave = 0x44;
                auto m_TeamRespawnWaveTimes = 0xe8;
                auto m_bTeamReady = 0xc4;
                auto teamplayroundbased_gamerules_data = 0x0;
        }

        namespace DT_SpriteTrail {
                auto m_flLifeTime = 0x1074;
                auto m_flStartWidth = 0x1078;
                auto m_flEndWidth = 0x107c;
                auto m_flStartWidthVariance = 0x1080;
                auto m_flTextureRes = 0x1084;
                auto m_flMinFadeLength = 0x1088;
                auto m_vecSkyboxOrigin = 0x108c;
                auto m_flSkyboxScale = 0x1098;
        }

        namespace DT_SpriteOriented {
        }

        namespace DT_Sprite {
                auto m_hAttachedToEntity = 0x9e8;
                auto m_nAttachment = 0x9ec;
                auto m_flScaleTime = 0xa08;
                auto m_flSpriteScale = 0xa04;
                auto m_flSpriteFramerate = 0x9f0;
                auto m_flGlowProxySize = 0xa10;
                auto m_flHDRColorScale = 0xa14;
                auto m_flFrame = 0x9f4;
                auto m_flBrightnessTime = 0xa00;
                auto m_nBrightness = 0x9fc;
                auto m_bWorldSpaceScale = 0xa0c;
        }

        namespace DT_Ragdoll_Attached {
                auto m_boneIndexAttached = 0x2cb8;
                auto m_ragdollAttachedObjectIndex = 0x2cb4;
                auto m_attachmentPointBoneSpace = 0x2c90;
                auto m_attachmentPointRagdollSpace = 0x2ca8;
        }

        namespace DT_Ragdoll {
                auto m_ragAngles_0_ = 0x2aa0;
                auto m_ragAngles = 0x0;
                auto m_ragPos_0_ = 0x2980;
                auto m_ragPos = 0x0;
                auto m_hUnragdoll = 0x2c7c;
                auto m_flBlendWeight = 0x2c80;
                auto m_nOverlaySequence = 0x2c88;
        }

        namespace DT_PropCounter {
                auto m_flDisplayValue = 0x2980;
        }

        namespace DT_PredictedViewModel {
        }

        namespace DT_PoseController {
                auto m_bPoseValueParity = 0x9ec;
                auto m_fPoseValue = 0x9f0;
                auto m_fInterpolationTime = 0x9f4;
                auto m_bInterpolationWrap = 0x9f8;
                auto m_fCycleFrequency = 0x9fc;
                auto m_nFModType = 0xa00;
                auto m_fFModTimeOffset = 0xa04;
                auto m_fFModRate = 0xa08;
                auto m_fFModAmplitude = 0xa0c;
        }

        namespace m_hProps {
        }

        namespace m_chPoseIndex {
                auto m_hProps = 0x9d8;
                auto m_chPoseIndex = 0x9e8;
        }

        namespace DT_GrassBurn {
                auto m_flGrassBurnClearTime = 0x9d8;
        }

        namespace DT_GameRulesProxy {
        }

        namespace DT_InfoLadderDismount {
        }

        namespace DT_FuncLadder {
                auto m_vecPlayerMountPositionTop = 0x9f8;
                auto m_vecPlayerMountPositionBottom = 0xa04;
                auto m_vecLadderDir = 0x9d8;
                auto m_bFakeLadder = 0xa11;
        }

        namespace DT_TEFoundryHelpers {
                auto m_iEntity = 0x10;
        }

        namespace DT_DetailController {
                auto m_flFadeStartDist = 0x9d8;
                auto m_flFadeEndDist = 0x9dc;
        }

        namespace DT_DangerZone {
                auto m_vecDangerZoneOriginStartedAt = 0x9d8;
                auto m_flBombLaunchTime = 0x9e4;
                auto m_flExtraRadius = 0x9e8;
                auto m_flExtraRadiusStartTime = 0x9ec;
                auto m_flExtraRadiusTotalLerpTime = 0x9f0;
                auto m_nDropOrder = 0x9f4;
                auto m_iWave = 0x9f8;
        }

        namespace DT_DangerZoneController {
                auto m_bDangerZoneControllerEnabled = 0x9d8;
                auto m_bMissionControlledExplosions = 0x9d9;
                auto m_flStartTime = 0x9f4;
                auto m_flFinalExpansionTime = 0x9f8;
                auto m_vecEndGameCircleStart = 0x9dc;
                auto m_vecEndGameCircleEnd = 0x9e8;
                auto m_hTheFinalZone = 0xab8;
        }

        namespace m_DangerZones {
        }

        namespace m_flWaveEndTimes {
                auto m_DangerZones = 0x9fc;
                auto m_flWaveEndTimes = 0xaa4;
        }

        namespace DT_WorldVguiText {
                auto m_bEnabled = 0x9d8;
                auto m_szDisplayText = 0x9d9;
                auto m_szDisplayTextOption = 0xbd9;
                auto m_szFont = 0xcd9;
                auto m_iTextPanelWidth = 0xd20;
                auto m_clrText = 0xd19;
        }

        namespace DT_World {
                auto m_flWaveHeight = 0x9d8;
                auto m_WorldMins = 0x9dc;
                auto m_WorldMaxs = 0x9e8;
                auto m_bStartDark = 0x9f4;
                auto m_flMaxOccludeeArea = 0x9f8;
                auto m_flMinOccluderArea = 0x9fc;
                auto m_flMaxPropScreenSpaceWidth = 0xa04;
                auto m_flMinPropScreenSpaceWidth = 0xa00;
                auto m_iszDetailSpriteMaterial = 0xa10;
                auto m_bColdWorld = 0xa08;
                auto m_iTimeOfDay = 0xa0c;
        }

        namespace DT_WaterLODControl {
                auto m_flCheapWaterStartDistance = 0x9d8;
                auto m_flCheapWaterEndDistance = 0x9dc;
        }

        namespace DT_WaterBullet {
        }

        namespace DT_VoteController {
                auto m_iActiveIssueIndex = 0x9e4;
                auto m_iOnlyTeamToVote = 0x9e8;
                auto m_nPotentialVotes = 0xa04;
                auto m_bIsYesNoVote = 0xa0a;
        }

        namespace m_nVoteOptionCount {
                auto m_nVoteOptionCount = 0x9ec;
        }

        namespace DT_VGuiScreen {
                auto m_flWidth = 0x9e0;
                auto m_flHeight = 0x9e4;
                auto m_fScreenFlags = 0xa0c;
                auto m_nPanelName = 0x9e8;
                auto m_nAttachmentIndex = 0xa04;
                auto m_nOverlayMaterial = 0xa08;
                auto m_hPlayerOwner = 0xa68;
        }

        namespace DT_PropJeep {
                auto m_bHeadlightIsOn = 0x2acc;
        }

        namespace DT_PropVehicleChoreoGeneric {
                auto m_hPlayer = 0x29f4;
                auto m_bEnterAnimOn = 0x29fc;
                auto m_bExitAnimOn = 0x29fd;
                auto m_bForceEyesToAttachment = 0x2a0c;
                auto m_vecEyeExitEndpoint = 0x2a00;
                auto m_vehicleView_bClampEyeAngles = 0x2a90;
                auto m_vehicleView_flPitchCurveZero = 0x2a94;
                auto m_vehicleView_flPitchCurveLinear = 0x2a98;
                auto m_vehicleView_flRollCurveZero = 0x2a9c;
                auto m_vehicleView_flRollCurveLinear = 0x2aa0;
                auto m_vehicleView_flFOV = 0x2aa4;
                auto m_vehicleView_flYawMin = 0x2aa8;
                auto m_vehicleView_flYawMax = 0x2aac;
                auto m_vehicleView_flPitchMin = 0x2ab0;
                auto m_vehicleView_flPitchMax = 0x2ab4;
        }

        namespace DT_TriggerSoundOperator {
                auto m_nSoundOperator = 0xa10;
        }

        namespace DT_BaseVPhysicsTrigger {
        }

        namespace DT_TriggerPlayerMovement {
        }

        namespace DT_BaseTrigger {
                auto m_bClientSidePredicted = 0xa08;
                auto m_spawnflags = 0x2c8;
        }

        namespace DT_ProxyToggle {
        }

        namespace DT_ProxyToggle_ProxiedData {
                auto m_WithProxy = 0x9d8;
                auto blah = 0x0;
        }

        namespace DT_Tesla {
                auto m_SoundName = 0xa00;
                auto m_iszSpriteName = 0xa40;
        }

        namespace DT_BaseTeamObjectiveResource {
                auto m_iTimerToShowInHUD = 0x9d8;
                auto m_iStopWatchTimer = 0x9dc;
                auto m_iNumControlPoints = 0x9e0;
                auto m_bPlayingMiniRounds = 0x9e8;
                auto m_bControlPointsReset = 0x9e9;
                auto m_iUpdateCapHudParity = 0x9ec;
                auto m_vCPPositions_0_ = 0x9f4;
                auto m_vCPPositions = 0x0;
                auto m_iszWarnSound_0_ = 0x1304;
                auto m_iszWarnSound = 0x0;
                auto m_pszCapLayoutInHUD = 0x1cec;
        }

        namespace m_bCPIsVisible {
        }

        namespace m_flLazyCapPerc {
        }

        namespace m_iTeamIcons {
        }

        namespace m_iTeamOverlays {
        }

        namespace m_iTeamReqCappers {
        }

        namespace m_flTeamCapTime {
        }

        namespace m_iPreviousPoints {
        }

        namespace m_bTeamCanCap {
        }

        namespace m_iTeamBaseIcons {
        }

        namespace m_iBaseControlPoints {
        }

        namespace m_bInMiniRound {
        }

        namespace m_iWarnOnCap {
        }

        namespace m_flPathDistance {
        }

        namespace m_iNumTeamMembers {
        }

        namespace m_iCappingTeam {
        }

        namespace m_iTeamInZone {
        }

        namespace m_bBlocked {
        }

        namespace m_iOwner {
                auto m_bCPIsVisible = 0xa54;
                auto m_flLazyCapPerc = 0xa5c;
                auto m_iTeamIcons = 0xa9c;
                auto m_iTeamOverlays = 0xb9c;
                auto m_iTeamReqCappers = 0xc9c;
                auto m_flTeamCapTime = 0xd9c;
                auto m_iPreviousPoints = 0xe9c;
                auto m_bTeamCanCap = 0x119c;
                auto m_iTeamBaseIcons = 0x11dc;
                auto m_iBaseControlPoints = 0x125c;
                auto m_bInMiniRound = 0x12dc;
                auto m_iWarnOnCap = 0x12e4;
                auto m_flPathDistance = 0x1afc;
                auto m_iNumTeamMembers = 0x1b1c;
                auto m_iCappingTeam = 0x1c1c;
                auto m_iTeamInZone = 0x1c3c;
                auto m_bBlocked = 0x1c5c;
                auto m_iOwner = 0x1c64;
        }

        namespace DT_Team {
                auto m_iTeamNum = 0xb68;
                auto m_bSurrendered = 0xb6c;
                auto m_scoreTotal = 0xb40;
                auto m_scoreFirstHalf = 0xb44;
                auto m_scoreSecondHalf = 0xb48;
                auto m_scoreOvertime = 0xb4c;
                auto m_iClanID = 0xb58;
                auto m_szTeamname = 0x9ec;
                auto m_szClanTeamname = 0xa0c;
                auto m_szTeamFlagImage = 0xa2c;
                auto m_szTeamLogoImage = 0xa34;
                auto m_szTeamMatchStat = 0xa3c;
                auto m_nGGLeaderEntIndex_CT = 0xb50;
                auto m_nGGLeaderEntIndex_T = 0xb54;
                auto m_numMapVictories = 0xb70;
                auto player_array_element = 0x0;
                auto "player_array" = 0x0;
        }

        namespace DT_SunlightShadowControl {
                auto m_shadowDirection = 0x9d8;
                auto m_bEnabled = 0x9e4;
                auto m_TextureName = 0x9e5;
                auto m_LightColor = 0xaf0;
                auto m_flColorTransitionTime = 0xb04;
                auto m_flSunDistance = 0xb08;
                auto m_flFOV = 0xb0c;
                auto m_flNearZ = 0xb10;
                auto m_flNorthOffset = 0xb14;
                auto m_bEnableShadows = 0xb18;
        }

        namespace DT_Sun {
                auto m_clrRender = 0x70;
                auto m_clrOverlay = 0xb38;
                auto m_vDirection = 0xb44;
                auto m_bOn = 0xb50;
                auto m_nSize = 0xb3c;
                auto m_nOverlaySize = 0xb40;
                auto m_nMaterial = 0xb54;
                auto m_nOverlayMaterial = 0xb58;
                auto HDRColorScale = 0x0;
                auto glowDistanceScale = 0x0;
        }

        namespace DT_ParticlePerformanceMonitor {
                auto m_bMeasurePerf = 0x9d9;
                auto m_bDisplayPerf = 0x9d8;
        }

        namespace DT_SpotlightEnd {
                auto m_flLightScale = 0x9d8;
                auto m_Radius = 0x9dc;
        }

        namespace DT_SpatialEntity {
                auto m_vecOrigin = 0x9d8;
                auto m_minFalloff = 0x9e4;
                auto m_maxFalloff = 0x9e8;
                auto m_flCurWeight = 0x9ec;
                auto m_bEnabled = 0xaf4;
        }

        namespace DT_SlideshowDisplay {
                auto m_bEnabled = 0x9d8;
                auto m_szDisplayText = 0x9d9;
                auto m_szSlideshowDirectory = 0xa59;
                auto m_fMinSlideTime = 0xb08;
                auto m_fMaxSlideTime = 0xb0c;
                auto m_iCycleType = 0xb14;
                auto m_bNoListRepeats = 0xb18;
        }

        namespace m_chCurrentSlideLists {
                auto m_chCurrentSlideLists = 0xaf0;
        }

        namespace DT_ShadowControl {
                auto m_shadowDirection = 0x9d8;
                auto m_shadowColor = 0x9e4;
                auto m_flShadowMaxDist = 0x9e8;
                auto m_bDisableShadows = 0x9ec;
                auto m_bEnableLocalLightShadows = 0x9ed;
        }

        namespace DT_SceneEntity {
                auto m_nSceneStringIndex = 0x9e8;
                auto m_bIsPlayingBack = 0x9dc;
                auto m_bPaused = 0x9dd;
                auto m_bMultiplayer = 0x9de;
                auto m_flForceClientTime = 0x9e4;
        }

        namespace _ST_m_hActorList_16 {
        }

        namespace _LPT_m_hActorList_16 {
                auto lengthprop16 = 0x0;
                auto lengthproxy = 0x0;
                auto m_hActorList = 0x0;
        }

        namespace DT_RopeKeyframe {
                auto m_nChangeCount = 0xccc;
                auto m_iRopeMaterialModelIndex = 0xa14;
                auto m_hStartPoint = 0xcac;
                auto m_hEndPoint = 0xcb0;
                auto m_iStartAttachment = 0xcb4;
                auto m_iEndAttachment = 0xcb6;
                auto m_fLockedPoints = 0xcc8;
                auto m_Slack = 0xcc0;
                auto m_RopeLength = 0xcbc;
                auto m_RopeFlags = 0xa10;
                auto m_TextureScale = 0xcc4;
                auto m_nSegments = 0xca8;
                auto m_bConstrainBetweenEndpoints = 0xd50;
                auto m_Subdiv = 0xcb8;
                auto m_Width = 0xcd0;
                auto m_flScrollSpeed = 0xa0c;
                auto m_vecOrigin = 0x138;
                auto moveparent = 0x148;
                auto m_iParentAttachment = 0x2ec;
                auto m_iDefaultRopeMaterialModelIndex = 0xa18;
                auto m_nMinCPULevel = 0x988;
                auto m_nMaxCPULevel = 0x989;
                auto m_nMinGPULevel = 0x98a;
                auto m_nMaxGPULevel = 0x98b;
        }

        namespace DT_RagdollManager {
                auto m_iCurrentMaxRagdollCount = 0x9d8;
        }

        namespace DT_PhysicsPropMultiplayer {
                auto m_iPhysicsMode = 0x29c4;
                auto m_fMass = 0x29c8;
                auto m_collisionMins = 0x29cc;
                auto m_collisionMaxs = 0x29d8;
        }

        namespace DT_PhysBoxMultiplayer {
                auto m_iPhysicsMode = 0x9e4;
                auto m_fMass = 0x9e8;
        }

        namespace DT_PropDoorRotating {
        }

        namespace DT_BasePropDoor {
        }

        namespace DT_DynamicProp {
                auto m_bUseHitboxesForRenderBox = 0x29a4;
                auto m_flGlowMaxDist = 0x29c4;
                auto m_bShouldGlow = 0x29c8;
                auto m_clrGlow = 0x29c9;
                auto m_nGlowStyle = 0x29d0;
        }

        namespace DT_Prop_Hallucination {
                auto m_bEnabled = 0x2999;
                auto m_fVisibleTime = 0x299c;
                auto m_fRechargeTime = 0x29a0;
        }

        namespace DT_PostProcessController {
                auto m_bMaster = 0xa04;
        }

        namespace m_flPostProcessParameters {
                auto m_flPostProcessParameters = 0x9d8;
        }

        namespace DT_PointWorldText {
                auto m_szText = 0xa08;
                auto m_flTextSize = 0xb0c;
                auto m_textColor = 0xb10;
        }

        namespace DT_PointCommentaryNode {
                auto m_bActive = 0x2980;
                auto m_flStartTime = 0x2984;
                auto m_iszCommentaryFile = 0x2988;
                auto m_iszCommentaryFileNoHDR = 0x2a8c;
                auto m_iszSpeakers = 0x2b90;
                auto m_iNodeNumber = 0x2c90;
                auto m_iNodeNumberMax = 0x2c94;
                auto m_hViewPosition = 0x2c9c;
        }

        namespace DT_PointCamera {
                auto m_FOV = 0x9d8;
                auto m_Resolution = 0x9dc;
                auto m_bFogEnable = 0x9e0;
                auto m_FogColor = 0x9e1;
                auto m_flFogStart = 0x9e8;
                auto m_flFogEnd = 0x9ec;
                auto m_flFogMaxDensity = 0x9f0;
                auto m_bActive = 0x9f4;
                auto m_bUseScreenAspectRatio = 0x9f5;
        }

        namespace DT_PlayerResource {
        }

        namespace m_iPing {
        }

        namespace m_iKills {
        }

        namespace m_iAssists {
        }

        namespace m_iDeaths {
        }

        namespace m_bConnected {
        }

        namespace m_iTeam {
        }

        namespace m_iPendingTeam {
        }

        namespace m_bAlive {
        }

        namespace m_iHealth {
        }

        namespace m_iCoachingTeam {
                auto m_iPing = 0xb28;
                auto m_iKills = 0xc2c;
                auto m_iAssists = 0xd30;
                auto m_iDeaths = 0xe34;
                auto m_bConnected = 0xae4;
                auto m_iTeam = 0xf38;
                auto m_iPendingTeam = 0x103c;
                auto m_bAlive = 0x1140;
                auto m_iHealth = 0x1184;
                auto m_iCoachingTeam = 0x1288;
        }

        namespace DT_Plasma {
                auto m_flStartScale = 0x9d8;
                auto m_flScale = 0x9dc;
                auto m_flScaleTime = 0x9e0;
                auto m_nFlags = 0x9e4;
                auto m_nPlasmaModelIndex = 0x9e8;
                auto m_nPlasmaModelIndex2 = 0x9ec;
                auto m_nGlowModelIndex = 0x9f0;
        }

        namespace DT_PhysMagnet {
        }

        namespace DT_PhysicsProp {
                auto m_bAwake = 0x29a0;
                auto m_spawnflags = 0x2c8;
        }

        namespace DT_StatueProp {
                auto m_hInitBaseAnimating = 0x29c0;
                auto m_bShatter = 0x29c4;
                auto m_nShatterFlags = 0x29c8;
                auto m_vShatterPosition = 0x29cc;
                auto m_vShatterForce = 0x29d8;
        }

        namespace DT_PhysBox {
                auto m_mass = 0x9d8;
        }

        namespace DT_ParticleSystem {
                auto m_vecOrigin = 0x138;
                auto m_fEffects = 0xf0;
                auto m_hOwnerEntity = 0x14c;
                auto moveparent = 0x148;
                auto m_iParentAttachment = 0x2ec;
                auto m_angRotation = 0x12c;
                auto m_iEffectIndex = 0x9d8;
                auto m_bActive = 0x9e0;
                auto m_nStopType = 0x9dc;
                auto m_flStartTime = 0x9e4;
                auto m_szSnapshotFileName = 0x9e8;
        }

        namespace m_vServerControlPoints {
        }

        namespace m_iServerControlPointAssignments {
        }

        namespace m_hControlPointEnts {
        }

        namespace m_iControlPointParents {
                auto m_vServerControlPoints = 0xaec;
                auto m_iServerControlPointAssignments = 0xb1c;
                auto m_hControlPointEnts = 0xb30;
                auto m_iControlPointParents = 0xc2c;
        }

        namespace DT_MovieDisplay {
                auto m_bEnabled = 0x9d8;
                auto m_bLooping = 0x9d9;
                auto m_szMovieFilename = 0x9da;
                auto m_szGroupName = 0xa5a;
                auto m_bStretchToFill = 0xada;
                auto m_bForcedSlave = 0xadb;
                auto m_bUseCustomUVs = 0xadc;
                auto m_flUMin = 0xae0;
                auto m_flUMax = 0xae4;
                auto m_flVMin = 0xae8;
                auto m_flVMax = 0xaec;
        }

        namespace DT_MaterialModifyControl {
                auto m_szMaterialName = 0x9d8;
                auto m_szMaterialVar = 0xad7;
                auto m_szMaterialVarValue = 0xbd6;
                auto m_iFrameStart = 0xce0;
                auto m_iFrameEnd = 0xce4;
                auto m_bWrap = 0xce8;
                auto m_flFramerate = 0xcec;
                auto m_bNewAnimCommandsSemaphore = 0xcf0;
                auto m_flFloatLerpStartValue = 0xcf4;
                auto m_flFloatLerpEndValue = 0xcf8;
                auto m_flFloatLerpTransitionTime = 0xcfc;
                auto m_bFloatLerpWrap = 0xd00;
                auto m_nModifyMode = 0xd08;
        }

        namespace DT_LightGlow {
                auto m_clrRender = 0x70;
                auto m_nHorizontalSize = 0x9d8;
                auto m_nVerticalSize = 0x9dc;
                auto m_nMinDist = 0x9e0;
                auto m_nMaxDist = 0x9e4;
                auto m_nOuterMaxDist = 0x9e8;
                auto m_spawnflags = 0x9ec;
                auto m_vecOrigin = 0x138;
                auto m_angRotation = 0x12c;
                auto moveparent = 0x148;
                auto m_flGlowProxySize = 0xac4;
                auto HDRColorScale = 0x0;
        }

        namespace DT_ItemAssaultSuitUseable {
                auto m_nArmorValue = 0x3440;
                auto m_bIsHeavyAssaultSuit = 0x3444;
        }

        namespace DT_Item {
                auto m_bShouldGlow = 0x3230;
        }

        namespace DT_InfoOverlayAccessor {
                auto m_iTextureFrameIndex = 0x98c;
                auto m_iOverlayID = 0x9d8;
        }

        namespace DT_FuncTrackTrain {
        }

        namespace DT_FuncSmokeVolume {
                auto m_Color1 = 0xac4;
                auto m_Color2 = 0xac8;
                auto m_MaterialName = 0xacc;
                auto m_ParticleDrawWidth = 0xbcc;
                auto m_ParticleSpacingDistance = 0xbd0;
                auto m_DensityRampSpeed = 0xbd4;
                auto m_RotationSpeed = 0xbd8;
                auto m_MovementSpeed = 0xbdc;
                auto m_Density = 0xbe0;
                auto m_maxDrawDistance = 0xbe4;
                auto m_spawnflags = 0xbe8;
        }

        namespace DT_CollisionProperty {
                auto m_vecMins = 0x8;
                auto m_vecMaxs = 0x14;
                auto m_nSolidType = 0x22;
                auto m_usSolidFlags = 0x20;
                auto m_nSurroundType = 0x2a;
                auto m_triggerBloat = 0x23;
                auto m_vecSpecifiedSurroundingMins = 0x2c;
                auto m_vecSpecifiedSurroundingMaxs = 0x38;
                auto m_Collision = 0x320;
        }

        namespace DT_FuncRotating {
                auto m_vecOrigin = 0x138;
                auto m_angRotation_0_ = 0x12c;
                auto m_angRotation_1_ = 0x130;
                auto m_angRotation_2_ = 0x134;
                auto m_flSimulationTime = 0x268;
        }

        namespace DT_FuncReflectiveGlass {
        }

        namespace DT_FuncOccluder {
                auto m_bActive = 0x9dc;
                auto m_nOccluderIndex = 0x9d8;
        }

        namespace DT_FuncMoveLinear {
                auto m_vecVelocity = 0x114;
                auto m_fFlags = 0x104;
        }

        namespace DT_FuncMonitor {
        }

        namespace DT_Func_LOD {
                auto m_nDisappearMinDist = 0x9d8;
                auto m_nDisappearMaxDist = 0x9dc;
        }

        namespace DT_TEDust {
                auto m_flSize = 0x1c;
                auto m_flSpeed = 0x20;
                auto m_vecDirection = 0x24;
        }

        namespace DT_Func_Dust {
                auto m_Color = 0x9d8;
                auto m_SpawnRate = 0x9dc;
                auto m_flSizeMin = 0x9e0;
                auto m_flSizeMax = 0x9e4;
                auto m_LifetimeMin = 0x9ec;
                auto m_LifetimeMax = 0x9f0;
                auto m_DustFlags = 0xa00;
                auto m_SpeedMax = 0x9e8;
                auto m_DistMax = 0x9f4;
                auto m_nModelIndex = 0x258;
                auto m_FallSpeed = 0x9f8;
                auto m_bAffectedByWind = 0x9fc;
        }

        namespace DT_CollisionProperty {
                auto m_vecMins = 0x8;
                auto m_vecMaxs = 0x14;
                auto m_nSolidType = 0x22;
                auto m_usSolidFlags = 0x20;
                auto m_nSurroundType = 0x2a;
                auto m_triggerBloat = 0x23;
                auto m_vecSpecifiedSurroundingMins = 0x2c;
                auto m_vecSpecifiedSurroundingMaxs = 0x38;
                auto m_Collision = 0x320;
        }

        namespace DT_FuncConveyor {
                auto m_flConveyorSpeed = 0x9d8;
        }

        namespace DT_FuncBrush {
        }

        namespace DT_BreakableSurface {
                auto m_nNumWide = 0x9dc;
                auto m_nNumHigh = 0x9e0;
                auto m_flPanelWidth = 0x9e4;
                auto m_flPanelHeight = 0x9e8;
                auto m_vNormal = 0x9ec;
                auto m_vCorner = 0x9f8;
                auto m_bIsBroken = 0xa04;
                auto m_nSurfaceType = 0xa08;
        }

        namespace m_RawPanelBitVec {
                auto m_RawPanelBitVec = 0xa2c;
        }

        namespace DT_FuncAreaPortalWindow {
                auto m_flFadeStartDist = 0x9d8;
                auto m_flFadeDist = 0x9dc;
                auto m_flTranslucencyLimit = 0x9e0;
                auto m_iBackgroundModelIndex = 0x9e4;
        }

        namespace DT_CFish {
                auto m_poolOrigin = 0x29e0;
                auto m_x = 0x29c8;
                auto m_y = 0x29cc;
                auto m_z = 0x29d0;
                auto m_angle = 0x29d8;
                auto m_nModelIndex = 0x258;
                auto m_lifeState = 0x25f;
                auto m_waterLevel = 0x29ec;
        }

        namespace DT_FireSmoke {
                auto m_flStartScale = 0x9d8;
                auto m_flScale = 0x9dc;
                auto m_flScaleTime = 0x9e0;
                auto m_nFlags = 0x9e4;
                auto m_nFlameModelIndex = 0x9e8;
                auto m_nFlameFromAboveModelIndex = 0x9ec;
        }

        namespace DT_EnvTonemapController {
                auto m_bUseCustomAutoExposureMin = 0x9d8;
                auto m_bUseCustomAutoExposureMax = 0x9d9;
                auto m_bUseCustomBloomScale = 0x9da;
                auto m_flCustomAutoExposureMin = 0x9dc;
                auto m_flCustomAutoExposureMax = 0x9e0;
                auto m_flCustomBloomScale = 0x9e4;
                auto m_flCustomBloomScaleMinimum = 0x9e8;
                auto m_flBloomExponent = 0x9ec;
                auto m_flBloomSaturation = 0x9f0;
                auto m_flTonemapPercentTarget = 0x9f4;
                auto m_flTonemapPercentBrightPixels = 0x9f8;
                auto m_flTonemapMinAvgLum = 0x9fc;
                auto m_flTonemapRate = 0xa00;
        }

        namespace DT_EnvScreenEffect {
                auto m_flDuration = 0x9d8;
                auto m_nType = 0x9dc;
        }

        namespace DT_EnvScreenOverlay {
                auto m_iszOverlayNames_0_ = 0x9d8;
                auto m_iszOverlayNames = 0x0;
                auto m_flOverlayTimes_0_ = 0x13d0;
                auto m_flOverlayTimes = 0x0;
                auto m_flStartTime = 0x13f8;
                auto m_iDesiredOverlay = 0x13fc;
                auto m_bIsActive = 0x1400;
        }

        namespace DT_EnvProjectedTexture {
                auto m_hTargetEntity = 0x9dc;
                auto m_bState = 0x9e0;
                auto m_bAlwaysUpdate = 0x9e1;
                auto m_flLightFOV = 0x9e4;
                auto m_bEnableShadows = 0x9e8;
                auto m_bSimpleProjection = 0x9e9;
                auto m_bLightOnlyTarget = 0x9ea;
                auto m_bLightWorld = 0x9eb;
                auto m_bCameraSpace = 0x9ec;
                auto m_flBrightnessScale = 0x9f0;
                auto m_LightColor = 0x9f4;
                auto m_flColorTransitionTime = 0xa08;
                auto m_flAmbient = 0xa0c;
                auto m_SpotlightTextureName = 0xa18;
                auto m_nSpotlightTextureFrame = 0xb24;
                auto m_flNearZ = 0xa10;
                auto m_flFarZ = 0xa14;
                auto m_nShadowQuality = 0xb28;
                auto m_flProjectionSize = 0xb38;
                auto m_flRotation = 0xb3c;
                auto m_iStyle = 0xb2c;
        }

        namespace DT_EnvParticleScript {
                auto m_flSequenceScale = 0x2a64;
        }

        namespace DT_FogController {
                auto m_fog_enable = 0xa1c;
                auto m_fog_blend = 0xa1d;
                auto m_fog_dirPrimary = 0x9dc;
                auto m_fog_colorPrimary = 0x9e8;
                auto m_fog_colorSecondary = 0x9ec;
                auto m_fog_start = 0x9f8;
                auto m_fog_end = 0x9fc;
                auto m_fog_farz = 0xa00;
                auto m_fog_maxdensity = 0xa04;
                auto m_fog_colorPrimaryLerpTo = 0x9f0;
                auto m_fog_colorSecondaryLerpTo = 0x9f4;
                auto m_fog_startLerpTo = 0xa08;
                auto m_fog_endLerpTo = 0xa0c;
                auto m_fog_maxdensityLerpTo = 0xa10;
                auto m_fog_lerptime = 0xa14;
                auto m_fog_duration = 0xa18;
                auto m_fog_HDRColorScale = 0xa24;
                auto m_fog_ZoomFogScale = 0xa20;
        }

        namespace DT_EnvDOFController {
                auto m_bDOFEnabled = 0x9d8;
                auto m_flNearBlurDepth = 0x9dc;
                auto m_flNearFocusDepth = 0x9e0;
                auto m_flFarFocusDepth = 0x9e4;
                auto m_flFarBlurDepth = 0x9e8;
                auto m_flNearBlurRadius = 0x9ec;
                auto m_flFarBlurRadius = 0x9f0;
        }

        namespace DT_CascadeLight {
                auto m_shadowDirection = 0x9d8;
                auto m_envLightShadowDirection = 0x9e4;
                auto m_bEnabled = 0x9f0;
                auto m_bUseLightEnvAngles = 0x9f1;
                auto m_LightColor = 0x9f2;
                auto m_LightColorScale = 0x9f8;
                auto m_flMaxShadowDist = 0x9fc;
        }

        namespace DT_EnvAmbientLight {
                auto m_vecColor = 0xb00;
        }

        namespace DT_EntityParticleTrail {
                auto m_iMaterialName = 0xac0;
                auto m_hConstraintEntity = 0xad8;
        }

        namespace DT_EntityParticleTrailInfo {
                auto m_flLifetime = 0x8;
                auto m_flStartSize = 0xc;
                auto m_flEndSize = 0x10;
                auto m_Info = 0xac4;
        }

        namespace DT_EntityFreezing {
                auto m_vFreezingOrigin = 0x9d8;
                auto m_flFrozen = 0xaac;
                auto m_bFinishFreezing = 0xab0;
        }

        namespace m_flFrozenPerHitbox {
                auto m_flFrozenPerHitbox = 0x9e4;
        }

        namespace DT_EntityFlame {
                auto m_hEntAttached = 0x9d8;
                auto m_bCheapEffect = 0x9ec;
        }

        namespace DT_EntityDissolve {
                auto m_flStartTime = 0x9dc;
                auto m_flFadeOutStart = 0x9e0;
                auto m_flFadeOutLength = 0x9e4;
                auto m_flFadeOutModelStart = 0x9e8;
                auto m_flFadeOutModelLength = 0x9ec;
                auto m_flFadeInStart = 0x9f0;
                auto m_flFadeInLength = 0x9f4;
                auto m_nDissolveType = 0x9f8;
                auto m_vDissolverOrigin = 0xa00;
                auto m_nMagnitude = 0xa0c;
        }

        namespace DT_DynamicLight {
                auto m_Flags = 0x9d8;
                auto m_LightStyle = 0x9d9;
                auto m_Radius = 0x9dc;
                auto m_Exponent = 0x9e0;
                auto m_InnerAngle = 0x9e4;
                auto m_OuterAngle = 0x9e8;
                auto m_SpotRadius = 0x9ec;
        }

        namespace DT_ColorCorrectionVolume {
                auto m_bEnabled = 0xa20;
                auto m_MaxWeight = 0xa24;
                auto m_FadeDuration = 0xa28;
                auto m_Weight = 0xa2c;
                auto m_lookupFilename = 0xa30;
        }

        namespace DT_ColorCorrection {
                auto m_vecOrigin = 0x9d8;
                auto m_minFalloff = 0x9e4;
                auto m_maxFalloff = 0x9e8;
                auto m_flCurWeight = 0x9f8;
                auto m_flMaxWeight = 0x9f4;
                auto m_flFadeInDuration = 0x9ec;
                auto m_flFadeOutDuration = 0x9f0;
                auto m_netLookupFilename = 0x9fc;
                auto m_bEnabled = 0xb00;
                auto m_bMaster = 0xb01;
                auto m_bClientSide = 0xb02;
                auto m_bExclusive = 0xb03;
        }

        namespace DT_BreakableProp {
                auto m_qPreferredPlayerCarryAngles = 0x2984;
                auto m_bClientPhysics = 0x2990;
        }

        namespace DT_BeamSpotlight {
                auto m_nHaloIndex = 0x9d8;
                auto m_bSpotlightOn = 0x9e4;
                auto m_bHasDynamicLight = 0x9e5;
                auto m_flSpotlightMaxLength = 0x9e8;
                auto m_flSpotlightGoalWidth = 0x9ec;
                auto m_flHDRColorScale = 0x9f0;
                auto m_nRotationAxis = 0x9dc;
                auto m_flRotationSpeed = 0x9e0;
        }

        namespace DT_BaseButton {
                auto m_usable = 0xa08;
        }

        namespace DT_BaseToggle {
                auto m_vecFinalDest = 0x9ec;
                auto m_movementType = 0x9f8;
                auto m_flMoveTargetTime = 0x9fc;
        }

        namespace DT_BasePlayer {
                auto m_iFOV = 0x31e4;
                auto m_iFOVStart = 0x31e8;
                auto m_flFOVTime = 0x3208;
                auto m_iDefaultFOV = 0x332c;
                auto m_hZoomOwner = 0x324c;
                auto m_afPhysicsFlags = 0x32ec;
                auto m_hVehicle = 0x32f0;
                auto m_hUseEntity = 0x3328;
                auto m_hGroundEntity = 0x150;
                auto m_iHealth = 0x100;
                auto m_lifeState = 0x25f;
                auto m_iBonusProgress = 0x3240;
                auto m_iBonusChallenge = 0x3244;
                auto m_flMaxspeed = 0x3248;
                auto m_fFlags = 0x104;
                auto m_iObserverMode = 0x3378;
                auto m_bActiveCameraMan = 0x337c;
                auto m_bCameraManXRay = 0x337d;
                auto m_bCameraManOverview = 0x337e;
                auto m_bCameraManScoreBoard = 0x337f;
                auto m_uCameraManGraphs = 0x3380;
                auto m_iDeathPostEffect = 0x3374;
                auto m_hObserverTarget = 0x338c;
                auto m_hViewModel_0_ = 0x32f8;
                auto m_hViewModel = 0x0;
                auto m_iCoachingTeam = 0x2f50;
                auto m_szLastPlaceName = 0x35b4;
                auto m_vecLadderNormal = 0x3230;
                auto m_ladderSurfaceProps = 0x3200;
                auto m_ubEFNoInterpParity = 0x35d8;
                auto m_hPostProcessCtrl = 0x37a8;
                auto m_hColorCorrectionCtrl = 0x37ac;
                auto m_PlayerFog_m_hCtrl = 0x37b4;
                auto m_vphysicsCollisionState = 0x325c;
                auto m_hViewEntity = 0x333c;
                auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3340;
                auto m_flDuckAmount = 0x2fac;
                auto m_flDuckSpeed = 0x2fb0;
                auto m_nWaterLevel = 0x25e;
        }

        namespace DT_LocalPlayerExclusive {
                auto m_vecViewOffset_0_ = 0x108;
                auto m_vecViewOffset_1_ = 0x10c;
                auto m_vecViewOffset_2_ = 0x110;
                auto m_flFriction = 0x144;
                auto m_fOnTarget = 0x3324;
                auto m_nTickBase = 0x3430;
                auto m_nNextThinkTick = 0xfc;
                auto m_hLastWeapon = 0x32f4;
                auto m_vecVelocity_0_ = 0x114;
                auto m_vecVelocity_1_ = 0x118;
                auto m_vecVelocity_2_ = 0x11c;
                auto m_vecBaseVelocity = 0x120;
                auto m_hConstraintEntity = 0x3344;
                auto m_vecConstraintCenter = 0x3348;
                auto m_flConstraintRadius = 0x3354;
                auto m_flConstraintWidth = 0x3358;
                auto m_flConstraintSpeedFactor = 0x335c;
                auto m_bConstraintPastRadius = 0x3360;
                auto m_flDeathTime = 0x33c4;
                auto m_flNextDecalTime = 0x33c8;
                auto m_fForceTeam = 0x33cc;
                auto m_flLaggedMovementValue = 0x3594;
                auto m_hTonemapController = 0x31cc;
        }

        namespace DT_Local {
                auto m_iHideHUD = 0x48;
                auto m_flFOVRate = 0x44;
                auto m_bDucked = 0x88;
                auto m_bDucking = 0x89;
                auto m_flLastDuckTime = 0x8c;
                auto m_bInDuckJump = 0x90;
                auto m_nDuckTimeMsecs = 0x4c;
                auto m_nDuckJumpTimeMsecs = 0x50;
                auto m_nJumpTimeMsecs = 0x54;
                auto m_flFallVelocity = 0x58;
                auto m_viewPunchAngle = 0x64;
                auto m_aimPunchAngle = 0x70;
                auto m_aimPunchAngleVel = 0x7c;
                auto m_bDrawViewmodel = 0x91;
                auto m_bWearingSuit = 0x92;
                auto m_bPoisoned = 0x93;
                auto m_flStepSize = 0x60;
                auto m_bAllowAutoMovement = 0x94;
                auto m_skybox3d_scale = 0x134;
                auto m_skybox3d_origin = 0x138;
                auto m_skybox3d_area = 0x144;
                auto m_skybox3d_fog_enable = 0x18c;
                auto m_skybox3d_fog_blend = 0x18d;
                auto m_skybox3d_fog_dirPrimary = 0x14c;
                auto m_skybox3d_fog_colorPrimary = 0x158;
                auto m_skybox3d_fog_colorSecondary = 0x15c;
                auto m_skybox3d_fog_start = 0x168;
                auto m_skybox3d_fog_end = 0x16c;
                auto m_skybox3d_fog_maxdensity = 0x174;
                auto m_skybox3d_fog_HDRColorScale = 0x194;
                auto m_audio_localSound_0_ = 0x19c;
                auto m_audio_localSound_1_ = 0x1a8;
                auto m_audio_localSound_2_ = 0x1b4;
                auto m_audio_localSound_3_ = 0x1c0;
                auto m_audio_localSound_4_ = 0x1cc;
                auto m_audio_localSound_5_ = 0x1d8;
                auto m_audio_localSound_6_ = 0x1e4;
                auto m_audio_localSound_7_ = 0x1f0;
                auto m_audio_soundscapeIndex = 0x1fc;
                auto m_audio_localBits = 0x200;
                auto m_audio_entIndex = 0x204;
        }

        namespace m_chAreaBits {
        }

        namespace m_chAreaPortalBits {
                auto m_chAreaBits = 0x4;
                auto m_chAreaPortalBits = 0x24;
                auto m_Local = 0x2fbc;
        }

        namespace DT_PlayerState {
                auto deadflag = 0x4;
        }

        namespace m_iAmmo {
                auto localdata = 0x0;
                auto pl = 0x31d0;
                auto m_iAmmo = 0x2d78;
        }

        namespace DT_BaseFlex {
                auto m_blinktoggle = 0x2bd4;
                auto m_viewtarget = 0x29f0;
        }

        namespace m_flexWeight {
                auto m_flexWeight = 0x2a28;
        }

        namespace DT_BaseEntity {
                auto m_flSimulationTime = 0x268;
                auto m_cellbits = 0x74;
                auto m_cellX = 0x7c;
                auto m_cellY = 0x80;
                auto m_cellZ = 0x84;
                auto m_vecOrigin = 0x138;
                auto m_angRotation = 0x12c;
                auto m_nModelIndex = 0x258;
                auto m_fEffects = 0xf0;
                auto m_nRenderMode = 0x25b;
                auto m_nRenderFX = 0x25a;
                auto m_clrRender = 0x70;
                auto m_iTeamNum = 0xf4;
                auto m_iPendingTeamNum = 0xf8;
                auto m_CollisionGroup = 0x474;
                auto m_flElasticity = 0x300;
                auto m_flShadowCastDistance = 0x3a0;
                auto m_hOwnerEntity = 0x14c;
                auto m_hEffectEntity = 0x998;
                auto moveparent = 0x148;
                auto m_iParentAttachment = 0x2ec;
                auto m_iName = 0x154;
                auto movetype = 0x0;
                auto movecollide = 0x0;
                auto m_iTextureFrameIndex = 0x98c;
                auto m_bSimulatedEveryTick = 0x93a;
                auto m_bAnimatedEveryTick = 0x93b;
                auto m_bAlternateSorting = 0x93c;
                auto m_bSpotted = 0x93d;
                auto m_bIsAutoaimTarget = 0x60;
                auto m_fadeMinDist = 0x2f4;
                auto m_fadeMaxDist = 0x2f8;
                auto m_flFadeScale = 0x2fc;
                auto m_nMinCPULevel = 0x988;
                auto m_nMaxCPULevel = 0x989;
                auto m_nMinGPULevel = 0x98a;
                auto m_nMaxGPULevel = 0x98b;
                auto m_flUseLookAtAngle = 0x2cc;
                auto m_flLastMadeNoiseTime = 0x20;
                auto m_flMaxFallVelocity = 0xdc;
                auto m_bEligibleForScreenHighlight = 0x9b9;
        }

        namespace DT_AnimTimeMustBeFirst {
                auto m_flAnimTime = 0x260;
        }

        namespace DT_CollisionProperty {
                auto m_vecMins = 0x8;
                auto m_vecMaxs = 0x14;
                auto m_nSolidType = 0x22;
                auto m_usSolidFlags = 0x20;
                auto m_nSurroundType = 0x2a;
                auto m_triggerBloat = 0x23;
                auto m_vecSpecifiedSurroundingMins = 0x2c;
                auto m_vecSpecifiedSurroundingMaxs = 0x38;
        }

        namespace m_bSpottedBy {
        }

        namespace m_bSpottedByMask {
                auto AnimTimeMustBeFirst = 0x0;
                auto m_Collision = 0x320;
                auto m_bSpottedBy = 0x93e;
                auto m_bSpottedByMask = 0x980;
        }

        namespace DT_BaseDoor {
                auto m_flWaveHeight = 0xa08;
        }

        namespace DT_BaseCombatCharacter {
                auto m_LastHitGroup = 0x2d74;
                auto m_hActiveWeapon = 0x2ef8;
                auto m_flTimeOfLastInjury = 0x2efc;
                auto m_nRelativeDirectionOfLastInjury = 0x2f00;
        }

        namespace DT_BCCLocalPlayerExclusive {
                auto m_flNextAttack = 0x2d70;
        }

        namespace DT_BCCNonLocalPlayerExclusive {
        }

        namespace m_hMyWeapons {
                auto m_hMyWeapons = 0x2df8;
        }

        namespace m_hMyWeapons {
        }

        namespace m_hMyWearables {
                auto bcc_localdata = 0x0;
                auto bcc_nonlocaldata = 0x0;
                auto m_hMyWeapons = 0x2df8;
                auto m_hMyWearables = 0x2f04;
        }

        namespace DT_BaseAnimatingOverlay {
        }

        namespace DT_OverlayVars {
        }

        namespace _ST_m_AnimOverlay_15 {
        }

        namespace _LPT_m_AnimOverlay_15 {
                auto lengthprop15 = 0x0;
                auto lengthproxy = 0x0;
                auto m_AnimOverlay = 0x0;
                auto overlay_vars = 0x0;
        }

        namespace DT_BoneFollower {
                auto m_modelIndex = 0x9d8;
                auto m_solidIndex = 0x9dc;
        }

        namespace DT_BaseAnimating {
                auto m_nSequence = 0x28bc;
                auto m_nForceBone = 0x268c;
                auto m_vecForce = 0x2680;
                auto m_nSkin = 0xa1c;
                auto m_nBody = 0xa20;
                auto m_nHitboxSet = 0x9fc;
                auto m_flModelScale = 0x2748;
                auto m_flPlaybackRate = 0xa18;
                auto m_bClientSideAnimation = 0x289c;
                auto m_bClientSideFrameReset = 0x26c0;
                auto m_bClientSideRagdoll = 0x279;
                auto m_nNewSequenceParity = 0xa44;
                auto m_nResetEventsParity = 0xa48;
                auto m_nMuzzleFlashParity = 0xa64;
                auto m_hLightingOrigin = 0x2944;
                auto m_flFrozen = 0x26f8;
                auto m_ScaleType = 0x274c;
                auto m_bSuppressAnimSounds = 0x294a;
                auto m_nHighlightColorR = 0xa38;
                auto m_nHighlightColorG = 0xa3c;
                auto m_nHighlightColorB = 0xa40;
        }

        namespace m_flPoseParameter {
        }

        namespace m_flEncodedController {
        }

        namespace DT_ServerAnimationData {
                auto m_flCycle = 0xa14;
                auto m_flPoseParameter = 0x2774;
                auto m_flEncodedController = 0xa54;
                auto serveranimdata = 0x0;
        }

        namespace DT_AI_BaseNPC {
                auto m_lifeState = 0x25f;
                auto m_bPerformAvoidance = 0x2f24;
                auto m_bIsMoving = 0x2f25;
                auto m_bFadeCorpse = 0x2f26;
                auto m_iDeathPose = 0x2f14;
                auto m_iDeathFrame = 0x2f18;
                auto m_iSpeedModRadius = 0x2f1c;
                auto m_iSpeedModSpeed = 0x2f20;
                auto m_bSpeedModActive = 0x2f27;
                auto m_bImportanRagdoll = 0x2f28;
                auto m_flTimePingEffect = 0x2f10;
        }

        namespace DT_Beam {
                auto m_nBeamType = 0x9f4;
                auto m_nBeamFlags = 0x9f8;
                auto m_nNumBeamEnts = 0x9e8;
                auto m_nHaloIndex = 0x9f0;
                auto m_fHaloScale = 0xa58;
                auto m_fWidth = 0xa4c;
                auto m_fEndWidth = 0xa50;
                auto m_fFadeLength = 0xa54;
                auto m_fAmplitude = 0xa5c;
                auto m_fStartFrame = 0xa60;
                auto m_fSpeed = 0xa64;
                auto m_flFrameRate = 0x9d8;
                auto m_flHDRColorScale = 0x9dc;
                auto m_clrRender = 0x70;
                auto m_nRenderFX = 0x25a;
                auto m_nRenderMode = 0x25b;
                auto m_flFrame = 0xa68;
                auto m_nClipStyle = 0xa6c;
                auto m_vecEndPos = 0xa70;
                auto m_nModelIndex = 0x258;
                auto m_vecOrigin = 0x138;
                auto moveparent = 0x148;
        }

        namespace m_hAttachEntity {
        }

        namespace m_nAttachIndex {
                auto m_hAttachEntity = 0x9fc;
                auto m_nAttachIndex = 0xa24;
        }

        namespace DT_BaseViewModel {
                auto m_nModelIndex = 0x258;
                auto m_hWeapon = 0x29c8;
                auto m_nSkin = 0xa1c;
                auto m_nBody = 0xa20;
                auto m_nSequence = 0x28bc;
                auto m_nViewModelIndex = 0x29c0;
                auto m_flPlaybackRate = 0xa18;
                auto m_fEffects = 0xf0;
                auto m_nAnimationParity = 0x29c4;
                auto m_hOwner = 0x29cc;
                auto m_nNewSequenceParity = 0xa44;
                auto m_nResetEventsParity = 0xa48;
                auto m_nMuzzleFlashParity = 0xa64;
                auto m_bShouldIgnoreOffsetAndAccuracy = 0x2990;
        }

        namespace DT_BaseParticleEntity {
        }

        namespace DT_BaseGrenade {
                auto m_flDamage = 0x2998;
                auto m_DmgRadius = 0x2984;
                auto m_bIsLive = 0x2981;
                auto m_hThrower = 0x29a0;
                auto m_vecVelocity = 0x114;
                auto m_fFlags = 0x104;
        }

        namespace DT_BaseCombatWeapon {
                auto m_iViewModelIndex = 0x3240;
                auto m_iWorldModelIndex = 0x3244;
                auto m_iWorldDroppedModelIndex = 0x3248;
                auto m_iState = 0x3258;
                auto m_hOwner = 0x3230;
                auto m_iClip1 = 0x3264;
                auto m_iClip2 = 0x3268;
                auto m_iPrimaryReserveAmmoCount = 0x326c;
                auto m_iSecondaryReserveAmmoCount = 0x3270;
                auto m_hWeaponWorldModel = 0x3254;
                auto m_iNumEmptyAttacks = 0x3250;
        }

        namespace DT_LocalWeaponData {
                auto m_iPrimaryAmmoType = 0x325c;
                auto m_iSecondaryAmmoType = 0x3260;
                auto m_nViewModelIndex = 0x3234;
                auto m_bFlipViewModel = 0x32c4;
                auto m_iWeaponOrigin = 0x32c8;
                auto m_iWeaponModule = 0x324c;
        }

        namespace DT_LocalActiveWeaponData {
                auto m_flNextPrimaryAttack = 0x3238;
                auto m_flNextSecondaryAttack = 0x323c;
                auto m_nNextThinkTick = 0xfc;
                auto m_flTimeWeaponIdle = 0x3274;
                auto LocalWeaponData = 0x0;
                auto LocalActiveWeaponData = 0x0;
        }

        namespace DT_BaseWeaponWorldModel {
                auto m_nModelIndex = 0x258;
                auto m_nBody = 0xa20;
                auto m_fEffects = 0xf0;
                auto moveparent = 0x148;
                auto m_hCombatWeaponParent = 0x29f0;
        }
}
