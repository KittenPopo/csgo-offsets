#pragma once
// Updated on Sep 30 2020
// Dumped by KittenPopo

namespace Offsets {
        namespace DT_TestTraceline {
                int m_clrRender = 0x70;
                int m_vecOrigin = 0x138;
                int m_angRotation_0_ = 0x12c;
                int m_angRotation_1_ = 0x130;
                int m_angRotation_2_ = 0x134;
                int moveparent = 0x148;
        }

        namespace DT_TEWorldDecal {
                int m_vecOrigin = 0x10;
                int m_nIndex = 0x1c;
        }

        namespace DT_TESpriteSpray {
                int m_vecOrigin = 0x10;
                int m_vecDirection = 0x1c;
                int m_nModelIndex = 0x28;
                int m_fNoise = 0x30;
                int m_nCount = 0x34;
                int m_nSpeed = 0x2c;
        }

        namespace DT_TESprite {
                int m_vecOrigin = 0x10;
                int m_nModelIndex = 0x1c;
                int m_fScale = 0x20;
                int m_nBrightness = 0x24;
        }

        namespace DT_TESparks {
                int m_nMagnitude = 0x1c;
                int m_nTrailLength = 0x20;
                int m_vecDir = 0x24;
        }

        namespace DT_TESmoke {
                int m_vecOrigin = 0x10;
                int m_nModelIndex = 0x1c;
                int m_fScale = 0x20;
                int m_nFrameRate = 0x24;
        }

        namespace DT_TEShowLine {
                int m_vecEnd = 0x1c;
        }

        namespace DT_TEProjectedDecal {
                int m_vecOrigin = 0x10;
                int m_angRotation = 0x1c;
                int m_flDistance = 0x28;
                int m_nIndex = 0x2c;
        }

        namespace DT_FEPlayerDecal {
                int m_nUniqueID = 0x9d8;
                int m_unAccountID = 0x9dc;
                int m_unTraceID = 0x9e0;
                int m_rtGcTime = 0x9e4;
                int m_vecEndPos = 0x9e8;
                int m_vecStart = 0x9f4;
                int m_vecRight = 0xa00;
                int m_vecNormal = 0xa0c;
                int m_nEntity = 0xa1c;
                int m_nPlayer = 0xa18;
                int m_nHitbox = 0xa20;
                int m_nTintID = 0xa24;
                int m_flCreationTime = 0xa28;
                int m_nVersion = 0xa2c;
        }

        namespace m_ubSignature {
                int m_ubSignature = 0xa2d;
        }

        namespace DT_TEPlayerDecal {
                int m_vecOrigin = 0x14;
                int m_vecStart = 0x20;
                int m_vecRight = 0x2c;
                int m_nEntity = 0x38;
                int m_nPlayer = 0x10;
                int m_nHitbox = 0x3c;
        }

        namespace DT_TEPhysicsProp {
                int m_vecOrigin = 0x10;
                int m_angRotation_0_ = 0x1c;
                int m_angRotation_1_ = 0x20;
                int m_angRotation_2_ = 0x24;
                int m_vecVelocity = 0x28;
                int m_nModelIndex = 0x34;
                int m_nFlags = 0x3c;
                int m_nSkin = 0x38;
                int m_nEffects = 0x40;
                int m_clrRender = 0x44;
        }

        namespace DT_TEParticleSystem {
                int m_vecOrigin_0_ = 0x10;
                int m_vecOrigin_1_ = 0x14;
                int m_vecOrigin_2_ = 0x18;
        }

        namespace DT_TEMuzzleFlash {
                int m_vecOrigin = 0x10;
                int m_vecAngles = 0x1c;
                int m_flScale = 0x28;
                int m_nType = 0x2c;
        }

        namespace DT_TELargeFunnel {
                int m_nModelIndex = 0x1c;
                int m_nReversed = 0x20;
        }

        namespace DT_TEKillPlayerAttachments {
                int m_nPlayer = 0x10;
        }

        namespace DT_TEImpact {
                int m_vecOrigin = 0x10;
                int m_vecNormal = 0x1c;
                int m_iType = 0x28;
                int m_ucFlags = 0x2c;
        }

        namespace DT_TEGlowSprite {
                int m_vecOrigin = 0x10;
                int m_nModelIndex = 0x1c;
                int m_fScale = 0x20;
                int m_fLife = 0x24;
                int m_nBrightness = 0x28;
        }

        namespace DT_TEShatterSurface {
                int m_vecOrigin = 0x10;
                int m_vecAngles = 0x1c;
                int m_vecForce = 0x28;
                int m_vecForcePos = 0x34;
                int m_flWidth = 0x40;
                int m_flHeight = 0x44;
                int m_flShardSize = 0x48;
                int m_nSurfaceType = 0x50;
                int m_uchFrontColor_0_ = 0x54;
                int m_uchFrontColor_1_ = 0x55;
                int m_uchFrontColor_2_ = 0x56;
                int m_uchBackColor_0_ = 0x57;
                int m_uchBackColor_1_ = 0x58;
                int m_uchBackColor_2_ = 0x59;
        }

        namespace DT_TEFootprintDecal {
                int m_vecOrigin = 0x10;
                int m_vecDirection = 0x1c;
                int m_nEntity = 0x34;
                int m_nIndex = 0x38;
                int m_chMaterialType = 0x3c;
        }

        namespace DT_TEFizz {
                int m_nEntity = 0x10;
                int m_nModelIndex = 0x14;
                int m_nDensity = 0x18;
                int m_nCurrent = 0x1c;
        }

        namespace DT_TEExplosion {
                int m_nModelIndex = 0x1c;
                int m_fScale = 0x20;
                int m_nFrameRate = 0x24;
                int m_nFlags = 0x28;
                int m_vecNormal = 0x2c;
                int m_chMaterialType = 0x38;
                int m_nRadius = 0x3c;
                int m_nMagnitude = 0x40;
        }

        namespace DT_TEEnergySplash {
                int m_vecPos = 0x10;
                int m_vecDir = 0x1c;
                int m_bExplosive = 0x28;
        }

        namespace DT_TEDynamicLight {
                int m_vecOrigin = 0x10;
                int r = 0x20;
                int g = 0x24;
                int b = 0x28;
                int exponent = 0x2c;
                int m_fRadius = 0x1c;
                int m_fTime = 0x30;
                int m_fDecay = 0x34;
        }

        namespace DT_TEDecal {
                int m_vecOrigin = 0x10;
                int m_vecStart = 0x1c;
                int m_nEntity = 0x28;
                int m_nHitbox = 0x2c;
                int m_nIndex = 0x30;
        }

        namespace DT_TEClientProjectile {
                int m_vecOrigin = 0x10;
                int m_vecVelocity = 0x1c;
                int m_nModelIndex = 0x28;
                int m_nLifeTime = 0x2c;
                int m_hOwner = 0x30;
        }

        namespace DT_TEBubbleTrail {
                int m_vecMins = 0x10;
                int m_vecMaxs = 0x1c;
                int m_nModelIndex = 0x2c;
                int m_flWaterZ = 0x28;
                int m_nCount = 0x30;
                int m_fSpeed = 0x34;
        }

        namespace DT_TEBubbles {
                int m_vecMins = 0x10;
                int m_vecMaxs = 0x1c;
                int m_nModelIndex = 0x2c;
                int m_fHeight = 0x28;
                int m_nCount = 0x30;
                int m_fSpeed = 0x34;
        }

        namespace DT_TEBSPDecal {
                int m_vecOrigin = 0x10;
                int m_nEntity = 0x1c;
                int m_nIndex = 0x20;
        }

        namespace DT_TEBreakModel {
                int m_vecOrigin = 0x10;
                int m_angRotation_0_ = 0x1c;
                int m_angRotation_1_ = 0x20;
                int m_angRotation_2_ = 0x24;
                int m_vecSize = 0x28;
                int m_vecVelocity = 0x34;
                int m_nModelIndex = 0x44;
                int m_nRandomization = 0x40;
                int m_nCount = 0x48;
                int m_fTime = 0x4c;
                int m_nFlags = 0x50;
        }

        namespace DT_TEBloodStream {
                int m_vecDirection = 0x1c;
                int r = 0x28;
                int g = 0x2c;
                int b = 0x30;
                int a = 0x34;
                int m_nAmount = 0x38;
        }

        namespace DT_TEBloodSprite {
                int m_vecOrigin = 0x10;
                int m_vecDirection = 0x1c;
                int r = 0x28;
                int g = 0x2c;
                int b = 0x30;
                int a = 0x34;
                int m_nSprayModel = 0x3c;
                int m_nDropModel = 0x38;
                int m_nSize = 0x40;
        }

        namespace DT_TEBeamSpline {
                int m_nPoints = 0xd0;
                int m_vecPoints_0_ = 0x10;
                int m_vecPoints = 0x0;
        }

        namespace DT_TEBeamRingPoint {
                int m_vecCenter = 0x4c;
                int m_flStartRadius = 0x58;
                int m_flEndRadius = 0x5c;
        }

        namespace DT_TEBeamRing {
                int m_nStartEntity = 0x4c;
                int m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamPoints {
                int m_vecStartPoint = 0x4c;
                int m_vecEndPoint = 0x58;
        }

        namespace DT_TEBeamLaser {
                int m_nStartEntity = 0x4c;
                int m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamFollow {
                int m_iEntIndex = 0x4c;
        }

        namespace DT_TEBeamEnts {
                int m_nStartEntity = 0x4c;
                int m_nEndEntity = 0x50;
        }

        namespace DT_TEBeamEntPoint {
                int m_nStartEntity = 0x4c;
                int m_nEndEntity = 0x50;
                int m_vecStartPoint = 0x54;
                int m_vecEndPoint = 0x60;
        }

        namespace DT_BaseBeam {
                int m_nModelIndex = 0x10;
                int m_nHaloIndex = 0x14;
                int m_nStartFrame = 0x18;
                int m_nFrameRate = 0x1c;
                int m_fLife = 0x20;
                int m_fWidth = 0x24;
                int m_fEndWidth = 0x28;
                int m_nFadeLength = 0x2c;
                int m_fAmplitude = 0x30;
                int m_nSpeed = 0x44;
                int r = 0x34;
                int g = 0x38;
                int b = 0x3c;
                int a = 0x40;
                int m_nFlags = 0x48;
        }

        namespace DT_TEMetalSparks {
                int m_vecPos = 0x10;
                int m_vecDir = 0x1c;
        }

        namespace DT_SteamJet {
                int m_SpreadSpeed = 0xac4;
                int m_Speed = 0xac8;
                int m_StartSize = 0xacc;
                int m_EndSize = 0xad0;
                int m_Rate = 0xad4;
                int m_JetLength = 0xad8;
                int m_bEmit = 0xadc;
                int m_bFaceLeft = 0xae4;
                int m_nType = 0xae0;
                int m_spawnflags = 0xae8;
                int m_flRollSpeed = 0xaec;
        }

        namespace DT_SmokeStack {
                int m_SpreadSpeed = 0xb14;
                int m_Speed = 0xb18;
                int m_StartSize = 0xb1c;
                int m_EndSize = 0xb20;
                int m_Rate = 0xb24;
                int m_JetLength = 0xb28;
                int m_bEmit = 0xb2c;
                int m_flBaseSpread = 0xb30;
                int m_flTwist = 0xb84;
                int m_flRollSpeed = 0xbc0;
                int m_iMaterialModel = 0xb88;
                int m_AmbientLight_m_vPos = 0xb34;
                int m_AmbientLight_m_vColor = 0xb40;
                int m_AmbientLight_m_flIntensity = 0xb4c;
                int m_DirLight_m_vPos = 0xb50;
                int m_DirLight_m_vColor = 0xb5c;
                int m_DirLight_m_flIntensity = 0xb68;
                int m_vWind = 0xb78;
        }

        namespace DT_DustTrail {
                int m_SpawnRate = 0xac4;
                int m_Color = 0xac8;
                int m_ParticleLifetime = 0xad8;
                int m_StopEmitTime = 0xae0;
                int m_MinSpeed = 0xae4;
                int m_MaxSpeed = 0xae8;
                int m_MinDirectedSpeed = 0xaec;
                int m_MaxDirectedSpeed = 0xaf0;
                int m_StartSize = 0xaf4;
                int m_EndSize = 0xaf8;
                int m_SpawnRadius = 0xafc;
                int m_bEmit = 0xb0c;
                int m_Opacity = 0xad4;
        }

        namespace DT_FireTrail {
                int m_nAttachment = 0xac4;
                int m_flLifetime = 0xac8;
        }

        namespace DT_SporeTrail {
                int m_flSpawnRate = 0xacc;
                int m_vecEndColor = 0xac0;
                int m_flParticleLifetime = 0xad0;
                int m_flStartSize = 0xad4;
                int m_flEndSize = 0xad8;
                int m_flSpawnRadius = 0xadc;
                int m_bEmit = 0xaec;
        }

        namespace DT_SporeExplosion {
                int m_flSpawnRate = 0xac4;
                int m_flParticleLifetime = 0xac8;
                int m_flStartSize = 0xacc;
                int m_flEndSize = 0xad0;
                int m_flSpawnRadius = 0xad4;
                int m_bEmit = 0xadc;
                int m_bDontRemove = 0xadd;
        }

        namespace DT_RocketTrail {
                int m_SpawnRate = 0xac4;
                int m_StartColor = 0xac8;
                int m_EndColor = 0xad4;
                int m_ParticleLifetime = 0xae4;
                int m_StopEmitTime = 0xae8;
                int m_MinSpeed = 0xaec;
                int m_MaxSpeed = 0xaf0;
                int m_StartSize = 0xaf4;
                int m_EndSize = 0xaf8;
                int m_SpawnRadius = 0xafc;
                int m_bEmit = 0xb0c;
                int m_nAttachment = 0xb10;
                int m_Opacity = 0xae0;
                int m_bDamaged = 0xb0d;
                int m_flFlareScale = 0xb20;
        }

        namespace DT_SmokeTrail {
                int m_SpawnRate = 0xac4;
                int m_StartColor = 0xac8;
                int m_EndColor = 0xad4;
                int m_ParticleLifetime = 0xae4;
                int m_StopEmitTime = 0xae8;
                int m_MinSpeed = 0xaec;
                int m_MaxSpeed = 0xaf0;
                int m_MinDirectedSpeed = 0xaf4;
                int m_MaxDirectedSpeed = 0xaf8;
                int m_StartSize = 0xafc;
                int m_EndSize = 0xb00;
                int m_SpawnRadius = 0xb04;
                int m_bEmit = 0xb14;
                int m_nAttachment = 0xb18;
                int m_Opacity = 0xae0;
        }

        namespace DT_PropVehicleDriveable {
                int m_hPlayer = 0x2984;
                int m_nSpeed = 0x2988;
                int m_nRPM = 0x298c;
                int m_flThrottle = 0x2990;
                int m_nBoostTimeLeft = 0x2994;
                int m_nHasBoost = 0x2998;
                int m_nScannerDisabledWeapons = 0x299c;
                int m_nScannerDisabledVehicle = 0x29a0;
                int m_bEnterAnimOn = 0x29c0;
                int m_bExitAnimOn = 0x29c1;
                int m_bUnableToFire = 0x2a0d;
                int m_vecEyeExitEndpoint = 0x2a00;
                int m_bHasGun = 0x2a0c;
                int m_vecGunCrosshair = 0x29c8;
        }

        namespace DT_ParticleSmokeGrenade {
                int m_flSpawnTime = 0xad4;
                int m_FadeStartTime = 0xad8;
                int m_FadeEndTime = 0xadc;
                int m_MinColor = 0xae4;
                int m_MaxColor = 0xaf0;
                int m_CurrentStage = 0xac4;
        }

        namespace DT_ParticleFire {
                int m_vOrigin = 0xacc;
                int m_vDirection = 0xad8;
        }

        namespace DT_TEGaussExplosion {
                int m_nType = 0x1c;
                int m_vecDirection = 0x20;
        }

        namespace DT_QuadraticBeam {
                int m_targetPosition = 0x9d8;
                int m_controlPosition = 0x9e4;
                int m_scrollRate = 0x9f0;
                int m_flWidth = 0x9f4;
        }

        namespace DT_Embers {
                int m_nDensity = 0x9d8;
                int m_nLifetime = 0x9dc;
                int m_nSpeed = 0x9e0;
                int m_bEmit = 0x9e4;
        }

        namespace DT_Precipitation {
                int m_nPrecipType = 0xa00;
        }

        namespace DT_BaseAttributableItem {
                int m_OriginalOwnerXuidLow = 0x31c0;
                int m_OriginalOwnerXuidHigh = 0x31c4;
                int m_nFallbackPaintKit = 0x31c8;
                int m_nFallbackSeed = 0x31cc;
                int m_flFallbackWear = 0x31d0;
                int m_nFallbackStatTrak = 0x31d4;
        }

        namespace DT_AttributeContainer {
                int m_hOuter = 0x1c;
                int m_ProviderType = 0x24;
                int m_iReapplyProvisionParity = 0x18;
        }

        namespace DT_ScriptCreatedItem {
                int m_iItemDefinitionIndex = 0x1ea;
                int m_iEntityLevel = 0x1f0;
                int m_iItemIDHigh = 0x200;
                int m_iItemIDLow = 0x204;
                int m_iAccountID = 0x208;
                int m_iEntityQuality = 0x1ec;
                int m_bInitialized = 0x214;
                int m_szCustomName = 0x27c;
        }

        namespace DT_AttributeList {
        }

        namespace _ST_m_Attributes_32 {
        }

        namespace _LPT_m_Attributes_32 {
                int lengthprop32 = 0x0;
                int lengthproxy = 0x0;
                int m_Attributes = 0x0;
                int m_NetworkedDynamicAttributesForDemos = 0x260;
                int m_Item = 0x40;
                int m_AttributeManager = 0x2d80;
        }

        namespace DT_EconEntity {
                int m_OriginalOwnerXuidLow = 0x31c0;
                int m_OriginalOwnerXuidHigh = 0x31c4;
                int m_nFallbackPaintKit = 0x31c8;
                int m_nFallbackSeed = 0x31cc;
                int m_flFallbackWear = 0x31d0;
                int m_nFallbackStatTrak = 0x31d4;
        }

        namespace DT_AttributeContainer {
                int m_hOuter = 0x1c;
                int m_ProviderType = 0x24;
                int m_iReapplyProvisionParity = 0x18;
        }

        namespace DT_ScriptCreatedItem {
                int m_iItemDefinitionIndex = 0x1ea;
                int m_iEntityLevel = 0x1f0;
                int m_iItemIDHigh = 0x200;
                int m_iItemIDLow = 0x204;
                int m_iAccountID = 0x208;
                int m_iEntityQuality = 0x1ec;
                int m_bInitialized = 0x214;
                int m_szCustomName = 0x27c;
        }

        namespace DT_AttributeList {
        }

        namespace _ST_m_Attributes_32 {
        }

        namespace _LPT_m_Attributes_32 {
                int lengthprop32 = 0x0;
                int lengthproxy = 0x0;
                int m_Attributes = 0x0;
                int m_NetworkedDynamicAttributesForDemos = 0x260;
                int m_Item = 0x40;
                int m_AttributeManager = 0x2d80;
        }

        namespace DT_WeaponXM1014 {
                int m_reloadState = 0x33d4;
        }

        namespace DT_WeaponTaser {
                int m_fFireTime = 0x33f0;
        }

        namespace DT_WeaponTablet {
                int m_flUpgradeExpirationTime_0_ = 0x33d8;
                int m_flUpgradeExpirationTime = 0x0;
                int m_vecLocalHexFlags_0_ = 0x33e8;
                int m_vecLocalHexFlags = 0x0;
                int m_nContractKillGridIndex = 0x3490;
                int m_nContractKillGridHighResIndex = 0x3494;
                int m_bTabletReceptionIsBlocked = 0x3498;
                int m_flScanProgress = 0x349c;
                int m_flBootTime = 0x34a0;
                int m_flShowMapTime = 0x34a4;
                int m_vecNotificationIds_0_ = 0x34b4;
                int m_vecNotificationIds = 0x0;
                int m_vecNotificationTimestamps_0_ = 0x34d4;
                int m_vecNotificationTimestamps = 0x0;
                int m_vecPlayerPositionHistory_0_ = 0x34f8;
                int m_vecPlayerPositionHistory = 0x0;
                int m_nLastPurchaseIndex = 0x34f4;
                int m_vecNearestMetalCratePos = 0x34a8;
        }

        namespace DT_WeaponSawedoff {
                int m_reloadState = 0x33d4;
        }

        namespace DT_WeaponNOVA {
                int m_reloadState = 0x33d4;
        }

        namespace DT_WeaponMelee {
                int m_flThrowAt = 0x33d0;
        }

        namespace DT_WeaponM3 {
                int m_reloadState = 0x33d4;
        }

        namespace DT_WeaponFists {
                int m_bPlayingUninterruptableAct = 0x33d0;
        }

        namespace DT_WeaponCSBaseGun {
                int m_zoomLevel = 0x33d0;
                int m_iBurstShotsRemaining = 0x33d4;
        }

        namespace DT_WeaponCSBase {
                int m_weaponMode = 0x3318;
                int m_fAccuracyPenalty = 0x3330;
                int m_fLastShotTime = 0x33a8;
                int m_iRecoilIndex = 0x3340;
                int m_flRecoilIndex = 0x3344;
                int m_hPrevOwner = 0x3384;
                int m_bBurstMode = 0x3348;
                int m_flPostponeFireReadyTime = 0x334c;
                int m_bReloadVisuallyComplete = 0x3350;
                int m_bSilencerOn = 0x3351;
                int m_flDoneSwitchingSilencer = 0x3354;
                int m_iOriginalTeamNumber = 0x335c;
                int m_iIronSightMode = 0x33c4;
        }

        namespace DT_WeaponC4 {
                int m_bStartedArming = 0x33f0;
                int m_bBombPlacedAnimation = 0x33f8;
                int m_fArmedTime = 0x33f4;
                int m_bShowC4LED = 0x33f9;
                int m_bIsPlantingViaUse = 0x33fa;
        }

        namespace DT_BumpMineProjectile {
                int m_nParentBoneIndex = 0x29d4;
                int m_vecParentBonePos = 0x29d8;
                int m_bArmed = 0x29e4;
        }

        namespace DT_BreachChargeProjectile {
                int m_bShouldExplode = 0x29d0;
                int m_weaponThatThrewMe = 0x29d4;
                int m_nParentBoneIndex = 0x29d8;
                int m_vecParentBonePos = 0x29dc;
        }

        namespace DT_WeaponBaseItem {
                int m_bRedraw = 0x33dc;
        }

        namespace DT_BaseCSGrenade {
                int m_bRedraw = 0x33d0;
                int m_bIsHeldByPlayer = 0x33d1;
                int m_bPinPulled = 0x33d2;
                int m_fThrowTime = 0x33d4;
                int m_bLoopingSoundPlaying = 0x33d8;
                int m_flThrowStrength = 0x33dc;
        }

        namespace DT_SmokeGrenadeProjectile {
                int m_bDidSmokeEffect = 0x2a14;
                int m_nSmokeEffectTickBegin = 0x2a10;
        }

        namespace DT_MolotovProjectile {
                int m_bIsIncGrenade = 0x2a10;
        }

        namespace DT_ItemDogtags {
                int m_OwningPlayer = 0x3440;
                int m_KillingPlayer = 0x3444;
        }

        namespace DT_PhysPropLootCrate {
                int m_bRenderInPSPM = 0x29f4;
                int m_bRenderInTablet = 0x29f5;
                int m_iHealth = 0x100;
                int m_iMaxHealth = 0x29f8;
        }

        namespace DT_EnvGasCanister {
                int m_flFlightSpeed = 0x29f4;
                int m_flLaunchTime = 0x29f8;
                int m_vecParabolaDirection = 0x2a0c;
                int m_flFlightTime = 0x29f0;
                int m_flWorldEnterTime = 0x2a18;
                int m_flInitialZSpeed = 0x29fc;
                int m_flZAcceleration = 0x2a00;
                int m_flHorizSpeed = 0x2a04;
                int m_bLaunchedFromWithinWorld = 0x2a08;
                int m_vecImpactPosition = 0x29b4;
                int m_vecStartPosition = 0x29c0;
                int m_vecEnterWorldPosition = 0x29cc;
                int m_vecDirection = 0x29d8;
                int m_vecStartAngles = 0x29e4;
                int m_vecSkyboxOrigin = 0x2a1c;
                int m_flSkyboxScale = 0x2a28;
                int m_bInSkybox = 0x2a2c;
                int m_bDoImpactEffects = 0x2a2d;
                int m_bLanded = 0x2980;
                int m_hSkyboxCopy = 0x29a8;
                int m_nMyZoneIndex = 0x2a30;
                int m_vecOrigin = 0x138;
                int m_vecOrigin_2_ = 0x140;
        }

        namespace DT_Dronegun {
                int m_vecAttentionTarget = 0x2980;
                int m_vecTargetOffset = 0x298c;
                int m_iHealth = 0x100;
                int m_bHasTarget = 0x2998;
        }

        namespace DT_ParadropChopper {
                int m_vecOrigin = 0x138;
                int m_vecOrigin_2_ = 0x140;
                int m_hCallingPlayer = 0x2990;
        }

        namespace DT_SurvivalSpawnChopper {
                int m_vecOrigin = 0x138;
                int m_vecOrigin_2_ = 0x140;
        }

        namespace DT_BRC4Target {
                int m_bBrokenOpen = 0x2984;
                int m_flRadius = 0x2988;
        }

        namespace DT_InfoMapRegion {
                int m_flRadius = 0x9d8;
                int m_szLocToken = 0x9dc;
        }

        namespace DT_Inferno {
                int m_nFireEffectTickBegin = 0x13b4;
                int m_fireCount = 0x13a8;
        }

        namespace m_fireXDelta {
        }

        namespace m_fireYDelta {
        }

        namespace m_fireZDelta {
        }

        namespace m_bFireIsBurning {
                int m_fireXDelta = 0x9e4;
                int m_fireYDelta = 0xb74;
                int m_fireZDelta = 0xd04;
                int m_bFireIsBurning = 0xe94;
        }

        namespace DT_CChicken {
                int m_jumpedThisFrame = 0x29e8;
                int m_leader = 0x29ec;
        }

        namespace DT_Drone {
                int m_hMoveToThisEntity = 0x29d8;
                int m_hDeliveryCargo = 0x29dc;
                int m_bPilotTakeoverAllowed = 0x29e0;
                int m_hPotentialCargo = 0x29e4;
                int m_hCurrentPilot = 0x29e8;
                int m_vecTagPositions_0_ = 0x29ec;
                int m_vecTagPositions = 0x0;
                int m_vecTagIncrements_0_ = 0x2b0c;
                int m_vecTagIncrements = 0x0;
        }

        namespace DT_FootstepControl {
                int m_source = 0xa10;
                int m_destination = 0xa20;
        }

        namespace DT_TEPlantBomb {
                int m_vecOrigin = 0x14;
                int m_iPlayer = 0x10;
                int m_option = 0x20;
        }

        namespace DT_TEFireBullets {
                int m_vecOrigin = 0x18;
                int m_vecAngles_0_ = 0x24;
                int m_vecAngles_1_ = 0x28;
                int m_iWeaponID = 0x34;
                int m_weapon = 0x30;
                int m_iMode = 0x38;
                int m_iSeed = 0x3c;
                int m_iPlayer = 0x10;
                int m_fInaccuracy = 0x40;
                int m_fSpread = 0x48;
                int m_nItemDefIndex = 0x14;
                int m_iSoundType = 0x4c;
                int m_flRecoilIndex = 0x44;
        }

        namespace DT_TERadioIcon {
                int m_iAttachToClient = 0x10;
        }

        namespace DT_PlantedC4 {
                int m_bBombTicking = 0x2980;
                int m_nBombSite = 0x2984;
                int m_flC4Blow = 0x2990;
                int m_flTimerLength = 0x2994;
                int m_flDefuseLength = 0x29a8;
                int m_flDefuseCountDown = 0x29ac;
                int m_bBombDefused = 0x29b0;
                int m_hBombDefuser = 0x29b4;
        }

        namespace DT_CSPlayerResource {
                int m_iPlayerC4 = 0x165c;
                int m_iPlayerVIP = 0x1660;
                int m_bombsiteCenterA = 0x1664;
                int m_bombsiteCenterB = 0x1670;
                int m_bEndMatchNextMapAllVoted = 0x6b8c;
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
                int m_bHostageAlive = 0x167c;
                int m_isHostageFollowingSomeone = 0x1688;
                int m_iHostageEntityIDs = 0x1694;
                int m_hostageRescueX = 0x16c4;
                int m_hostageRescueY = 0x16d4;
                int m_hostageRescueZ = 0x16e4;
                int m_iMVPs = 0x16f4;
                int m_iArmor = 0x187c;
                int m_bHasHelmet = 0x1839;
                int m_bHasDefuser = 0x17f8;
                int m_iScore = 0x1980;
                int m_iCompetitiveRanking = 0x1a84;
                int m_iCompetitiveWins = 0x1b88;
                int m_iCompetitiveRankType = 0x1c8c;
                int m_iCompTeammateColor = 0x1cd0;
                int m_iLifetimeStart = 0x1dd4;
                int m_iLifetimeEnd = 0x1ed8;
                int m_bControllingBot = 0x1fdc;
                int m_iControlledPlayer = 0x2020;
                int m_iControlledByPlayer = 0x2124;
                int m_iBotDifficulty = 0x42a8;
                int m_szClan = 0x43ac;
                int m_nCharacterDefIndex = 0x47bc;
                int m_iTotalCashSpent = 0x48c0;
                int m_iGunGameLevel = 0x49c4;
                int m_iCashSpentThisRound = 0x4ac8;
                int m_nEndMatchNextMapVotes = 0x6a88;
                int m_nActiveCoinRank = 0x4bcc;
                int m_nMusicID = 0x4cd0;
                int m_nPersonaDataPublicLevel = 0x4dd4;
                int m_nPersonaDataPublicCommendsLeader = 0x4ed8;
                int m_nPersonaDataPublicCommendsTeacher = 0x4fdc;
                int m_nPersonaDataPublicCommendsFriendly = 0x50e0;
                int m_bHasCommunicationAbuseMute = 0x51e4;
                int m_szCrosshairCodes = 0x5225;
                int m_iMatchStats_Kills_Total = 0x5b08;
                int m_iMatchStats_5k_Total = 0x601c;
                int m_iMatchStats_4k_Total = 0x5f18;
                int m_iMatchStats_3k_Total = 0x5e14;
                int m_iMatchStats_Damage_Total = 0x6120;
                int m_iMatchStats_EquipmentValue_Total = 0x6224;
                int m_iMatchStats_KillReward_Total = 0x6328;
                int m_iMatchStats_LiveTime_Total = 0x642c;
                int m_iMatchStats_Deaths_Total = 0x5d10;
                int m_iMatchStats_Assists_Total = 0x5c0c;
                int m_iMatchStats_HeadShotKills_Total = 0x6530;
                int m_iMatchStats_Objective_Total = 0x6634;
                int m_iMatchStats_CashEarned_Total = 0x6738;
                int m_iMatchStats_UtilityDamage_Total = 0x683c;
                int m_iMatchStats_EnemiesFlashed_Total = 0x6940;
        }

        namespace DT_CSPlayer {
                int m_angEyeAngles_0_ = 0xb37c;
                int m_angEyeAngles_1_ = 0xb380;
                int m_iAddonBits = 0xa374;
                int m_iPrimaryAddon = 0xa378;
                int m_iSecondaryAddon = 0xa37c;
                int m_iThrowGrenadeCounter = 0x396c;
                int m_bWaitForNoAttack = 0x3970;
                int m_bIsRespawningForDMBonus = 0x3971;
                int m_iPlayerState = 0x392c;
                int m_iAccount = 0xb364;
                int m_iStartAccount = 0xa3a4;
                int m_totalHitsOnServer = 0xa3a8;
                int m_bInBombZone = 0x3968;
                int m_bInBuyZone = 0x3969;
                int m_bInNoDefuseArea = 0x396a;
                int m_bKilledByTaser = 0x3981;
                int m_iMoveState = 0x3984;
                int m_iClass = 0xb374;
                int m_ArmorValue = 0xb378;
                int m_angEyeAngles = 0xb37c;
                int m_bHasDefuser = 0xb388;
                int m_bNightVisionOn = 0xa399;
                int m_bHasNightVision = 0xa39a;
                int m_bInHostageRescueZone = 0xb389;
                int m_bIsDefusing = 0x3930;
                int m_bIsGrabbingHostage = 0x3931;
                int m_iBlockingUseActionInProgress = 0x3934;
                int m_bIsScoped = 0x3928;
                int m_bIsWalking = 0x3929;
                int m_nIsAutoMounting = 0x3a98;
                int m_bResumeZoom = 0x392a;
                int m_fImmuneToGunGameDamageTime = 0x393c;
                int m_bGunGameImmunity = 0x3944;
                int m_bHasMovedSinceSpawn = 0x3945;
                int m_bMadeFinalGunGameProgressiveKill = 0x3946;
                int m_iGunGameProgressiveWeaponIndex = 0x3948;
                int m_iNumGunGameTRKillPoints = 0x394c;
                int m_iNumGunGameKillsWithCurrentWeapon = 0x3950;
                int m_iNumRoundKills = 0x3954;
                int m_fMolotovUseTime = 0x3960;
                int m_fMolotovDamageTime = 0x3964;
                int m_szArmsModel = 0x398b;
                int m_hCarriedHostage = 0xa3f8;
                int m_hCarriedHostageProp = 0xa3fc;
                int m_bIsRescuing = 0x3938;
                int m_flGroundAccelLinearFracLastTime = 0xa3a0;
                int m_bCanMoveDuringFreezePeriod = 0x3988;
                int m_isCurrentGunGameLeader = 0x3989;
                int m_isCurrentGunGameTeamLeader = 0x398a;
                int m_flGuardianTooFarDistFrac = 0x3974;
                int m_flDetectedByEnemySensorTime = 0x3978;
                int m_bIsPlayerGhost = 0x3a95;
                int m_bHasParachute = 0xb350;
                int m_unMusicID = 0xb354;
                int m_bHasHelmet = 0xb36c;
                int m_bHasHeavyArmor = 0xb36d;
                int m_nHeavyAssaultSuitCooldownRemaining = 0xb370;
                int m_flFlashDuration = 0xa420;
                int m_flFlashMaxAlpha = 0xa41c;
                int m_iProgressBarDuration = 0xa380;
                int m_flProgressBarStartTime = 0xa384;
                int m_hRagdoll = 0xa3ec;
                int m_hPlayerPing = 0xa3f0;
                int m_cycleLatch = 0xb48c;
                int m_unCurrentEquipmentValue = 0xb330;
                int m_unRoundStartEquipmentValue = 0xb332;
                int m_unFreezetimeEndEquipmentValue = 0xb334;
                int m_bIsControllingBot = 0xb9f9;
                int m_bHasControlledBotThisRound = 0xba08;
                int m_bCanControlObservedBot = 0xb9fa;
                int m_iControlledBotEntIndex = 0xb9fc;
                int m_vecAutomoveTargetEnd = 0x3aa8;
                int m_flAutoMoveStartTime = 0x3ab8;
                int m_flAutoMoveTargetTime = 0x3abc;
                int m_bIsAssassinationTarget = 0xb9f8;
                int m_bHud_MiniScoreHidden = 0xb3aa;
                int m_bHud_RadarHidden = 0xb3ab;
                int m_nLastKillerIndex = 0xb3ac;
                int m_nLastConcurrentKilled = 0xb3b0;
                int m_nDeathCamMusic = 0xb3b4;
                int m_bIsHoldingLookAtWeapon = 0xb921;
                int m_bIsLookingAtWeapon = 0xb920;
                int m_iNumRoundKillsHeadshots = 0x3958;
                int m_unTotalRoundDamageDealt = 0x395c;
                int m_flLowerBodyYawTarget = 0x3a90;
                int m_bStrafing = 0x3a94;
                int m_flThirdpersonRecoil = 0xb998;
                int m_bHideTargetID = 0xb99c;
                int m_bIsSpawnRappelling = 0xa3ad;
                int m_vecSpawnRappellingRopeOrigin = 0xa3b0;
                int m_nSurvivalTeam = 0xa3c0;
                int m_hSurvivalAssassinationTarget = 0xa3c4;
                int m_flHealthShotBoostExpirationTime = 0xa3c8;
                int m_flLastExoJumpTime = 0x3ac0;
        }

        namespace DT_CSLocalPlayerExclusive {
                int m_vecOrigin = 0x138;
                int m_vecOrigin_2_ = 0x140;
                int m_flStamina = 0xa388;
                int m_iDirection = 0xa38c;
                int m_iShotsFired = 0xa390;
                int m_nNumFastDucks = 0xa394;
                int m_bDuckOverride = 0xa398;
                int m_flVelocityModifier = 0xa39c;
                int m_unActiveQuestId = 0xb328;
                int m_nQuestProgressReason = 0xb32c;
        }

        namespace m_bPlayerDominated {
        }

        namespace m_bPlayerDominatingMe {
        }

        namespace m_iWeaponPurchasesThisRound {
                int m_bPlayerDominated = 0xb494;
                int m_bPlayerDominatingMe = 0xb4d5;
                int m_iWeaponPurchasesThisRound = 0xb518;
        }

        namespace DT_CSNonLocalPlayerExclusive {
                int m_vecOrigin = 0x138;
                int m_vecOrigin_2_ = 0x140;
        }

        namespace DT_CSTeamExclusive {
        }

        namespace m_iWeaponPurchasesThisMatch {
        }

        namespace m_EquippedLoadoutItemDefIndices {
                int m_iWeaponPurchasesThisMatch = 0xaa7c;
                int m_EquippedLoadoutItemDefIndices = 0xb254;
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
                int cslocaldata = 0x0;
                int csnonlocaldata = 0x0;
                int csteamdata = 0x0;
                int m_iMatchStats_Kills = 0xa464;
                int m_iMatchStats_Damage = 0xa4dc;
                int m_iMatchStats_EquipmentValue = 0xa554;
                int m_iMatchStats_MoneySaved = 0xa5cc;
                int m_iMatchStats_KillReward = 0xa644;
                int m_iMatchStats_LiveTime = 0xa6bc;
                int m_iMatchStats_Deaths = 0xa734;
                int m_iMatchStats_Assists = 0xa7ac;
                int m_iMatchStats_HeadShotKills = 0xa824;
                int m_iMatchStats_Objective = 0xa89c;
                int m_iMatchStats_CashEarned = 0xa914;
                int m_iMatchStats_UtilityDamage = 0xa98c;
                int m_iMatchStats_EnemiesFlashed = 0xaa04;
                int m_rank = 0xb338;
                int m_passiveItems = 0xb350;
                int m_vecPlayerPatchEconIndices = 0xb970;
        }

        namespace DT_PlayerPing {
                int m_hPlayer = 0x9e4;
                int m_hPingedEntity = 0x9e8;
                int m_iType = 0x9ec;
        }

        namespace DT_CSRagdoll {
                int m_vecOrigin = 0x138;
                int m_vecRagdollOrigin = 0x2a0c;
                int m_hPlayer = 0x29f0;
                int m_nModelIndex = 0x258;
                int m_nForceBone = 0x268c;
                int m_vecForce = 0x2680;
                int m_vecRagdollVelocity = 0x2a00;
                int m_iDeathPose = 0x2a18;
                int m_iDeathFrame = 0x2a1c;
                int m_iTeamNum = 0xf4;
                int m_bClientSideAnimation = 0x289c;
                int m_flDeathYaw = 0x2a20;
                int m_flAbsYaw = 0x2a24;
        }

        namespace DT_TEPlayerAnimEvent {
                int m_hPlayer = 0x10;
                int m_iEvent = 0x14;
                int m_nData = 0x18;
        }

        namespace DT_CHostage {
                int m_isRescued = 0x2f30;
                int m_jumpedThisFrame = 0x2f31;
                int m_iHealth = 0x100;
                int m_iMaxHealth = 0x2f18;
                int m_lifeState = 0x25f;
                int m_fFlags = 0x104;
                int m_nHostageState = 0x2f34;
                int m_flRescueStartTime = 0x2f38;
                int m_flGrabSuccessTime = 0x2f3c;
                int m_flDropStartTime = 0x2f40;
                int m_vel = 0x2f24;
                int m_leader = 0x2f20;
        }

        namespace DT_BaseCSGrenadeProjectile {
                int m_vInitialVelocity = 0x29d0;
                int m_nBounces = 0x29dc;
                int m_nExplodeEffectIndex = 0x29e0;
                int m_nExplodeEffectTickBegin = 0x29e4;
                int m_vecExplodeEffectOrigin = 0x29e8;
        }

        namespace DT_HandleTest {
                int m_Handle = 0x9d8;
                int m_bSendHandle = 0x9dc;
        }

        namespace DT_SpriteTrail {
                int m_flLifeTime = 0x1074;
                int m_flStartWidth = 0x1078;
                int m_flEndWidth = 0x107c;
                int m_flStartWidthVariance = 0x1080;
                int m_flTextureRes = 0x1084;
                int m_flMinFadeLength = 0x1088;
                int m_vecSkyboxOrigin = 0x108c;
                int m_flSkyboxScale = 0x1098;
        }

        namespace DT_Sprite {
                int m_hAttachedToEntity = 0x9e8;
                int m_nAttachment = 0x9ec;
                int m_flScaleTime = 0xa08;
                int m_flSpriteScale = 0xa04;
                int m_flSpriteFramerate = 0x9f0;
                int m_flGlowProxySize = 0xa10;
                int m_flHDRColorScale = 0xa14;
                int m_flFrame = 0x9f4;
                int m_flBrightnessTime = 0xa00;
                int m_nBrightness = 0x9fc;
                int m_bWorldSpaceScale = 0xa0c;
        }

        namespace DT_Ragdoll_Attached {
                int m_boneIndexAttached = 0x2cb8;
                int m_ragdollAttachedObjectIndex = 0x2cb4;
                int m_attachmentPointBoneSpace = 0x2c90;
                int m_attachmentPointRagdollSpace = 0x2ca8;
        }

        namespace DT_Ragdoll {
                int m_ragAngles_0_ = 0x2aa0;
                int m_ragAngles = 0x0;
                int m_ragPos_0_ = 0x2980;
                int m_ragPos = 0x0;
                int m_hUnragdoll = 0x2c7c;
                int m_flBlendWeight = 0x2c80;
                int m_nOverlaySequence = 0x2c88;
        }

        namespace DT_PropCounter {
                int m_flDisplayValue = 0x2980;
        }

        namespace DT_PoseController {
                int m_bPoseValueParity = 0x9ec;
                int m_fPoseValue = 0x9f0;
                int m_fInterpolationTime = 0x9f4;
                int m_bInterpolationWrap = 0x9f8;
                int m_fCycleFrequency = 0x9fc;
                int m_nFModType = 0xa00;
                int m_fFModTimeOffset = 0xa04;
                int m_fFModRate = 0xa08;
                int m_fFModAmplitude = 0xa0c;
        }

        namespace m_hProps {
        }

        namespace m_chPoseIndex {
                int m_hProps = 0x9d8;
                int m_chPoseIndex = 0x9e8;
        }

        namespace DT_GrassBurn {
                int m_flGrassBurnClearTime = 0x9d8;
        }

        namespace DT_FuncLadder {
                int m_vecPlayerMountPositionTop = 0x9f8;
                int m_vecPlayerMountPositionBottom = 0xa04;
                int m_vecLadderDir = 0x9d8;
                int m_bFakeLadder = 0xa11;
        }

        namespace DT_TEFoundryHelpers {
                int m_iEntity = 0x10;
        }

        namespace DT_DetailController {
                int m_flFadeStartDist = 0x9d8;
                int m_flFadeEndDist = 0x9dc;
        }

        namespace DT_DangerZone {
                int m_vecDangerZoneOriginStartedAt = 0x9d8;
                int m_flBombLaunchTime = 0x9e4;
                int m_flExtraRadius = 0x9e8;
                int m_flExtraRadiusStartTime = 0x9ec;
                int m_flExtraRadiusTotalLerpTime = 0x9f0;
                int m_nDropOrder = 0x9f4;
                int m_iWave = 0x9f8;
        }

        namespace DT_DangerZoneController {
                int m_bDangerZoneControllerEnabled = 0x9d8;
                int m_bMissionControlledExplosions = 0x9d9;
                int m_flStartTime = 0x9f4;
                int m_flFinalExpansionTime = 0x9f8;
                int m_vecEndGameCircleStart = 0x9dc;
                int m_vecEndGameCircleEnd = 0x9e8;
                int m_hTheFinalZone = 0xab8;
        }

        namespace m_DangerZones {
        }

        namespace m_flWaveEndTimes {
                int m_DangerZones = 0x9fc;
                int m_flWaveEndTimes = 0xaa4;
        }

        namespace DT_WorldVguiText {
                int m_bEnabled = 0x9d8;
                int m_szDisplayText = 0x9d9;
                int m_szDisplayTextOption = 0xbd9;
                int m_szFont = 0xcd9;
                int m_iTextPanelWidth = 0xd20;
                int m_clrText = 0xd19;
        }

        namespace DT_World {
                int m_flWaveHeight = 0x9d8;
                int m_WorldMins = 0x9dc;
                int m_WorldMaxs = 0x9e8;
                int m_bStartDark = 0x9f4;
                int m_flMaxOccludeeArea = 0x9f8;
                int m_flMinOccluderArea = 0x9fc;
                int m_flMaxPropScreenSpaceWidth = 0xa04;
                int m_flMinPropScreenSpaceWidth = 0xa00;
                int m_iszDetailSpriteMaterial = 0xa10;
                int m_bColdWorld = 0xa08;
                int m_iTimeOfDay = 0xa0c;
        }

        namespace DT_WaterLODControl {
                int m_flCheapWaterStartDistance = 0x9d8;
                int m_flCheapWaterEndDistance = 0x9dc;
        }

        namespace DT_VoteController {
                int m_iActiveIssueIndex = 0x9e4;
                int m_iOnlyTeamToVote = 0x9e8;
                int m_nPotentialVotes = 0xa04;
                int m_bIsYesNoVote = 0xa0a;
        }

        namespace m_nVoteOptionCount {
                int m_nVoteOptionCount = 0x9ec;
        }

        namespace DT_VGuiScreen {
                int m_flWidth = 0x9e0;
                int m_flHeight = 0x9e4;
                int m_fScreenFlags = 0xa0c;
                int m_nPanelName = 0x9e8;
                int m_nAttachmentIndex = 0xa04;
                int m_nOverlayMaterial = 0xa08;
                int m_hPlayerOwner = 0xa68;
        }

        namespace DT_PropJeep {
                int m_bHeadlightIsOn = 0x2acc;
        }

        namespace DT_PropVehicleChoreoGeneric {
                int m_hPlayer = 0x29f4;
                int m_bEnterAnimOn = 0x29fc;
                int m_bExitAnimOn = 0x29fd;
                int m_bForceEyesToAttachment = 0x2a0c;
                int m_vecEyeExitEndpoint = 0x2a00;
                int m_vehicleView_bClampEyeAngles = 0x2a90;
                int m_vehicleView_flPitchCurveZero = 0x2a94;
                int m_vehicleView_flPitchCurveLinear = 0x2a98;
                int m_vehicleView_flRollCurveZero = 0x2a9c;
                int m_vehicleView_flRollCurveLinear = 0x2aa0;
                int m_vehicleView_flFOV = 0x2aa4;
                int m_vehicleView_flYawMin = 0x2aa8;
                int m_vehicleView_flYawMax = 0x2aac;
                int m_vehicleView_flPitchMin = 0x2ab0;
                int m_vehicleView_flPitchMax = 0x2ab4;
        }

        namespace DT_TriggerSoundOperator {
                int m_nSoundOperator = 0xa10;
        }

        namespace DT_BaseTrigger {
                int m_bClientSidePredicted = 0xa08;
                int m_spawnflags = 0x2c8;
        }

        namespace DT_Tesla {
                int m_SoundName = 0xa00;
                int m_iszSpriteName = 0xa40;
        }

        namespace DT_BaseTeamObjectiveResource {
                int m_iTimerToShowInHUD = 0x9d8;
                int m_iStopWatchTimer = 0x9dc;
                int m_iNumControlPoints = 0x9e0;
                int m_bPlayingMiniRounds = 0x9e8;
                int m_bControlPointsReset = 0x9e9;
                int m_iUpdateCapHudParity = 0x9ec;
                int m_vCPPositions_0_ = 0x9f4;
                int m_vCPPositions = 0x0;
                int m_iszWarnSound_0_ = 0x1304;
                int m_iszWarnSound = 0x0;
                int m_pszCapLayoutInHUD = 0x1cec;
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
                int m_bCPIsVisible = 0xa54;
                int m_flLazyCapPerc = 0xa5c;
                int m_iTeamIcons = 0xa9c;
                int m_iTeamOverlays = 0xb9c;
                int m_iTeamReqCappers = 0xc9c;
                int m_flTeamCapTime = 0xd9c;
                int m_iPreviousPoints = 0xe9c;
                int m_bTeamCanCap = 0x119c;
                int m_iTeamBaseIcons = 0x11dc;
                int m_iBaseControlPoints = 0x125c;
                int m_bInMiniRound = 0x12dc;
                int m_iWarnOnCap = 0x12e4;
                int m_flPathDistance = 0x1afc;
                int m_iNumTeamMembers = 0x1b1c;
                int m_iCappingTeam = 0x1c1c;
                int m_iTeamInZone = 0x1c3c;
                int m_bBlocked = 0x1c5c;
                int m_iOwner = 0x1c64;
        }

        namespace DT_Team {
                int m_iTeamNum = 0xb68;
                int m_bSurrendered = 0xb6c;
                int m_scoreTotal = 0xb40;
                int m_scoreFirstHalf = 0xb44;
                int m_scoreSecondHalf = 0xb48;
                int m_scoreOvertime = 0xb4c;
                int m_iClanID = 0xb58;
                int m_szTeamname = 0x9ec;
                int m_szClanTeamname = 0xa0c;
                int m_szTeamFlagImage = 0xa2c;
                int m_szTeamLogoImage = 0xa34;
                int m_szTeamMatchStat = 0xa3c;
                int m_nGGLeaderEntIndex_CT = 0xb50;
                int m_nGGLeaderEntIndex_T = 0xb54;
                int m_numMapVictories = 0xb70;
                int player_array_element = 0x0;
                int "player_array" = 0x0;
        }

        namespace DT_SunlightShadowControl {
                int m_shadowDirection = 0x9d8;
                int m_bEnabled = 0x9e4;
                int m_TextureName = 0x9e5;
                int m_LightColor = 0xaf0;
                int m_flColorTransitionTime = 0xb04;
                int m_flSunDistance = 0xb08;
                int m_flFOV = 0xb0c;
                int m_flNearZ = 0xb10;
                int m_flNorthOffset = 0xb14;
                int m_bEnableShadows = 0xb18;
        }

        namespace DT_Sun {
                int m_clrRender = 0x70;
                int m_clrOverlay = 0xb38;
                int m_vDirection = 0xb44;
                int m_bOn = 0xb50;
                int m_nSize = 0xb3c;
                int m_nOverlaySize = 0xb40;
                int m_nMaterial = 0xb54;
                int m_nOverlayMaterial = 0xb58;
                int HDRColorScale = 0x0;
                int glowDistanceScale = 0x0;
        }

        namespace DT_ParticlePerformanceMonitor {
                int m_bMeasurePerf = 0x9d9;
                int m_bDisplayPerf = 0x9d8;
        }

        namespace DT_SpotlightEnd {
                int m_flLightScale = 0x9d8;
                int m_Radius = 0x9dc;
        }

        namespace DT_SpatialEntity {
                int m_vecOrigin = 0x9d8;
                int m_minFalloff = 0x9e4;
                int m_maxFalloff = 0x9e8;
                int m_flCurWeight = 0x9ec;
                int m_bEnabled = 0xaf4;
        }

        namespace DT_SlideshowDisplay {
                int m_bEnabled = 0x9d8;
                int m_szDisplayText = 0x9d9;
                int m_szSlideshowDirectory = 0xa59;
                int m_fMinSlideTime = 0xb08;
                int m_fMaxSlideTime = 0xb0c;
                int m_iCycleType = 0xb14;
                int m_bNoListRepeats = 0xb18;
        }

        namespace m_chCurrentSlideLists {
                int m_chCurrentSlideLists = 0xaf0;
        }

        namespace DT_ShadowControl {
                int m_shadowDirection = 0x9d8;
                int m_shadowColor = 0x9e4;
                int m_flShadowMaxDist = 0x9e8;
                int m_bDisableShadows = 0x9ec;
                int m_bEnableLocalLightShadows = 0x9ed;
        }

        namespace DT_SceneEntity {
                int m_nSceneStringIndex = 0x9e8;
                int m_bIsPlayingBack = 0x9dc;
                int m_bPaused = 0x9dd;
                int m_bMultiplayer = 0x9de;
                int m_flForceClientTime = 0x9e4;
        }

        namespace _ST_m_hActorList_16 {
        }

        namespace _LPT_m_hActorList_16 {
                int lengthprop16 = 0x0;
                int lengthproxy = 0x0;
                int m_hActorList = 0x0;
        }

        namespace DT_RopeKeyframe {
                int m_nChangeCount = 0xccc;
                int m_iRopeMaterialModelIndex = 0xa14;
                int m_hStartPoint = 0xcac;
                int m_hEndPoint = 0xcb0;
                int m_iStartAttachment = 0xcb4;
                int m_iEndAttachment = 0xcb6;
                int m_fLockedPoints = 0xcc8;
                int m_Slack = 0xcc0;
                int m_RopeLength = 0xcbc;
                int m_RopeFlags = 0xa10;
                int m_TextureScale = 0xcc4;
                int m_nSegments = 0xca8;
                int m_bConstrainBetweenEndpoints = 0xd50;
                int m_Subdiv = 0xcb8;
                int m_Width = 0xcd0;
                int m_flScrollSpeed = 0xa0c;
                int m_vecOrigin = 0x138;
                int moveparent = 0x148;
                int m_iParentAttachment = 0x2ec;
                int m_iDefaultRopeMaterialModelIndex = 0xa18;
                int m_nMinCPULevel = 0x988;
                int m_nMaxCPULevel = 0x989;
                int m_nMinGPULevel = 0x98a;
                int m_nMaxGPULevel = 0x98b;
        }

        namespace DT_RagdollManager {
                int m_iCurrentMaxRagdollCount = 0x9d8;
        }

        namespace DT_PhysicsPropMultiplayer {
                int m_iPhysicsMode = 0x29c4;
                int m_fMass = 0x29c8;
                int m_collisionMins = 0x29cc;
                int m_collisionMaxs = 0x29d8;
        }

        namespace DT_PhysBoxMultiplayer {
                int m_iPhysicsMode = 0x9e4;
                int m_fMass = 0x9e8;
        }

        namespace DT_DynamicProp {
                int m_bUseHitboxesForRenderBox = 0x29a4;
                int m_flGlowMaxDist = 0x29c4;
                int m_bShouldGlow = 0x29c8;
                int m_clrGlow = 0x29c9;
                int m_nGlowStyle = 0x29d0;
        }

        namespace DT_Prop_Hallucination {
                int m_bEnabled = 0x2999;
                int m_fVisibleTime = 0x299c;
                int m_fRechargeTime = 0x29a0;
        }

        namespace DT_PostProcessController {
                int m_bMaster = 0xa04;
        }

        namespace m_flPostProcessParameters {
                int m_flPostProcessParameters = 0x9d8;
        }

        namespace DT_PointWorldText {
                int m_szText = 0xa08;
                int m_flTextSize = 0xb0c;
                int m_textColor = 0xb10;
        }

        namespace DT_PointCommentaryNode {
                int m_bActive = 0x2980;
                int m_flStartTime = 0x2984;
                int m_iszCommentaryFile = 0x2988;
                int m_iszCommentaryFileNoHDR = 0x2a8c;
                int m_iszSpeakers = 0x2b90;
                int m_iNodeNumber = 0x2c90;
                int m_iNodeNumberMax = 0x2c94;
                int m_hViewPosition = 0x2c9c;
        }

        namespace DT_PointCamera {
                int m_FOV = 0x9d8;
                int m_Resolution = 0x9dc;
                int m_bFogEnable = 0x9e0;
                int m_FogColor = 0x9e1;
                int m_flFogStart = 0x9e8;
                int m_flFogEnd = 0x9ec;
                int m_flFogMaxDensity = 0x9f0;
                int m_bActive = 0x9f4;
                int m_bUseScreenAspectRatio = 0x9f5;
        }

        namespace DT_Plasma {
                int m_flStartScale = 0x9d8;
                int m_flScale = 0x9dc;
                int m_flScaleTime = 0x9e0;
                int m_nFlags = 0x9e4;
                int m_nPlasmaModelIndex = 0x9e8;
                int m_nPlasmaModelIndex2 = 0x9ec;
                int m_nGlowModelIndex = 0x9f0;
        }

        namespace DT_PhysicsProp {
                int m_bAwake = 0x29a0;
                int m_spawnflags = 0x2c8;
        }

        namespace DT_StatueProp {
                int m_hInitBaseAnimating = 0x29c0;
                int m_bShatter = 0x29c4;
                int m_nShatterFlags = 0x29c8;
                int m_vShatterPosition = 0x29cc;
                int m_vShatterForce = 0x29d8;
        }

        namespace DT_PhysBox {
                int m_mass = 0x9d8;
        }

        namespace DT_ParticleSystem {
                int m_vecOrigin = 0x138;
                int m_fEffects = 0xf0;
                int m_hOwnerEntity = 0x14c;
                int moveparent = 0x148;
                int m_iParentAttachment = 0x2ec;
                int m_angRotation = 0x12c;
                int m_iEffectIndex = 0x9d8;
                int m_bActive = 0x9e0;
                int m_nStopType = 0x9dc;
                int m_flStartTime = 0x9e4;
                int m_szSnapshotFileName = 0x9e8;
        }

        namespace m_vServerControlPoints {
        }

        namespace m_iServerControlPointAssignments {
        }

        namespace m_hControlPointEnts {
        }

        namespace m_iControlPointParents {
                int m_vServerControlPoints = 0xaec;
                int m_iServerControlPointAssignments = 0xb1c;
                int m_hControlPointEnts = 0xb30;
                int m_iControlPointParents = 0xc2c;
        }

        namespace DT_MovieDisplay {
                int m_bEnabled = 0x9d8;
                int m_bLooping = 0x9d9;
                int m_szMovieFilename = 0x9da;
                int m_szGroupName = 0xa5a;
                int m_bStretchToFill = 0xada;
                int m_bForcedSlave = 0xadb;
                int m_bUseCustomUVs = 0xadc;
                int m_flUMin = 0xae0;
                int m_flUMax = 0xae4;
                int m_flVMin = 0xae8;
                int m_flVMax = 0xaec;
        }

        namespace DT_MaterialModifyControl {
                int m_szMaterialName = 0x9d8;
                int m_szMaterialVar = 0xad7;
                int m_szMaterialVarValue = 0xbd6;
                int m_iFrameStart = 0xce0;
                int m_iFrameEnd = 0xce4;
                int m_bWrap = 0xce8;
                int m_flFramerate = 0xcec;
                int m_bNewAnimCommandsSemaphore = 0xcf0;
                int m_flFloatLerpStartValue = 0xcf4;
                int m_flFloatLerpEndValue = 0xcf8;
                int m_flFloatLerpTransitionTime = 0xcfc;
                int m_bFloatLerpWrap = 0xd00;
                int m_nModifyMode = 0xd08;
        }

        namespace DT_LightGlow {
                int m_clrRender = 0x70;
                int m_nHorizontalSize = 0x9d8;
                int m_nVerticalSize = 0x9dc;
                int m_nMinDist = 0x9e0;
                int m_nMaxDist = 0x9e4;
                int m_nOuterMaxDist = 0x9e8;
                int m_spawnflags = 0x9ec;
                int m_vecOrigin = 0x138;
                int m_angRotation = 0x12c;
                int moveparent = 0x148;
                int m_flGlowProxySize = 0xac4;
                int HDRColorScale = 0x0;
        }

        namespace DT_ItemAssaultSuitUseable {
                int m_nArmorValue = 0x3440;
                int m_bIsHeavyAssaultSuit = 0x3444;
        }

        namespace DT_Item {
                int m_bShouldGlow = 0x3230;
        }

        namespace DT_InfoOverlayAccessor {
                int m_iTextureFrameIndex = 0x98c;
                int m_iOverlayID = 0x9d8;
        }

        namespace DT_FuncSmokeVolume {
                int m_Color1 = 0xac4;
                int m_Color2 = 0xac8;
                int m_MaterialName = 0xacc;
                int m_ParticleDrawWidth = 0xbcc;
                int m_ParticleSpacingDistance = 0xbd0;
                int m_DensityRampSpeed = 0xbd4;
                int m_RotationSpeed = 0xbd8;
                int m_MovementSpeed = 0xbdc;
                int m_Density = 0xbe0;
                int m_maxDrawDistance = 0xbe4;
                int m_spawnflags = 0xbe8;
        }

        namespace DT_CollisionProperty {
                int m_vecMins = 0x8;
                int m_vecMaxs = 0x14;
                int m_nSolidType = 0x22;
                int m_usSolidFlags = 0x20;
                int m_nSurroundType = 0x2a;
                int m_triggerBloat = 0x23;
                int m_vecSpecifiedSurroundingMins = 0x2c;
                int m_vecSpecifiedSurroundingMaxs = 0x38;
                int m_Collision = 0x320;
        }

        namespace DT_FuncRotating {
                int m_vecOrigin = 0x138;
                int m_angRotation_0_ = 0x12c;
                int m_angRotation_1_ = 0x130;
                int m_angRotation_2_ = 0x134;
                int m_flSimulationTime = 0x268;
        }

        namespace DT_FuncOccluder {
                int m_bActive = 0x9dc;
                int m_nOccluderIndex = 0x9d8;
        }

        namespace DT_FuncMoveLinear {
                int m_vecVelocity = 0x114;
                int m_fFlags = 0x104;
        }

        namespace DT_Func_LOD {
                int m_nDisappearMinDist = 0x9d8;
                int m_nDisappearMaxDist = 0x9dc;
        }

        namespace DT_TEDust {
                int m_flSize = 0x1c;
                int m_flSpeed = 0x20;
                int m_vecDirection = 0x24;
        }

        namespace DT_Func_Dust {
                int m_Color = 0x9d8;
                int m_SpawnRate = 0x9dc;
                int m_flSizeMin = 0x9e0;
                int m_flSizeMax = 0x9e4;
                int m_LifetimeMin = 0x9ec;
                int m_LifetimeMax = 0x9f0;
                int m_DustFlags = 0xa00;
                int m_SpeedMax = 0x9e8;
                int m_DistMax = 0x9f4;
                int m_nModelIndex = 0x258;
                int m_FallSpeed = 0x9f8;
                int m_bAffectedByWind = 0x9fc;
        }

        namespace DT_CollisionProperty {
                int m_vecMins = 0x8;
                int m_vecMaxs = 0x14;
                int m_nSolidType = 0x22;
                int m_usSolidFlags = 0x20;
                int m_nSurroundType = 0x2a;
                int m_triggerBloat = 0x23;
                int m_vecSpecifiedSurroundingMins = 0x2c;
                int m_vecSpecifiedSurroundingMaxs = 0x38;
                int m_Collision = 0x320;
        }

        namespace DT_FuncConveyor {
                int m_flConveyorSpeed = 0x9d8;
        }

        namespace DT_BreakableSurface {
                int m_nNumWide = 0x9dc;
                int m_nNumHigh = 0x9e0;
                int m_flPanelWidth = 0x9e4;
                int m_flPanelHeight = 0x9e8;
                int m_vNormal = 0x9ec;
                int m_vCorner = 0x9f8;
                int m_bIsBroken = 0xa04;
                int m_nSurfaceType = 0xa08;
        }

        namespace m_RawPanelBitVec {
                int m_RawPanelBitVec = 0xa2c;
        }

        namespace DT_FuncAreaPortalWindow {
                int m_flFadeStartDist = 0x9d8;
                int m_flFadeDist = 0x9dc;
                int m_flTranslucencyLimit = 0x9e0;
                int m_iBackgroundModelIndex = 0x9e4;
        }

        namespace DT_CFish {
                int m_poolOrigin = 0x29e0;
                int m_x = 0x29c8;
                int m_y = 0x29cc;
                int m_z = 0x29d0;
                int m_angle = 0x29d8;
                int m_nModelIndex = 0x258;
                int m_lifeState = 0x25f;
                int m_waterLevel = 0x29ec;
        }

        namespace DT_FireSmoke {
                int m_flStartScale = 0x9d8;
                int m_flScale = 0x9dc;
                int m_flScaleTime = 0x9e0;
                int m_nFlags = 0x9e4;
                int m_nFlameModelIndex = 0x9e8;
                int m_nFlameFromAboveModelIndex = 0x9ec;
        }

        namespace DT_EnvTonemapController {
                int m_bUseCustomAutoExposureMin = 0x9d8;
                int m_bUseCustomAutoExposureMax = 0x9d9;
                int m_bUseCustomBloomScale = 0x9da;
                int m_flCustomAutoExposureMin = 0x9dc;
                int m_flCustomAutoExposureMax = 0x9e0;
                int m_flCustomBloomScale = 0x9e4;
                int m_flCustomBloomScaleMinimum = 0x9e8;
                int m_flBloomExponent = 0x9ec;
                int m_flBloomSaturation = 0x9f0;
                int m_flTonemapPercentTarget = 0x9f4;
                int m_flTonemapPercentBrightPixels = 0x9f8;
                int m_flTonemapMinAvgLum = 0x9fc;
                int m_flTonemapRate = 0xa00;
        }

        namespace DT_EnvScreenEffect {
                int m_flDuration = 0x9d8;
                int m_nType = 0x9dc;
        }

        namespace DT_EnvScreenOverlay {
                int m_iszOverlayNames_0_ = 0x9d8;
                int m_iszOverlayNames = 0x0;
                int m_flOverlayTimes_0_ = 0x13d0;
                int m_flOverlayTimes = 0x0;
                int m_flStartTime = 0x13f8;
                int m_iDesiredOverlay = 0x13fc;
                int m_bIsActive = 0x1400;
        }

        namespace DT_EnvProjectedTexture {
                int m_hTargetEntity = 0x9dc;
                int m_bState = 0x9e0;
                int m_bAlwaysUpdate = 0x9e1;
                int m_flLightFOV = 0x9e4;
                int m_bEnableShadows = 0x9e8;
                int m_bSimpleProjection = 0x9e9;
                int m_bLightOnlyTarget = 0x9ea;
                int m_bLightWorld = 0x9eb;
                int m_bCameraSpace = 0x9ec;
                int m_flBrightnessScale = 0x9f0;
                int m_LightColor = 0x9f4;
                int m_flColorTransitionTime = 0xa08;
                int m_flAmbient = 0xa0c;
                int m_SpotlightTextureName = 0xa18;
                int m_nSpotlightTextureFrame = 0xb24;
                int m_flNearZ = 0xa10;
                int m_flFarZ = 0xa14;
                int m_nShadowQuality = 0xb28;
                int m_flProjectionSize = 0xb38;
                int m_flRotation = 0xb3c;
                int m_iStyle = 0xb2c;
        }

        namespace DT_EnvParticleScript {
                int m_flSequenceScale = 0x2a64;
        }

        namespace DT_FogController {
                int m_fog_enable = 0xa1c;
                int m_fog_blend = 0xa1d;
                int m_fog_dirPrimary = 0x9dc;
                int m_fog_colorPrimary = 0x9e8;
                int m_fog_colorSecondary = 0x9ec;
                int m_fog_start = 0x9f8;
                int m_fog_end = 0x9fc;
                int m_fog_farz = 0xa00;
                int m_fog_maxdensity = 0xa04;
                int m_fog_colorPrimaryLerpTo = 0x9f0;
                int m_fog_colorSecondaryLerpTo = 0x9f4;
                int m_fog_startLerpTo = 0xa08;
                int m_fog_endLerpTo = 0xa0c;
                int m_fog_maxdensityLerpTo = 0xa10;
                int m_fog_lerptime = 0xa14;
                int m_fog_duration = 0xa18;
                int m_fog_HDRColorScale = 0xa24;
                int m_fog_ZoomFogScale = 0xa20;
        }

        namespace DT_EnvDOFController {
                int m_bDOFEnabled = 0x9d8;
                int m_flNearBlurDepth = 0x9dc;
                int m_flNearFocusDepth = 0x9e0;
                int m_flFarFocusDepth = 0x9e4;
                int m_flFarBlurDepth = 0x9e8;
                int m_flNearBlurRadius = 0x9ec;
                int m_flFarBlurRadius = 0x9f0;
        }

        namespace DT_CascadeLight {
                int m_shadowDirection = 0x9d8;
                int m_envLightShadowDirection = 0x9e4;
                int m_bEnabled = 0x9f0;
                int m_bUseLightEnvAngles = 0x9f1;
                int m_LightColor = 0x9f2;
                int m_LightColorScale = 0x9f8;
                int m_flMaxShadowDist = 0x9fc;
        }

        namespace DT_EnvAmbientLight {
                int m_vecColor = 0xb00;
        }

        namespace DT_EntityParticleTrail {
                int m_iMaterialName = 0xac0;
                int m_hConstraintEntity = 0xad8;
        }

        namespace DT_EntityParticleTrailInfo {
                int m_flLifetime = 0x8;
                int m_flStartSize = 0xc;
                int m_flEndSize = 0x10;
                int m_Info = 0xac4;
        }

        namespace DT_EntityFreezing {
                int m_vFreezingOrigin = 0x9d8;
                int m_flFrozen = 0xaac;
                int m_bFinishFreezing = 0xab0;
        }

        namespace m_flFrozenPerHitbox {
                int m_flFrozenPerHitbox = 0x9e4;
        }

        namespace DT_EntityFlame {
                int m_hEntAttached = 0x9d8;
                int m_bCheapEffect = 0x9ec;
        }

        namespace DT_EntityDissolve {
                int m_flStartTime = 0x9dc;
                int m_flFadeOutStart = 0x9e0;
                int m_flFadeOutLength = 0x9e4;
                int m_flFadeOutModelStart = 0x9e8;
                int m_flFadeOutModelLength = 0x9ec;
                int m_flFadeInStart = 0x9f0;
                int m_flFadeInLength = 0x9f4;
                int m_nDissolveType = 0x9f8;
                int m_vDissolverOrigin = 0xa00;
                int m_nMagnitude = 0xa0c;
        }

        namespace DT_DynamicLight {
                int m_Flags = 0x9d8;
                int m_LightStyle = 0x9d9;
                int m_Radius = 0x9dc;
                int m_Exponent = 0x9e0;
                int m_InnerAngle = 0x9e4;
                int m_OuterAngle = 0x9e8;
                int m_SpotRadius = 0x9ec;
        }

        namespace DT_ColorCorrectionVolume {
                int m_bEnabled = 0xa20;
                int m_MaxWeight = 0xa24;
                int m_FadeDuration = 0xa28;
                int m_Weight = 0xa2c;
                int m_lookupFilename = 0xa30;
        }

        namespace DT_ColorCorrection {
                int m_vecOrigin = 0x9d8;
                int m_minFalloff = 0x9e4;
                int m_maxFalloff = 0x9e8;
                int m_flCurWeight = 0x9f8;
                int m_flMaxWeight = 0x9f4;
                int m_flFadeInDuration = 0x9ec;
                int m_flFadeOutDuration = 0x9f0;
                int m_netLookupFilename = 0x9fc;
                int m_bEnabled = 0xb00;
                int m_bMaster = 0xb01;
                int m_bClientSide = 0xb02;
                int m_bExclusive = 0xb03;
        }

        namespace DT_BreakableProp {
                int m_qPreferredPlayerCarryAngles = 0x2984;
                int m_bClientPhysics = 0x2990;
        }

        namespace DT_BeamSpotlight {
                int m_nHaloIndex = 0x9d8;
                int m_bSpotlightOn = 0x9e4;
                int m_bHasDynamicLight = 0x9e5;
                int m_flSpotlightMaxLength = 0x9e8;
                int m_flSpotlightGoalWidth = 0x9ec;
                int m_flHDRColorScale = 0x9f0;
                int m_nRotationAxis = 0x9dc;
                int m_flRotationSpeed = 0x9e0;
        }

        namespace DT_BaseButton {
                int m_usable = 0xa08;
        }

        namespace DT_BaseToggle {
                int m_vecFinalDest = 0x9ec;
                int m_movementType = 0x9f8;
                int m_flMoveTargetTime = 0x9fc;
        }

        namespace DT_BasePlayer {
                int m_iFOV = 0x31e4;
                int m_iFOVStart = 0x31e8;
                int m_flFOVTime = 0x3208;
                int m_iDefaultFOV = 0x332c;
                int m_hZoomOwner = 0x324c;
                int m_afPhysicsFlags = 0x32ec;
                int m_hVehicle = 0x32f0;
                int m_hUseEntity = 0x3328;
                int m_hGroundEntity = 0x150;
                int m_iHealth = 0x100;
                int m_lifeState = 0x25f;
                int m_iBonusProgress = 0x3240;
                int m_iBonusChallenge = 0x3244;
                int m_flMaxspeed = 0x3248;
                int m_fFlags = 0x104;
                int m_iObserverMode = 0x3378;
                int m_bActiveCameraMan = 0x337c;
                int m_bCameraManXRay = 0x337d;
                int m_bCameraManOverview = 0x337e;
                int m_bCameraManScoreBoard = 0x337f;
                int m_uCameraManGraphs = 0x3380;
                int m_iDeathPostEffect = 0x3374;
                int m_hObserverTarget = 0x338c;
                int m_hViewModel_0_ = 0x32f8;
                int m_hViewModel = 0x0;
                int m_iCoachingTeam = 0x2f50;
                int m_szLastPlaceName = 0x35b4;
                int m_vecLadderNormal = 0x3230;
                int m_ladderSurfaceProps = 0x3200;
                int m_ubEFNoInterpParity = 0x35d8;
                int m_hPostProcessCtrl = 0x37a8;
                int m_hColorCorrectionCtrl = 0x37ac;
                int m_PlayerFog_m_hCtrl = 0x37b4;
                int m_vphysicsCollisionState = 0x325c;
                int m_hViewEntity = 0x333c;
                int m_bShouldDrawPlayerWhileUsingViewEntity = 0x3340;
                int m_flDuckAmount = 0x2fac;
                int m_flDuckSpeed = 0x2fb0;
                int m_nWaterLevel = 0x25e;
        }

        namespace DT_LocalPlayerExclusive {
                int m_vecViewOffset_0_ = 0x108;
                int m_vecViewOffset_1_ = 0x10c;
                int m_vecViewOffset_2_ = 0x110;
                int m_flFriction = 0x144;
                int m_fOnTarget = 0x3324;
                int m_nTickBase = 0x3430;
                int m_nNextThinkTick = 0xfc;
                int m_hLastWeapon = 0x32f4;
                int m_vecVelocity_0_ = 0x114;
                int m_vecVelocity_1_ = 0x118;
                int m_vecVelocity_2_ = 0x11c;
                int m_vecBaseVelocity = 0x120;
                int m_hConstraintEntity = 0x3344;
                int m_vecConstraintCenter = 0x3348;
                int m_flConstraintRadius = 0x3354;
                int m_flConstraintWidth = 0x3358;
                int m_flConstraintSpeedFactor = 0x335c;
                int m_bConstraintPastRadius = 0x3360;
                int m_flDeathTime = 0x33c4;
                int m_flNextDecalTime = 0x33c8;
                int m_fForceTeam = 0x33cc;
                int m_flLaggedMovementValue = 0x3594;
                int m_hTonemapController = 0x31cc;
        }

        namespace DT_Local {
                int m_iHideHUD = 0x48;
                int m_flFOVRate = 0x44;
                int m_bDucked = 0x88;
                int m_bDucking = 0x89;
                int m_flLastDuckTime = 0x8c;
                int m_bInDuckJump = 0x90;
                int m_nDuckTimeMsecs = 0x4c;
                int m_nDuckJumpTimeMsecs = 0x50;
                int m_nJumpTimeMsecs = 0x54;
                int m_flFallVelocity = 0x58;
                int m_viewPunchAngle = 0x64;
                int m_aimPunchAngle = 0x70;
                int m_aimPunchAngleVel = 0x7c;
                int m_bDrawViewmodel = 0x91;
                int m_bWearingSuit = 0x92;
                int m_bPoisoned = 0x93;
                int m_flStepSize = 0x60;
                int m_bAllowAutoMovement = 0x94;
                int m_skybox3d_scale = 0x134;
                int m_skybox3d_origin = 0x138;
                int m_skybox3d_area = 0x144;
                int m_skybox3d_fog_enable = 0x18c;
                int m_skybox3d_fog_blend = 0x18d;
                int m_skybox3d_fog_dirPrimary = 0x14c;
                int m_skybox3d_fog_colorPrimary = 0x158;
                int m_skybox3d_fog_colorSecondary = 0x15c;
                int m_skybox3d_fog_start = 0x168;
                int m_skybox3d_fog_end = 0x16c;
                int m_skybox3d_fog_maxdensity = 0x174;
                int m_skybox3d_fog_HDRColorScale = 0x194;
                int m_audio_localSound_0_ = 0x19c;
                int m_audio_localSound_1_ = 0x1a8;
                int m_audio_localSound_2_ = 0x1b4;
                int m_audio_localSound_3_ = 0x1c0;
                int m_audio_localSound_4_ = 0x1cc;
                int m_audio_localSound_5_ = 0x1d8;
                int m_audio_localSound_6_ = 0x1e4;
                int m_audio_localSound_7_ = 0x1f0;
                int m_audio_soundscapeIndex = 0x1fc;
                int m_audio_localBits = 0x200;
                int m_audio_entIndex = 0x204;
        }

        namespace m_chAreaBits {
        }

        namespace m_chAreaPortalBits {
                int m_chAreaBits = 0x4;
                int m_chAreaPortalBits = 0x24;
                int m_Local = 0x2fbc;
        }

        namespace DT_PlayerState {
                int deadflag = 0x4;
        }

        namespace m_iAmmo {
                int localdata = 0x0;
                int pl = 0x31d0;
                int m_iAmmo = 0x2d78;
        }

        namespace DT_BaseFlex {
                int m_blinktoggle = 0x2bd4;
                int m_viewtarget = 0x29f0;
        }

        namespace m_flexWeight {
                int m_flexWeight = 0x2a28;
        }

        namespace DT_BaseEntity {
                int m_flSimulationTime = 0x268;
                int m_cellbits = 0x74;
                int m_cellX = 0x7c;
                int m_cellY = 0x80;
                int m_cellZ = 0x84;
                int m_vecOrigin = 0x138;
                int m_angRotation = 0x12c;
                int m_nModelIndex = 0x258;
                int m_fEffects = 0xf0;
                int m_nRenderMode = 0x25b;
                int m_nRenderFX = 0x25a;
                int m_clrRender = 0x70;
                int m_iTeamNum = 0xf4;
                int m_iPendingTeamNum = 0xf8;
                int m_CollisionGroup = 0x474;
                int m_flElasticity = 0x300;
                int m_flShadowCastDistance = 0x3a0;
                int m_hOwnerEntity = 0x14c;
                int m_hEffectEntity = 0x998;
                int moveparent = 0x148;
                int m_iParentAttachment = 0x2ec;
                int m_iName = 0x154;
                int movetype = 0x0;
                int movecollide = 0x0;
                int m_iTextureFrameIndex = 0x98c;
                int m_bSimulatedEveryTick = 0x93a;
                int m_bAnimatedEveryTick = 0x93b;
                int m_bAlternateSorting = 0x93c;
                int m_bSpotted = 0x93d;
                int m_bIsAutoaimTarget = 0x60;
                int m_fadeMinDist = 0x2f4;
                int m_fadeMaxDist = 0x2f8;
                int m_flFadeScale = 0x2fc;
                int m_nMinCPULevel = 0x988;
                int m_nMaxCPULevel = 0x989;
                int m_nMinGPULevel = 0x98a;
                int m_nMaxGPULevel = 0x98b;
                int m_flUseLookAtAngle = 0x2cc;
                int m_flLastMadeNoiseTime = 0x20;
                int m_flMaxFallVelocity = 0xdc;
                int m_bEligibleForScreenHighlight = 0x9b9;
        }

        namespace DT_AnimTimeMustBeFirst {
                int m_flAnimTime = 0x260;
        }

        namespace DT_CollisionProperty {
                int m_vecMins = 0x8;
                int m_vecMaxs = 0x14;
                int m_nSolidType = 0x22;
                int m_usSolidFlags = 0x20;
                int m_nSurroundType = 0x2a;
                int m_triggerBloat = 0x23;
                int m_vecSpecifiedSurroundingMins = 0x2c;
                int m_vecSpecifiedSurroundingMaxs = 0x38;
        }

        namespace m_bSpottedBy {
        }

        namespace m_bSpottedByMask {
                int AnimTimeMustBeFirst = 0x0;
                int m_Collision = 0x320;
                int m_bSpottedBy = 0x93e;
                int m_bSpottedByMask = 0x980;
        }

        namespace DT_BaseDoor {
                int m_flWaveHeight = 0xa08;
        }

        namespace DT_BaseCombatCharacter {
                int m_LastHitGroup = 0x2d74;
                int m_hActiveWeapon = 0x2ef8;
                int m_flTimeOfLastInjury = 0x2efc;
                int m_nRelativeDirectionOfLastInjury = 0x2f00;
        }

        namespace DT_BCCLocalPlayerExclusive {
                int m_flNextAttack = 0x2d70;
        }

        namespace DT_BCCNonLocalPlayerExclusive {
        }

        namespace m_hMyWeapons {
                int m_hMyWeapons = 0x2df8;
        }

        namespace m_hMyWeapons {
        }

        namespace m_hMyWearables {
                int bcc_localdata = 0x0;
                int bcc_nonlocaldata = 0x0;
                int m_hMyWeapons = 0x2df8;
                int m_hMyWearables = 0x2f04;
        }

        namespace DT_BoneFollower {
                int m_modelIndex = 0x9d8;
                int m_solidIndex = 0x9dc;
        }

        namespace DT_BaseAnimating {
                int m_nSequence = 0x28bc;
                int m_nForceBone = 0x268c;
                int m_vecForce = 0x2680;
                int m_nSkin = 0xa1c;
                int m_nBody = 0xa20;
                int m_nHitboxSet = 0x9fc;
                int m_flModelScale = 0x2748;
                int m_flPlaybackRate = 0xa18;
                int m_bClientSideAnimation = 0x289c;
                int m_bClientSideFrameReset = 0x26c0;
                int m_bClientSideRagdoll = 0x279;
                int m_nNewSequenceParity = 0xa44;
                int m_nResetEventsParity = 0xa48;
                int m_nMuzzleFlashParity = 0xa64;
                int m_hLightingOrigin = 0x2944;
                int m_flFrozen = 0x26f8;
                int m_ScaleType = 0x274c;
                int m_bSuppressAnimSounds = 0x294a;
                int m_nHighlightColorR = 0xa38;
                int m_nHighlightColorG = 0xa3c;
                int m_nHighlightColorB = 0xa40;
        }

        namespace m_flPoseParameter {
        }

        namespace m_flEncodedController {
        }

        namespace DT_ServerAnimationData {
                int m_flCycle = 0xa14;
                int m_flPoseParameter = 0x2774;
                int m_flEncodedController = 0xa54;
                int serveranimdata = 0x0;
        }

        namespace DT_AI_BaseNPC {
                int m_lifeState = 0x25f;
                int m_bPerformAvoidance = 0x2f24;
                int m_bIsMoving = 0x2f25;
                int m_bFadeCorpse = 0x2f26;
                int m_iDeathPose = 0x2f14;
                int m_iDeathFrame = 0x2f18;
                int m_iSpeedModRadius = 0x2f1c;
                int m_iSpeedModSpeed = 0x2f20;
                int m_bSpeedModActive = 0x2f27;
                int m_bImportanRagdoll = 0x2f28;
                int m_flTimePingEffect = 0x2f10;
        }

        namespace DT_Beam {
                int m_nBeamType = 0x9f4;
                int m_nBeamFlags = 0x9f8;
                int m_nNumBeamEnts = 0x9e8;
                int m_nHaloIndex = 0x9f0;
                int m_fHaloScale = 0xa58;
                int m_fWidth = 0xa4c;
                int m_fEndWidth = 0xa50;
                int m_fFadeLength = 0xa54;
                int m_fAmplitude = 0xa5c;
                int m_fStartFrame = 0xa60;
                int m_fSpeed = 0xa64;
                int m_flFrameRate = 0x9d8;
                int m_flHDRColorScale = 0x9dc;
                int m_clrRender = 0x70;
                int m_nRenderFX = 0x25a;
                int m_nRenderMode = 0x25b;
                int m_flFrame = 0xa68;
                int m_nClipStyle = 0xa6c;
                int m_vecEndPos = 0xa70;
                int m_nModelIndex = 0x258;
                int m_vecOrigin = 0x138;
                int moveparent = 0x148;
        }

        namespace m_hAttachEntity {
        }

        namespace m_nAttachIndex {
                int m_hAttachEntity = 0x9fc;
                int m_nAttachIndex = 0xa24;
        }

        namespace DT_BaseViewModel {
                int m_nModelIndex = 0x258;
                int m_hWeapon = 0x29c8;
                int m_nSkin = 0xa1c;
                int m_nBody = 0xa20;
                int m_nSequence = 0x28bc;
                int m_nViewModelIndex = 0x29c0;
                int m_flPlaybackRate = 0xa18;
                int m_fEffects = 0xf0;
                int m_nAnimationParity = 0x29c4;
                int m_hOwner = 0x29cc;
                int m_nNewSequenceParity = 0xa44;
                int m_nResetEventsParity = 0xa48;
                int m_nMuzzleFlashParity = 0xa64;
                int m_bShouldIgnoreOffsetAndAccuracy = 0x2990;
        }

        namespace DT_BaseGrenade {
                int m_flDamage = 0x2998;
                int m_DmgRadius = 0x2984;
                int m_bIsLive = 0x2981;
                int m_hThrower = 0x29a0;
                int m_vecVelocity = 0x114;
                int m_fFlags = 0x104;
        }

        namespace DT_BaseCombatWeapon {
                int m_iViewModelIndex = 0x3240;
                int m_iWorldModelIndex = 0x3244;
                int m_iWorldDroppedModelIndex = 0x3248;
                int m_iState = 0x3258;
                int m_hOwner = 0x3230;
                int m_iClip1 = 0x3264;
                int m_iClip2 = 0x3268;
                int m_iPrimaryReserveAmmoCount = 0x326c;
                int m_iSecondaryReserveAmmoCount = 0x3270;
                int m_hWeaponWorldModel = 0x3254;
                int m_iNumEmptyAttacks = 0x3250;
        }

        namespace DT_LocalWeaponData {
                int m_iPrimaryAmmoType = 0x325c;
                int m_iSecondaryAmmoType = 0x3260;
                int m_nViewModelIndex = 0x3234;
                int m_bFlipViewModel = 0x32c4;
                int m_iWeaponOrigin = 0x32c8;
                int m_iWeaponModule = 0x324c;
        }

        namespace DT_LocalActiveWeaponData {
                int m_flNextPrimaryAttack = 0x3238;
                int m_flNextSecondaryAttack = 0x323c;
                int m_nNextThinkTick = 0xfc;
                int m_flTimeWeaponIdle = 0x3274;
                int LocalWeaponData = 0x0;
                int LocalActiveWeaponData = 0x0;
        }

        namespace DT_BaseWeaponWorldModel {
                int m_nModelIndex = 0x258;
                int m_nBody = 0xa20;
                int m_fEffects = 0xf0;
                int moveparent = 0x148;
                int m_hCombatWeaponParent = 0x29f0;
        }
}
