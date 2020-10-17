#pragma once
// Updated on Oct 17 2020
// Dumped by KittenPopo

namespace Offsets {
	namespace DT_TestTraceline {
		int clrRender = 0x70;
		int vecOrigin = 0x138;
		int angRotation0 = 0x12c;
		int angRotation1 = 0x130;
		int angRotation2 = 0x134;
		int oveparent = 0x148;
	}

	namespace DT_TEWorldDecal {
		int vecOrigin = 0x10;
		int nIndex = 0x1c;
	}

	namespace DT_TESpriteSpray {
		int vecOrigin = 0x10;
		int vecDirection = 0x1c;
		int nModelIndex = 0x28;
		int fNoise = 0x30;
		int nCount = 0x34;
		int nSpeed = 0x2c;
	}

	namespace DT_TESprite {
		int vecOrigin = 0x10;
		int nModelIndex = 0x1c;
		int fScale = 0x20;
		int nBrightness = 0x24;
	}

	namespace DT_TESparks {
		int nMagnitude = 0x1c;
		int nTrailLength = 0x20;
		int vecDir = 0x24;
	}

	namespace DT_TESmoke {
		int vecOrigin = 0x10;
		int nModelIndex = 0x1c;
		int fScale = 0x20;
		int nFrameRate = 0x24;
	}

	namespace DT_TEShowLine {
		int vecEnd = 0x1c;
	}

	namespace DT_TEProjectedDecal {
		int vecOrigin = 0x10;
		int angRotation = 0x1c;
		int flDistance = 0x28;
		int nIndex = 0x2c;
	}

	namespace DT_FEPlayerDecal {
		int nUniqueID = 0x9d8;
		int unAccountID = 0x9dc;
		int unTraceID = 0x9e0;
		int rtGcTime = 0x9e4;
		int vecEndPos = 0x9e8;
		int vecStart = 0x9f4;
		int vecRight = 0xa00;
		int vecNormal = 0xa0c;
		int nEntity = 0xa1c;
		int nPlayer = 0xa18;
		int nHitbox = 0xa20;
		int nTintID = 0xa24;
		int flCreationTime = 0xa28;
		int nVersion = 0xa2c;
		int ubSignature = 0xa2d;
	}

	namespace DT_TEPlayerDecal {
		int vecOrigin = 0x14;
		int vecStart = 0x20;
		int vecRight = 0x2c;
		int nEntity = 0x38;
		int nPlayer = 0x10;
		int nHitbox = 0x3c;
	}

	namespace DT_TEPhysicsProp {
		int vecOrigin = 0x10;
		int angRotation0 = 0x1c;
		int angRotation1 = 0x20;
		int angRotation2 = 0x24;
		int vecVelocity = 0x28;
		int nModelIndex = 0x34;
		int nFlags = 0x3c;
		int nSkin = 0x38;
		int nEffects = 0x40;
		int clrRender = 0x44;
	}

	namespace DT_TEParticleSystem {
		int vecOrigin0 = 0x10;
		int vecOrigin1 = 0x14;
		int vecOrigin2 = 0x18;
	}

	namespace DT_TEMuzzleFlash {
		int vecOrigin = 0x10;
		int vecAngles = 0x1c;
		int flScale = 0x28;
		int nType = 0x2c;
	}

	namespace DT_TELargeFunnel {
		int nModelIndex = 0x1c;
		int nReversed = 0x20;
	}

	namespace DT_TEKillPlayerAttachments {
		int nPlayer = 0x10;
	}

	namespace DT_TEImpact {
		int vecOrigin = 0x10;
		int vecNormal = 0x1c;
		int iType = 0x28;
		int ucFlags = 0x2c;
	}

	namespace DT_TEGlowSprite {
		int vecOrigin = 0x10;
		int nModelIndex = 0x1c;
		int fScale = 0x20;
		int fLife = 0x24;
		int nBrightness = 0x28;
	}

	namespace DT_TEShatterSurface {
		int vecOrigin = 0x10;
		int vecAngles = 0x1c;
		int vecForce = 0x28;
		int vecForcePos = 0x34;
		int flWidth = 0x40;
		int flHeight = 0x44;
		int flShardSize = 0x48;
		int nSurfaceType = 0x50;
		int uchFrontColor0 = 0x54;
		int uchFrontColor1 = 0x55;
		int uchFrontColor2 = 0x56;
		int uchBackColor0 = 0x57;
		int uchBackColor1 = 0x58;
		int uchBackColor2 = 0x59;
	}

	namespace DT_TEFootprintDecal {
		int vecOrigin = 0x10;
		int vecDirection = 0x1c;
		int nEntity = 0x34;
		int nIndex = 0x38;
		int chMaterialType = 0x3c;
	}

	namespace DT_TEFizz {
		int nEntity = 0x10;
		int nModelIndex = 0x14;
		int nDensity = 0x18;
		int nCurrent = 0x1c;
	}

	namespace DT_TEExplosion {
		int nModelIndex = 0x1c;
		int fScale = 0x20;
		int nFrameRate = 0x24;
		int nFlags = 0x28;
		int vecNormal = 0x2c;
		int chMaterialType = 0x38;
		int nRadius = 0x3c;
		int nMagnitude = 0x40;
	}

	namespace DT_TEEnergySplash {
		int vecPos = 0x10;
		int vecDir = 0x1c;
		int bExplosive = 0x28;
	}

	namespace DT_TEDynamicLight {
		int vecOrigin = 0x10;
		int r = 0x20;
		int g = 0x24;
		int b = 0x28;
		int exponent = 0x2c;
		int fRadius = 0x1c;
		int fTime = 0x30;
		int fDecay = 0x34;
	}

	namespace DT_TEDecal {
		int vecOrigin = 0x10;
		int vecStart = 0x1c;
		int nEntity = 0x28;
		int nHitbox = 0x2c;
		int nIndex = 0x30;
	}

	namespace DT_TEClientProjectile {
		int vecOrigin = 0x10;
		int vecVelocity = 0x1c;
		int nModelIndex = 0x28;
		int nLifeTime = 0x2c;
		int hOwner = 0x30;
	}

	namespace DT_TEBubbleTrail {
		int vecMins = 0x10;
		int vecMaxs = 0x1c;
		int nModelIndex = 0x2c;
		int flWaterZ = 0x28;
		int nCount = 0x30;
		int fSpeed = 0x34;
	}

	namespace DT_TEBubbles {
		int vecMins = 0x10;
		int vecMaxs = 0x1c;
		int nModelIndex = 0x2c;
		int fHeight = 0x28;
		int nCount = 0x30;
		int fSpeed = 0x34;
	}

	namespace DT_TEBSPDecal {
		int vecOrigin = 0x10;
		int nEntity = 0x1c;
		int nIndex = 0x20;
	}

	namespace DT_TEBreakModel {
		int vecOrigin = 0x10;
		int angRotation0 = 0x1c;
		int angRotation1 = 0x20;
		int angRotation2 = 0x24;
		int vecSize = 0x28;
		int vecVelocity = 0x34;
		int nModelIndex = 0x44;
		int nRandomization = 0x40;
		int nCount = 0x48;
		int fTime = 0x4c;
		int nFlags = 0x50;
	}

	namespace DT_TEBloodStream {
		int vecDirection = 0x1c;
		int r = 0x28;
		int g = 0x2c;
		int b = 0x30;
		int a = 0x34;
		int nAmount = 0x38;
	}

	namespace DT_TEBloodSprite {
		int vecOrigin = 0x10;
		int vecDirection = 0x1c;
		int r = 0x28;
		int g = 0x2c;
		int b = 0x30;
		int a = 0x34;
		int nSprayModel = 0x3c;
		int nDropModel = 0x38;
		int nSize = 0x40;
	}

	namespace DT_TEBeamSpline {
		int nPoints = 0xd0;
		int vecPoints0 = 0x10;
		int vecPoints = 0x0;
	}

	namespace DT_TEBeamRingPoint {
		int vecCenter = 0x4c;
		int flStartRadius = 0x58;
		int flEndRadius = 0x5c;
	}

	namespace DT_TEBeamRing {
		int nStartEntity = 0x4c;
		int nEndEntity = 0x50;
	}

	namespace DT_TEBeamPoints {
		int vecStartPoint = 0x4c;
		int vecEndPoint = 0x58;
	}

	namespace DT_TEBeamLaser {
		int nStartEntity = 0x4c;
		int nEndEntity = 0x50;
	}

	namespace DT_TEBeamFollow {
		int iEntIndex = 0x4c;
	}

	namespace DT_TEBeamEnts {
		int nStartEntity = 0x4c;
		int nEndEntity = 0x50;
	}

	namespace DT_TEBeamEntPoint {
		int nStartEntity = 0x4c;
		int nEndEntity = 0x50;
		int vecStartPoint = 0x54;
		int vecEndPoint = 0x60;
	}

	namespace DT_BaseBeam {
		int nModelIndex = 0x10;
		int nHaloIndex = 0x14;
		int nStartFrame = 0x18;
		int nFrameRate = 0x1c;
		int fLife = 0x20;
		int fWidth = 0x24;
		int fEndWidth = 0x28;
		int nFadeLength = 0x2c;
		int fAmplitude = 0x30;
		int nSpeed = 0x44;
		int r = 0x34;
		int g = 0x38;
		int b = 0x3c;
		int a = 0x40;
		int nFlags = 0x48;
	}

	namespace DT_TEMetalSparks {
		int vecPos = 0x10;
		int vecDir = 0x1c;
	}

	namespace DT_SteamJet {
		int SpreadSpeed = 0xac4;
		int Speed = 0xac8;
		int StartSize = 0xacc;
		int EndSize = 0xad0;
		int Rate = 0xad4;
		int JetLength = 0xad8;
		int bEmit = 0xadc;
		int bFaceLeft = 0xae4;
		int nType = 0xae0;
		int spawnflags = 0xae8;
		int flRollSpeed = 0xaec;
	}

	namespace DT_SmokeStack {
		int SpreadSpeed = 0xb14;
		int Speed = 0xb18;
		int StartSize = 0xb1c;
		int EndSize = 0xb20;
		int Rate = 0xb24;
		int JetLength = 0xb28;
		int bEmit = 0xb2c;
		int flBaseSpread = 0xb30;
		int flTwist = 0xb84;
		int flRollSpeed = 0xbc0;
		int iMaterialModel = 0xb88;
		int AmbientLightm_vPos = 0xb34;
		int AmbientLightm_vColor = 0xb40;
		int AmbientLightm_flIntensity = 0xb4c;
		int DirLightm_vPos = 0xb50;
		int DirLightm_vColor = 0xb5c;
		int DirLightm_flIntensity = 0xb68;
		int vWind = 0xb78;
	}

	namespace DT_DustTrail {
		int SpawnRate = 0xac4;
		int Color = 0xac8;
		int ParticleLifetime = 0xad8;
		int StopEmitTime = 0xae0;
		int MinSpeed = 0xae4;
		int MaxSpeed = 0xae8;
		int MinDirectedSpeed = 0xaec;
		int MaxDirectedSpeed = 0xaf0;
		int StartSize = 0xaf4;
		int EndSize = 0xaf8;
		int SpawnRadius = 0xafc;
		int bEmit = 0xb0c;
		int Opacity = 0xad4;
	}

	namespace DT_FireTrail {
		int nAttachment = 0xac4;
		int flLifetime = 0xac8;
	}

	namespace DT_SporeTrail {
		int flSpawnRate = 0xacc;
		int vecEndColor = 0xac0;
		int flParticleLifetime = 0xad0;
		int flStartSize = 0xad4;
		int flEndSize = 0xad8;
		int flSpawnRadius = 0xadc;
		int bEmit = 0xaec;
	}

	namespace DT_SporeExplosion {
		int flSpawnRate = 0xac4;
		int flParticleLifetime = 0xac8;
		int flStartSize = 0xacc;
		int flEndSize = 0xad0;
		int flSpawnRadius = 0xad4;
		int bEmit = 0xadc;
		int bDontRemove = 0xadd;
	}

	namespace DT_RocketTrail {
		int SpawnRate = 0xac4;
		int StartColor = 0xac8;
		int EndColor = 0xad4;
		int ParticleLifetime = 0xae4;
		int StopEmitTime = 0xae8;
		int MinSpeed = 0xaec;
		int MaxSpeed = 0xaf0;
		int StartSize = 0xaf4;
		int EndSize = 0xaf8;
		int SpawnRadius = 0xafc;
		int bEmit = 0xb0c;
		int nAttachment = 0xb10;
		int Opacity = 0xae0;
		int bDamaged = 0xb0d;
		int flFlareScale = 0xb20;
	}

	namespace DT_SmokeTrail {
		int SpawnRate = 0xac4;
		int StartColor = 0xac8;
		int EndColor = 0xad4;
		int ParticleLifetime = 0xae4;
		int StopEmitTime = 0xae8;
		int MinSpeed = 0xaec;
		int MaxSpeed = 0xaf0;
		int MinDirectedSpeed = 0xaf4;
		int MaxDirectedSpeed = 0xaf8;
		int StartSize = 0xafc;
		int EndSize = 0xb00;
		int SpawnRadius = 0xb04;
		int bEmit = 0xb14;
		int nAttachment = 0xb18;
		int Opacity = 0xae0;
	}

	namespace DT_PropVehicleDriveable {
		int hPlayer = 0x2984;
		int nSpeed = 0x2988;
		int nRPM = 0x298c;
		int flThrottle = 0x2990;
		int nBoostTimeLeft = 0x2994;
		int nHasBoost = 0x2998;
		int nScannerDisabledWeapons = 0x299c;
		int nScannerDisabledVehicle = 0x29a0;
		int bEnterAnimOn = 0x29c0;
		int bExitAnimOn = 0x29c1;
		int bUnableToFire = 0x2a0d;
		int vecEyeExitEndpoint = 0x2a00;
		int bHasGun = 0x2a0c;
		int vecGunCrosshair = 0x29c8;
	}

	namespace DT_ParticleSmokeGrenade {
		int flSpawnTime = 0xad4;
		int FadeStartTime = 0xad8;
		int FadeEndTime = 0xadc;
		int MinColor = 0xae4;
		int MaxColor = 0xaf0;
		int CurrentStage = 0xac4;
	}

	namespace DT_ParticleFire {
		int vOrigin = 0xacc;
		int vDirection = 0xad8;
	}

	namespace DT_TEGaussExplosion {
		int nType = 0x1c;
		int vecDirection = 0x20;
	}

	namespace DT_QuadraticBeam {
		int targetPosition = 0x9d8;
		int controlPosition = 0x9e4;
		int scrollRate = 0x9f0;
		int flWidth = 0x9f4;
	}

	namespace DT_Embers {
		int nDensity = 0x9d8;
		int nLifetime = 0x9dc;
		int nSpeed = 0x9e0;
		int bEmit = 0x9e4;
	}

	namespace DT_Precipitation {
		int nPrecipType = 0xa00;
	}

	namespace DT_BaseAttributableItem {
		int OriginalOwnerXuidLow = 0x31c0;
		int OriginalOwnerXuidHigh = 0x31c4;
		int nFallbackPaintKit = 0x31c8;
		int nFallbackSeed = 0x31cc;
		int flFallbackWear = 0x31d0;
		int nFallbackStatTrak = 0x31d4;
	}

	namespace DT_AttributeContainer {
		int hOuter = 0x1c;
		int ProviderType = 0x24;
		int iReapplyProvisionParity = 0x18;
	}

	namespace DT_ScriptCreatedItem {
		int iItemDefinitionIndex = 0x1ea;
		int iEntityLevel = 0x1f0;
		int iItemIDHigh = 0x200;
		int iItemIDLow = 0x204;
		int iAccountID = 0x208;
		int iEntityQuality = 0x1ec;
		int bInitialized = 0x214;
		int szCustomName = 0x27c;
	}

	namespace DT_AttributeList {
	}

	namespace _ST_m_Attributes_32 {
	}

	namespace _LPT_m_Attributes_32 {
		int lengthprop32 = 0x0;
		int lengthproxy = 0x0;
		int Attributes = 0x0;
		int NetworkedDynamicAttributesForDemos = 0x260;
		int Item = 0x40;
		int AttributeManager = 0x2d80;
	}

	namespace DT_EconEntity {
		int OriginalOwnerXuidLow = 0x31c0;
		int OriginalOwnerXuidHigh = 0x31c4;
		int nFallbackPaintKit = 0x31c8;
		int nFallbackSeed = 0x31cc;
		int flFallbackWear = 0x31d0;
		int nFallbackStatTrak = 0x31d4;
	}

	namespace DT_AttributeContainer {
		int hOuter = 0x1c;
		int ProviderType = 0x24;
		int iReapplyProvisionParity = 0x18;
	}

	namespace DT_ScriptCreatedItem {
		int iItemDefinitionIndex = 0x1ea;
		int iEntityLevel = 0x1f0;
		int iItemIDHigh = 0x200;
		int iItemIDLow = 0x204;
		int iAccountID = 0x208;
		int iEntityQuality = 0x1ec;
		int bInitialized = 0x214;
		int szCustomName = 0x27c;
	}

	namespace DT_AttributeList {
	}

	namespace _ST_m_Attributes_32 {
	}

	namespace _LPT_m_Attributes_32 {
		int lengthprop32 = 0x0;
		int lengthproxy = 0x0;
		int Attributes = 0x0;
		int NetworkedDynamicAttributesForDemos = 0x260;
		int Item = 0x40;
		int AttributeManager = 0x2d80;
	}

	namespace DT_WeaponXM1014 {
		int reloadState = 0x33d4;
	}

	namespace DT_WeaponTaser {
		int fFireTime = 0x33f0;
	}

	namespace DT_WeaponTablet {
		int flUpgradeExpirationTime0 = 0x33d8;
		int flUpgradeExpirationTime = 0x0;
		int vecLocalHexFlags0 = 0x33e8;
		int vecLocalHexFlags = 0x0;
		int nContractKillGridIndex = 0x3490;
		int nContractKillGridHighResIndex = 0x3494;
		int bTabletReceptionIsBlocked = 0x3498;
		int flScanProgress = 0x349c;
		int flBootTime = 0x34a0;
		int flShowMapTime = 0x34a4;
		int vecNotificationIds0 = 0x34b4;
		int vecNotificationIds = 0x0;
		int vecNotificationTimestamps0 = 0x34d4;
		int vecNotificationTimestamps = 0x0;
		int vecPlayerPositionHistory0 = 0x34f8;
		int vecPlayerPositionHistory = 0x0;
		int nLastPurchaseIndex = 0x34f4;
		int vecNearestMetalCratePos = 0x34a8;
	}

	namespace DT_WeaponSawedoff {
		int reloadState = 0x33d4;
	}

	namespace DT_WeaponNOVA {
		int reloadState = 0x33d4;
	}

	namespace DT_WeaponMelee {
		int flThrowAt = 0x33d0;
	}

	namespace DT_WeaponM3 {
		int reloadState = 0x33d4;
	}

	namespace DT_WeaponFists {
		int bPlayingUninterruptableAct = 0x33d0;
	}

	namespace DT_WeaponCSBaseGun {
		int zoomLevel = 0x33d0;
		int iBurstShotsRemaining = 0x33d4;
	}

	namespace DT_WeaponCSBase {
		int weaponMode = 0x3318;
		int fAccuracyPenalty = 0x3330;
		int fLastShotTime = 0x33a8;
		int iRecoilIndex = 0x3340;
		int flRecoilIndex = 0x3344;
		int hPrevOwner = 0x3384;
		int bBurstMode = 0x3348;
		int flPostponeFireReadyTime = 0x334c;
		int bReloadVisuallyComplete = 0x3350;
		int bSilencerOn = 0x3351;
		int flDoneSwitchingSilencer = 0x3354;
		int iOriginalTeamNumber = 0x335c;
		int iIronSightMode = 0x33c4;
	}

	namespace DT_WeaponC4 {
		int bStartedArming = 0x33f0;
		int bBombPlacedAnimation = 0x33f8;
		int fArmedTime = 0x33f4;
		int bShowC4LED = 0x33f9;
		int bIsPlantingViaUse = 0x33fa;
	}

	namespace DT_BumpMineProjectile {
		int nParentBoneIndex = 0x29d4;
		int vecParentBonePos = 0x29d8;
		int bArmed = 0x29e4;
	}

	namespace DT_BreachChargeProjectile {
		int bShouldExplode = 0x29d0;
		int weaponThatThrewMe = 0x29d4;
		int nParentBoneIndex = 0x29d8;
		int vecParentBonePos = 0x29dc;
	}

	namespace DT_WeaponBaseItem {
		int bRedraw = 0x33dc;
	}

	namespace DT_BaseCSGrenade {
		int bRedraw = 0x33d0;
		int bIsHeldByPlayer = 0x33d1;
		int bPinPulled = 0x33d2;
		int fThrowTime = 0x33d4;
		int bLoopingSoundPlaying = 0x33d8;
		int flThrowStrength = 0x33dc;
	}

	namespace DT_SmokeGrenadeProjectile {
		int bDidSmokeEffect = 0x2a14;
		int nSmokeEffectTickBegin = 0x2a10;
	}

	namespace DT_MolotovProjectile {
		int bIsIncGrenade = 0x2a10;
	}

	namespace DT_ItemDogtags {
		int OwningPlayer = 0x3440;
		int KillingPlayer = 0x3444;
	}

	namespace DT_PhysPropLootCrate {
		int bRenderInPSPM = 0x29f4;
		int bRenderInTablet = 0x29f5;
		int iHealth = 0x100;
		int iMaxHealth = 0x29f8;
	}

	namespace DT_EnvGasCanister {
		int flFlightSpeed = 0x29f4;
		int flLaunchTime = 0x29f8;
		int vecParabolaDirection = 0x2a0c;
		int flFlightTime = 0x29f0;
		int flWorldEnterTime = 0x2a18;
		int flInitialZSpeed = 0x29fc;
		int flZAcceleration = 0x2a00;
		int flHorizSpeed = 0x2a04;
		int bLaunchedFromWithinWorld = 0x2a08;
		int vecImpactPosition = 0x29b4;
		int vecStartPosition = 0x29c0;
		int vecEnterWorldPosition = 0x29cc;
		int vecDirection = 0x29d8;
		int vecStartAngles = 0x29e4;
		int vecSkyboxOrigin = 0x2a1c;
		int flSkyboxScale = 0x2a28;
		int bInSkybox = 0x2a2c;
		int bDoImpactEffects = 0x2a2d;
		int bLanded = 0x2980;
		int hSkyboxCopy = 0x29a8;
		int nMyZoneIndex = 0x2a30;
		int vecOrigin = 0x138;
		int vecOrigin2 = 0x140;
	}

	namespace DT_Dronegun {
		int vecAttentionTarget = 0x2980;
		int vecTargetOffset = 0x298c;
		int iHealth = 0x100;
		int bHasTarget = 0x2998;
	}

	namespace DT_ParadropChopper {
		int vecOrigin = 0x138;
		int vecOrigin2 = 0x140;
		int hCallingPlayer = 0x2990;
	}

	namespace DT_SurvivalSpawnChopper {
		int vecOrigin = 0x138;
		int vecOrigin2 = 0x140;
	}

	namespace DT_BRC4Target {
		int bBrokenOpen = 0x2984;
		int flRadius = 0x2988;
	}

	namespace DT_InfoMapRegion {
		int flRadius = 0x9d8;
		int szLocToken = 0x9dc;
	}

	namespace DT_Inferno {
		int nFireEffectTickBegin = 0x13b4;
		int fireCount = 0x13a8;
		int fireXDelta = 0x9e4;
		int fireYDelta = 0xb74;
		int fireZDelta = 0xd04;
		int bFireIsBurning = 0xe94;
	}

	namespace DT_CChicken {
		int jumpedThisFrame = 0x29e8;
		int leader = 0x29ec;
	}

	namespace DT_Drone {
		int hMoveToThisEntity = 0x29d8;
		int hDeliveryCargo = 0x29dc;
		int bPilotTakeoverAllowed = 0x29e0;
		int hPotentialCargo = 0x29e4;
		int hCurrentPilot = 0x29e8;
		int vecTagPositions0 = 0x29ec;
		int vecTagPositions = 0x0;
		int vecTagIncrements0 = 0x2b0c;
		int vecTagIncrements = 0x0;
	}

	namespace DT_FootstepControl {
		int source = 0xa10;
		int destination = 0xa20;
	}

	namespace DT_TEPlantBomb {
		int vecOrigin = 0x14;
		int iPlayer = 0x10;
		int option = 0x20;
	}

	namespace DT_TEFireBullets {
		int vecOrigin = 0x18;
		int vecAngles0 = 0x24;
		int vecAngles1 = 0x28;
		int iWeaponID = 0x34;
		int weapon = 0x30;
		int iMode = 0x38;
		int iSeed = 0x3c;
		int iPlayer = 0x10;
		int fInaccuracy = 0x40;
		int fSpread = 0x48;
		int nItemDefIndex = 0x14;
		int iSoundType = 0x4c;
		int flRecoilIndex = 0x44;
	}

	namespace DT_TERadioIcon {
		int iAttachToClient = 0x10;
	}

	namespace DT_PlantedC4 {
		int bBombTicking = 0x2980;
		int nBombSite = 0x2984;
		int flC4Blow = 0x2990;
		int flTimerLength = 0x2994;
		int flDefuseLength = 0x29a8;
		int flDefuseCountDown = 0x29ac;
		int bBombDefused = 0x29b0;
		int hBombDefuser = 0x29b4;
	}

	namespace DT_CSPlayerResource {
		int iPlayerC4 = 0x165c;
		int iPlayerVIP = 0x1660;
		int bombsiteCenterA = 0x1664;
		int bombsiteCenterB = 0x1670;
		int bEndMatchNextMapAllVoted = 0x6b8c;
		int bHostageAlive = 0x167c;
		int isHostageFollowingSomeone = 0x1688;
		int iHostageEntityIDs = 0x1694;
		int hostageRescueX = 0x16c4;
		int hostageRescueY = 0x16d4;
		int hostageRescueZ = 0x16e4;
		int iMVPs = 0x16f4;
		int iArmor = 0x187c;
		int bHasHelmet = 0x1839;
		int bHasDefuser = 0x17f8;
		int iScore = 0x1980;
		int iCompetitiveRanking = 0x1a84;
		int iCompetitiveWins = 0x1b88;
		int iCompetitiveRankType = 0x1c8c;
		int iCompTeammateColor = 0x1cd0;
		int iLifetimeStart = 0x1dd4;
		int iLifetimeEnd = 0x1ed8;
		int bControllingBot = 0x1fdc;
		int iControlledPlayer = 0x2020;
		int iControlledByPlayer = 0x2124;
		int iBotDifficulty = 0x42a8;
		int szClan = 0x43ac;
		int nCharacterDefIndex = 0x47bc;
		int iTotalCashSpent = 0x48c0;
		int iGunGameLevel = 0x49c4;
		int iCashSpentThisRound = 0x4ac8;
		int nEndMatchNextMapVotes = 0x6a88;
		int nActiveCoinRank = 0x4bcc;
		int nMusicID = 0x4cd0;
		int nPersonaDataPublicLevel = 0x4dd4;
		int nPersonaDataPublicCommendsLeader = 0x4ed8;
		int nPersonaDataPublicCommendsTeacher = 0x4fdc;
		int nPersonaDataPublicCommendsFriendly = 0x50e0;
		int bHasCommunicationAbuseMute = 0x51e4;
		int szCrosshairCodes = 0x5225;
		int iMatchStats_Kills_Total = 0x5b08;
		int iMatchStats_5k_Total = 0x601c;
		int iMatchStats_4k_Total = 0x5f18;
		int iMatchStats_3k_Total = 0x5e14;
		int iMatchStats_Damage_Total = 0x6120;
		int iMatchStats_EquipmentValue_Total = 0x6224;
		int iMatchStats_KillReward_Total = 0x6328;
		int iMatchStats_LiveTime_Total = 0x642c;
		int iMatchStats_Deaths_Total = 0x5d10;
		int iMatchStats_Assists_Total = 0x5c0c;
		int iMatchStats_HeadShotKills_Total = 0x6530;
		int iMatchStats_Objective_Total = 0x6634;
		int iMatchStats_CashEarned_Total = 0x6738;
		int iMatchStats_UtilityDamage_Total = 0x683c;
		int iMatchStats_EnemiesFlashed_Total = 0x6940;
	}

	namespace DT_CSPlayer {
		int angEyeAngles0 = 0xb37c;
		int angEyeAngles1 = 0xb380;
		int iAddonBits = 0xa374;
		int iPrimaryAddon = 0xa378;
		int iSecondaryAddon = 0xa37c;
		int iThrowGrenadeCounter = 0x396c;
		int bWaitForNoAttack = 0x3970;
		int bIsRespawningForDMBonus = 0x3971;
		int iPlayerState = 0x392c;
		int iAccount = 0xb364;
		int iStartAccount = 0xa3a4;
		int totalHitsOnServer = 0xa3a8;
		int bInBombZone = 0x3968;
		int bInBuyZone = 0x3969;
		int bInNoDefuseArea = 0x396a;
		int bKilledByTaser = 0x3981;
		int iMoveState = 0x3984;
		int iClass = 0xb374;
		int ArmorValue = 0xb378;
		int angEyeAngles = 0xb37c;
		int bHasDefuser = 0xb388;
		int bNightVisionOn = 0xa399;
		int bHasNightVision = 0xa39a;
		int bInHostageRescueZone = 0xb389;
		int bIsDefusing = 0x3930;
		int bIsGrabbingHostage = 0x3931;
		int iBlockingUseActionInProgress = 0x3934;
		int bIsScoped = 0x3928;
		int bIsWalking = 0x3929;
		int nIsAutoMounting = 0x3a98;
		int bResumeZoom = 0x392a;
		int fImmuneToGunGameDamageTime = 0x393c;
		int bGunGameImmunity = 0x3944;
		int bHasMovedSinceSpawn = 0x3945;
		int bMadeFinalGunGameProgressiveKill = 0x3946;
		int iGunGameProgressiveWeaponIndex = 0x3948;
		int iNumGunGameTRKillPoints = 0x394c;
		int iNumGunGameKillsWithCurrentWeapon = 0x3950;
		int iNumRoundKills = 0x3954;
		int fMolotovUseTime = 0x3960;
		int fMolotovDamageTime = 0x3964;
		int szArmsModel = 0x398b;
		int hCarriedHostage = 0xa3f8;
		int hCarriedHostageProp = 0xa3fc;
		int bIsRescuing = 0x3938;
		int flGroundAccelLinearFracLastTime = 0xa3a0;
		int bCanMoveDuringFreezePeriod = 0x3988;
		int isCurrentGunGameLeader = 0x3989;
		int isCurrentGunGameTeamLeader = 0x398a;
		int flGuardianTooFarDistFrac = 0x3974;
		int flDetectedByEnemySensorTime = 0x3978;
		int bIsPlayerGhost = 0x3a95;
		int bHasParachute = 0xb350;
		int unMusicID = 0xb354;
		int bHasHelmet = 0xb36c;
		int bHasHeavyArmor = 0xb36d;
		int nHeavyAssaultSuitCooldownRemaining = 0xb370;
		int flFlashDuration = 0xa420;
		int flFlashMaxAlpha = 0xa41c;
		int iProgressBarDuration = 0xa380;
		int flProgressBarStartTime = 0xa384;
		int hRagdoll = 0xa3ec;
		int hPlayerPing = 0xa3f0;
		int cycleLatch = 0xb48c;
		int unCurrentEquipmentValue = 0xb330;
		int unRoundStartEquipmentValue = 0xb332;
		int unFreezetimeEndEquipmentValue = 0xb334;
		int bIsControllingBot = 0xb9f9;
		int bHasControlledBotThisRound = 0xba08;
		int bCanControlObservedBot = 0xb9fa;
		int iControlledBotEntIndex = 0xb9fc;
		int vecAutomoveTargetEnd = 0x3aa8;
		int flAutoMoveStartTime = 0x3ab8;
		int flAutoMoveTargetTime = 0x3abc;
		int bIsAssassinationTarget = 0xb9f8;
		int bHud_MiniScoreHidden = 0xb3aa;
		int bHud_RadarHidden = 0xb3ab;
		int nLastKillerIndex = 0xb3ac;
		int nLastConcurrentKilled = 0xb3b0;
		int nDeathCamMusic = 0xb3b4;
		int bIsHoldingLookAtWeapon = 0xb921;
		int bIsLookingAtWeapon = 0xb920;
		int iNumRoundKillsHeadshots = 0x3958;
		int unTotalRoundDamageDealt = 0x395c;
		int flLowerBodyYawTarget = 0x3a90;
		int bStrafing = 0x3a94;
		int flThirdpersonRecoil = 0xb998;
		int bHideTargetID = 0xb99c;
		int bIsSpawnRappelling = 0xa3ad;
		int vecSpawnRappellingRopeOrigin = 0xa3b0;
		int nSurvivalTeam = 0xa3c0;
		int hSurvivalAssassinationTarget = 0xa3c4;
		int flHealthShotBoostExpirationTime = 0xa3c8;
		int flLastExoJumpTime = 0x3ac0;
	}

	namespace DT_CSLocalPlayerExclusive {
		int vecOrigin = 0x138;
		int vecOrigin2 = 0x140;
		int flStamina = 0xa388;
		int iDirection = 0xa38c;
		int iShotsFired = 0xa390;
		int nNumFastDucks = 0xa394;
		int bDuckOverride = 0xa398;
		int flVelocityModifier = 0xa39c;
		int unActiveQuestId = 0xb328;
		int nQuestProgressReason = 0xb32c;
		int bPlayerDominated = 0xb494;
		int bPlayerDominatingMe = 0xb4d5;
		int iWeaponPurchasesThisRound = 0xb518;
	}

	namespace DT_CSNonLocalPlayerExclusive {
		int vecOrigin = 0x138;
		int vecOrigin2 = 0x140;
	}

	namespace DT_CSTeamExclusive {
		int iWeaponPurchasesThisMatch = 0xaa7c;
		int EquippedLoadoutItemDefIndices = 0xb254;
		int cslocaldata = 0x0;
		int csnonlocaldata = 0x0;
		int csteamdata = 0x0;
		int iMatchStats_Kills = 0xa464;
		int iMatchStats_Damage = 0xa4dc;
		int iMatchStats_EquipmentValue = 0xa554;
		int iMatchStats_MoneySaved = 0xa5cc;
		int iMatchStats_KillReward = 0xa644;
		int iMatchStats_LiveTime = 0xa6bc;
		int iMatchStats_Deaths = 0xa734;
		int iMatchStats_Assists = 0xa7ac;
		int iMatchStats_HeadShotKills = 0xa824;
		int iMatchStats_Objective = 0xa89c;
		int iMatchStats_CashEarned = 0xa914;
		int iMatchStats_UtilityDamage = 0xa98c;
		int iMatchStats_EnemiesFlashed = 0xaa04;
		int rank = 0xb338;
		int passiveItems = 0xb350;
		int vecPlayerPatchEconIndices = 0xb970;
	}

	namespace DT_PlayerPing {
		int hPlayer = 0x9e4;
		int hPingedEntity = 0x9e8;
		int iType = 0x9ec;
	}

	namespace DT_CSRagdoll {
		int vecOrigin = 0x138;
		int vecRagdollOrigin = 0x2a0c;
		int hPlayer = 0x29f0;
		int nModelIndex = 0x258;
		int nForceBone = 0x268c;
		int vecForce = 0x2680;
		int vecRagdollVelocity = 0x2a00;
		int iDeathPose = 0x2a18;
		int iDeathFrame = 0x2a1c;
		int iTeamNum = 0xf4;
		int bClientSideAnimation = 0x289c;
		int flDeathYaw = 0x2a20;
		int flAbsYaw = 0x2a24;
	}

	namespace DT_TEPlayerAnimEvent {
		int hPlayer = 0x10;
		int iEvent = 0x14;
		int nData = 0x18;
	}

	namespace DT_CHostage {
		int isRescued = 0x2f30;
		int jumpedThisFrame = 0x2f31;
		int iHealth = 0x100;
		int iMaxHealth = 0x2f18;
		int lifeState = 0x25f;
		int fFlags = 0x104;
		int nHostageState = 0x2f34;
		int flRescueStartTime = 0x2f38;
		int flGrabSuccessTime = 0x2f3c;
		int flDropStartTime = 0x2f40;
		int vel = 0x2f24;
		int leader = 0x2f20;
	}

	namespace DT_BaseCSGrenadeProjectile {
		int vInitialVelocity = 0x29d0;
		int nBounces = 0x29dc;
		int nExplodeEffectIndex = 0x29e0;
		int nExplodeEffectTickBegin = 0x29e4;
		int vecExplodeEffectOrigin = 0x29e8;
	}

	namespace DT_HandleTest {
		int Handle = 0x9d8;
		int bSendHandle = 0x9dc;
	}

	namespace DT_SpriteTrail {
		int flLifeTime = 0x1074;
		int flStartWidth = 0x1078;
		int flEndWidth = 0x107c;
		int flStartWidthVariance = 0x1080;
		int flTextureRes = 0x1084;
		int flMinFadeLength = 0x1088;
		int vecSkyboxOrigin = 0x108c;
		int flSkyboxScale = 0x1098;
	}

	namespace DT_Sprite {
		int hAttachedToEntity = 0x9e8;
		int nAttachment = 0x9ec;
		int flScaleTime = 0xa08;
		int flSpriteScale = 0xa04;
		int flSpriteFramerate = 0x9f0;
		int flGlowProxySize = 0xa10;
		int flHDRColorScale = 0xa14;
		int flFrame = 0x9f4;
		int flBrightnessTime = 0xa00;
		int nBrightness = 0x9fc;
		int bWorldSpaceScale = 0xa0c;
	}

	namespace DT_Ragdoll_Attached {
		int boneIndexAttached = 0x2cb8;
		int ragdollAttachedObjectIndex = 0x2cb4;
		int attachmentPointBoneSpace = 0x2c90;
		int attachmentPointRagdollSpace = 0x2ca8;
	}

	namespace DT_Ragdoll {
		int ragAngles0 = 0x2aa0;
		int ragAngles = 0x0;
		int ragPos0 = 0x2980;
		int ragPos = 0x0;
		int hUnragdoll = 0x2c7c;
		int flBlendWeight = 0x2c80;
		int nOverlaySequence = 0x2c88;
	}

	namespace DT_PropCounter {
		int flDisplayValue = 0x2980;
	}

	namespace DT_PoseController {
		int bPoseValueParity = 0x9ec;
		int fPoseValue = 0x9f0;
		int fInterpolationTime = 0x9f4;
		int bInterpolationWrap = 0x9f8;
		int fCycleFrequency = 0x9fc;
		int nFModType = 0xa00;
		int fFModTimeOffset = 0xa04;
		int fFModRate = 0xa08;
		int fFModAmplitude = 0xa0c;
		int hProps = 0x9d8;
		int chPoseIndex = 0x9e8;
	}

	namespace DT_GrassBurn {
		int flGrassBurnClearTime = 0x9d8;
	}

	namespace DT_FuncLadder {
		int vecPlayerMountPositionTop = 0x9f8;
		int vecPlayerMountPositionBottom = 0xa04;
		int vecLadderDir = 0x9d8;
		int bFakeLadder = 0xa11;
	}

	namespace DT_TEFoundryHelpers {
		int iEntity = 0x10;
	}

	namespace DT_DetailController {
		int flFadeStartDist = 0x9d8;
		int flFadeEndDist = 0x9dc;
	}

	namespace DT_DangerZone {
		int vecDangerZoneOriginStartedAt = 0x9d8;
		int flBombLaunchTime = 0x9e4;
		int flExtraRadius = 0x9e8;
		int flExtraRadiusStartTime = 0x9ec;
		int flExtraRadiusTotalLerpTime = 0x9f0;
		int nDropOrder = 0x9f4;
		int iWave = 0x9f8;
	}

	namespace DT_DangerZoneController {
		int bDangerZoneControllerEnabled = 0x9d8;
		int bMissionControlledExplosions = 0x9d9;
		int flStartTime = 0x9f4;
		int flFinalExpansionTime = 0x9f8;
		int vecEndGameCircleStart = 0x9dc;
		int vecEndGameCircleEnd = 0x9e8;
		int hTheFinalZone = 0xab8;
		int DangerZones = 0x9fc;
		int flWaveEndTimes = 0xaa4;
	}

	namespace DT_WorldVguiText {
		int bEnabled = 0x9d8;
		int szDisplayText = 0x9d9;
		int szDisplayTextOption = 0xbd9;
		int szFont = 0xcd9;
		int iTextPanelWidth = 0xd20;
		int clrText = 0xd19;
	}

	namespace DT_World {
		int flWaveHeight = 0x9d8;
		int WorldMins = 0x9dc;
		int WorldMaxs = 0x9e8;
		int bStartDark = 0x9f4;
		int flMaxOccludeeArea = 0x9f8;
		int flMinOccluderArea = 0x9fc;
		int flMaxPropScreenSpaceWidth = 0xa04;
		int flMinPropScreenSpaceWidth = 0xa00;
		int iszDetailSpriteMaterial = 0xa10;
		int bColdWorld = 0xa08;
		int iTimeOfDay = 0xa0c;
	}

	namespace DT_WaterLODControl {
		int flCheapWaterStartDistance = 0x9d8;
		int flCheapWaterEndDistance = 0x9dc;
	}

	namespace DT_VoteController {
		int iActiveIssueIndex = 0x9e4;
		int iOnlyTeamToVote = 0x9e8;
		int nPotentialVotes = 0xa04;
		int bIsYesNoVote = 0xa0a;
		int nVoteOptionCount = 0x9ec;
	}

	namespace DT_VGuiScreen {
		int flWidth = 0x9e0;
		int flHeight = 0x9e4;
		int fScreenFlags = 0xa0c;
		int nPanelName = 0x9e8;
		int nAttachmentIndex = 0xa04;
		int nOverlayMaterial = 0xa08;
		int hPlayerOwner = 0xa68;
	}

	namespace DT_PropJeep {
		int bHeadlightIsOn = 0x2acc;
	}

	namespace DT_PropVehicleChoreoGeneric {
		int hPlayer = 0x29f4;
		int bEnterAnimOn = 0x29fc;
		int bExitAnimOn = 0x29fd;
		int bForceEyesToAttachment = 0x2a0c;
		int vecEyeExitEndpoint = 0x2a00;
		int vehicleViewbClampEyeAngles = 0x2a90;
		int vehicleViewflPitchCurveZero = 0x2a94;
		int vehicleViewflPitchCurveLinear = 0x2a98;
		int vehicleViewflRollCurveZero = 0x2a9c;
		int vehicleViewflRollCurveLinear = 0x2aa0;
		int vehicleViewflFOV = 0x2aa4;
		int vehicleViewflYawMin = 0x2aa8;
		int vehicleViewflYawMax = 0x2aac;
		int vehicleViewflPitchMin = 0x2ab0;
		int vehicleViewflPitchMax = 0x2ab4;
	}

	namespace DT_TriggerSoundOperator {
		int nSoundOperator = 0xa10;
	}

	namespace DT_BaseTrigger {
		int bClientSidePredicted = 0xa08;
		int spawnflags = 0x2c8;
	}

	namespace DT_Tesla {
		int SoundName = 0xa00;
		int iszSpriteName = 0xa40;
	}

	namespace DT_BaseTeamObjectiveResource {
		int iTimerToShowInHUD = 0x9d8;
		int iStopWatchTimer = 0x9dc;
		int iNumControlPoints = 0x9e0;
		int bPlayingMiniRounds = 0x9e8;
		int bControlPointsReset = 0x9e9;
		int iUpdateCapHudParity = 0x9ec;
		int vCPPositions0 = 0x9f4;
		int vCPPositions = 0x0;
		int iszWarnSound0 = 0x1304;
		int iszWarnSound = 0x0;
		int pszCapLayoutInHUD = 0x1cec;
		int bCPIsVisible = 0xa54;
		int flLazyCapPerc = 0xa5c;
		int iTeamIcons = 0xa9c;
		int iTeamOverlays = 0xb9c;
		int iTeamReqCappers = 0xc9c;
		int flTeamCapTime = 0xd9c;
		int iPreviousPoints = 0xe9c;
		int bTeamCanCap = 0x119c;
		int iTeamBaseIcons = 0x11dc;
		int iBaseControlPoints = 0x125c;
		int bInMiniRound = 0x12dc;
		int iWarnOnCap = 0x12e4;
		int flPathDistance = 0x1afc;
		int iNumTeamMembers = 0x1b1c;
		int iCappingTeam = 0x1c1c;
		int iTeamInZone = 0x1c3c;
		int bBlocked = 0x1c5c;
		int iOwner = 0x1c64;
	}

	namespace DT_Team {
		int iTeamNum = 0xb68;
		int bSurrendered = 0xb6c;
		int scoreTotal = 0xb40;
		int scoreFirstHalf = 0xb44;
		int scoreSecondHalf = 0xb48;
		int scoreOvertime = 0xb4c;
		int iClanID = 0xb58;
		int szTeamname = 0x9ec;
		int szClanTeamname = 0xa0c;
		int szTeamFlagImage = 0xa2c;
		int szTeamLogoImage = 0xa34;
		int szTeamMatchStat = 0xa3c;
		int nGGLeaderEntIndex_CT = 0xb50;
		int nGGLeaderEntIndex_T = 0xb54;
		int numMapVictories = 0xb70;
		int player_array_element = 0x0;
		int "player_array" = 0x0;
	}

	namespace DT_SunlightShadowControl {
		int shadowDirection = 0x9d8;
		int bEnabled = 0x9e4;
		int TextureName = 0x9e5;
		int LightColor = 0xaf0;
		int flColorTransitionTime = 0xb04;
		int flSunDistance = 0xb08;
		int flFOV = 0xb0c;
		int flNearZ = 0xb10;
		int flNorthOffset = 0xb14;
		int bEnableShadows = 0xb18;
	}

	namespace DT_Sun {
		int clrRender = 0x70;
		int clrOverlay = 0xb38;
		int vDirection = 0xb44;
		int bOn = 0xb50;
		int nSize = 0xb3c;
		int nOverlaySize = 0xb40;
		int nMaterial = 0xb54;
		int nOverlayMaterial = 0xb58;
		int HDRColorScale = 0x0;
		int glowDistanceScale = 0x0;
	}

	namespace DT_ParticlePerformanceMonitor {
		int bMeasurePerf = 0x9d9;
		int bDisplayPerf = 0x9d8;
	}

	namespace DT_SpotlightEnd {
		int flLightScale = 0x9d8;
		int Radius = 0x9dc;
	}

	namespace DT_SpatialEntity {
		int vecOrigin = 0x9d8;
		int minFalloff = 0x9e4;
		int maxFalloff = 0x9e8;
		int flCurWeight = 0x9ec;
		int bEnabled = 0xaf4;
	}

	namespace DT_SlideshowDisplay {
		int bEnabled = 0x9d8;
		int szDisplayText = 0x9d9;
		int szSlideshowDirectory = 0xa59;
		int fMinSlideTime = 0xb08;
		int fMaxSlideTime = 0xb0c;
		int iCycleType = 0xb14;
		int bNoListRepeats = 0xb18;
		int chCurrentSlideLists = 0xaf0;
	}

	namespace DT_ShadowControl {
		int shadowDirection = 0x9d8;
		int shadowColor = 0x9e4;
		int flShadowMaxDist = 0x9e8;
		int bDisableShadows = 0x9ec;
		int bEnableLocalLightShadows = 0x9ed;
	}

	namespace DT_SceneEntity {
		int nSceneStringIndex = 0x9e8;
		int bIsPlayingBack = 0x9dc;
		int bPaused = 0x9dd;
		int bMultiplayer = 0x9de;
		int flForceClientTime = 0x9e4;
	}

	namespace _ST_m_hActorList_16 {
	}

	namespace _LPT_m_hActorList_16 {
		int lengthprop16 = 0x0;
		int lengthproxy = 0x0;
		int hActorList = 0x0;
	}

	namespace DT_RopeKeyframe {
		int nChangeCount = 0xccc;
		int iRopeMaterialModelIndex = 0xa14;
		int hStartPoint = 0xcac;
		int hEndPoint = 0xcb0;
		int iStartAttachment = 0xcb4;
		int iEndAttachment = 0xcb6;
		int fLockedPoints = 0xcc8;
		int Slack = 0xcc0;
		int RopeLength = 0xcbc;
		int RopeFlags = 0xa10;
		int TextureScale = 0xcc4;
		int nSegments = 0xca8;
		int bConstrainBetweenEndpoints = 0xd50;
		int Subdiv = 0xcb8;
		int Width = 0xcd0;
		int flScrollSpeed = 0xa0c;
		int vecOrigin = 0x138;
		int oveparent = 0x148;
		int iParentAttachment = 0x2ec;
		int iDefaultRopeMaterialModelIndex = 0xa18;
		int nMinCPULevel = 0x988;
		int nMaxCPULevel = 0x989;
		int nMinGPULevel = 0x98a;
		int nMaxGPULevel = 0x98b;
	}

	namespace DT_RagdollManager {
		int iCurrentMaxRagdollCount = 0x9d8;
	}

	namespace DT_PhysicsPropMultiplayer {
		int iPhysicsMode = 0x29c4;
		int fMass = 0x29c8;
		int collisionMins = 0x29cc;
		int collisionMaxs = 0x29d8;
	}

	namespace DT_PhysBoxMultiplayer {
		int iPhysicsMode = 0x9e4;
		int fMass = 0x9e8;
	}

	namespace DT_DynamicProp {
		int bUseHitboxesForRenderBox = 0x29a4;
		int flGlowMaxDist = 0x29c4;
		int bShouldGlow = 0x29c8;
		int clrGlow = 0x29c9;
		int nGlowStyle = 0x29d0;
	}

	namespace DT_Prop_Hallucination {
		int bEnabled = 0x2999;
		int fVisibleTime = 0x299c;
		int fRechargeTime = 0x29a0;
	}

	namespace DT_PostProcessController {
		int bMaster = 0xa04;
		int flPostProcessParameters = 0x9d8;
	}

	namespace DT_PointWorldText {
		int szText = 0xa08;
		int flTextSize = 0xb0c;
		int textColor = 0xb10;
	}

	namespace DT_PointCommentaryNode {
		int bActive = 0x2980;
		int flStartTime = 0x2984;
		int iszCommentaryFile = 0x2988;
		int iszCommentaryFileNoHDR = 0x2a8c;
		int iszSpeakers = 0x2b90;
		int iNodeNumber = 0x2c90;
		int iNodeNumberMax = 0x2c94;
		int hViewPosition = 0x2c9c;
	}

	namespace DT_PointCamera {
		int FOV = 0x9d8;
		int Resolution = 0x9dc;
		int bFogEnable = 0x9e0;
		int FogColor = 0x9e1;
		int flFogStart = 0x9e8;
		int flFogEnd = 0x9ec;
		int flFogMaxDensity = 0x9f0;
		int bActive = 0x9f4;
		int bUseScreenAspectRatio = 0x9f5;
	}

	namespace DT_Plasma {
		int flStartScale = 0x9d8;
		int flScale = 0x9dc;
		int flScaleTime = 0x9e0;
		int nFlags = 0x9e4;
		int nPlasmaModelIndex = 0x9e8;
		int nPlasmaModelIndex2 = 0x9ec;
		int nGlowModelIndex = 0x9f0;
	}

	namespace DT_PhysicsProp {
		int bAwake = 0x29a0;
		int spawnflags = 0x2c8;
	}

	namespace DT_StatueProp {
		int hInitBaseAnimating = 0x29c0;
		int bShatter = 0x29c4;
		int nShatterFlags = 0x29c8;
		int vShatterPosition = 0x29cc;
		int vShatterForce = 0x29d8;
	}

	namespace DT_PhysBox {
		int mass = 0x9d8;
	}

	namespace DT_ParticleSystem {
		int vecOrigin = 0x138;
		int fEffects = 0xf0;
		int hOwnerEntity = 0x14c;
		int oveparent = 0x148;
		int iParentAttachment = 0x2ec;
		int angRotation = 0x12c;
		int iEffectIndex = 0x9d8;
		int bActive = 0x9e0;
		int nStopType = 0x9dc;
		int flStartTime = 0x9e4;
		int szSnapshotFileName = 0x9e8;
		int vServerControlPoints = 0xaec;
		int iServerControlPointAssignments = 0xb1c;
		int hControlPointEnts = 0xb30;
		int iControlPointParents = 0xc2c;
	}

	namespace DT_MovieDisplay {
		int bEnabled = 0x9d8;
		int bLooping = 0x9d9;
		int szMovieFilename = 0x9da;
		int szGroupName = 0xa5a;
		int bStretchToFill = 0xada;
		int bForcedSlave = 0xadb;
		int bUseCustomUVs = 0xadc;
		int flUMin = 0xae0;
		int flUMax = 0xae4;
		int flVMin = 0xae8;
		int flVMax = 0xaec;
	}

	namespace DT_MaterialModifyControl {
		int szMaterialName = 0x9d8;
		int szMaterialVar = 0xad7;
		int szMaterialVarValue = 0xbd6;
		int iFrameStart = 0xce0;
		int iFrameEnd = 0xce4;
		int bWrap = 0xce8;
		int flFramerate = 0xcec;
		int bNewAnimCommandsSemaphore = 0xcf0;
		int flFloatLerpStartValue = 0xcf4;
		int flFloatLerpEndValue = 0xcf8;
		int flFloatLerpTransitionTime = 0xcfc;
		int bFloatLerpWrap = 0xd00;
		int nModifyMode = 0xd08;
	}

	namespace DT_LightGlow {
		int clrRender = 0x70;
		int nHorizontalSize = 0x9d8;
		int nVerticalSize = 0x9dc;
		int nMinDist = 0x9e0;
		int nMaxDist = 0x9e4;
		int nOuterMaxDist = 0x9e8;
		int spawnflags = 0x9ec;
		int vecOrigin = 0x138;
		int angRotation = 0x12c;
		int oveparent = 0x148;
		int flGlowProxySize = 0xac4;
		int HDRColorScale = 0x0;
	}

	namespace DT_ItemAssaultSuitUseable {
		int nArmorValue = 0x3440;
		int bIsHeavyAssaultSuit = 0x3444;
	}

	namespace DT_Item {
		int bShouldGlow = 0x3230;
	}

	namespace DT_InfoOverlayAccessor {
		int iTextureFrameIndex = 0x98c;
		int iOverlayID = 0x9d8;
	}

	namespace DT_FuncSmokeVolume {
		int Color1 = 0xac4;
		int Color2 = 0xac8;
		int MaterialName = 0xacc;
		int ParticleDrawWidth = 0xbcc;
		int ParticleSpacingDistance = 0xbd0;
		int DensityRampSpeed = 0xbd4;
		int RotationSpeed = 0xbd8;
		int MovementSpeed = 0xbdc;
		int Density = 0xbe0;
		int maxDrawDistance = 0xbe4;
		int spawnflags = 0xbe8;
	}

	namespace DT_CollisionProperty {
		int vecMins = 0x8;
		int vecMaxs = 0x14;
		int nSolidType = 0x22;
		int usSolidFlags = 0x20;
		int nSurroundType = 0x2a;
		int triggerBloat = 0x23;
		int vecSpecifiedSurroundingMins = 0x2c;
		int vecSpecifiedSurroundingMaxs = 0x38;
		int Collision = 0x320;
	}

	namespace DT_FuncRotating {
		int vecOrigin = 0x138;
		int angRotation0 = 0x12c;
		int angRotation1 = 0x130;
		int angRotation2 = 0x134;
		int flSimulationTime = 0x268;
	}

	namespace DT_FuncOccluder {
		int bActive = 0x9dc;
		int nOccluderIndex = 0x9d8;
	}

	namespace DT_FuncMoveLinear {
		int vecVelocity = 0x114;
		int fFlags = 0x104;
	}

	namespace DT_Func_LOD {
		int nDisappearMinDist = 0x9d8;
		int nDisappearMaxDist = 0x9dc;
	}

	namespace DT_TEDust {
		int flSize = 0x1c;
		int flSpeed = 0x20;
		int vecDirection = 0x24;
	}

	namespace DT_Func_Dust {
		int Color = 0x9d8;
		int SpawnRate = 0x9dc;
		int flSizeMin = 0x9e0;
		int flSizeMax = 0x9e4;
		int LifetimeMin = 0x9ec;
		int LifetimeMax = 0x9f0;
		int DustFlags = 0xa00;
		int SpeedMax = 0x9e8;
		int DistMax = 0x9f4;
		int nModelIndex = 0x258;
		int FallSpeed = 0x9f8;
		int bAffectedByWind = 0x9fc;
	}

	namespace DT_CollisionProperty {
		int vecMins = 0x8;
		int vecMaxs = 0x14;
		int nSolidType = 0x22;
		int usSolidFlags = 0x20;
		int nSurroundType = 0x2a;
		int triggerBloat = 0x23;
		int vecSpecifiedSurroundingMins = 0x2c;
		int vecSpecifiedSurroundingMaxs = 0x38;
		int Collision = 0x320;
	}

	namespace DT_FuncConveyor {
		int flConveyorSpeed = 0x9d8;
	}

	namespace DT_BreakableSurface {
		int nNumWide = 0x9dc;
		int nNumHigh = 0x9e0;
		int flPanelWidth = 0x9e4;
		int flPanelHeight = 0x9e8;
		int vNormal = 0x9ec;
		int vCorner = 0x9f8;
		int bIsBroken = 0xa04;
		int nSurfaceType = 0xa08;
		int RawPanelBitVec = 0xa2c;
	}

	namespace DT_FuncAreaPortalWindow {
		int flFadeStartDist = 0x9d8;
		int flFadeDist = 0x9dc;
		int flTranslucencyLimit = 0x9e0;
		int iBackgroundModelIndex = 0x9e4;
	}

	namespace DT_CFish {
		int poolOrigin = 0x29e0;
		int x = 0x29c8;
		int y = 0x29cc;
		int z = 0x29d0;
		int angle = 0x29d8;
		int nModelIndex = 0x258;
		int lifeState = 0x25f;
		int waterLevel = 0x29ec;
	}

	namespace DT_FireSmoke {
		int flStartScale = 0x9d8;
		int flScale = 0x9dc;
		int flScaleTime = 0x9e0;
		int nFlags = 0x9e4;
		int nFlameModelIndex = 0x9e8;
		int nFlameFromAboveModelIndex = 0x9ec;
	}

	namespace DT_EnvTonemapController {
		int bUseCustomAutoExposureMin = 0x9d8;
		int bUseCustomAutoExposureMax = 0x9d9;
		int bUseCustomBloomScale = 0x9da;
		int flCustomAutoExposureMin = 0x9dc;
		int flCustomAutoExposureMax = 0x9e0;
		int flCustomBloomScale = 0x9e4;
		int flCustomBloomScaleMinimum = 0x9e8;
		int flBloomExponent = 0x9ec;
		int flBloomSaturation = 0x9f0;
		int flTonemapPercentTarget = 0x9f4;
		int flTonemapPercentBrightPixels = 0x9f8;
		int flTonemapMinAvgLum = 0x9fc;
		int flTonemapRate = 0xa00;
	}

	namespace DT_EnvScreenEffect {
		int flDuration = 0x9d8;
		int nType = 0x9dc;
	}

	namespace DT_EnvScreenOverlay {
		int iszOverlayNames0 = 0x9d8;
		int iszOverlayNames = 0x0;
		int flOverlayTimes0 = 0x13d0;
		int flOverlayTimes = 0x0;
		int flStartTime = 0x13f8;
		int iDesiredOverlay = 0x13fc;
		int bIsActive = 0x1400;
	}

	namespace DT_EnvProjectedTexture {
		int hTargetEntity = 0x9dc;
		int bState = 0x9e0;
		int bAlwaysUpdate = 0x9e1;
		int flLightFOV = 0x9e4;
		int bEnableShadows = 0x9e8;
		int bSimpleProjection = 0x9e9;
		int bLightOnlyTarget = 0x9ea;
		int bLightWorld = 0x9eb;
		int bCameraSpace = 0x9ec;
		int flBrightnessScale = 0x9f0;
		int LightColor = 0x9f4;
		int flColorTransitionTime = 0xa08;
		int flAmbient = 0xa0c;
		int SpotlightTextureName = 0xa18;
		int nSpotlightTextureFrame = 0xb24;
		int flNearZ = 0xa10;
		int flFarZ = 0xa14;
		int nShadowQuality = 0xb28;
		int flProjectionSize = 0xb38;
		int flRotation = 0xb3c;
		int iStyle = 0xb2c;
	}

	namespace DT_EnvParticleScript {
		int flSequenceScale = 0x2a64;
	}

	namespace DT_FogController {
		int fogenable = 0xa1c;
		int fogblend = 0xa1d;
		int fogdirPrimary = 0x9dc;
		int fogcolorPrimary = 0x9e8;
		int fogcolorSecondary = 0x9ec;
		int fogstart = 0x9f8;
		int fogend = 0x9fc;
		int fogfarz = 0xa00;
		int fogmaxdensity = 0xa04;
		int fogcolorPrimaryLerpTo = 0x9f0;
		int fogcolorSecondaryLerpTo = 0x9f4;
		int fogstartLerpTo = 0xa08;
		int fogendLerpTo = 0xa0c;
		int fogmaxdensityLerpTo = 0xa10;
		int foglerptime = 0xa14;
		int fogduration = 0xa18;
		int fogHDRColorScale = 0xa24;
		int fogZoomFogScale = 0xa20;
	}

	namespace DT_EnvDOFController {
		int bDOFEnabled = 0x9d8;
		int flNearBlurDepth = 0x9dc;
		int flNearFocusDepth = 0x9e0;
		int flFarFocusDepth = 0x9e4;
		int flFarBlurDepth = 0x9e8;
		int flNearBlurRadius = 0x9ec;
		int flFarBlurRadius = 0x9f0;
	}

	namespace DT_CascadeLight {
		int shadowDirection = 0x9d8;
		int envLightShadowDirection = 0x9e4;
		int bEnabled = 0x9f0;
		int bUseLightEnvAngles = 0x9f1;
		int LightColor = 0x9f2;
		int LightColorScale = 0x9f8;
		int flMaxShadowDist = 0x9fc;
	}

	namespace DT_EnvAmbientLight {
		int vecColor = 0xb00;
	}

	namespace DT_EntityParticleTrail {
		int iMaterialName = 0xac0;
		int hConstraintEntity = 0xad8;
	}

	namespace DT_EntityParticleTrailInfo {
		int flLifetime = 0x8;
		int flStartSize = 0xc;
		int flEndSize = 0x10;
		int Info = 0xac4;
	}

	namespace DT_EntityFreezing {
		int vFreezingOrigin = 0x9d8;
		int flFrozen = 0xaac;
		int bFinishFreezing = 0xab0;
		int flFrozenPerHitbox = 0x9e4;
	}

	namespace DT_EntityFlame {
		int hEntAttached = 0x9d8;
		int bCheapEffect = 0x9ec;
	}

	namespace DT_EntityDissolve {
		int flStartTime = 0x9dc;
		int flFadeOutStart = 0x9e0;
		int flFadeOutLength = 0x9e4;
		int flFadeOutModelStart = 0x9e8;
		int flFadeOutModelLength = 0x9ec;
		int flFadeInStart = 0x9f0;
		int flFadeInLength = 0x9f4;
		int nDissolveType = 0x9f8;
		int vDissolverOrigin = 0xa00;
		int nMagnitude = 0xa0c;
	}

	namespace DT_DynamicLight {
		int Flags = 0x9d8;
		int LightStyle = 0x9d9;
		int Radius = 0x9dc;
		int Exponent = 0x9e0;
		int InnerAngle = 0x9e4;
		int OuterAngle = 0x9e8;
		int SpotRadius = 0x9ec;
	}

	namespace DT_ColorCorrectionVolume {
		int bEnabled = 0xa20;
		int MaxWeight = 0xa24;
		int FadeDuration = 0xa28;
		int Weight = 0xa2c;
		int lookupFilename = 0xa30;
	}

	namespace DT_ColorCorrection {
		int vecOrigin = 0x9d8;
		int minFalloff = 0x9e4;
		int maxFalloff = 0x9e8;
		int flCurWeight = 0x9f8;
		int flMaxWeight = 0x9f4;
		int flFadeInDuration = 0x9ec;
		int flFadeOutDuration = 0x9f0;
		int netLookupFilename = 0x9fc;
		int bEnabled = 0xb00;
		int bMaster = 0xb01;
		int bClientSide = 0xb02;
		int bExclusive = 0xb03;
	}

	namespace DT_BreakableProp {
		int qPreferredPlayerCarryAngles = 0x2984;
		int bClientPhysics = 0x2990;
	}

	namespace DT_BeamSpotlight {
		int nHaloIndex = 0x9d8;
		int bSpotlightOn = 0x9e4;
		int bHasDynamicLight = 0x9e5;
		int flSpotlightMaxLength = 0x9e8;
		int flSpotlightGoalWidth = 0x9ec;
		int flHDRColorScale = 0x9f0;
		int nRotationAxis = 0x9dc;
		int flRotationSpeed = 0x9e0;
	}

	namespace DT_BaseButton {
		int usable = 0xa08;
	}

	namespace DT_BaseToggle {
		int vecFinalDest = 0x9ec;
		int movementType = 0x9f8;
		int flMoveTargetTime = 0x9fc;
	}

	namespace DT_BasePlayer {
		int iFOV = 0x31e4;
		int iFOVStart = 0x31e8;
		int flFOVTime = 0x3208;
		int iDefaultFOV = 0x332c;
		int hZoomOwner = 0x324c;
		int afPhysicsFlags = 0x32ec;
		int hVehicle = 0x32f0;
		int hUseEntity = 0x3328;
		int hGroundEntity = 0x150;
		int iHealth = 0x100;
		int lifeState = 0x25f;
		int iBonusProgress = 0x3240;
		int iBonusChallenge = 0x3244;
		int flMaxspeed = 0x3248;
		int fFlags = 0x104;
		int iObserverMode = 0x3378;
		int bActiveCameraMan = 0x337c;
		int bCameraManXRay = 0x337d;
		int bCameraManOverview = 0x337e;
		int bCameraManScoreBoard = 0x337f;
		int uCameraManGraphs = 0x3380;
		int iDeathPostEffect = 0x3374;
		int hObserverTarget = 0x338c;
		int hViewModel0 = 0x32f8;
		int hViewModel = 0x0;
		int iCoachingTeam = 0x2f50;
		int szLastPlaceName = 0x35b4;
		int vecLadderNormal = 0x3230;
		int ladderSurfaceProps = 0x3200;
		int ubEFNoInterpParity = 0x35d8;
		int hPostProcessCtrl = 0x37a8;
		int hColorCorrectionCtrl = 0x37ac;
		int PlayerFogm_hCtrl = 0x37b4;
		int vphysicsCollisionState = 0x325c;
		int hViewEntity = 0x333c;
		int bShouldDrawPlayerWhileUsingViewEntity = 0x3340;
		int flDuckAmount = 0x2fac;
		int flDuckSpeed = 0x2fb0;
		int nWaterLevel = 0x25e;
	}

	namespace DT_LocalPlayerExclusive {
		int vecViewOffset0 = 0x108;
		int vecViewOffset1 = 0x10c;
		int vecViewOffset2 = 0x110;
		int flFriction = 0x144;
		int fOnTarget = 0x3324;
		int nTickBase = 0x3430;
		int nNextThinkTick = 0xfc;
		int hLastWeapon = 0x32f4;
		int vecVelocity0 = 0x114;
		int vecVelocity1 = 0x118;
		int vecVelocity2 = 0x11c;
		int vecBaseVelocity = 0x120;
		int hConstraintEntity = 0x3344;
		int vecConstraintCenter = 0x3348;
		int flConstraintRadius = 0x3354;
		int flConstraintWidth = 0x3358;
		int flConstraintSpeedFactor = 0x335c;
		int bConstraintPastRadius = 0x3360;
		int flDeathTime = 0x33c4;
		int flNextDecalTime = 0x33c8;
		int fForceTeam = 0x33cc;
		int flLaggedMovementValue = 0x3594;
		int hTonemapController = 0x31cc;
	}

	namespace DT_Local {
		int iHideHUD = 0x48;
		int flFOVRate = 0x44;
		int bDucked = 0x88;
		int bDucking = 0x89;
		int flLastDuckTime = 0x8c;
		int bInDuckJump = 0x90;
		int nDuckTimeMsecs = 0x4c;
		int nDuckJumpTimeMsecs = 0x50;
		int nJumpTimeMsecs = 0x54;
		int flFallVelocity = 0x58;
		int viewPunchAngle = 0x64;
		int aimPunchAngle = 0x70;
		int aimPunchAngleVel = 0x7c;
		int bDrawViewmodel = 0x91;
		int bWearingSuit = 0x92;
		int bPoisoned = 0x93;
		int flStepSize = 0x60;
		int bAllowAutoMovement = 0x94;
		int skybox3dscale = 0x134;
		int skybox3dorigin = 0x138;
		int skybox3darea = 0x144;
		int skybox3dfogenable = 0x18c;
		int skybox3dfogblend = 0x18d;
		int skybox3dfogdirPrimary = 0x14c;
		int skybox3dfogcolorPrimary = 0x158;
		int skybox3dfogcolorSecondary = 0x15c;
		int skybox3dfogstart = 0x168;
		int skybox3dfogend = 0x16c;
		int skybox3dfogmaxdensity = 0x174;
		int skybox3dfogHDRColorScale = 0x194;
		int audiolocalSound0 = 0x19c;
		int audiolocalSound1 = 0x1a8;
		int audiolocalSound2 = 0x1b4;
		int audiolocalSound3 = 0x1c0;
		int audiolocalSound4 = 0x1cc;
		int audiolocalSound5 = 0x1d8;
		int audiolocalSound6 = 0x1e4;
		int audiolocalSound7 = 0x1f0;
		int audiosoundscapeIndex = 0x1fc;
		int audiolocalBits = 0x200;
		int audioentIndex = 0x204;
		int chAreaBits = 0x4;
		int chAreaPortalBits = 0x24;
		int Local = 0x2fbc;
	}

	namespace DT_PlayerState {
		int deadflag = 0x4;
		int localdata = 0x0;
		int pl = 0x31d0;
		int iAmmo = 0x2d78;
	}

	namespace DT_BaseFlex {
		int blinktoggle = 0x2bd4;
		int viewtarget = 0x29f0;
		int flexWeight = 0x2a28;
	}

	namespace DT_BaseEntity {
		int flSimulationTime = 0x268;
		int cellbits = 0x74;
		int cellX = 0x7c;
		int cellY = 0x80;
		int cellZ = 0x84;
		int vecOrigin = 0x138;
		int angRotation = 0x12c;
		int nModelIndex = 0x258;
		int fEffects = 0xf0;
		int nRenderMode = 0x25b;
		int nRenderFX = 0x25a;
		int clrRender = 0x70;
		int iTeamNum = 0xf4;
		int iPendingTeamNum = 0xf8;
		int CollisionGroup = 0x474;
		int flElasticity = 0x300;
		int flShadowCastDistance = 0x3a0;
		int hOwnerEntity = 0x14c;
		int hEffectEntity = 0x998;
		int oveparent = 0x148;
		int iParentAttachment = 0x2ec;
		int iName = 0x154;
		int ovetype = 0x0;
		int ovecollide = 0x0;
		int iTextureFrameIndex = 0x98c;
		int bSimulatedEveryTick = 0x93a;
		int bAnimatedEveryTick = 0x93b;
		int bAlternateSorting = 0x93c;
		int bSpotted = 0x93d;
		int bIsAutoaimTarget = 0x60;
		int fadeMinDist = 0x2f4;
		int fadeMaxDist = 0x2f8;
		int flFadeScale = 0x2fc;
		int nMinCPULevel = 0x988;
		int nMaxCPULevel = 0x989;
		int nMinGPULevel = 0x98a;
		int nMaxGPULevel = 0x98b;
		int flUseLookAtAngle = 0x2cc;
		int flLastMadeNoiseTime = 0x20;
		int flMaxFallVelocity = 0xdc;
		int bEligibleForScreenHighlight = 0x9b9;
	}

	namespace DT_AnimTimeMustBeFirst {
		int flAnimTime = 0x260;
	}

	namespace DT_CollisionProperty {
		int vecMins = 0x8;
		int vecMaxs = 0x14;
		int nSolidType = 0x22;
		int usSolidFlags = 0x20;
		int nSurroundType = 0x2a;
		int triggerBloat = 0x23;
		int vecSpecifiedSurroundingMins = 0x2c;
		int vecSpecifiedSurroundingMaxs = 0x38;
		int AnimTimeMustBeFirst = 0x0;
		int Collision = 0x320;
		int bSpottedBy = 0x93e;
		int bSpottedByMask = 0x980;
	}

	namespace DT_BaseDoor {
		int flWaveHeight = 0xa08;
	}

	namespace DT_BaseCombatCharacter {
		int LastHitGroup = 0x2d74;
		int hActiveWeapon = 0x2ef8;
		int flTimeOfLastInjury = 0x2efc;
		int nRelativeDirectionOfLastInjury = 0x2f00;
	}

	namespace DT_BCCLocalPlayerExclusive {
		int flNextAttack = 0x2d70;
	}

	namespace DT_BCCNonLocalPlayerExclusive {
		int hMyWeapons = 0x2df8;
		int bcc_localdata = 0x0;
		int bcc_nonlocaldata = 0x0;
		int hMyWeapons = 0x2df8;
		int hMyWearables = 0x2f04;
	}

	namespace DT_BoneFollower {
		int modelIndex = 0x9d8;
		int solidIndex = 0x9dc;
	}

	namespace DT_BaseAnimating {
		int nSequence = 0x28bc;
		int nForceBone = 0x268c;
		int vecForce = 0x2680;
		int nSkin = 0xa1c;
		int nBody = 0xa20;
		int nHitboxSet = 0x9fc;
		int flModelScale = 0x2748;
		int flPlaybackRate = 0xa18;
		int bClientSideAnimation = 0x289c;
		int bClientSideFrameReset = 0x26c0;
		int bClientSideRagdoll = 0x279;
		int nNewSequenceParity = 0xa44;
		int nResetEventsParity = 0xa48;
		int nMuzzleFlashParity = 0xa64;
		int hLightingOrigin = 0x2944;
		int flFrozen = 0x26f8;
		int ScaleType = 0x274c;
		int bSuppressAnimSounds = 0x294a;
		int nHighlightColorR = 0xa38;
		int nHighlightColorG = 0xa3c;
		int nHighlightColorB = 0xa40;
	}

	namespace DT_ServerAnimationData {
		int flCycle = 0xa14;
		int flPoseParameter = 0x2774;
		int flEncodedController = 0xa54;
		int serveranimdata = 0x0;
	}

	namespace DT_AI_BaseNPC {
		int lifeState = 0x25f;
		int bPerformAvoidance = 0x2f24;
		int bIsMoving = 0x2f25;
		int bFadeCorpse = 0x2f26;
		int iDeathPose = 0x2f14;
		int iDeathFrame = 0x2f18;
		int iSpeedModRadius = 0x2f1c;
		int iSpeedModSpeed = 0x2f20;
		int bSpeedModActive = 0x2f27;
		int bImportanRagdoll = 0x2f28;
		int flTimePingEffect = 0x2f10;
	}

	namespace DT_Beam {
		int nBeamType = 0x9f4;
		int nBeamFlags = 0x9f8;
		int nNumBeamEnts = 0x9e8;
		int nHaloIndex = 0x9f0;
		int fHaloScale = 0xa58;
		int fWidth = 0xa4c;
		int fEndWidth = 0xa50;
		int fFadeLength = 0xa54;
		int fAmplitude = 0xa5c;
		int fStartFrame = 0xa60;
		int fSpeed = 0xa64;
		int flFrameRate = 0x9d8;
		int flHDRColorScale = 0x9dc;
		int clrRender = 0x70;
		int nRenderFX = 0x25a;
		int nRenderMode = 0x25b;
		int flFrame = 0xa68;
		int nClipStyle = 0xa6c;
		int vecEndPos = 0xa70;
		int nModelIndex = 0x258;
		int vecOrigin = 0x138;
		int oveparent = 0x148;
		int hAttachEntity = 0x9fc;
		int nAttachIndex = 0xa24;
	}

	namespace DT_BaseViewModel {
		int nModelIndex = 0x258;
		int hWeapon = 0x29c8;
		int nSkin = 0xa1c;
		int nBody = 0xa20;
		int nSequence = 0x28bc;
		int nViewModelIndex = 0x29c0;
		int flPlaybackRate = 0xa18;
		int fEffects = 0xf0;
		int nAnimationParity = 0x29c4;
		int hOwner = 0x29cc;
		int nNewSequenceParity = 0xa44;
		int nResetEventsParity = 0xa48;
		int nMuzzleFlashParity = 0xa64;
		int bShouldIgnoreOffsetAndAccuracy = 0x2990;
	}

	namespace DT_BaseGrenade {
		int flDamage = 0x2998;
		int DmgRadius = 0x2984;
		int bIsLive = 0x2981;
		int hThrower = 0x29a0;
		int vecVelocity = 0x114;
		int fFlags = 0x104;
	}

	namespace DT_BaseCombatWeapon {
		int iViewModelIndex = 0x3240;
		int iWorldModelIndex = 0x3244;
		int iWorldDroppedModelIndex = 0x3248;
		int iState = 0x3258;
		int hOwner = 0x3230;
		int iClip1 = 0x3264;
		int iClip2 = 0x3268;
		int iPrimaryReserveAmmoCount = 0x326c;
		int iSecondaryReserveAmmoCount = 0x3270;
		int hWeaponWorldModel = 0x3254;
		int iNumEmptyAttacks = 0x3250;
	}

	namespace DT_LocalWeaponData {
		int iPrimaryAmmoType = 0x325c;
		int iSecondaryAmmoType = 0x3260;
		int nViewModelIndex = 0x3234;
		int bFlipViewModel = 0x32c4;
		int iWeaponOrigin = 0x32c8;
		int iWeaponModule = 0x324c;
	}

	namespace DT_LocalActiveWeaponData {
		int flNextPrimaryAttack = 0x3238;
		int flNextSecondaryAttack = 0x323c;
		int nNextThinkTick = 0xfc;
		int flTimeWeaponIdle = 0x3274;
		int LocalWeaponData = 0x0;
		int LocalActiveWeaponData = 0x0;
	}

	namespace DT_BaseWeaponWorldModel {
		int nModelIndex = 0x258;
		int nBody = 0xa20;
		int fEffects = 0xf0;
		int oveparent = 0x148;
		int hCombatWeaponParent = 0x29f0;
	}
}
