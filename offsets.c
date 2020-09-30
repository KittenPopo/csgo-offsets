
// TABLE:  DT_TestTraceline
        short m_clrRender = 0x70;
        short m_vecOrigin = 0x138;
        short m_angRotation[0] = 0x12c;
        short m_angRotation[1] = 0x130;
        short m_angRotation[2] = 0x134;
        short moveparent = 0x148;
// TABLE:  DT_TEWorldDecal
        short m_vecOrigin = 0x10;
        short m_nIndex = 0x1c;
// TABLE:  DT_TESpriteSpray
        short m_vecOrigin = 0x10;
        short m_vecDirection = 0x1c;
        short m_nModelIndex = 0x28;
        short m_fNoise = 0x30;
        short m_nCount = 0x34;
        short m_nSpeed = 0x2c;
// TABLE:  DT_TESprite
        short m_vecOrigin = 0x10;
        short m_nModelIndex = 0x1c;
        short m_fScale = 0x20;
        short m_nBrightness = 0x24;
// TABLE:  DT_TESparks
        short m_nMagnitude = 0x1c;
        short m_nTrailLength = 0x20;
        short m_vecDir = 0x24;
// TABLE:  DT_TESmoke
        short m_vecOrigin = 0x10;
        short m_nModelIndex = 0x1c;
        short m_fScale = 0x20;
        short m_nFrameRate = 0x24;
// TABLE:  DT_TEShowLine
        short m_vecEnd = 0x1c;
// TABLE:  DT_TEProjectedDecal
        short m_vecOrigin = 0x10;
        short m_angRotation = 0x1c;
        short m_flDistance = 0x28;
        short m_nIndex = 0x2c;
// TABLE:  DT_FEPlayerDecal
        short m_nUniqueID = 0x9d8;
        short m_unAccountID = 0x9dc;
        short m_unTraceID = 0x9e0;
        short m_rtGcTime = 0x9e4;
        short m_vecEndPos = 0x9e8;
        short m_vecStart = 0x9f4;
        short m_vecRight = 0xa00;
        short m_vecNormal = 0xa0c;
        short m_nEntity = 0xa1c;
        short m_nPlayer = 0xa18;
        short m_nHitbox = 0xa20;
        short m_nTintID = 0xa24;
        short m_flCreationTime = 0xa28;
        short m_nVersion = 0xa2c;
// TABLE:  m_ubSignature
        short m_ubSignature = 0xa2d;
// TABLE:  DT_TEPlayerDecal
        short m_vecOrigin = 0x14;
        short m_vecStart = 0x20;
        short m_vecRight = 0x2c;
        short m_nEntity = 0x38;
        short m_nPlayer = 0x10;
        short m_nHitbox = 0x3c;
// TABLE:  DT_TEPhysicsProp
        short m_vecOrigin = 0x10;
        short m_angRotation[0] = 0x1c;
        short m_angRotation[1] = 0x20;
        short m_angRotation[2] = 0x24;
        short m_vecVelocity = 0x28;
        short m_nModelIndex = 0x34;
        short m_nFlags = 0x3c;
        short m_nSkin = 0x38;
        short m_nEffects = 0x40;
        short m_clrRender = 0x44;
// TABLE:  DT_TEParticleSystem
        short m_vecOrigin[0] = 0x10;
        short m_vecOrigin[1] = 0x14;
        short m_vecOrigin[2] = 0x18;
// TABLE:  DT_TEMuzzleFlash
        short m_vecOrigin = 0x10;
        short m_vecAngles = 0x1c;
        short m_flScale = 0x28;
        short m_nType = 0x2c;
// TABLE:  DT_TELargeFunnel
        short m_nModelIndex = 0x1c;
        short m_nReversed = 0x20;
// TABLE:  DT_TEKillPlayerAttachments
        short m_nPlayer = 0x10;
// TABLE:  DT_TEImpact
        short m_vecOrigin = 0x10;
        short m_vecNormal = 0x1c;
        short m_iType = 0x28;
        short m_ucFlags = 0x2c;
// TABLE:  DT_TEGlowSprite
        short m_vecOrigin = 0x10;
        short m_nModelIndex = 0x1c;
        short m_fScale = 0x20;
        short m_fLife = 0x24;
        short m_nBrightness = 0x28;
// TABLE:  DT_TEShatterSurface
        short m_vecOrigin = 0x10;
        short m_vecAngles = 0x1c;
        short m_vecForce = 0x28;
        short m_vecForcePos = 0x34;
        short m_flWidth = 0x40;
        short m_flHeight = 0x44;
        short m_flShardSize = 0x48;
        short m_nSurfaceType = 0x50;
        short m_uchFrontColor[0] = 0x54;
        short m_uchFrontColor[1] = 0x55;
        short m_uchFrontColor[2] = 0x56;
        short m_uchBackColor[0] = 0x57;
        short m_uchBackColor[1] = 0x58;
        short m_uchBackColor[2] = 0x59;
// TABLE:  DT_TEFootprintDecal
        short m_vecOrigin = 0x10;
        short m_vecDirection = 0x1c;
        short m_nEntity = 0x34;
        short m_nIndex = 0x38;
        short m_chMaterialType = 0x3c;
// TABLE:  DT_TEFizz
        short m_nEntity = 0x10;
        short m_nModelIndex = 0x14;
        short m_nDensity = 0x18;
        short m_nCurrent = 0x1c;
// TABLE:  DT_TEExplosion
        short m_nModelIndex = 0x1c;
        short m_fScale = 0x20;
        short m_nFrameRate = 0x24;
        short m_nFlags = 0x28;
        short m_vecNormal = 0x2c;
        short m_chMaterialType = 0x38;
        short m_nRadius = 0x3c;
        short m_nMagnitude = 0x40;
// TABLE:  DT_TEEnergySplash
        short m_vecPos = 0x10;
        short m_vecDir = 0x1c;
        short m_bExplosive = 0x28;
// TABLE:  DT_TEEffectDispatch
// TABLE:  DT_EffectData
        short m_vOrigin.x = 0x0;
        short m_vOrigin.y = 0x4;
        short m_vOrigin.z = 0x8;
        short m_vStart.x = 0xc;
        short m_vStart.y = 0x10;
        short m_vStart.z = 0x14;
        short m_vAngles = 0x24;
        short m_vNormal = 0x18;
        short m_fFlags = 0x30;
        short m_flMagnitude = 0x40;
        short m_flScale = 0x3c;
        short m_nAttachmentIndex = 0x48;
        short m_nSurfaceProp = 0x4c;
        short m_iEffectName = 0x64;
        short m_nMaterial = 0x50;
        short m_nDamageType = 0x54;
        short m_nHitBox = 0x58;
        short entindex = 0x0;
        short m_nOtherEntIndex = 0x5c;
        short m_nColor = 0x60;
        short m_flRadius = 0x44;
        short m_bPositionsAreRelativeToEntity = 0x61;
        short m_EffectData = 0x10;
// TABLE:  DT_TEDynamicLight
        short m_vecOrigin = 0x10;
        short r = 0x20;
        short g = 0x24;
        short b = 0x28;
        short exponent = 0x2c;
        short m_fRadius = 0x1c;
        short m_fTime = 0x30;
        short m_fDecay = 0x34;
// TABLE:  DT_TEDecal
        short m_vecOrigin = 0x10;
        short m_vecStart = 0x1c;
        short m_nEntity = 0x28;
        short m_nHitbox = 0x2c;
        short m_nIndex = 0x30;
// TABLE:  DT_TEClientProjectile
        short m_vecOrigin = 0x10;
        short m_vecVelocity = 0x1c;
        short m_nModelIndex = 0x28;
        short m_nLifeTime = 0x2c;
        short m_hOwner = 0x30;
// TABLE:  DT_TEBubbleTrail
        short m_vecMins = 0x10;
        short m_vecMaxs = 0x1c;
        short m_nModelIndex = 0x2c;
        short m_flWaterZ = 0x28;
        short m_nCount = 0x30;
        short m_fSpeed = 0x34;
// TABLE:  DT_TEBubbles
        short m_vecMins = 0x10;
        short m_vecMaxs = 0x1c;
        short m_nModelIndex = 0x2c;
        short m_fHeight = 0x28;
        short m_nCount = 0x30;
        short m_fSpeed = 0x34;
// TABLE:  DT_TEBSPDecal
        short m_vecOrigin = 0x10;
        short m_nEntity = 0x1c;
        short m_nIndex = 0x20;
// TABLE:  DT_TEBreakModel
        short m_vecOrigin = 0x10;
        short m_angRotation[0] = 0x1c;
        short m_angRotation[1] = 0x20;
        short m_angRotation[2] = 0x24;
        short m_vecSize = 0x28;
        short m_vecVelocity = 0x34;
        short m_nModelIndex = 0x44;
        short m_nRandomization = 0x40;
        short m_nCount = 0x48;
        short m_fTime = 0x4c;
        short m_nFlags = 0x50;
// TABLE:  DT_TEBloodStream
        short m_vecDirection = 0x1c;
        short r = 0x28;
        short g = 0x2c;
        short b = 0x30;
        short a = 0x34;
        short m_nAmount = 0x38;
// TABLE:  DT_TEBloodSprite
        short m_vecOrigin = 0x10;
        short m_vecDirection = 0x1c;
        short r = 0x28;
        short g = 0x2c;
        short b = 0x30;
        short a = 0x34;
        short m_nSprayModel = 0x3c;
        short m_nDropModel = 0x38;
        short m_nSize = 0x40;
// TABLE:  DT_TEBeamSpline
        short m_nPoints = 0xd0;
        short m_vecPoints[0] = 0x10;
        short m_vecPoints = 0x0;
// TABLE:  DT_TEBeamRingPoint
        short m_vecCenter = 0x4c;
        short m_flStartRadius = 0x58;
        short m_flEndRadius = 0x5c;
// TABLE:  DT_TEBeamRing
        short m_nStartEntity = 0x4c;
        short m_nEndEntity = 0x50;
// TABLE:  DT_TEBeamPoints
        short m_vecStartPoint = 0x4c;
        short m_vecEndPoint = 0x58;
// TABLE:  DT_TEBeamLaser
        short m_nStartEntity = 0x4c;
        short m_nEndEntity = 0x50;
// TABLE:  DT_TEBeamFollow
        short m_iEntIndex = 0x4c;
// TABLE:  DT_TEBeamEnts
        short m_nStartEntity = 0x4c;
        short m_nEndEntity = 0x50;
// TABLE:  DT_TEBeamEntPoint
        short m_nStartEntity = 0x4c;
        short m_nEndEntity = 0x50;
        short m_vecStartPoint = 0x54;
        short m_vecEndPoint = 0x60;
// TABLE:  DT_BaseBeam
        short m_nModelIndex = 0x10;
        short m_nHaloIndex = 0x14;
        short m_nStartFrame = 0x18;
        short m_nFrameRate = 0x1c;
        short m_fLife = 0x20;
        short m_fWidth = 0x24;
        short m_fEndWidth = 0x28;
        short m_nFadeLength = 0x2c;
        short m_fAmplitude = 0x30;
        short m_nSpeed = 0x44;
        short r = 0x34;
        short g = 0x38;
        short b = 0x3c;
        short a = 0x40;
        short m_nFlags = 0x48;
// TABLE:  DT_TEArmorRicochet
// TABLE:  DT_TEMetalSparks
        short m_vecPos = 0x10;
        short m_vecDir = 0x1c;
// TABLE:  DT_SteamJet
        short m_SpreadSpeed = 0xac4;
        short m_Speed = 0xac8;
        short m_StartSize = 0xacc;
        short m_EndSize = 0xad0;
        short m_Rate = 0xad4;
        short m_JetLength = 0xad8;
        short m_bEmit = 0xadc;
        short m_bFaceLeft = 0xae4;
        short m_nType = 0xae0;
        short m_spawnflags = 0xae8;
        short m_flRollSpeed = 0xaec;
// TABLE:  DT_SmokeStack
        short m_SpreadSpeed = 0xb14;
        short m_Speed = 0xb18;
        short m_StartSize = 0xb1c;
        short m_EndSize = 0xb20;
        short m_Rate = 0xb24;
        short m_JetLength = 0xb28;
        short m_bEmit = 0xb2c;
        short m_flBaseSpread = 0xb30;
        short m_flTwist = 0xb84;
        short m_flRollSpeed = 0xbc0;
        short m_iMaterialModel = 0xb88;
        short m_AmbientLight.m_vPos = 0xb34;
        short m_AmbientLight.m_vColor = 0xb40;
        short m_AmbientLight.m_flIntensity = 0xb4c;
        short m_DirLight.m_vPos = 0xb50;
        short m_DirLight.m_vColor = 0xb5c;
        short m_DirLight.m_flIntensity = 0xb68;
        short m_vWind = 0xb78;
// TABLE:  DT_DustTrail
        short m_SpawnRate = 0xac4;
        short m_Color = 0xac8;
        short m_ParticleLifetime = 0xad8;
        short m_StopEmitTime = 0xae0;
        short m_MinSpeed = 0xae4;
        short m_MaxSpeed = 0xae8;
        short m_MinDirectedSpeed = 0xaec;
        short m_MaxDirectedSpeed = 0xaf0;
        short m_StartSize = 0xaf4;
        short m_EndSize = 0xaf8;
        short m_SpawnRadius = 0xafc;
        short m_bEmit = 0xb0c;
        short m_Opacity = 0xad4;
// TABLE:  DT_FireTrail
        short m_nAttachment = 0xac4;
        short m_flLifetime = 0xac8;
// TABLE:  DT_SporeTrail
        short m_flSpawnRate = 0xacc;
        short m_vecEndColor = 0xac0;
        short m_flParticleLifetime = 0xad0;
        short m_flStartSize = 0xad4;
        short m_flEndSize = 0xad8;
        short m_flSpawnRadius = 0xadc;
        short m_bEmit = 0xaec;
// TABLE:  DT_SporeExplosion
        short m_flSpawnRate = 0xac4;
        short m_flParticleLifetime = 0xac8;
        short m_flStartSize = 0xacc;
        short m_flEndSize = 0xad0;
        short m_flSpawnRadius = 0xad4;
        short m_bEmit = 0xadc;
        short m_bDontRemove = 0xadd;
// TABLE:  DT_RocketTrail
        short m_SpawnRate = 0xac4;
        short m_StartColor = 0xac8;
        short m_EndColor = 0xad4;
        short m_ParticleLifetime = 0xae4;
        short m_StopEmitTime = 0xae8;
        short m_MinSpeed = 0xaec;
        short m_MaxSpeed = 0xaf0;
        short m_StartSize = 0xaf4;
        short m_EndSize = 0xaf8;
        short m_SpawnRadius = 0xafc;
        short m_bEmit = 0xb0c;
        short m_nAttachment = 0xb10;
        short m_Opacity = 0xae0;
        short m_bDamaged = 0xb0d;
        short m_flFlareScale = 0xb20;
// TABLE:  DT_SmokeTrail
        short m_SpawnRate = 0xac4;
        short m_StartColor = 0xac8;
        short m_EndColor = 0xad4;
        short m_ParticleLifetime = 0xae4;
        short m_StopEmitTime = 0xae8;
        short m_MinSpeed = 0xaec;
        short m_MaxSpeed = 0xaf0;
        short m_MinDirectedSpeed = 0xaf4;
        short m_MaxDirectedSpeed = 0xaf8;
        short m_StartSize = 0xafc;
        short m_EndSize = 0xb00;
        short m_SpawnRadius = 0xb04;
        short m_bEmit = 0xb14;
        short m_nAttachment = 0xb18;
        short m_Opacity = 0xae0;
// TABLE:  DT_PropVehicleDriveable
        short m_hPlayer = 0x2984;
        short m_nSpeed = 0x2988;
        short m_nRPM = 0x298c;
        short m_flThrottle = 0x2990;
        short m_nBoostTimeLeft = 0x2994;
        short m_nHasBoost = 0x2998;
        short m_nScannerDisabledWeapons = 0x299c;
        short m_nScannerDisabledVehicle = 0x29a0;
        short m_bEnterAnimOn = 0x29c0;
        short m_bExitAnimOn = 0x29c1;
        short m_bUnableToFire = 0x2a0d;
        short m_vecEyeExitEndpoint = 0x2a00;
        short m_bHasGun = 0x2a0c;
        short m_vecGunCrosshair = 0x29c8;
// TABLE:  DT_ParticleSmokeGrenade
        short m_flSpawnTime = 0xad4;
        short m_FadeStartTime = 0xad8;
        short m_FadeEndTime = 0xadc;
        short m_MinColor = 0xae4;
        short m_MaxColor = 0xaf0;
        short m_CurrentStage = 0xac4;
// TABLE:  DT_ParticleFire
        short m_vOrigin = 0xacc;
        short m_vDirection = 0xad8;
// TABLE:  DT_MovieExplosion
// TABLE:  DT_TEGaussExplosion
        short m_nType = 0x1c;
        short m_vecDirection = 0x20;
// TABLE:  DT_QuadraticBeam
        short m_targetPosition = 0x9d8;
        short m_controlPosition = 0x9e4;
        short m_scrollRate = 0x9f0;
        short m_flWidth = 0x9f4;
// TABLE:  DT_Embers
        short m_nDensity = 0x9d8;
        short m_nLifetime = 0x9dc;
        short m_nSpeed = 0x9e0;
        short m_bEmit = 0x9e4;
// TABLE:  DT_EnvWind
// TABLE:  DT_EnvWindShared
        short m_iMinWind = 0xc;
        short m_iMaxWind = 0x10;
        short m_iMinGust = 0x18;
        short m_iMaxGust = 0x1c;
        short m_flMinGustDelay = 0x20;
        short m_flMaxGustDelay = 0x24;
        short m_iGustDirChange = 0x2c;
        short m_iWindSeed = 0x8;
        short m_iInitialWindDir = 0x6c;
        short m_flInitialWindSpeed = 0x70;
        short m_flStartTime = 0x4;
        short m_flGustDuration = 0x28;
        short m_EnvWindShared = 0x9d8;
// TABLE:  DT_Precipitation
        short m_nPrecipType = 0xa00;
// TABLE:  DT_PrecipitationBlocker
// TABLE:  DT_BaseTempEntity
// TABLE:  DT_NextBot
// TABLE:  DT_WearableItem
// TABLE:  DT_BaseAttributableItem
        short m_OriginalOwnerXuidLow = 0x31c0;
        short m_OriginalOwnerXuidHigh = 0x31c4;
        short m_nFallbackPaintKit = 0x31c8;
        short m_nFallbackSeed = 0x31cc;
        short m_flFallbackWear = 0x31d0;
        short m_nFallbackStatTrak = 0x31d4;
// TABLE:  DT_AttributeContainer
        short m_hOuter = 0x1c;
        short m_ProviderType = 0x24;
        short m_iReapplyProvisionParity = 0x18;
// TABLE:  DT_ScriptCreatedItem
        short m_iItemDefinitionIndex = 0x1ea;
        short m_iEntityLevel = 0x1f0;
        short m_iItemIDHigh = 0x200;
        short m_iItemIDLow = 0x204;
        short m_iAccountID = 0x208;
        short m_iEntityQuality = 0x1ec;
        short m_bInitialized = 0x214;
        short m_szCustomName = 0x27c;
// TABLE:  DT_AttributeList
// TABLE:  _ST_m_Attributes_32
// TABLE:  _LPT_m_Attributes_32
        short lengthprop32 = 0x0;
        short lengthproxy = 0x0;
        short m_Attributes = 0x0;
        short m_NetworkedDynamicAttributesForDemos = 0x260;
        short m_Item = 0x40;
        short m_AttributeManager = 0x2d80;
// TABLE:  DT_EconEntity
        short m_OriginalOwnerXuidLow = 0x31c0;
        short m_OriginalOwnerXuidHigh = 0x31c4;
        short m_nFallbackPaintKit = 0x31c8;
        short m_nFallbackSeed = 0x31cc;
        short m_flFallbackWear = 0x31d0;
        short m_nFallbackStatTrak = 0x31d4;
// TABLE:  DT_AttributeContainer
        short m_hOuter = 0x1c;
        short m_ProviderType = 0x24;
        short m_iReapplyProvisionParity = 0x18;
// TABLE:  DT_ScriptCreatedItem
        short m_iItemDefinitionIndex = 0x1ea;
        short m_iEntityLevel = 0x1f0;
        short m_iItemIDHigh = 0x200;
        short m_iItemIDLow = 0x204;
        short m_iAccountID = 0x208;
        short m_iEntityQuality = 0x1ec;
        short m_bInitialized = 0x214;
        short m_szCustomName = 0x27c;
// TABLE:  DT_AttributeList
// TABLE:  _ST_m_Attributes_32
// TABLE:  _LPT_m_Attributes_32
        short lengthprop32 = 0x0;
        short lengthproxy = 0x0;
        short m_Attributes = 0x0;
        short m_NetworkedDynamicAttributesForDemos = 0x260;
        short m_Item = 0x40;
        short m_AttributeManager = 0x2d80;
// TABLE:  DT_WeaponZoneRepulsor
// TABLE:  DT_WeaponXM1014
        short m_reloadState = 0x33d4;
// TABLE:  DT_WeaponTaser
        short m_fFireTime = 0x33f0;
// TABLE:  DT_WeaponTablet
        short m_flUpgradeExpirationTime[0] = 0x33d8;
        short m_flUpgradeExpirationTime = 0x0;
        short m_vecLocalHexFlags[0] = 0x33e8;
        short m_vecLocalHexFlags = 0x0;
        short m_nContractKillGridIndex = 0x3490;
        short m_nContractKillGridHighResIndex = 0x3494;
        short m_bTabletReceptionIsBlocked = 0x3498;
        short m_flScanProgress = 0x349c;
        short m_flBootTime = 0x34a0;
        short m_flShowMapTime = 0x34a4;
        short m_vecNotificationIds[0] = 0x34b4;
        short m_vecNotificationIds = 0x0;
        short m_vecNotificationTimestamps[0] = 0x34d4;
        short m_vecNotificationTimestamps = 0x0;
        short m_vecPlayerPositionHistory[0] = 0x34f8;
        short m_vecPlayerPositionHistory = 0x0;
        short m_nLastPurchaseIndex = 0x34f4;
        short m_vecNearestMetalCratePos = 0x34a8;
// TABLE:  DT_Snowball
// TABLE:  DT_SmokeGrenade
// TABLE:  DT_WeaponShield
// TABLE:  DT_WeaponSG552
// TABLE:  DT_SensorGrenade
// TABLE:  DT_WeaponSawedoff
        short m_reloadState = 0x33d4;
// TABLE:  DT_WeaponNOVA
        short m_reloadState = 0x33d4;
// TABLE:  DT_IncendiaryGrenade
// TABLE:  DT_MolotovGrenade
// TABLE:  DT_WeaponMelee
        short m_flThrowAt = 0x33d0;
// TABLE:  DT_WeaponM3
        short m_reloadState = 0x33d4;
// TABLE:  DT_WeaponKnifeGG
// TABLE:  DT_WeaponKnife
// TABLE:  DT_HEGrenade
// TABLE:  DT_Flashbang
// TABLE:  DT_WeaponFists
        short m_bPlayingUninterruptableAct = 0x33d0;
// TABLE:  DT_WeaponElite
// TABLE:  DT_DecoyGrenade
// TABLE:  DT_WeaponDEagle
// TABLE:  DT_WeaponUSP
// TABLE:  DT_WeaponM249
// TABLE:  DT_WeaponUMP45
// TABLE:  DT_WeaponTMP
// TABLE:  DT_WeaponTec9
// TABLE:  DT_WeaponSSG08
// TABLE:  DT_WeaponSG556
// TABLE:  DT_WeaponSG550
// TABLE:  DT_WeaponScout
// TABLE:  DT_WeaponSCAR20
// TABLE:  DT_WeaponSCAR17
// TABLE:  DT_WeaponP90
// TABLE:  DT_WeaponP250
// TABLE:  DT_WeaponP228
// TABLE:  DT_WeaponNegev
// TABLE:  DT_WeaponMP9
// TABLE:  DT_WeaponMP7
// TABLE:  DT_WeaponMP5Navy
// TABLE:  DT_WeaponMag7
// TABLE:  DT_WeaponMAC10
// TABLE:  DT_WeaponM4A1
// TABLE:  DT_WeaponHKP2000
// TABLE:  DT_WeaponGlock
// TABLE:  DT_WeaponGalilAR
// TABLE:  DT_WeaponGalil
// TABLE:  DT_WeaponG3SG1
// TABLE:  DT_WeaponFiveSeven
// TABLE:  DT_WeaponFamas
// TABLE:  DT_WeaponBizon
// TABLE:  DT_WeaponAWP
// TABLE:  DT_WeaponAug
// TABLE:  DT_WeaponAK47
// TABLE:  DT_WeaponCSBaseGun
        short m_zoomLevel = 0x33d0;
        short m_iBurstShotsRemaining = 0x33d4;
// TABLE:  DT_WeaponCSBase
        short m_weaponMode = 0x3318;
        short m_fAccuracyPenalty = 0x3330;
        short m_fLastShotTime = 0x33a8;
        short m_iRecoilIndex = 0x3340;
        short m_flRecoilIndex = 0x3344;
        short m_hPrevOwner = 0x3384;
        short m_bBurstMode = 0x3348;
        short m_flPostponeFireReadyTime = 0x334c;
        short m_bReloadVisuallyComplete = 0x3350;
        short m_bSilencerOn = 0x3351;
        short m_flDoneSwitchingSilencer = 0x3354;
        short m_iOriginalTeamNumber = 0x335c;
        short m_iIronSightMode = 0x33c4;
// TABLE:  DT_WeaponC4
        short m_bStartedArming = 0x33f0;
        short m_bBombPlacedAnimation = 0x33f8;
        short m_fArmedTime = 0x33f4;
        short m_bShowC4LED = 0x33f9;
        short m_bIsPlantingViaUse = 0x33fa;
// TABLE:  DT_WeaponBumpMine
// TABLE:  DT_BumpMineProjectile
        short m_nParentBoneIndex = 0x29d4;
        short m_vecParentBonePos = 0x29d8;
        short m_bArmed = 0x29e4;
// TABLE:  DT_WeaponBreachCharge
// TABLE:  DT_BreachChargeProjectile
        short m_bShouldExplode = 0x29d0;
        short m_weaponThatThrewMe = 0x29d4;
        short m_nParentBoneIndex = 0x29d8;
        short m_vecParentBonePos = 0x29dc;
// TABLE:  DT_WeaponBaseItem
        short m_bRedraw = 0x33dc;
// TABLE:  DT_BaseCSGrenade
        short m_bRedraw = 0x33d0;
        short m_bIsHeldByPlayer = 0x33d1;
        short m_bPinPulled = 0x33d2;
        short m_fThrowTime = 0x33d4;
        short m_bLoopingSoundPlaying = 0x33d8;
        short m_flThrowStrength = 0x33dc;
// TABLE:  DT_SnowballProjectile
// TABLE:  DT_SnowballPile
// TABLE:  DT_SmokeGrenadeProjectile
        short m_bDidSmokeEffect = 0x2a14;
        short m_nSmokeEffectTickBegin = 0x2a10;
// TABLE:  DT_SensorGrenadeProjectile
// TABLE:  DT_MolotovProjectile
        short m_bIsIncGrenade = 0x2a10;
// TABLE:  DT_Item_Healthshot
// TABLE:  DT_ItemDogtags
        short m_OwningPlayer = 0x3440;
        short m_KillingPlayer = 0x3444;
// TABLE:  DT_DecoyProjectile
// TABLE:  DT_PhysPropRadarJammer
// TABLE:  DT_PhysPropWeaponUpgrade
// TABLE:  DT_PhysPropAmmoBox
// TABLE:  DT_PhysPropLootCrate
        short m_bRenderInPSPM = 0x29f4;
        short m_bRenderInTablet = 0x29f5;
        short m_iHealth = 0x100;
        short m_iMaxHealth = 0x29f8;
// TABLE:  DT_ItemCash
// TABLE:  DT_EnvGasCanister
        short m_flFlightSpeed = 0x29f4;
        short m_flLaunchTime = 0x29f8;
        short m_vecParabolaDirection = 0x2a0c;
        short m_flFlightTime = 0x29f0;
        short m_flWorldEnterTime = 0x2a18;
        short m_flInitialZSpeed = 0x29fc;
        short m_flZAcceleration = 0x2a00;
        short m_flHorizSpeed = 0x2a04;
        short m_bLaunchedFromWithinWorld = 0x2a08;
        short m_vecImpactPosition = 0x29b4;
        short m_vecStartPosition = 0x29c0;
        short m_vecEnterWorldPosition = 0x29cc;
        short m_vecDirection = 0x29d8;
        short m_vecStartAngles = 0x29e4;
        short m_vecSkyboxOrigin = 0x2a1c;
        short m_flSkyboxScale = 0x2a28;
        short m_bInSkybox = 0x2a2c;
        short m_bDoImpactEffects = 0x2a2d;
        short m_bLanded = 0x2980;
        short m_hSkyboxCopy = 0x29a8;
        short m_nMyZoneIndex = 0x2a30;
        short m_vecOrigin = 0x138;
        short m_vecOrigin[2] = 0x140;
// TABLE:  DT_Dronegun
        short m_vecAttentionTarget = 0x2980;
        short m_vecTargetOffset = 0x298c;
        short m_iHealth = 0x100;
        short m_bHasTarget = 0x2998;
// TABLE:  DT_ParadropChopper
        short m_vecOrigin = 0x138;
        short m_vecOrigin[2] = 0x140;
        short m_hCallingPlayer = 0x2990;
// TABLE:  DT_SurvivalSpawnChopper
        short m_vecOrigin = 0x138;
        short m_vecOrigin[2] = 0x140;
// TABLE:  DT_BRC4Target
        short m_bBrokenOpen = 0x2984;
        short m_flRadius = 0x2988;
// TABLE:  DT_InfoMapRegion
        short m_flRadius = 0x9d8;
        short m_szLocToken = 0x9dc;
// TABLE:  DT_FireCrackerBlast
// TABLE:  DT_Inferno
        short m_nFireEffectTickBegin = 0x13b4;
        short m_fireCount = 0x13a8;
// TABLE:  m_fireXDelta
// TABLE:  m_fireYDelta
// TABLE:  m_fireZDelta
// TABLE:  m_bFireIsBurning
        short m_fireXDelta = 0x9e4;
        short m_fireYDelta = 0xb74;
        short m_fireZDelta = 0xd04;
        short m_bFireIsBurning = 0xe94;
// TABLE:  DT_CChicken
        short m_jumpedThisFrame = 0x29e8;
        short m_leader = 0x29ec;
// TABLE:  DT_Drone
        short m_hMoveToThisEntity = 0x29d8;
        short m_hDeliveryCargo = 0x29dc;
        short m_bPilotTakeoverAllowed = 0x29e0;
        short m_hPotentialCargo = 0x29e4;
        short m_hCurrentPilot = 0x29e8;
        short m_vecTagPositions[0] = 0x29ec;
        short m_vecTagPositions = 0x0;
        short m_vecTagIncrements[0] = 0x2b0c;
        short m_vecTagIncrements = 0x0;
// TABLE:  DT_FootstepControl
        short m_source = 0xa10;
        short m_destination = 0xa20;
// TABLE:  DT_CSGameRulesProxy
// TABLE:  DT_CSGameRules
        short m_bFreezePeriod = 0x20;
        short m_bMatchWaitingForResume = 0x40;
        short m_bWarmupPeriod = 0x21;
        short m_fWarmupPeriodEnd = 0x24;
        short m_fWarmupPeriodStart = 0x28;
        short m_bTerroristTimeOutActive = 0x2c;
        short m_bCTTimeOutActive = 0x2d;
        short m_flTerroristTimeOutRemaining = 0x30;
        short m_flCTTimeOutRemaining = 0x34;
        short m_nTerroristTimeOuts = 0x38;
        short m_nCTTimeOuts = 0x3c;
        short m_iRoundTime = 0x44;
        short m_gamePhase = 0x60;
        short m_totalRoundsPlayed = 0x64;
        short m_nOvertimePlaying = 0x68;
        short m_timeUntilNextPhaseStarts = 0x5c;
        short m_flCMMItemDropRevealStartTime = 0x870;
        short m_flCMMItemDropRevealEndTime = 0x874;
        short m_fRoundStartTime = 0x4c;
        short m_bGameRestart = 0x54;
        short m_flRestartRoundTime = 0x50;
        short m_flGameStartTime = 0x58;
        short m_iHostagesRemaining = 0x6c;
        short m_bAnyHostageReached = 0x70;
        short m_bMapHasBombTarget = 0x71;
        short m_bMapHasRescueZone = 0x72;
        short m_bMapHasBuyZone = 0x73;
        short m_bIsQueuedMatchmaking = 0x74;
        short m_bIsValveDS = 0x75;
        short m_bIsQuestEligible = 0x879;
        short m_bLogoMap = 0x76;
        short m_bPlayAllStepSoundsOnServer = 0x77;
        short m_iNumGunGameProgressiveWeaponsCT = 0x78;
        short m_iNumGunGameProgressiveWeaponsT = 0x7c;
        short m_iSpectatorSlotCount = 0x80;
        short m_bBombDropped = 0x99c;
        short m_bBombPlanted = 0x99d;
        short m_iRoundWinStatus = 0x9a0;
        short m_eRoundWinReason = 0x9a4;
        short m_flDMBonusStartTime = 0x44c;
        short m_flDMBonusTimeLength = 0x450;
        short m_unDMBonusWeaponLoadoutSlot = 0x454;
        short m_bDMBonusActive = 0x456;
        short m_bTCantBuy = 0x9a8;
        short m_bCTCantBuy = 0x9a9;
        short m_flGuardianBuyUntilTime = 0x9ac;
        short m_MatchDevice = 0x444;
        short m_bHasMatchStarted = 0x448;
        short m_nNextMapInMapgroup = 0x458;
        short m_nEndMatchMapVoteWinner = 0xc70;
        short m_bIsDroppingItems = 0x878;
        short m_iActiveAssassinationTargetMissionID = 0xc18;
        short m_fMatchStartTime = 0x48;
        short m_szTournamentEventName = 0x45c;
        short m_szTournamentEventStage = 0x560;
        short m_szTournamentPredictionsTxt = 0x768;
        short m_nTournamentPredictionsPct = 0x86c;
        short m_szMatchStatTxt = 0x664;
        short m_nGuardianModeWaveNumber = 0x87c;
        short m_nGuardianModeSpecialKillsRemaining = 0x880;
        short m_nGuardianModeSpecialWeaponNeeded = 0x884;
        short m_nHalloweenMaskListSeed = 0x998;
        short m_numGlobalGiftsGiven = 0x890;
        short m_numGlobalGifters = 0x894;
        short m_numGlobalGiftsPeriodSeconds = 0x898;
        short m_numBestOfMaps = 0x994;
        short m_iNumConsecutiveCTLoses = 0xc74;
        short m_iNumConsecutiveTerroristLoses = 0xc78;
// TABLE:  m_iMatchStats_RoundResults
// TABLE:  m_iMatchStats_PlayersAlive_T
// TABLE:  m_iMatchStats_PlayersAlive_CT
// TABLE:  m_GGProgressiveWeaponOrderCT
// TABLE:  m_GGProgressiveWeaponOrderT
// TABLE:  m_GGProgressiveWeaponKillUpgradeOrderCT
// TABLE:  m_GGProgressiveWeaponKillUpgradeOrderT
// TABLE:  m_TeamRespawnWaveTimes
// TABLE:  m_flNextRespawnWave
// TABLE:  m_nEndMatchMapGroupVoteTypes
// TABLE:  m_nEndMatchMapGroupVoteOptions
// TABLE:  m_arrFeaturedGiftersAccounts
// TABLE:  m_arrFeaturedGiftersGifts
// TABLE:  m_arrProhibitedItemIndices
// TABLE:  m_arrTournamentActiveCasterAccounts
// TABLE:  DT_SurvivalGameRules
        short m_vecPlayAreaMins = 0x0;
        short m_vecPlayAreaMaxs = 0xc;
        short m_flSpawnSelectionTimeStart = 0x1f8;
        short m_flSpawnSelectionTimeEnd = 0x1fc;
        short m_flSpawnSelectionTimeLoadout = 0x200;
        short m_spawnStage = 0x204;
        short m_flTabletHexOriginX = 0x208;
        short m_flTabletHexOriginY = 0x20c;
        short m_flTabletHexSize = 0x210;
        short m_flSurvivalStartTime = 0x6a8;
// TABLE:  m_iPlayerSpawnHexIndices
// TABLE:  m_SpawnTileState
// TABLE:  m_roundData_playerXuids
// TABLE:  m_roundData_playerPositions
// TABLE:  m_roundData_playerTeams
// TABLE:  m_SurvivalGameRuleDecisionTypes
// TABLE:  m_SurvivalGameRuleDecisionValues
        short m_iPlayerSpawnHexIndices = 0x18;
        short m_SpawnTileState = 0x118;
        short m_roundData_playerXuids = 0x218;
        short m_roundData_playerPositions = 0x420;
        short m_roundData_playerTeams = 0x524;
        short m_SurvivalGameRuleDecisionTypes = 0x628;
        short m_SurvivalGameRuleDecisionValues = 0x668;
        short m_iMatchStats_RoundResults = 0x9b0;
        short m_iMatchStats_PlayersAlive_T = 0xaa0;
        short m_iMatchStats_PlayersAlive_CT = 0xa28;
        short m_GGProgressiveWeaponOrderCT = 0x84;
        short m_GGProgressiveWeaponOrderT = 0x174;
        short m_GGProgressiveWeaponKillUpgradeOrderCT = 0x264;
        short m_GGProgressiveWeaponKillUpgradeOrderT = 0x354;
        short m_TeamRespawnWaveTimes = 0xb18;
        short m_flNextRespawnWave = 0xb98;
        short m_nEndMatchMapGroupVoteTypes = 0xc20;
        short m_nEndMatchMapGroupVoteOptions = 0xc48;
        short m_arrFeaturedGiftersAccounts = 0x89c;
        short m_arrFeaturedGiftersGifts = 0x8ac;
        short m_arrProhibitedItemIndices = 0x8bc;
        short m_arrTournamentActiveCasterAccounts = 0x984;
        short m_SurvivalRules = 0xcf8;
        short cs_gamerules_data = 0x0;
// TABLE:  DT_WeaponCubemap
// TABLE:  DT_WeaponCycler
// TABLE:  DT_TEPlantBomb
        short m_vecOrigin = 0x14;
        short m_iPlayer = 0x10;
        short m_option = 0x20;
// TABLE:  DT_TEFireBullets
        short m_vecOrigin = 0x18;
        short m_vecAngles[0] = 0x24;
        short m_vecAngles[1] = 0x28;
        short m_iWeaponID = 0x34;
        short m_weapon = 0x30;
        short m_iMode = 0x38;
        short m_iSeed = 0x3c;
        short m_iPlayer = 0x10;
        short m_fInaccuracy = 0x40;
        short m_fSpread = 0x48;
        short m_nItemDefIndex = 0x14;
        short m_iSoundType = 0x4c;
        short m_flRecoilIndex = 0x44;
// TABLE:  DT_TERadioIcon
        short m_iAttachToClient = 0x10;
// TABLE:  DT_PlantedC4
        short m_bBombTicking = 0x2980;
        short m_nBombSite = 0x2984;
        short m_flC4Blow = 0x2990;
        short m_flTimerLength = 0x2994;
        short m_flDefuseLength = 0x29a8;
        short m_flDefuseCountDown = 0x29ac;
        short m_bBombDefused = 0x29b0;
        short m_hBombDefuser = 0x29b4;
// TABLE:  DT_CSTeam
// TABLE:  DT_CSPlayerResource
        short m_iPlayerC4 = 0x165c;
        short m_iPlayerVIP = 0x1660;
        short m_bombsiteCenterA = 0x1664;
        short m_bombsiteCenterB = 0x1670;
        short m_bEndMatchNextMapAllVoted = 0x6b8c;
// TABLE:  m_bHostageAlive
// TABLE:  m_isHostageFollowingSomeone
// TABLE:  m_iHostageEntityIDs
// TABLE:  m_hostageRescueX
// TABLE:  m_hostageRescueY
// TABLE:  m_hostageRescueZ
// TABLE:  m_iMVPs
// TABLE:  m_iArmor
// TABLE:  m_bHasHelmet
// TABLE:  m_bHasDefuser
// TABLE:  m_iScore
// TABLE:  m_iCompetitiveRanking
// TABLE:  m_iCompetitiveWins
// TABLE:  m_iCompetitiveRankType
// TABLE:  m_iCompTeammateColor
// TABLE:  m_iLifetimeStart
// TABLE:  m_iLifetimeEnd
// TABLE:  m_bControllingBot
// TABLE:  m_iControlledPlayer
// TABLE:  m_iControlledByPlayer
// TABLE:  m_iBotDifficulty
// TABLE:  m_szClan
// TABLE:  m_nCharacterDefIndex
// TABLE:  m_iTotalCashSpent
// TABLE:  m_iGunGameLevel
// TABLE:  m_iCashSpentThisRound
// TABLE:  m_nEndMatchNextMapVotes
// TABLE:  m_nActiveCoinRank
// TABLE:  m_nMusicID
// TABLE:  m_nPersonaDataPublicLevel
// TABLE:  m_nPersonaDataPublicCommendsLeader
// TABLE:  m_nPersonaDataPublicCommendsTeacher
// TABLE:  m_nPersonaDataPublicCommendsFriendly
// TABLE:  m_bHasCommunicationAbuseMute
// TABLE:  m_szCrosshairCodes
// TABLE:  m_iMatchStats_Kills_Total
// TABLE:  m_iMatchStats_5k_Total
// TABLE:  m_iMatchStats_4k_Total
// TABLE:  m_iMatchStats_3k_Total
// TABLE:  m_iMatchStats_Damage_Total
// TABLE:  m_iMatchStats_EquipmentValue_Total
// TABLE:  m_iMatchStats_KillReward_Total
// TABLE:  m_iMatchStats_LiveTime_Total
// TABLE:  m_iMatchStats_Deaths_Total
// TABLE:  m_iMatchStats_Assists_Total
// TABLE:  m_iMatchStats_HeadShotKills_Total
// TABLE:  m_iMatchStats_Objective_Total
// TABLE:  m_iMatchStats_CashEarned_Total
// TABLE:  m_iMatchStats_UtilityDamage_Total
// TABLE:  m_iMatchStats_EnemiesFlashed_Total
        short m_bHostageAlive = 0x167c;
        short m_isHostageFollowingSomeone = 0x1688;
        short m_iHostageEntityIDs = 0x1694;
        short m_hostageRescueX = 0x16c4;
        short m_hostageRescueY = 0x16d4;
        short m_hostageRescueZ = 0x16e4;
        short m_iMVPs = 0x16f4;
        short m_iArmor = 0x187c;
        short m_bHasHelmet = 0x1839;
        short m_bHasDefuser = 0x17f8;
        short m_iScore = 0x1980;
        short m_iCompetitiveRanking = 0x1a84;
        short m_iCompetitiveWins = 0x1b88;
        short m_iCompetitiveRankType = 0x1c8c;
        short m_iCompTeammateColor = 0x1cd0;
        short m_iLifetimeStart = 0x1dd4;
        short m_iLifetimeEnd = 0x1ed8;
        short m_bControllingBot = 0x1fdc;
        short m_iControlledPlayer = 0x2020;
        short m_iControlledByPlayer = 0x2124;
        short m_iBotDifficulty = 0x42a8;
        short m_szClan = 0x43ac;
        short m_nCharacterDefIndex = 0x47bc;
        short m_iTotalCashSpent = 0x48c0;
        short m_iGunGameLevel = 0x49c4;
        short m_iCashSpentThisRound = 0x4ac8;
        short m_nEndMatchNextMapVotes = 0x6a88;
        short m_nActiveCoinRank = 0x4bcc;
        short m_nMusicID = 0x4cd0;
        short m_nPersonaDataPublicLevel = 0x4dd4;
        short m_nPersonaDataPublicCommendsLeader = 0x4ed8;
        short m_nPersonaDataPublicCommendsTeacher = 0x4fdc;
        short m_nPersonaDataPublicCommendsFriendly = 0x50e0;
        short m_bHasCommunicationAbuseMute = 0x51e4;
        short m_szCrosshairCodes = 0x5225;
        short m_iMatchStats_Kills_Total = 0x5b08;
        short m_iMatchStats_5k_Total = 0x601c;
        short m_iMatchStats_4k_Total = 0x5f18;
        short m_iMatchStats_3k_Total = 0x5e14;
        short m_iMatchStats_Damage_Total = 0x6120;
        short m_iMatchStats_EquipmentValue_Total = 0x6224;
        short m_iMatchStats_KillReward_Total = 0x6328;
        short m_iMatchStats_LiveTime_Total = 0x642c;
        short m_iMatchStats_Deaths_Total = 0x5d10;
        short m_iMatchStats_Assists_Total = 0x5c0c;
        short m_iMatchStats_HeadShotKills_Total = 0x6530;
        short m_iMatchStats_Objective_Total = 0x6634;
        short m_iMatchStats_CashEarned_Total = 0x6738;
        short m_iMatchStats_UtilityDamage_Total = 0x683c;
        short m_iMatchStats_EnemiesFlashed_Total = 0x6940;
// TABLE:  DT_CSPlayer
        short m_angEyeAngles[0] = 0xb37c;
        short m_angEyeAngles[1] = 0xb380;
        short m_iAddonBits = 0xa374;
        short m_iPrimaryAddon = 0xa378;
        short m_iSecondaryAddon = 0xa37c;
        short m_iThrowGrenadeCounter = 0x396c;
        short m_bWaitForNoAttack = 0x3970;
        short m_bIsRespawningForDMBonus = 0x3971;
        short m_iPlayerState = 0x392c;
        short m_iAccount = 0xb364;
        short m_iStartAccount = 0xa3a4;
        short m_totalHitsOnServer = 0xa3a8;
        short m_bInBombZone = 0x3968;
        short m_bInBuyZone = 0x3969;
        short m_bInNoDefuseArea = 0x396a;
        short m_bKilledByTaser = 0x3981;
        short m_iMoveState = 0x3984;
        short m_iClass = 0xb374;
        short m_ArmorValue = 0xb378;
        short m_angEyeAngles = 0xb37c;
        short m_bHasDefuser = 0xb388;
        short m_bNightVisionOn = 0xa399;
        short m_bHasNightVision = 0xa39a;
        short m_bInHostageRescueZone = 0xb389;
        short m_bIsDefusing = 0x3930;
        short m_bIsGrabbingHostage = 0x3931;
        short m_iBlockingUseActionInProgress = 0x3934;
        short m_bIsScoped = 0x3928;
        short m_bIsWalking = 0x3929;
        short m_nIsAutoMounting = 0x3a98;
        short m_bResumeZoom = 0x392a;
        short m_fImmuneToGunGameDamageTime = 0x393c;
        short m_bGunGameImmunity = 0x3944;
        short m_bHasMovedSinceSpawn = 0x3945;
        short m_bMadeFinalGunGameProgressiveKill = 0x3946;
        short m_iGunGameProgressiveWeaponIndex = 0x3948;
        short m_iNumGunGameTRKillPoints = 0x394c;
        short m_iNumGunGameKillsWithCurrentWeapon = 0x3950;
        short m_iNumRoundKills = 0x3954;
        short m_fMolotovUseTime = 0x3960;
        short m_fMolotovDamageTime = 0x3964;
        short m_szArmsModel = 0x398b;
        short m_hCarriedHostage = 0xa3f8;
        short m_hCarriedHostageProp = 0xa3fc;
        short m_bIsRescuing = 0x3938;
        short m_flGroundAccelLinearFracLastTime = 0xa3a0;
        short m_bCanMoveDuringFreezePeriod = 0x3988;
        short m_isCurrentGunGameLeader = 0x3989;
        short m_isCurrentGunGameTeamLeader = 0x398a;
        short m_flGuardianTooFarDistFrac = 0x3974;
        short m_flDetectedByEnemySensorTime = 0x3978;
        short m_bIsPlayerGhost = 0x3a95;
        short m_bHasParachute = 0xb350;
        short m_unMusicID = 0xb354;
        short m_bHasHelmet = 0xb36c;
        short m_bHasHeavyArmor = 0xb36d;
        short m_nHeavyAssaultSuitCooldownRemaining = 0xb370;
        short m_flFlashDuration = 0xa420;
        short m_flFlashMaxAlpha = 0xa41c;
        short m_iProgressBarDuration = 0xa380;
        short m_flProgressBarStartTime = 0xa384;
        short m_hRagdoll = 0xa3ec;
        short m_hPlayerPing = 0xa3f0;
        short m_cycleLatch = 0xb48c;
        short m_unCurrentEquipmentValue = 0xb330;
        short m_unRoundStartEquipmentValue = 0xb332;
        short m_unFreezetimeEndEquipmentValue = 0xb334;
        short m_bIsControllingBot = 0xb9f9;
        short m_bHasControlledBotThisRound = 0xba08;
        short m_bCanControlObservedBot = 0xb9fa;
        short m_iControlledBotEntIndex = 0xb9fc;
        short m_vecAutomoveTargetEnd = 0x3aa8;
        short m_flAutoMoveStartTime = 0x3ab8;
        short m_flAutoMoveTargetTime = 0x3abc;
        short m_bIsAssassinationTarget = 0xb9f8;
        short m_bHud_MiniScoreHidden = 0xb3aa;
        short m_bHud_RadarHidden = 0xb3ab;
        short m_nLastKillerIndex = 0xb3ac;
        short m_nLastConcurrentKilled = 0xb3b0;
        short m_nDeathCamMusic = 0xb3b4;
        short m_bIsHoldingLookAtWeapon = 0xb921;
        short m_bIsLookingAtWeapon = 0xb920;
        short m_iNumRoundKillsHeadshots = 0x3958;
        short m_unTotalRoundDamageDealt = 0x395c;
        short m_flLowerBodyYawTarget = 0x3a90;
        short m_bStrafing = 0x3a94;
        short m_flThirdpersonRecoil = 0xb998;
        short m_bHideTargetID = 0xb99c;
        short m_bIsSpawnRappelling = 0xa3ad;
        short m_vecSpawnRappellingRopeOrigin = 0xa3b0;
        short m_nSurvivalTeam = 0xa3c0;
        short m_hSurvivalAssassinationTarget = 0xa3c4;
        short m_flHealthShotBoostExpirationTime = 0xa3c8;
        short m_flLastExoJumpTime = 0x3ac0;
// TABLE:  DT_CSLocalPlayerExclusive
        short m_vecOrigin = 0x138;
        short m_vecOrigin[2] = 0x140;
        short m_flStamina = 0xa388;
        short m_iDirection = 0xa38c;
        short m_iShotsFired = 0xa390;
        short m_nNumFastDucks = 0xa394;
        short m_bDuckOverride = 0xa398;
        short m_flVelocityModifier = 0xa39c;
        short m_unActiveQuestId = 0xb328;
        short m_nQuestProgressReason = 0xb32c;
// TABLE:  m_bPlayerDominated
// TABLE:  m_bPlayerDominatingMe
// TABLE:  m_iWeaponPurchasesThisRound
        short m_bPlayerDominated = 0xb494;
        short m_bPlayerDominatingMe = 0xb4d5;
        short m_iWeaponPurchasesThisRound = 0xb518;
// TABLE:  DT_CSNonLocalPlayerExclusive
        short m_vecOrigin = 0x138;
        short m_vecOrigin[2] = 0x140;
// TABLE:  DT_CSTeamExclusive
// TABLE:  m_iWeaponPurchasesThisMatch
// TABLE:  m_EquippedLoadoutItemDefIndices
        short m_iWeaponPurchasesThisMatch = 0xaa7c;
        short m_EquippedLoadoutItemDefIndices = 0xb254;
// TABLE:  m_iMatchStats_Kills
// TABLE:  m_iMatchStats_Damage
// TABLE:  m_iMatchStats_EquipmentValue
// TABLE:  m_iMatchStats_MoneySaved
// TABLE:  m_iMatchStats_KillReward
// TABLE:  m_iMatchStats_LiveTime
// TABLE:  m_iMatchStats_Deaths
// TABLE:  m_iMatchStats_Assists
// TABLE:  m_iMatchStats_HeadShotKills
// TABLE:  m_iMatchStats_Objective
// TABLE:  m_iMatchStats_CashEarned
// TABLE:  m_iMatchStats_UtilityDamage
// TABLE:  m_iMatchStats_EnemiesFlashed
// TABLE:  m_rank
// TABLE:  m_passiveItems
// TABLE:  m_vecPlayerPatchEconIndices
        short cslocaldata = 0x0;
        short csnonlocaldata = 0x0;
        short csteamdata = 0x0;
        short m_iMatchStats_Kills = 0xa464;
        short m_iMatchStats_Damage = 0xa4dc;
        short m_iMatchStats_EquipmentValue = 0xa554;
        short m_iMatchStats_MoneySaved = 0xa5cc;
        short m_iMatchStats_KillReward = 0xa644;
        short m_iMatchStats_LiveTime = 0xa6bc;
        short m_iMatchStats_Deaths = 0xa734;
        short m_iMatchStats_Assists = 0xa7ac;
        short m_iMatchStats_HeadShotKills = 0xa824;
        short m_iMatchStats_Objective = 0xa89c;
        short m_iMatchStats_CashEarned = 0xa914;
        short m_iMatchStats_UtilityDamage = 0xa98c;
        short m_iMatchStats_EnemiesFlashed = 0xaa04;
        short m_rank = 0xb338;
        short m_passiveItems = 0xb350;
        short m_vecPlayerPatchEconIndices = 0xb970;
// TABLE:  DT_PlayerPing
        short m_hPlayer = 0x9e4;
        short m_hPingedEntity = 0x9e8;
        short m_iType = 0x9ec;
// TABLE:  DT_CSRagdoll
        short m_vecOrigin = 0x138;
        short m_vecRagdollOrigin = 0x2a0c;
        short m_hPlayer = 0x29f0;
        short m_nModelIndex = 0x258;
        short m_nForceBone = 0x268c;
        short m_vecForce = 0x2680;
        short m_vecRagdollVelocity = 0x2a00;
        short m_iDeathPose = 0x2a18;
        short m_iDeathFrame = 0x2a1c;
        short m_iTeamNum = 0xf4;
        short m_bClientSideAnimation = 0x289c;
        short m_flDeathYaw = 0x2a20;
        short m_flAbsYaw = 0x2a24;
// TABLE:  DT_TEPlayerAnimEvent
        short m_hPlayer = 0x10;
        short m_iEvent = 0x14;
        short m_nData = 0x18;
// TABLE:  DT_CHostage
        short m_isRescued = 0x2f30;
        short m_jumpedThisFrame = 0x2f31;
        short m_iHealth = 0x100;
        short m_iMaxHealth = 0x2f18;
        short m_lifeState = 0x25f;
        short m_fFlags = 0x104;
        short m_nHostageState = 0x2f34;
        short m_flRescueStartTime = 0x2f38;
        short m_flGrabSuccessTime = 0x2f3c;
        short m_flDropStartTime = 0x2f40;
        short m_vel = 0x2f24;
        short m_leader = 0x2f20;
// TABLE:  DT_HostageCarriableProp
// TABLE:  DT_BaseCSGrenadeProjectile
        short m_vInitialVelocity = 0x29d0;
        short m_nBounces = 0x29dc;
        short m_nExplodeEffectIndex = 0x29e0;
        short m_nExplodeEffectTickBegin = 0x29e4;
        short m_vecExplodeEffectOrigin = 0x29e8;
// TABLE:  DT_HandleTest
        short m_Handle = 0x9d8;
        short m_bSendHandle = 0x9dc;
// TABLE:  DT_TeamplayRoundBasedRulesProxy
// TABLE:  DT_TeamplayRoundBasedRules
        short m_iRoundState = 0x28;
        short m_bInWaitingForPlayers = 0x38;
        short m_iWinningTeam = 0x30;
        short m_bInOvertime = 0x2c;
        short m_bInSetup = 0x2d;
        short m_bSwitchedTeamsThisRound = 0x2e;
        short m_bAwaitingReadyRestart = 0x39;
        short m_flRestartRoundTime = 0x3c;
        short m_flMapResetTime = 0x40;
        short m_bStopWatch = 0xe4;
// TABLE:  m_flNextRespawnWave
// TABLE:  m_TeamRespawnWaveTimes
// TABLE:  m_bTeamReady
        short m_flNextRespawnWave = 0x44;
        short m_TeamRespawnWaveTimes = 0xe8;
        short m_bTeamReady = 0xc4;
        short teamplayroundbased_gamerules_data = 0x0;
// TABLE:  DT_SpriteTrail
        short m_flLifeTime = 0x1074;
        short m_flStartWidth = 0x1078;
        short m_flEndWidth = 0x107c;
        short m_flStartWidthVariance = 0x1080;
        short m_flTextureRes = 0x1084;
        short m_flMinFadeLength = 0x1088;
        short m_vecSkyboxOrigin = 0x108c;
        short m_flSkyboxScale = 0x1098;
// TABLE:  DT_SpriteOriented
// TABLE:  DT_Sprite
        short m_hAttachedToEntity = 0x9e8;
        short m_nAttachment = 0x9ec;
        short m_flScaleTime = 0xa08;
        short m_flSpriteScale = 0xa04;
        short m_flSpriteFramerate = 0x9f0;
        short m_flGlowProxySize = 0xa10;
        short m_flHDRColorScale = 0xa14;
        short m_flFrame = 0x9f4;
        short m_flBrightnessTime = 0xa00;
        short m_nBrightness = 0x9fc;
        short m_bWorldSpaceScale = 0xa0c;
// TABLE:  DT_Ragdoll_Attached
        short m_boneIndexAttached = 0x2cb8;
        short m_ragdollAttachedObjectIndex = 0x2cb4;
        short m_attachmentPointBoneSpace = 0x2c90;
        short m_attachmentPointRagdollSpace = 0x2ca8;
// TABLE:  DT_Ragdoll
        short m_ragAngles[0] = 0x2aa0;
        short m_ragAngles = 0x0;
        short m_ragPos[0] = 0x2980;
        short m_ragPos = 0x0;
        short m_hUnragdoll = 0x2c7c;
        short m_flBlendWeight = 0x2c80;
        short m_nOverlaySequence = 0x2c88;
// TABLE:  DT_PropCounter
        short m_flDisplayValue = 0x2980;
// TABLE:  DT_PredictedViewModel
// TABLE:  DT_PoseController
        short m_bPoseValueParity = 0x9ec;
        short m_fPoseValue = 0x9f0;
        short m_fInterpolationTime = 0x9f4;
        short m_bInterpolationWrap = 0x9f8;
        short m_fCycleFrequency = 0x9fc;
        short m_nFModType = 0xa00;
        short m_fFModTimeOffset = 0xa04;
        short m_fFModRate = 0xa08;
        short m_fFModAmplitude = 0xa0c;
// TABLE:  m_hProps
// TABLE:  m_chPoseIndex
        short m_hProps = 0x9d8;
        short m_chPoseIndex = 0x9e8;
// TABLE:  DT_GrassBurn
        short m_flGrassBurnClearTime = 0x9d8;
// TABLE:  DT_GameRulesProxy
// TABLE:  DT_InfoLadderDismount
// TABLE:  DT_FuncLadder
        short m_vecPlayerMountPositionTop = 0x9f8;
        short m_vecPlayerMountPositionBottom = 0xa04;
        short m_vecLadderDir = 0x9d8;
        short m_bFakeLadder = 0xa11;
// TABLE:  DT_TEFoundryHelpers
        short m_iEntity = 0x10;
// TABLE:  DT_DetailController
        short m_flFadeStartDist = 0x9d8;
        short m_flFadeEndDist = 0x9dc;
// TABLE:  DT_DangerZone
        short m_vecDangerZoneOriginStartedAt = 0x9d8;
        short m_flBombLaunchTime = 0x9e4;
        short m_flExtraRadius = 0x9e8;
        short m_flExtraRadiusStartTime = 0x9ec;
        short m_flExtraRadiusTotalLerpTime = 0x9f0;
        short m_nDropOrder = 0x9f4;
        short m_iWave = 0x9f8;
// TABLE:  DT_DangerZoneController
        short m_bDangerZoneControllerEnabled = 0x9d8;
        short m_bMissionControlledExplosions = 0x9d9;
        short m_flStartTime = 0x9f4;
        short m_flFinalExpansionTime = 0x9f8;
        short m_vecEndGameCircleStart = 0x9dc;
        short m_vecEndGameCircleEnd = 0x9e8;
        short m_hTheFinalZone = 0xab8;
// TABLE:  m_DangerZones
// TABLE:  m_flWaveEndTimes
        short m_DangerZones = 0x9fc;
        short m_flWaveEndTimes = 0xaa4;
// TABLE:  DT_WorldVguiText
        short m_bEnabled = 0x9d8;
        short m_szDisplayText = 0x9d9;
        short m_szDisplayTextOption = 0xbd9;
        short m_szFont = 0xcd9;
        short m_iTextPanelWidth = 0xd20;
        short m_clrText = 0xd19;
// TABLE:  DT_World
        short m_flWaveHeight = 0x9d8;
        short m_WorldMins = 0x9dc;
        short m_WorldMaxs = 0x9e8;
        short m_bStartDark = 0x9f4;
        short m_flMaxOccludeeArea = 0x9f8;
        short m_flMinOccluderArea = 0x9fc;
        short m_flMaxPropScreenSpaceWidth = 0xa04;
        short m_flMinPropScreenSpaceWidth = 0xa00;
        short m_iszDetailSpriteMaterial = 0xa10;
        short m_bColdWorld = 0xa08;
        short m_iTimeOfDay = 0xa0c;
// TABLE:  DT_WaterLODControl
        short m_flCheapWaterStartDistance = 0x9d8;
        short m_flCheapWaterEndDistance = 0x9dc;
// TABLE:  DT_WaterBullet
// TABLE:  DT_VoteController
        short m_iActiveIssueIndex = 0x9e4;
        short m_iOnlyTeamToVote = 0x9e8;
        short m_nPotentialVotes = 0xa04;
        short m_bIsYesNoVote = 0xa0a;
// TABLE:  m_nVoteOptionCount
        short m_nVoteOptionCount = 0x9ec;
// TABLE:  DT_VGuiScreen
        short m_flWidth = 0x9e0;
        short m_flHeight = 0x9e4;
        short m_fScreenFlags = 0xa0c;
        short m_nPanelName = 0x9e8;
        short m_nAttachmentIndex = 0xa04;
        short m_nOverlayMaterial = 0xa08;
        short m_hPlayerOwner = 0xa68;
// TABLE:  DT_PropJeep
        short m_bHeadlightIsOn = 0x2acc;
// TABLE:  DT_PropVehicleChoreoGeneric
        short m_hPlayer = 0x29f4;
        short m_bEnterAnimOn = 0x29fc;
        short m_bExitAnimOn = 0x29fd;
        short m_bForceEyesToAttachment = 0x2a0c;
        short m_vecEyeExitEndpoint = 0x2a00;
        short m_vehicleView.bClampEyeAngles = 0x2a90;
        short m_vehicleView.flPitchCurveZero = 0x2a94;
        short m_vehicleView.flPitchCurveLinear = 0x2a98;
        short m_vehicleView.flRollCurveZero = 0x2a9c;
        short m_vehicleView.flRollCurveLinear = 0x2aa0;
        short m_vehicleView.flFOV = 0x2aa4;
        short m_vehicleView.flYawMin = 0x2aa8;
        short m_vehicleView.flYawMax = 0x2aac;
        short m_vehicleView.flPitchMin = 0x2ab0;
        short m_vehicleView.flPitchMax = 0x2ab4;
// TABLE:  DT_TriggerSoundOperator
        short m_nSoundOperator = 0xa10;
// TABLE:  DT_BaseVPhysicsTrigger
// TABLE:  DT_TriggerPlayerMovement
// TABLE:  DT_BaseTrigger
        short m_bClientSidePredicted = 0xa08;
        short m_spawnflags = 0x2c8;
// TABLE:  DT_ProxyToggle
// TABLE:  DT_ProxyToggle_ProxiedData
        short m_WithProxy = 0x9d8;
        short blah = 0x0;
// TABLE:  DT_Tesla
        short m_SoundName = 0xa00;
        short m_iszSpriteName = 0xa40;
// TABLE:  DT_BaseTeamObjectiveResource
        short m_iTimerToShowInHUD = 0x9d8;
        short m_iStopWatchTimer = 0x9dc;
        short m_iNumControlPoints = 0x9e0;
        short m_bPlayingMiniRounds = 0x9e8;
        short m_bControlPointsReset = 0x9e9;
        short m_iUpdateCapHudParity = 0x9ec;
        short m_vCPPositions[0] = 0x9f4;
        short m_vCPPositions = 0x0;
        short m_iszWarnSound[0] = 0x1304;
        short m_iszWarnSound = 0x0;
        short m_pszCapLayoutInHUD = 0x1cec;
// TABLE:  m_bCPIsVisible
// TABLE:  m_flLazyCapPerc
// TABLE:  m_iTeamIcons
// TABLE:  m_iTeamOverlays
// TABLE:  m_iTeamReqCappers
// TABLE:  m_flTeamCapTime
// TABLE:  m_iPreviousPoints
// TABLE:  m_bTeamCanCap
// TABLE:  m_iTeamBaseIcons
// TABLE:  m_iBaseControlPoints
// TABLE:  m_bInMiniRound
// TABLE:  m_iWarnOnCap
// TABLE:  m_flPathDistance
// TABLE:  m_iNumTeamMembers
// TABLE:  m_iCappingTeam
// TABLE:  m_iTeamInZone
// TABLE:  m_bBlocked
// TABLE:  m_iOwner
        short m_bCPIsVisible = 0xa54;
        short m_flLazyCapPerc = 0xa5c;
        short m_iTeamIcons = 0xa9c;
        short m_iTeamOverlays = 0xb9c;
        short m_iTeamReqCappers = 0xc9c;
        short m_flTeamCapTime = 0xd9c;
        short m_iPreviousPoints = 0xe9c;
        short m_bTeamCanCap = 0x119c;
        short m_iTeamBaseIcons = 0x11dc;
        short m_iBaseControlPoints = 0x125c;
        short m_bInMiniRound = 0x12dc;
        short m_iWarnOnCap = 0x12e4;
        short m_flPathDistance = 0x1afc;
        short m_iNumTeamMembers = 0x1b1c;
        short m_iCappingTeam = 0x1c1c;
        short m_iTeamInZone = 0x1c3c;
        short m_bBlocked = 0x1c5c;
        short m_iOwner = 0x1c64;
// TABLE:  DT_Team
        short m_iTeamNum = 0xb68;
        short m_bSurrendered = 0xb6c;
        short m_scoreTotal = 0xb40;
        short m_scoreFirstHalf = 0xb44;
        short m_scoreSecondHalf = 0xb48;
        short m_scoreOvertime = 0xb4c;
        short m_iClanID = 0xb58;
        short m_szTeamname = 0x9ec;
        short m_szClanTeamname = 0xa0c;
        short m_szTeamFlagImage = 0xa2c;
        short m_szTeamLogoImage = 0xa34;
        short m_szTeamMatchStat = 0xa3c;
        short m_nGGLeaderEntIndex_CT = 0xb50;
        short m_nGGLeaderEntIndex_T = 0xb54;
        short m_numMapVictories = 0xb70;
        short player_array_element = 0x0;
        short "player_array" = 0x0;
// TABLE:  DT_SunlightShadowControl
        short m_shadowDirection = 0x9d8;
        short m_bEnabled = 0x9e4;
        short m_TextureName = 0x9e5;
        short m_LightColor = 0xaf0;
        short m_flColorTransitionTime = 0xb04;
        short m_flSunDistance = 0xb08;
        short m_flFOV = 0xb0c;
        short m_flNearZ = 0xb10;
        short m_flNorthOffset = 0xb14;
        short m_bEnableShadows = 0xb18;
// TABLE:  DT_Sun
        short m_clrRender = 0x70;
        short m_clrOverlay = 0xb38;
        short m_vDirection = 0xb44;
        short m_bOn = 0xb50;
        short m_nSize = 0xb3c;
        short m_nOverlaySize = 0xb40;
        short m_nMaterial = 0xb54;
        short m_nOverlayMaterial = 0xb58;
        short HDRColorScale = 0x0;
        short glowDistanceScale = 0x0;
// TABLE:  DT_ParticlePerformanceMonitor
        short m_bMeasurePerf = 0x9d9;
        short m_bDisplayPerf = 0x9d8;
// TABLE:  DT_SpotlightEnd
        short m_flLightScale = 0x9d8;
        short m_Radius = 0x9dc;
// TABLE:  DT_SpatialEntity
        short m_vecOrigin = 0x9d8;
        short m_minFalloff = 0x9e4;
        short m_maxFalloff = 0x9e8;
        short m_flCurWeight = 0x9ec;
        short m_bEnabled = 0xaf4;
// TABLE:  DT_SlideshowDisplay
        short m_bEnabled = 0x9d8;
        short m_szDisplayText = 0x9d9;
        short m_szSlideshowDirectory = 0xa59;
        short m_fMinSlideTime = 0xb08;
        short m_fMaxSlideTime = 0xb0c;
        short m_iCycleType = 0xb14;
        short m_bNoListRepeats = 0xb18;
// TABLE:  m_chCurrentSlideLists
        short m_chCurrentSlideLists = 0xaf0;
// TABLE:  DT_ShadowControl
        short m_shadowDirection = 0x9d8;
        short m_shadowColor = 0x9e4;
        short m_flShadowMaxDist = 0x9e8;
        short m_bDisableShadows = 0x9ec;
        short m_bEnableLocalLightShadows = 0x9ed;
// TABLE:  DT_SceneEntity
        short m_nSceneStringIndex = 0x9e8;
        short m_bIsPlayingBack = 0x9dc;
        short m_bPaused = 0x9dd;
        short m_bMultiplayer = 0x9de;
        short m_flForceClientTime = 0x9e4;
// TABLE:  _ST_m_hActorList_16
// TABLE:  _LPT_m_hActorList_16
        short lengthprop16 = 0x0;
        short lengthproxy = 0x0;
        short m_hActorList = 0x0;
// TABLE:  DT_RopeKeyframe
        short m_nChangeCount = 0xccc;
        short m_iRopeMaterialModelIndex = 0xa14;
        short m_hStartPoint = 0xcac;
        short m_hEndPoint = 0xcb0;
        short m_iStartAttachment = 0xcb4;
        short m_iEndAttachment = 0xcb6;
        short m_fLockedPoints = 0xcc8;
        short m_Slack = 0xcc0;
        short m_RopeLength = 0xcbc;
        short m_RopeFlags = 0xa10;
        short m_TextureScale = 0xcc4;
        short m_nSegments = 0xca8;
        short m_bConstrainBetweenEndpoints = 0xd50;
        short m_Subdiv = 0xcb8;
        short m_Width = 0xcd0;
        short m_flScrollSpeed = 0xa0c;
        short m_vecOrigin = 0x138;
        short moveparent = 0x148;
        short m_iParentAttachment = 0x2ec;
        short m_iDefaultRopeMaterialModelIndex = 0xa18;
        short m_nMinCPULevel = 0x988;
        short m_nMaxCPULevel = 0x989;
        short m_nMinGPULevel = 0x98a;
        short m_nMaxGPULevel = 0x98b;
// TABLE:  DT_RagdollManager
        short m_iCurrentMaxRagdollCount = 0x9d8;
// TABLE:  DT_PhysicsPropMultiplayer
        short m_iPhysicsMode = 0x29c4;
        short m_fMass = 0x29c8;
        short m_collisionMins = 0x29cc;
        short m_collisionMaxs = 0x29d8;
// TABLE:  DT_PhysBoxMultiplayer
        short m_iPhysicsMode = 0x9e4;
        short m_fMass = 0x9e8;
// TABLE:  DT_PropDoorRotating
// TABLE:  DT_BasePropDoor
// TABLE:  DT_DynamicProp
        short m_bUseHitboxesForRenderBox = 0x29a4;
        short m_flGlowMaxDist = 0x29c4;
        short m_bShouldGlow = 0x29c8;
        short m_clrGlow = 0x29c9;
        short m_nGlowStyle = 0x29d0;
// TABLE:  DT_Prop_Hallucination
        short m_bEnabled = 0x2999;
        short m_fVisibleTime = 0x299c;
        short m_fRechargeTime = 0x29a0;
// TABLE:  DT_PostProcessController
        short m_bMaster = 0xa04;
// TABLE:  m_flPostProcessParameters
        short m_flPostProcessParameters = 0x9d8;
// TABLE:  DT_PointWorldText
        short m_szText = 0xa08;
        short m_flTextSize = 0xb0c;
        short m_textColor = 0xb10;
// TABLE:  DT_PointCommentaryNode
        short m_bActive = 0x2980;
        short m_flStartTime = 0x2984;
        short m_iszCommentaryFile = 0x2988;
        short m_iszCommentaryFileNoHDR = 0x2a8c;
        short m_iszSpeakers = 0x2b90;
        short m_iNodeNumber = 0x2c90;
        short m_iNodeNumberMax = 0x2c94;
        short m_hViewPosition = 0x2c9c;
// TABLE:  DT_PointCamera
        short m_FOV = 0x9d8;
        short m_Resolution = 0x9dc;
        short m_bFogEnable = 0x9e0;
        short m_FogColor = 0x9e1;
        short m_flFogStart = 0x9e8;
        short m_flFogEnd = 0x9ec;
        short m_flFogMaxDensity = 0x9f0;
        short m_bActive = 0x9f4;
        short m_bUseScreenAspectRatio = 0x9f5;
// TABLE:  DT_PlayerResource
// TABLE:  m_iPing
// TABLE:  m_iKills
// TABLE:  m_iAssists
// TABLE:  m_iDeaths
// TABLE:  m_bConnected
// TABLE:  m_iTeam
// TABLE:  m_iPendingTeam
// TABLE:  m_bAlive
// TABLE:  m_iHealth
// TABLE:  m_iCoachingTeam
        short m_iPing = 0xb28;
        short m_iKills = 0xc2c;
        short m_iAssists = 0xd30;
        short m_iDeaths = 0xe34;
        short m_bConnected = 0xae4;
        short m_iTeam = 0xf38;
        short m_iPendingTeam = 0x103c;
        short m_bAlive = 0x1140;
        short m_iHealth = 0x1184;
        short m_iCoachingTeam = 0x1288;
// TABLE:  DT_Plasma
        short m_flStartScale = 0x9d8;
        short m_flScale = 0x9dc;
        short m_flScaleTime = 0x9e0;
        short m_nFlags = 0x9e4;
        short m_nPlasmaModelIndex = 0x9e8;
        short m_nPlasmaModelIndex2 = 0x9ec;
        short m_nGlowModelIndex = 0x9f0;
// TABLE:  DT_PhysMagnet
// TABLE:  DT_PhysicsProp
        short m_bAwake = 0x29a0;
        short m_spawnflags = 0x2c8;
// TABLE:  DT_StatueProp
        short m_hInitBaseAnimating = 0x29c0;
        short m_bShatter = 0x29c4;
        short m_nShatterFlags = 0x29c8;
        short m_vShatterPosition = 0x29cc;
        short m_vShatterForce = 0x29d8;
// TABLE:  DT_PhysBox
        short m_mass = 0x9d8;
// TABLE:  DT_ParticleSystem
        short m_vecOrigin = 0x138;
        short m_fEffects = 0xf0;
        short m_hOwnerEntity = 0x14c;
        short moveparent = 0x148;
        short m_iParentAttachment = 0x2ec;
        short m_angRotation = 0x12c;
        short m_iEffectIndex = 0x9d8;
        short m_bActive = 0x9e0;
        short m_nStopType = 0x9dc;
        short m_flStartTime = 0x9e4;
        short m_szSnapshotFileName = 0x9e8;
// TABLE:  m_vServerControlPoints
// TABLE:  m_iServerControlPointAssignments
// TABLE:  m_hControlPointEnts
// TABLE:  m_iControlPointParents
        short m_vServerControlPoints = 0xaec;
        short m_iServerControlPointAssignments = 0xb1c;
        short m_hControlPointEnts = 0xb30;
        short m_iControlPointParents = 0xc2c;
// TABLE:  DT_MovieDisplay
        short m_bEnabled = 0x9d8;
        short m_bLooping = 0x9d9;
        short m_szMovieFilename = 0x9da;
        short m_szGroupName = 0xa5a;
        short m_bStretchToFill = 0xada;
        short m_bForcedSlave = 0xadb;
        short m_bUseCustomUVs = 0xadc;
        short m_flUMin = 0xae0;
        short m_flUMax = 0xae4;
        short m_flVMin = 0xae8;
        short m_flVMax = 0xaec;
// TABLE:  DT_MaterialModifyControl
        short m_szMaterialName = 0x9d8;
        short m_szMaterialVar = 0xad7;
        short m_szMaterialVarValue = 0xbd6;
        short m_iFrameStart = 0xce0;
        short m_iFrameEnd = 0xce4;
        short m_bWrap = 0xce8;
        short m_flFramerate = 0xcec;
        short m_bNewAnimCommandsSemaphore = 0xcf0;
        short m_flFloatLerpStartValue = 0xcf4;
        short m_flFloatLerpEndValue = 0xcf8;
        short m_flFloatLerpTransitionTime = 0xcfc;
        short m_bFloatLerpWrap = 0xd00;
        short m_nModifyMode = 0xd08;
// TABLE:  DT_LightGlow
        short m_clrRender = 0x70;
        short m_nHorizontalSize = 0x9d8;
        short m_nVerticalSize = 0x9dc;
        short m_nMinDist = 0x9e0;
        short m_nMaxDist = 0x9e4;
        short m_nOuterMaxDist = 0x9e8;
        short m_spawnflags = 0x9ec;
        short m_vecOrigin = 0x138;
        short m_angRotation = 0x12c;
        short moveparent = 0x148;
        short m_flGlowProxySize = 0xac4;
        short HDRColorScale = 0x0;
// TABLE:  DT_ItemAssaultSuitUseable
        short m_nArmorValue = 0x3440;
        short m_bIsHeavyAssaultSuit = 0x3444;
// TABLE:  DT_Item
        short m_bShouldGlow = 0x3230;
// TABLE:  DT_InfoOverlayAccessor
        short m_iTextureFrameIndex = 0x98c;
        short m_iOverlayID = 0x9d8;
// TABLE:  DT_FuncTrackTrain
// TABLE:  DT_FuncSmokeVolume
        short m_Color1 = 0xac4;
        short m_Color2 = 0xac8;
        short m_MaterialName = 0xacc;
        short m_ParticleDrawWidth = 0xbcc;
        short m_ParticleSpacingDistance = 0xbd0;
        short m_DensityRampSpeed = 0xbd4;
        short m_RotationSpeed = 0xbd8;
        short m_MovementSpeed = 0xbdc;
        short m_Density = 0xbe0;
        short m_maxDrawDistance = 0xbe4;
        short m_spawnflags = 0xbe8;
// TABLE:  DT_CollisionProperty
        short m_vecMins = 0x8;
        short m_vecMaxs = 0x14;
        short m_nSolidType = 0x22;
        short m_usSolidFlags = 0x20;
        short m_nSurroundType = 0x2a;
        short m_triggerBloat = 0x23;
        short m_vecSpecifiedSurroundingMins = 0x2c;
        short m_vecSpecifiedSurroundingMaxs = 0x38;
        short m_Collision = 0x320;
// TABLE:  DT_FuncRotating
        short m_vecOrigin = 0x138;
        short m_angRotation[0] = 0x12c;
        short m_angRotation[1] = 0x130;
        short m_angRotation[2] = 0x134;
        short m_flSimulationTime = 0x268;
// TABLE:  DT_FuncReflectiveGlass
// TABLE:  DT_FuncOccluder
        short m_bActive = 0x9dc;
        short m_nOccluderIndex = 0x9d8;
// TABLE:  DT_FuncMoveLinear
        short m_vecVelocity = 0x114;
        short m_fFlags = 0x104;
// TABLE:  DT_FuncMonitor
// TABLE:  DT_Func_LOD
        short m_nDisappearMinDist = 0x9d8;
        short m_nDisappearMaxDist = 0x9dc;
// TABLE:  DT_TEDust
        short m_flSize = 0x1c;
        short m_flSpeed = 0x20;
        short m_vecDirection = 0x24;
// TABLE:  DT_Func_Dust
        short m_Color = 0x9d8;
        short m_SpawnRate = 0x9dc;
        short m_flSizeMin = 0x9e0;
        short m_flSizeMax = 0x9e4;
        short m_LifetimeMin = 0x9ec;
        short m_LifetimeMax = 0x9f0;
        short m_DustFlags = 0xa00;
        short m_SpeedMax = 0x9e8;
        short m_DistMax = 0x9f4;
        short m_nModelIndex = 0x258;
        short m_FallSpeed = 0x9f8;
        short m_bAffectedByWind = 0x9fc;
// TABLE:  DT_CollisionProperty
        short m_vecMins = 0x8;
        short m_vecMaxs = 0x14;
        short m_nSolidType = 0x22;
        short m_usSolidFlags = 0x20;
        short m_nSurroundType = 0x2a;
        short m_triggerBloat = 0x23;
        short m_vecSpecifiedSurroundingMins = 0x2c;
        short m_vecSpecifiedSurroundingMaxs = 0x38;
        short m_Collision = 0x320;
// TABLE:  DT_FuncConveyor
        short m_flConveyorSpeed = 0x9d8;
// TABLE:  DT_FuncBrush
// TABLE:  DT_BreakableSurface
        short m_nNumWide = 0x9dc;
        short m_nNumHigh = 0x9e0;
        short m_flPanelWidth = 0x9e4;
        short m_flPanelHeight = 0x9e8;
        short m_vNormal = 0x9ec;
        short m_vCorner = 0x9f8;
        short m_bIsBroken = 0xa04;
        short m_nSurfaceType = 0xa08;
// TABLE:  m_RawPanelBitVec
        short m_RawPanelBitVec = 0xa2c;
// TABLE:  DT_FuncAreaPortalWindow
        short m_flFadeStartDist = 0x9d8;
        short m_flFadeDist = 0x9dc;
        short m_flTranslucencyLimit = 0x9e0;
        short m_iBackgroundModelIndex = 0x9e4;
// TABLE:  DT_CFish
        short m_poolOrigin = 0x29e0;
        short m_x = 0x29c8;
        short m_y = 0x29cc;
        short m_z = 0x29d0;
        short m_angle = 0x29d8;
        short m_nModelIndex = 0x258;
        short m_lifeState = 0x25f;
        short m_waterLevel = 0x29ec;
// TABLE:  DT_FireSmoke
        short m_flStartScale = 0x9d8;
        short m_flScale = 0x9dc;
        short m_flScaleTime = 0x9e0;
        short m_nFlags = 0x9e4;
        short m_nFlameModelIndex = 0x9e8;
        short m_nFlameFromAboveModelIndex = 0x9ec;
// TABLE:  DT_EnvTonemapController
        short m_bUseCustomAutoExposureMin = 0x9d8;
        short m_bUseCustomAutoExposureMax = 0x9d9;
        short m_bUseCustomBloomScale = 0x9da;
        short m_flCustomAutoExposureMin = 0x9dc;
        short m_flCustomAutoExposureMax = 0x9e0;
        short m_flCustomBloomScale = 0x9e4;
        short m_flCustomBloomScaleMinimum = 0x9e8;
        short m_flBloomExponent = 0x9ec;
        short m_flBloomSaturation = 0x9f0;
        short m_flTonemapPercentTarget = 0x9f4;
        short m_flTonemapPercentBrightPixels = 0x9f8;
        short m_flTonemapMinAvgLum = 0x9fc;
        short m_flTonemapRate = 0xa00;
// TABLE:  DT_EnvScreenEffect
        short m_flDuration = 0x9d8;
        short m_nType = 0x9dc;
// TABLE:  DT_EnvScreenOverlay
        short m_iszOverlayNames[0] = 0x9d8;
        short m_iszOverlayNames = 0x0;
        short m_flOverlayTimes[0] = 0x13d0;
        short m_flOverlayTimes = 0x0;
        short m_flStartTime = 0x13f8;
        short m_iDesiredOverlay = 0x13fc;
        short m_bIsActive = 0x1400;
// TABLE:  DT_EnvProjectedTexture
        short m_hTargetEntity = 0x9dc;
        short m_bState = 0x9e0;
        short m_bAlwaysUpdate = 0x9e1;
        short m_flLightFOV = 0x9e4;
        short m_bEnableShadows = 0x9e8;
        short m_bSimpleProjection = 0x9e9;
        short m_bLightOnlyTarget = 0x9ea;
        short m_bLightWorld = 0x9eb;
        short m_bCameraSpace = 0x9ec;
        short m_flBrightnessScale = 0x9f0;
        short m_LightColor = 0x9f4;
        short m_flColorTransitionTime = 0xa08;
        short m_flAmbient = 0xa0c;
        short m_SpotlightTextureName = 0xa18;
        short m_nSpotlightTextureFrame = 0xb24;
        short m_flNearZ = 0xa10;
        short m_flFarZ = 0xa14;
        short m_nShadowQuality = 0xb28;
        short m_flProjectionSize = 0xb38;
        short m_flRotation = 0xb3c;
        short m_iStyle = 0xb2c;
// TABLE:  DT_EnvParticleScript
        short m_flSequenceScale = 0x2a64;
// TABLE:  DT_FogController
        short m_fog.enable = 0xa1c;
        short m_fog.blend = 0xa1d;
        short m_fog.dirPrimary = 0x9dc;
        short m_fog.colorPrimary = 0x9e8;
        short m_fog.colorSecondary = 0x9ec;
        short m_fog.start = 0x9f8;
        short m_fog.end = 0x9fc;
        short m_fog.farz = 0xa00;
        short m_fog.maxdensity = 0xa04;
        short m_fog.colorPrimaryLerpTo = 0x9f0;
        short m_fog.colorSecondaryLerpTo = 0x9f4;
        short m_fog.startLerpTo = 0xa08;
        short m_fog.endLerpTo = 0xa0c;
        short m_fog.maxdensityLerpTo = 0xa10;
        short m_fog.lerptime = 0xa14;
        short m_fog.duration = 0xa18;
        short m_fog.HDRColorScale = 0xa24;
        short m_fog.ZoomFogScale = 0xa20;
// TABLE:  DT_EnvDOFController
        short m_bDOFEnabled = 0x9d8;
        short m_flNearBlurDepth = 0x9dc;
        short m_flNearFocusDepth = 0x9e0;
        short m_flFarFocusDepth = 0x9e4;
        short m_flFarBlurDepth = 0x9e8;
        short m_flNearBlurRadius = 0x9ec;
        short m_flFarBlurRadius = 0x9f0;
// TABLE:  DT_CascadeLight
        short m_shadowDirection = 0x9d8;
        short m_envLightShadowDirection = 0x9e4;
        short m_bEnabled = 0x9f0;
        short m_bUseLightEnvAngles = 0x9f1;
        short m_LightColor = 0x9f2;
        short m_LightColorScale = 0x9f8;
        short m_flMaxShadowDist = 0x9fc;
// TABLE:  DT_EnvAmbientLight
        short m_vecColor = 0xb00;
// TABLE:  DT_EntityParticleTrail
        short m_iMaterialName = 0xac0;
        short m_hConstraintEntity = 0xad8;
// TABLE:  DT_EntityParticleTrailInfo
        short m_flLifetime = 0x8;
        short m_flStartSize = 0xc;
        short m_flEndSize = 0x10;
        short m_Info = 0xac4;
// TABLE:  DT_EntityFreezing
        short m_vFreezingOrigin = 0x9d8;
        short m_flFrozen = 0xaac;
        short m_bFinishFreezing = 0xab0;
// TABLE:  m_flFrozenPerHitbox
        short m_flFrozenPerHitbox = 0x9e4;
// TABLE:  DT_EntityFlame
        short m_hEntAttached = 0x9d8;
        short m_bCheapEffect = 0x9ec;
// TABLE:  DT_EntityDissolve
        short m_flStartTime = 0x9dc;
        short m_flFadeOutStart = 0x9e0;
        short m_flFadeOutLength = 0x9e4;
        short m_flFadeOutModelStart = 0x9e8;
        short m_flFadeOutModelLength = 0x9ec;
        short m_flFadeInStart = 0x9f0;
        short m_flFadeInLength = 0x9f4;
        short m_nDissolveType = 0x9f8;
        short m_vDissolverOrigin = 0xa00;
        short m_nMagnitude = 0xa0c;
// TABLE:  DT_DynamicLight
        short m_Flags = 0x9d8;
        short m_LightStyle = 0x9d9;
        short m_Radius = 0x9dc;
        short m_Exponent = 0x9e0;
        short m_InnerAngle = 0x9e4;
        short m_OuterAngle = 0x9e8;
        short m_SpotRadius = 0x9ec;
// TABLE:  DT_ColorCorrectionVolume
        short m_bEnabled = 0xa20;
        short m_MaxWeight = 0xa24;
        short m_FadeDuration = 0xa28;
        short m_Weight = 0xa2c;
        short m_lookupFilename = 0xa30;
// TABLE:  DT_ColorCorrection
        short m_vecOrigin = 0x9d8;
        short m_minFalloff = 0x9e4;
        short m_maxFalloff = 0x9e8;
        short m_flCurWeight = 0x9f8;
        short m_flMaxWeight = 0x9f4;
        short m_flFadeInDuration = 0x9ec;
        short m_flFadeOutDuration = 0x9f0;
        short m_netLookupFilename = 0x9fc;
        short m_bEnabled = 0xb00;
        short m_bMaster = 0xb01;
        short m_bClientSide = 0xb02;
        short m_bExclusive = 0xb03;
// TABLE:  DT_BreakableProp
        short m_qPreferredPlayerCarryAngles = 0x2984;
        short m_bClientPhysics = 0x2990;
// TABLE:  DT_BeamSpotlight
        short m_nHaloIndex = 0x9d8;
        short m_bSpotlightOn = 0x9e4;
        short m_bHasDynamicLight = 0x9e5;
        short m_flSpotlightMaxLength = 0x9e8;
        short m_flSpotlightGoalWidth = 0x9ec;
        short m_flHDRColorScale = 0x9f0;
        short m_nRotationAxis = 0x9dc;
        short m_flRotationSpeed = 0x9e0;
// TABLE:  DT_BaseButton
        short m_usable = 0xa08;
// TABLE:  DT_BaseToggle
        short m_vecFinalDest = 0x9ec;
        short m_movementType = 0x9f8;
        short m_flMoveTargetTime = 0x9fc;
// TABLE:  DT_BasePlayer
        short m_iFOV = 0x31e4;
        short m_iFOVStart = 0x31e8;
        short m_flFOVTime = 0x3208;
        short m_iDefaultFOV = 0x332c;
        short m_hZoomOwner = 0x324c;
        short m_afPhysicsFlags = 0x32ec;
        short m_hVehicle = 0x32f0;
        short m_hUseEntity = 0x3328;
        short m_hGroundEntity = 0x150;
        short m_iHealth = 0x100;
        short m_lifeState = 0x25f;
        short m_iBonusProgress = 0x3240;
        short m_iBonusChallenge = 0x3244;
        short m_flMaxspeed = 0x3248;
        short m_fFlags = 0x104;
        short m_iObserverMode = 0x3378;
        short m_bActiveCameraMan = 0x337c;
        short m_bCameraManXRay = 0x337d;
        short m_bCameraManOverview = 0x337e;
        short m_bCameraManScoreBoard = 0x337f;
        short m_uCameraManGraphs = 0x3380;
        short m_iDeathPostEffect = 0x3374;
        short m_hObserverTarget = 0x338c;
        short m_hViewModel[0] = 0x32f8;
        short m_hViewModel = 0x0;
        short m_iCoachingTeam = 0x2f50;
        short m_szLastPlaceName = 0x35b4;
        short m_vecLadderNormal = 0x3230;
        short m_ladderSurfaceProps = 0x3200;
        short m_ubEFNoInterpParity = 0x35d8;
        short m_hPostProcessCtrl = 0x37a8;
        short m_hColorCorrectionCtrl = 0x37ac;
        short m_PlayerFog.m_hCtrl = 0x37b4;
        short m_vphysicsCollisionState = 0x325c;
        short m_hViewEntity = 0x333c;
        short m_bShouldDrawPlayerWhileUsingViewEntity = 0x3340;
        short m_flDuckAmount = 0x2fac;
        short m_flDuckSpeed = 0x2fb0;
        short m_nWaterLevel = 0x25e;
// TABLE:  DT_LocalPlayerExclusive
        short m_vecViewOffset[0] = 0x108;
        short m_vecViewOffset[1] = 0x10c;
        short m_vecViewOffset[2] = 0x110;
        short m_flFriction = 0x144;
        short m_fOnTarget = 0x3324;
        short m_nTickBase = 0x3430;
        short m_nNextThinkTick = 0xfc;
        short m_hLastWeapon = 0x32f4;
        short m_vecVelocity[0] = 0x114;
        short m_vecVelocity[1] = 0x118;
        short m_vecVelocity[2] = 0x11c;
        short m_vecBaseVelocity = 0x120;
        short m_hConstraintEntity = 0x3344;
        short m_vecConstraintCenter = 0x3348;
        short m_flConstraintRadius = 0x3354;
        short m_flConstraintWidth = 0x3358;
        short m_flConstraintSpeedFactor = 0x335c;
        short m_bConstraintPastRadius = 0x3360;
        short m_flDeathTime = 0x33c4;
        short m_flNextDecalTime = 0x33c8;
        short m_fForceTeam = 0x33cc;
        short m_flLaggedMovementValue = 0x3594;
        short m_hTonemapController = 0x31cc;
// TABLE:  DT_Local
        short m_iHideHUD = 0x48;
        short m_flFOVRate = 0x44;
        short m_bDucked = 0x88;
        short m_bDucking = 0x89;
        short m_flLastDuckTime = 0x8c;
        short m_bInDuckJump = 0x90;
        short m_nDuckTimeMsecs = 0x4c;
        short m_nDuckJumpTimeMsecs = 0x50;
        short m_nJumpTimeMsecs = 0x54;
        short m_flFallVelocity = 0x58;
        short m_viewPunchAngle = 0x64;
        short m_aimPunchAngle = 0x70;
        short m_aimPunchAngleVel = 0x7c;
        short m_bDrawViewmodel = 0x91;
        short m_bWearingSuit = 0x92;
        short m_bPoisoned = 0x93;
        short m_flStepSize = 0x60;
        short m_bAllowAutoMovement = 0x94;
        short m_skybox3d.scale = 0x134;
        short m_skybox3d.origin = 0x138;
        short m_skybox3d.area = 0x144;
        short m_skybox3d.fog.enable = 0x18c;
        short m_skybox3d.fog.blend = 0x18d;
        short m_skybox3d.fog.dirPrimary = 0x14c;
        short m_skybox3d.fog.colorPrimary = 0x158;
        short m_skybox3d.fog.colorSecondary = 0x15c;
        short m_skybox3d.fog.start = 0x168;
        short m_skybox3d.fog.end = 0x16c;
        short m_skybox3d.fog.maxdensity = 0x174;
        short m_skybox3d.fog.HDRColorScale = 0x194;
        short m_audio.localSound[0] = 0x19c;
        short m_audio.localSound[1] = 0x1a8;
        short m_audio.localSound[2] = 0x1b4;
        short m_audio.localSound[3] = 0x1c0;
        short m_audio.localSound[4] = 0x1cc;
        short m_audio.localSound[5] = 0x1d8;
        short m_audio.localSound[6] = 0x1e4;
        short m_audio.localSound[7] = 0x1f0;
        short m_audio.soundscapeIndex = 0x1fc;
        short m_audio.localBits = 0x200;
        short m_audio.entIndex = 0x204;
// TABLE:  m_chAreaBits
// TABLE:  m_chAreaPortalBits
        short m_chAreaBits = 0x4;
        short m_chAreaPortalBits = 0x24;
        short m_Local = 0x2fbc;
// TABLE:  DT_PlayerState
        short deadflag = 0x4;
// TABLE:  m_iAmmo
        short localdata = 0x0;
        short pl = 0x31d0;
        short m_iAmmo = 0x2d78;
// TABLE:  DT_BaseFlex
        short m_blinktoggle = 0x2bd4;
        short m_viewtarget = 0x29f0;
// TABLE:  m_flexWeight
        short m_flexWeight = 0x2a28;
// TABLE:  DT_BaseEntity
        short m_flSimulationTime = 0x268;
        short m_cellbits = 0x74;
        short m_cellX = 0x7c;
        short m_cellY = 0x80;
        short m_cellZ = 0x84;
        short m_vecOrigin = 0x138;
        short m_angRotation = 0x12c;
        short m_nModelIndex = 0x258;
        short m_fEffects = 0xf0;
        short m_nRenderMode = 0x25b;
        short m_nRenderFX = 0x25a;
        short m_clrRender = 0x70;
        short m_iTeamNum = 0xf4;
        short m_iPendingTeamNum = 0xf8;
        short m_CollisionGroup = 0x474;
        short m_flElasticity = 0x300;
        short m_flShadowCastDistance = 0x3a0;
        short m_hOwnerEntity = 0x14c;
        short m_hEffectEntity = 0x998;
        short moveparent = 0x148;
        short m_iParentAttachment = 0x2ec;
        short m_iName = 0x154;
        short movetype = 0x0;
        short movecollide = 0x0;
        short m_iTextureFrameIndex = 0x98c;
        short m_bSimulatedEveryTick = 0x93a;
        short m_bAnimatedEveryTick = 0x93b;
        short m_bAlternateSorting = 0x93c;
        short m_bSpotted = 0x93d;
        short m_bIsAutoaimTarget = 0x60;
        short m_fadeMinDist = 0x2f4;
        short m_fadeMaxDist = 0x2f8;
        short m_flFadeScale = 0x2fc;
        short m_nMinCPULevel = 0x988;
        short m_nMaxCPULevel = 0x989;
        short m_nMinGPULevel = 0x98a;
        short m_nMaxGPULevel = 0x98b;
        short m_flUseLookAtAngle = 0x2cc;
        short m_flLastMadeNoiseTime = 0x20;
        short m_flMaxFallVelocity = 0xdc;
        short m_bEligibleForScreenHighlight = 0x9b9;
// TABLE:  DT_AnimTimeMustBeFirst
        short m_flAnimTime = 0x260;
// TABLE:  DT_CollisionProperty
        short m_vecMins = 0x8;
        short m_vecMaxs = 0x14;
        short m_nSolidType = 0x22;
        short m_usSolidFlags = 0x20;
        short m_nSurroundType = 0x2a;
        short m_triggerBloat = 0x23;
        short m_vecSpecifiedSurroundingMins = 0x2c;
        short m_vecSpecifiedSurroundingMaxs = 0x38;
// TABLE:  m_bSpottedBy
// TABLE:  m_bSpottedByMask
        short AnimTimeMustBeFirst = 0x0;
        short m_Collision = 0x320;
        short m_bSpottedBy = 0x93e;
        short m_bSpottedByMask = 0x980;
// TABLE:  DT_BaseDoor
        short m_flWaveHeight = 0xa08;
// TABLE:  DT_BaseCombatCharacter
        short m_LastHitGroup = 0x2d74;
        short m_hActiveWeapon = 0x2ef8;
        short m_flTimeOfLastInjury = 0x2efc;
        short m_nRelativeDirectionOfLastInjury = 0x2f00;
// TABLE:  DT_BCCLocalPlayerExclusive
        short m_flNextAttack = 0x2d70;
// TABLE:  DT_BCCNonLocalPlayerExclusive
// TABLE:  m_hMyWeapons
        short m_hMyWeapons = 0x2df8;
// TABLE:  m_hMyWeapons
// TABLE:  m_hMyWearables
        short bcc_localdata = 0x0;
        short bcc_nonlocaldata = 0x0;
        short m_hMyWeapons = 0x2df8;
        short m_hMyWearables = 0x2f04;
// TABLE:  DT_BaseAnimatingOverlay
// TABLE:  DT_OverlayVars
// TABLE:  _ST_m_AnimOverlay_15
// TABLE:  _LPT_m_AnimOverlay_15
        short lengthprop15 = 0x0;
        short lengthproxy = 0x0;
        short m_AnimOverlay = 0x0;
        short overlay_vars = 0x0;
// TABLE:  DT_BoneFollower
        short m_modelIndex = 0x9d8;
        short m_solidIndex = 0x9dc;
// TABLE:  DT_BaseAnimating
        short m_nSequence = 0x28bc;
        short m_nForceBone = 0x268c;
        short m_vecForce = 0x2680;
        short m_nSkin = 0xa1c;
        short m_nBody = 0xa20;
        short m_nHitboxSet = 0x9fc;
        short m_flModelScale = 0x2748;
        short m_flPlaybackRate = 0xa18;
        short m_bClientSideAnimation = 0x289c;
        short m_bClientSideFrameReset = 0x26c0;
        short m_bClientSideRagdoll = 0x279;
        short m_nNewSequenceParity = 0xa44;
        short m_nResetEventsParity = 0xa48;
        short m_nMuzzleFlashParity = 0xa64;
        short m_hLightingOrigin = 0x2944;
        short m_flFrozen = 0x26f8;
        short m_ScaleType = 0x274c;
        short m_bSuppressAnimSounds = 0x294a;
        short m_nHighlightColorR = 0xa38;
        short m_nHighlightColorG = 0xa3c;
        short m_nHighlightColorB = 0xa40;
// TABLE:  m_flPoseParameter
// TABLE:  m_flEncodedController
// TABLE:  DT_ServerAnimationData
        short m_flCycle = 0xa14;
        short m_flPoseParameter = 0x2774;
        short m_flEncodedController = 0xa54;
        short serveranimdata = 0x0;
// TABLE:  DT_AI_BaseNPC
        short m_lifeState = 0x25f;
        short m_bPerformAvoidance = 0x2f24;
        short m_bIsMoving = 0x2f25;
        short m_bFadeCorpse = 0x2f26;
        short m_iDeathPose = 0x2f14;
        short m_iDeathFrame = 0x2f18;
        short m_iSpeedModRadius = 0x2f1c;
        short m_iSpeedModSpeed = 0x2f20;
        short m_bSpeedModActive = 0x2f27;
        short m_bImportanRagdoll = 0x2f28;
        short m_flTimePingEffect = 0x2f10;
// TABLE:  DT_Beam
        short m_nBeamType = 0x9f4;
        short m_nBeamFlags = 0x9f8;
        short m_nNumBeamEnts = 0x9e8;
        short m_nHaloIndex = 0x9f0;
        short m_fHaloScale = 0xa58;
        short m_fWidth = 0xa4c;
        short m_fEndWidth = 0xa50;
        short m_fFadeLength = 0xa54;
        short m_fAmplitude = 0xa5c;
        short m_fStartFrame = 0xa60;
        short m_fSpeed = 0xa64;
        short m_flFrameRate = 0x9d8;
        short m_flHDRColorScale = 0x9dc;
        short m_clrRender = 0x70;
        short m_nRenderFX = 0x25a;
        short m_nRenderMode = 0x25b;
        short m_flFrame = 0xa68;
        short m_nClipStyle = 0xa6c;
        short m_vecEndPos = 0xa70;
        short m_nModelIndex = 0x258;
        short m_vecOrigin = 0x138;
        short moveparent = 0x148;
// TABLE:  m_hAttachEntity
// TABLE:  m_nAttachIndex
        short m_hAttachEntity = 0x9fc;
        short m_nAttachIndex = 0xa24;
// TABLE:  DT_BaseViewModel
        short m_nModelIndex = 0x258;
        short m_hWeapon = 0x29c8;
        short m_nSkin = 0xa1c;
        short m_nBody = 0xa20;
        short m_nSequence = 0x28bc;
        short m_nViewModelIndex = 0x29c0;
        short m_flPlaybackRate = 0xa18;
        short m_fEffects = 0xf0;
        short m_nAnimationParity = 0x29c4;
        short m_hOwner = 0x29cc;
        short m_nNewSequenceParity = 0xa44;
        short m_nResetEventsParity = 0xa48;
        short m_nMuzzleFlashParity = 0xa64;
        short m_bShouldIgnoreOffsetAndAccuracy = 0x2990;
// TABLE:  DT_BaseParticleEntity
// TABLE:  DT_BaseGrenade
        short m_flDamage = 0x2998;
        short m_DmgRadius = 0x2984;
        short m_bIsLive = 0x2981;
        short m_hThrower = 0x29a0;
        short m_vecVelocity = 0x114;
        short m_fFlags = 0x104;
// TABLE:  DT_BaseCombatWeapon
        short m_iViewModelIndex = 0x3240;
        short m_iWorldModelIndex = 0x3244;
        short m_iWorldDroppedModelIndex = 0x3248;
        short m_iState = 0x3258;
        short m_hOwner = 0x3230;
        short m_iClip1 = 0x3264;
        short m_iClip2 = 0x3268;
        short m_iPrimaryReserveAmmoCount = 0x326c;
        short m_iSecondaryReserveAmmoCount = 0x3270;
        short m_hWeaponWorldModel = 0x3254;
        short m_iNumEmptyAttacks = 0x3250;
// TABLE:  DT_LocalWeaponData
        short m_iPrimaryAmmoType = 0x325c;
        short m_iSecondaryAmmoType = 0x3260;
        short m_nViewModelIndex = 0x3234;
        short m_bFlipViewModel = 0x32c4;
        short m_iWeaponOrigin = 0x32c8;
        short m_iWeaponModule = 0x324c;
// TABLE:  DT_LocalActiveWeaponData
        short m_flNextPrimaryAttack = 0x3238;
        short m_flNextSecondaryAttack = 0x323c;
        short m_nNextThinkTick = 0xfc;
        short m_flTimeWeaponIdle = 0x3274;
        short LocalWeaponData = 0x0;
        short LocalActiveWeaponData = 0x0;
// TABLE:  DT_BaseWeaponWorldModel
        short m_nModelIndex = 0x258;
        short m_nBody = 0xa20;
        short m_fEffects = 0xf0;
        short moveparent = 0x148;
        short m_hCombatWeaponParent = 0x29f0;
