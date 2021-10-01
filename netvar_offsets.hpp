#pragma once
// https://github.com/KittenPopo/csgo-offsets/edit/master/offsets.hpp
// Updated on 9/21/2021

namespace DT_TestTraceline {
        constexpr int m_clrRender =     0x70;   // int
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_angRotation_0_ =        0x12c;  // float
        constexpr int m_angRotation_1_ =        0x130;  // float
        constexpr int m_angRotation_2_ =        0x134;  // float
}
namespace DT_TEWorldDecal {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_nIndex =        0x1c;   // int
}
namespace DT_TESpriteSpray {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecDirection =  0x1c;   // vector
        constexpr int m_nModelIndex =   0x28;   // int
        constexpr int m_fNoise =        0x30;   // float
        constexpr int m_nCount =        0x34;   // int
        constexpr int m_nSpeed =        0x2c;   // int
}
namespace DT_TESprite {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_nModelIndex =   0x1c;   // int
        constexpr int m_fScale =        0x20;   // float
        constexpr int m_nBrightness =   0x24;   // int
}
namespace DT_TESparks {
        constexpr int m_nMagnitude =    0x1c;   // int
        constexpr int m_nTrailLength =  0x20;   // int
        constexpr int m_vecDir =        0x24;   // vector
}
namespace DT_TESmoke {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_nModelIndex =   0x1c;   // int
        constexpr int m_fScale =        0x20;   // float
        constexpr int m_nFrameRate =    0x24;   // int
}
namespace DT_TEShowLine {
        constexpr int m_vecEnd =        0x1c;   // vector
}
namespace DT_TEProjectedDecal {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_angRotation =   0x1c;   // vector
        constexpr int m_flDistance =    0x28;   // float
        constexpr int m_nIndex =        0x2c;   // int
}
namespace DT_FEPlayerDecal {
        constexpr int m_nUniqueID =     0x9d8;  // int
        constexpr int m_unAccountID =   0x9dc;  // int
        constexpr int m_unTraceID =     0x9e0;  // int
        constexpr int m_rtGcTime =      0x9e4;  // int
        constexpr int m_vecEndPos =     0x9e8;  // vector
        constexpr int m_vecStart =      0x9f4;  // vector
        constexpr int m_vecRight =      0xa00;  // vector
        constexpr int m_vecNormal =     0xa0c;  // vector
        constexpr int m_nEntity =       0xa1c;  // int
        constexpr int m_nPlayer =       0xa18;  // int
        constexpr int m_nHitbox =       0xa20;  // int
        constexpr int m_nTintID =       0xa24;  // int
        constexpr int m_flCreationTime =        0xa28;  // float
        constexpr int m_nVersion =      0xa2c;  // int
        constexpr int m_ubSignature =   0xa2d;  // datatable
}
namespace DT_TEPlayerDecal {
        constexpr int m_vecOrigin =     0x14;   // vector
        constexpr int m_vecStart =      0x20;   // vector
        constexpr int m_vecRight =      0x2c;   // vector
        constexpr int m_nEntity =       0x38;   // int
        constexpr int m_nPlayer =       0x10;   // int
        constexpr int m_nHitbox =       0x3c;   // int
}
namespace DT_TEPhysicsProp {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_angRotation_0_ =        0x1c;   // float
        constexpr int m_angRotation_1_ =        0x20;   // float
        constexpr int m_angRotation_2_ =        0x24;   // float
        constexpr int m_vecVelocity =   0x28;   // vector
        constexpr int m_nModelIndex =   0x34;   // int
        constexpr int m_nFlags =        0x3c;   // int
        constexpr int m_nSkin = 0x38;   // int
        constexpr int m_nEffects =      0x40;   // int
        constexpr int m_clrRender =     0x44;   // int
}
namespace DT_TEParticleSystem {
        constexpr int m_vecOrigin_0_ =  0x10;   // float
        constexpr int m_vecOrigin_1_ =  0x14;   // float
        constexpr int m_vecOrigin_2_ =  0x18;   // float
}
namespace DT_TEMuzzleFlash {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecAngles =     0x1c;   // vector
        constexpr int m_flScale =       0x28;   // float
        constexpr int m_nType = 0x2c;   // int
}
namespace DT_TELargeFunnel {
        constexpr int m_nModelIndex =   0x1c;   // int
        constexpr int m_nReversed =     0x20;   // int
}
namespace DT_TEKillPlayerAttachments {
        constexpr int m_nPlayer =       0x10;   // int
}
namespace DT_TEImpact {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecNormal =     0x1c;   // vector
        constexpr int m_iType = 0x28;   // int
        constexpr int m_ucFlags =       0x2c;   // int
}
namespace DT_TEGlowSprite {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_nModelIndex =   0x1c;   // int
        constexpr int m_fScale =        0x20;   // float
        constexpr int m_fLife = 0x24;   // float
        constexpr int m_nBrightness =   0x28;   // int
}
namespace DT_TEShatterSurface {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecAngles =     0x1c;   // vector
        constexpr int m_vecForce =      0x28;   // vector
        constexpr int m_vecForcePos =   0x34;   // vector
        constexpr int m_flWidth =       0x40;   // float
        constexpr int m_flHeight =      0x44;   // float
        constexpr int m_flShardSize =   0x48;   // float
        constexpr int m_nSurfaceType =  0x50;   // int
        constexpr int m_uchFrontColor_0_ =      0x54;   // int
        constexpr int m_uchFrontColor_1_ =      0x55;   // int
        constexpr int m_uchFrontColor_2_ =      0x56;   // int
        constexpr int m_uchBackColor_0_ =       0x57;   // int
        constexpr int m_uchBackColor_1_ =       0x58;   // int
        constexpr int m_uchBackColor_2_ =       0x59;   // int
}
namespace DT_TEFootprintDecal {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecDirection =  0x1c;   // vector
        constexpr int m_nEntity =       0x34;   // int
        constexpr int m_nIndex =        0x38;   // int
        constexpr int m_chMaterialType =        0x3c;   // int
}
namespace DT_TEFizz {
        constexpr int m_nEntity =       0x10;   // int
        constexpr int m_nModelIndex =   0x14;   // int
        constexpr int m_nDensity =      0x18;   // int
        constexpr int m_nCurrent =      0x1c;   // int
}
namespace DT_TEExplosion {
        constexpr int m_nModelIndex =   0x1c;   // int
        constexpr int m_fScale =        0x20;   // float
        constexpr int m_nFrameRate =    0x24;   // int
        constexpr int m_nFlags =        0x28;   // int
        constexpr int m_vecNormal =     0x2c;   // vector
        constexpr int m_chMaterialType =        0x38;   // int
        constexpr int m_nRadius =       0x3c;   // int
        constexpr int m_nMagnitude =    0x40;   // int
}
namespace DT_TEEnergySplash {
        constexpr int m_vecPos =        0x10;   // vector
        constexpr int m_vecDir =        0x1c;   // vector
        constexpr int m_bExplosive =    0x28;   // int
}
namespace DT_TEEffectDispatch {
        constexpr int m_EffectData =    0x10;   // datatable
        namespace DT_EffectData {
                constexpr int m_vOrigin_x =     0x0;    // float
                constexpr int m_vOrigin_y =     0x4;    // float
                constexpr int m_vOrigin_z =     0x8;    // float
                constexpr int m_vStart_x =      0xc;    // float
                constexpr int m_vStart_y =      0x10;   // float
                constexpr int m_vStart_z =      0x14;   // float
                constexpr int m_vAngles =       0x24;   // vector
                constexpr int m_vNormal =       0x18;   // vector
                constexpr int m_fFlags =        0x30;   // int
                constexpr int m_flMagnitude =   0x40;   // float
                constexpr int m_flScale =       0x3c;   // float
                constexpr int m_nAttachmentIndex =      0x48;   // int
                constexpr int m_nSurfaceProp =  0x4c;   // int
                constexpr int m_iEffectName =   0x64;   // int
                constexpr int m_nMaterial =     0x50;   // int
                constexpr int m_nDamageType =   0x54;   // int
                constexpr int m_nHitBox =       0x58;   // int
                constexpr int m_nOtherEntIndex =        0x5c;   // int
                constexpr int m_nColor =        0x60;   // int
                constexpr int m_flRadius =      0x44;   // float
                constexpr int m_bPositionsAreRelativeToEntity = 0x61;   // int
        }
}
namespace DT_TEDynamicLight {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_fRadius =       0x1c;   // float
        constexpr int m_fTime = 0x30;   // float
        constexpr int m_fDecay =        0x34;   // float
}
namespace DT_TEDecal {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecStart =      0x1c;   // vector
        constexpr int m_nEntity =       0x28;   // int
        constexpr int m_nHitbox =       0x2c;   // int
        constexpr int m_nIndex =        0x30;   // int
}
namespace DT_TEClientProjectile {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecVelocity =   0x1c;   // vector
        constexpr int m_nModelIndex =   0x28;   // int
        constexpr int m_nLifeTime =     0x2c;   // int
        constexpr int m_hOwner =        0x30;   // int
}
namespace DT_TEBubbleTrail {
        constexpr int m_vecMins =       0x10;   // vector
        constexpr int m_vecMaxs =       0x1c;   // vector
        constexpr int m_nModelIndex =   0x2c;   // int
        constexpr int m_flWaterZ =      0x28;   // float
        constexpr int m_nCount =        0x30;   // int
        constexpr int m_fSpeed =        0x34;   // float
}
namespace DT_TEBubbles {
        constexpr int m_vecMins =       0x10;   // vector
        constexpr int m_vecMaxs =       0x1c;   // vector
        constexpr int m_nModelIndex =   0x2c;   // int
        constexpr int m_fHeight =       0x28;   // float
        constexpr int m_nCount =        0x30;   // int
        constexpr int m_fSpeed =        0x34;   // float
}
namespace DT_TEBSPDecal {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_nEntity =       0x1c;   // int
        constexpr int m_nIndex =        0x20;   // int
}
namespace DT_TEBreakModel {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_angRotation_0_ =        0x1c;   // float
        constexpr int m_angRotation_1_ =        0x20;   // float
        constexpr int m_angRotation_2_ =        0x24;   // float
        constexpr int m_vecSize =       0x28;   // vector
        constexpr int m_vecVelocity =   0x34;   // vector
        constexpr int m_nModelIndex =   0x44;   // int
        constexpr int m_nRandomization =        0x40;   // int
        constexpr int m_nCount =        0x48;   // int
        constexpr int m_fTime = 0x4c;   // float
        constexpr int m_nFlags =        0x50;   // int
}
namespace DT_TEBloodStream {
        constexpr int m_vecDirection =  0x1c;   // vector
        constexpr int m_nAmount =       0x38;   // int
}
namespace DT_TEBloodSprite {
        constexpr int m_vecOrigin =     0x10;   // vector
        constexpr int m_vecDirection =  0x1c;   // vector
        constexpr int m_nSprayModel =   0x3c;   // int
        constexpr int m_nDropModel =    0x38;   // int
        constexpr int m_nSize = 0x40;   // int
}
namespace DT_TEBeamSpline {
        constexpr int m_nPoints =       0xd0;   // int
        constexpr int m_vecPoints_0_ =  0x10;   // vector
        constexpr int m_vecPoints =     0x0;    // array
}
namespace DT_TEBeamRingPoint {
        constexpr int m_vecCenter =     0x4c;   // vector
        constexpr int m_flStartRadius = 0x58;   // float
        constexpr int m_flEndRadius =   0x5c;   // float
}
namespace DT_TEBeamRing {
        constexpr int m_nStartEntity =  0x4c;   // int
        constexpr int m_nEndEntity =    0x50;   // int
}
namespace DT_TEBeamPoints {
        constexpr int m_vecStartPoint = 0x4c;   // vector
        constexpr int m_vecEndPoint =   0x58;   // vector
}
namespace DT_TEBeamLaser {
        constexpr int m_nStartEntity =  0x4c;   // int
        constexpr int m_nEndEntity =    0x50;   // int
}
namespace DT_TEBeamFollow {
        constexpr int m_iEntIndex =     0x4c;   // int
}
namespace DT_TEBeamEnts {
        constexpr int m_nStartEntity =  0x4c;   // int
        constexpr int m_nEndEntity =    0x50;   // int
}
namespace DT_TEBeamEntPoint {
        constexpr int m_nStartEntity =  0x4c;   // int
        constexpr int m_nEndEntity =    0x50;   // int
        constexpr int m_vecStartPoint = 0x54;   // vector
        constexpr int m_vecEndPoint =   0x60;   // vector
}
namespace DT_BaseBeam {
        constexpr int m_nModelIndex =   0x10;   // int
        constexpr int m_nHaloIndex =    0x14;   // int
        constexpr int m_nStartFrame =   0x18;   // int
        constexpr int m_nFrameRate =    0x1c;   // int
        constexpr int m_fLife = 0x20;   // float
        constexpr int m_fWidth =        0x24;   // float
        constexpr int m_fEndWidth =     0x28;   // float
        constexpr int m_nFadeLength =   0x2c;   // int
        constexpr int m_fAmplitude =    0x30;   // float
        constexpr int m_nSpeed =        0x44;   // int
        constexpr int m_nFlags =        0x48;   // int
}
namespace DT_TEMetalSparks {
        constexpr int m_vecPos =        0x10;   // vector
        constexpr int m_vecDir =        0x1c;   // vector
}
namespace DT_SteamJet {
        constexpr int m_SpreadSpeed =   0xac4;  // float
        constexpr int m_Speed = 0xac8;  // float
        constexpr int m_StartSize =     0xacc;  // float
        constexpr int m_EndSize =       0xad0;  // float
        constexpr int m_Rate =  0xad4;  // float
        constexpr int m_JetLength =     0xad8;  // float
        constexpr int m_bEmit = 0xadc;  // int
        constexpr int m_bFaceLeft =     0xae4;  // int
        constexpr int m_nType = 0xae0;  // int
        constexpr int m_spawnflags =    0xae8;  // int
        constexpr int m_flRollSpeed =   0xaec;  // float
}
namespace DT_SmokeStack {
        constexpr int m_SpreadSpeed =   0xb14;  // float
        constexpr int m_Speed = 0xb18;  // float
        constexpr int m_StartSize =     0xb1c;  // float
        constexpr int m_EndSize =       0xb20;  // float
        constexpr int m_Rate =  0xb24;  // float
        constexpr int m_JetLength =     0xb28;  // float
        constexpr int m_bEmit = 0xb2c;  // int
        constexpr int m_flBaseSpread =  0xb30;  // float
        constexpr int m_flTwist =       0xb84;  // float
        constexpr int m_flRollSpeed =   0xbc0;  // float
        constexpr int m_iMaterialModel =        0xb88;  // int
        constexpr int m_AmbientLight_m_vPos =   0xb34;  // vector
        constexpr int m_AmbientLight_m_vColor = 0xb40;  // vector
        constexpr int m_AmbientLight_m_flIntensity =    0xb4c;  // float
        constexpr int m_DirLight_m_vPos =       0xb50;  // vector
        constexpr int m_DirLight_m_vColor =     0xb5c;  // vector
        constexpr int m_DirLight_m_flIntensity =        0xb68;  // float
        constexpr int m_vWind = 0xb78;  // vector
}
namespace DT_DustTrail {
        constexpr int m_SpawnRate =     0xac4;  // float
        constexpr int m_Color = 0xac8;  // vector
        constexpr int m_ParticleLifetime =      0xad8;  // float
        constexpr int m_StopEmitTime =  0xae0;  // float
        constexpr int m_MinSpeed =      0xae4;  // float
        constexpr int m_MaxSpeed =      0xae8;  // float
        constexpr int m_MinDirectedSpeed =      0xaec;  // float
        constexpr int m_MaxDirectedSpeed =      0xaf0;  // float
        constexpr int m_StartSize =     0xaf4;  // float
        constexpr int m_EndSize =       0xaf8;  // float
        constexpr int m_SpawnRadius =   0xafc;  // float
        constexpr int m_bEmit = 0xb0c;  // int
        constexpr int m_Opacity =       0xad4;  // float
}
namespace DT_FireTrail {
        constexpr int m_nAttachment =   0xac4;  // int
        constexpr int m_flLifetime =    0xac8;  // float
}
namespace DT_SporeTrail {
        constexpr int m_flSpawnRate =   0xacc;  // float
        constexpr int m_vecEndColor =   0xac0;  // vector
        constexpr int m_flParticleLifetime =    0xad0;  // float
        constexpr int m_flStartSize =   0xad4;  // float
        constexpr int m_flEndSize =     0xad8;  // float
        constexpr int m_flSpawnRadius = 0xadc;  // float
        constexpr int m_bEmit = 0xaec;  // int
}
namespace DT_SporeExplosion {
        constexpr int m_flSpawnRate =   0xac4;  // float
        constexpr int m_flParticleLifetime =    0xac8;  // float
        constexpr int m_flStartSize =   0xacc;  // float
        constexpr int m_flEndSize =     0xad0;  // float
        constexpr int m_flSpawnRadius = 0xad4;  // float
        constexpr int m_bEmit = 0xadc;  // int
        constexpr int m_bDontRemove =   0xadd;  // int
}
namespace DT_RocketTrail {
        constexpr int m_SpawnRate =     0xac4;  // float
        constexpr int m_StartColor =    0xac8;  // vector
        constexpr int m_EndColor =      0xad4;  // vector
        constexpr int m_ParticleLifetime =      0xae4;  // float
        constexpr int m_StopEmitTime =  0xae8;  // float
        constexpr int m_MinSpeed =      0xaec;  // float
        constexpr int m_MaxSpeed =      0xaf0;  // float
        constexpr int m_StartSize =     0xaf4;  // float
        constexpr int m_EndSize =       0xaf8;  // float
        constexpr int m_SpawnRadius =   0xafc;  // float
        constexpr int m_bEmit = 0xb0c;  // int
        constexpr int m_nAttachment =   0xb10;  // int
        constexpr int m_Opacity =       0xae0;  // float
        constexpr int m_bDamaged =      0xb0d;  // int
        constexpr int m_flFlareScale =  0xb20;  // float
}
namespace DT_SmokeTrail {
        constexpr int m_SpawnRate =     0xac4;  // float
        constexpr int m_StartColor =    0xac8;  // vector
        constexpr int m_EndColor =      0xad4;  // vector
        constexpr int m_ParticleLifetime =      0xae4;  // float
        constexpr int m_StopEmitTime =  0xae8;  // float
        constexpr int m_MinSpeed =      0xaec;  // float
        constexpr int m_MaxSpeed =      0xaf0;  // float
        constexpr int m_MinDirectedSpeed =      0xaf4;  // float
        constexpr int m_MaxDirectedSpeed =      0xaf8;  // float
        constexpr int m_StartSize =     0xafc;  // float
        constexpr int m_EndSize =       0xb00;  // float
        constexpr int m_SpawnRadius =   0xb04;  // float
        constexpr int m_bEmit = 0xb14;  // int
        constexpr int m_nAttachment =   0xb18;  // int
        constexpr int m_Opacity =       0xae0;  // float
}
namespace DT_PropVehicleDriveable {
        constexpr int m_hPlayer =       0x2994; // int
        constexpr int m_nSpeed =        0x2998; // int
        constexpr int m_nRPM =  0x299c; // int
        constexpr int m_flThrottle =    0x29a0; // float
        constexpr int m_nBoostTimeLeft =        0x29a4; // int
        constexpr int m_nHasBoost =     0x29a8; // int
        constexpr int m_nScannerDisabledWeapons =       0x29ac; // int
        constexpr int m_nScannerDisabledVehicle =       0x29b0; // int
        constexpr int m_bEnterAnimOn =  0x29d0; // int
        constexpr int m_bExitAnimOn =   0x29d1; // int
        constexpr int m_bUnableToFire = 0x2a1d; // int
        constexpr int m_vecEyeExitEndpoint =    0x2a10; // vector
        constexpr int m_bHasGun =       0x2a1c; // int
        constexpr int m_vecGunCrosshair =       0x29d8; // vector
}
namespace DT_ParticleSmokeGrenade {
        constexpr int m_flSpawnTime =   0xad4;  // float
        constexpr int m_FadeStartTime = 0xad8;  // float
        constexpr int m_FadeEndTime =   0xadc;  // float
        constexpr int m_MinColor =      0xae4;  // vector
        constexpr int m_MaxColor =      0xaf0;  // vector
        constexpr int m_CurrentStage =  0xac4;  // int
}
namespace DT_ParticleFire {
        constexpr int m_vOrigin =       0xacc;  // vector
        constexpr int m_vDirection =    0xad8;  // vector
}
namespace DT_TEGaussExplosion {
        constexpr int m_nType = 0x1c;   // int
        constexpr int m_vecDirection =  0x20;   // vector
}
namespace DT_QuadraticBeam {
        constexpr int m_targetPosition =        0x9d8;  // vector
        constexpr int m_controlPosition =       0x9e4;  // vector
        constexpr int m_scrollRate =    0x9f0;  // float
        constexpr int m_flWidth =       0x9f4;  // float
}
namespace DT_Embers {
        constexpr int m_nDensity =      0x9d8;  // int
        constexpr int m_nLifetime =     0x9dc;  // int
        constexpr int m_nSpeed =        0x9e0;  // int
        constexpr int m_bEmit = 0x9e4;  // int
}
namespace DT_EnvWind {
        constexpr int m_EnvWindShared = 0x9d8;  // datatable
        namespace DT_EnvWindShared {
                constexpr int m_iMinWind =      0xc;    // int
                constexpr int m_iMaxWind =      0x10;   // int
                constexpr int m_iMinGust =      0x18;   // int
                constexpr int m_iMaxGust =      0x1c;   // int
                constexpr int m_flMinGustDelay =        0x20;   // float
                constexpr int m_flMaxGustDelay =        0x24;   // float
                constexpr int m_iGustDirChange =        0x2c;   // int
                constexpr int m_iWindSeed =     0x8;    // int
                constexpr int m_iInitialWindDir =       0x6c;   // int
                constexpr int m_flInitialWindSpeed =    0x70;   // float
                constexpr int m_flStartTime =   0x4;    // float
                constexpr int m_flGustDuration =        0x28;   // float
        }
}
namespace DT_Precipitation {
        constexpr int m_nPrecipType =   0xa00;  // int
}
namespace DT_BaseAttributableItem {
        constexpr int m_AttributeManager =      0x2d90; // datatable
        namespace DT_AttributeContainer {
                constexpr int m_hOuter =        0x1c;   // int
                constexpr int m_ProviderType =  0x24;   // int
                constexpr int m_iReapplyProvisionParity =       0x18;   // int
                constexpr int m_Item =  0x40;   // datatable
                namespace DT_ScriptCreatedItem {
                        constexpr int m_iItemDefinitionIndex =  0x1ea;  // int
                        constexpr int m_iEntityLevel =  0x1f0;  // int
                        constexpr int m_iItemIDHigh =   0x200;  // int
                        constexpr int m_iItemIDLow =    0x204;  // int
                        constexpr int m_iAccountID =    0x208;  // int
                        constexpr int m_iEntityQuality =        0x1ec;  // int
                        constexpr int m_bInitialized =  0x214;  // int
                        constexpr int m_szCustomName =  0x27c;  // const char*
                        constexpr int m_NetworkedDynamicAttributesForDemos =    0x260;  // datatable
                        namespace DT_AttributeList {
                                constexpr int m_Attributes =    0x0;    // datatable
                        }
                }
        }
        constexpr int m_OriginalOwnerXuidLow =  0x31d0; // int
        constexpr int m_OriginalOwnerXuidHigh = 0x31d4; // int
        constexpr int m_nFallbackPaintKit =     0x31d8; // int
        constexpr int m_nFallbackSeed = 0x31dc; // int
        constexpr int m_flFallbackWear =        0x31e0; // float
        constexpr int m_nFallbackStatTrak =     0x31e4; // int
}
namespace DT_EconEntity {
        constexpr int m_AttributeManager =      0x2d90; // datatable
        namespace DT_AttributeContainer {
                constexpr int m_hOuter =        0x1c;   // int
                constexpr int m_ProviderType =  0x24;   // int
                constexpr int m_iReapplyProvisionParity =       0x18;   // int
                constexpr int m_Item =  0x40;   // datatable
                namespace DT_ScriptCreatedItem {
                        constexpr int m_iItemDefinitionIndex =  0x1ea;  // int
                        constexpr int m_iEntityLevel =  0x1f0;  // int
                        constexpr int m_iItemIDHigh =   0x200;  // int
                        constexpr int m_iItemIDLow =    0x204;  // int
                        constexpr int m_iAccountID =    0x208;  // int
                        constexpr int m_iEntityQuality =        0x1ec;  // int
                        constexpr int m_bInitialized =  0x214;  // int
                        constexpr int m_szCustomName =  0x27c;  // const char*
                        constexpr int m_NetworkedDynamicAttributesForDemos =    0x260;  // datatable
                        namespace DT_AttributeList {
                                constexpr int m_Attributes =    0x0;    // datatable
                        }
                }
        }
        constexpr int m_OriginalOwnerXuidLow =  0x31d0; // int
        constexpr int m_OriginalOwnerXuidHigh = 0x31d4; // int
        constexpr int m_nFallbackPaintKit =     0x31d8; // int
        constexpr int m_nFallbackSeed = 0x31dc; // int
        constexpr int m_flFallbackWear =        0x31e0; // float
        constexpr int m_nFallbackStatTrak =     0x31e4; // int
}
namespace DT_WeaponXM1014 {
        constexpr int m_reloadState =   0x33e4; // int
}
namespace DT_WeaponTaser {
        constexpr int m_fFireTime =     0x3400; // float
}
namespace DT_WeaponTablet {
        constexpr int m_flUpgradeExpirationTime_0_ =    0x33e8; // float
        constexpr int m_flUpgradeExpirationTime =       0x0;    // array
        constexpr int m_vecLocalHexFlags_0_ =   0x33f8; // int
        constexpr int m_vecLocalHexFlags =      0x0;    // array
        constexpr int m_nContractKillGridIndex =        0x34a0; // int
        constexpr int m_nContractKillGridHighResIndex = 0x34a4; // int
        constexpr int m_bTabletReceptionIsBlocked =     0x34a8; // int
        constexpr int m_flScanProgress =        0x34ac; // float
        constexpr int m_flBootTime =    0x34b0; // float
        constexpr int m_flShowMapTime = 0x34b4; // float
        constexpr int m_vecNotificationIds_0_ = 0x34c4; // int
        constexpr int m_vecNotificationIds =    0x0;    // array
        constexpr int m_vecNotificationTimestamps_0_ =  0x34e4; // float
        constexpr int m_vecNotificationTimestamps =     0x0;    // array
        constexpr int m_vecPlayerPositionHistory_0_ =   0x3508; // vector
        constexpr int m_vecPlayerPositionHistory =      0x0;    // array
        constexpr int m_nLastPurchaseIndex =    0x3504; // int
        constexpr int m_vecNearestMetalCratePos =       0x34b8; // vector
}
namespace DT_WeaponShield {
        constexpr int m_flDisplayHealth =       0x3400; // float
}
namespace DT_WeaponSawedoff {
        constexpr int m_reloadState =   0x33e4; // int
}
namespace DT_WeaponNOVA {
        constexpr int m_reloadState =   0x33e4; // int
}
namespace DT_WeaponMelee {
        constexpr int m_flThrowAt =     0x33e0; // float
}
namespace DT_WeaponM3 {
        constexpr int m_reloadState =   0x33e4; // int
}
namespace DT_WeaponFists {
        constexpr int m_bPlayingUninterruptableAct =    0x33e0; // int
}
namespace DT_WeaponCSBaseGun {
        constexpr int m_zoomLevel =     0x33e0; // int
        constexpr int m_iBurstShotsRemaining =  0x33e4; // int
}
namespace DT_WeaponCSBase {
        constexpr int m_weaponMode =    0x3328; // int
        constexpr int m_fAccuracyPenalty =      0x3340; // float
        constexpr int m_fLastShotTime = 0x33b8; // float
        constexpr int m_iRecoilIndex =  0x3350; // int
        constexpr int m_flRecoilIndex = 0x3354; // float
        constexpr int m_hPrevOwner =    0x3394; // int
        constexpr int m_bBurstMode =    0x3358; // int
        constexpr int m_flPostponeFireReadyTime =       0x335c; // float
        constexpr int m_bReloadVisuallyComplete =       0x3360; // int
        constexpr int m_bSilencerOn =   0x3361; // int
        constexpr int m_flDoneSwitchingSilencer =       0x3364; // float
        constexpr int m_iOriginalTeamNumber =   0x336c; // int
        constexpr int m_iIronSightMode =        0x33d4; // int
}
namespace DT_WeaponC4 {
        constexpr int m_bStartedArming =        0x3400; // int
        constexpr int m_bBombPlacedAnimation =  0x3408; // int
        constexpr int m_fArmedTime =    0x3404; // float
        constexpr int m_bShowC4LED =    0x3409; // int
        constexpr int m_bIsPlantingViaUse =     0x340a; // int
}
namespace DT_BumpMineProjectile {
        constexpr int m_nParentBoneIndex =      0x29e4; // int
        constexpr int m_vecParentBonePos =      0x29e8; // vector
        constexpr int m_bArmed =        0x29f4; // int
}
namespace DT_BreachChargeProjectile {
        constexpr int m_bShouldExplode =        0x29e0; // int
        constexpr int m_weaponThatThrewMe =     0x29e4; // int
        constexpr int m_nParentBoneIndex =      0x29e8; // int
        constexpr int m_vecParentBonePos =      0x29ec; // vector
}
namespace DT_WeaponBaseItem {
        constexpr int m_bRedraw =       0x33ec; // int
}
namespace DT_BaseCSGrenade {
        constexpr int m_bRedraw =       0x33e0; // int
        constexpr int m_bIsHeldByPlayer =       0x33e1; // int
        constexpr int m_bPinPulled =    0x33e2; // int
        constexpr int m_fThrowTime =    0x33e4; // float
        constexpr int m_bLoopingSoundPlaying =  0x33e8; // int
        constexpr int m_flThrowStrength =       0x33ec; // float
        constexpr int m_fDropTime =     0x33f0; // float
}
namespace DT_SmokeGrenadeProjectile {
        constexpr int m_bDidSmokeEffect =       0x2a24; // int
        constexpr int m_nSmokeEffectTickBegin = 0x2a20; // int
}
namespace DT_MolotovProjectile {
        constexpr int m_bIsIncGrenade = 0x2a20; // int
}
namespace DT_ItemDogtags {
        constexpr int m_OwningPlayer =  0x3450; // int
        constexpr int m_KillingPlayer = 0x3454; // int
}
namespace DT_PhysPropLootCrate {
        constexpr int m_bRenderInPSPM = 0x2a04; // int
        constexpr int m_bRenderInTablet =       0x2a05; // int
        constexpr int m_iHealth =       0x100;  // int
        constexpr int m_iMaxHealth =    0x2a08; // int
}
namespace DT_EnvGasCanister {
        constexpr int m_flFlightSpeed = 0x2a04; // float
        constexpr int m_flLaunchTime =  0x2a08; // float
        constexpr int m_vecParabolaDirection =  0x2a1c; // vector
        constexpr int m_flFlightTime =  0x2a00; // float
        constexpr int m_flWorldEnterTime =      0x2a28; // float
        constexpr int m_flInitialZSpeed =       0x2a0c; // float
        constexpr int m_flZAcceleration =       0x2a10; // float
        constexpr int m_flHorizSpeed =  0x2a14; // float
        constexpr int m_bLaunchedFromWithinWorld =      0x2a18; // int
        constexpr int m_vecImpactPosition =     0x29c4; // vector
        constexpr int m_vecStartPosition =      0x29d0; // vector
        constexpr int m_vecEnterWorldPosition = 0x29dc; // vector
        constexpr int m_vecDirection =  0x29e8; // vector
        constexpr int m_vecStartAngles =        0x29f4; // vector
        constexpr int m_vecSkyboxOrigin =       0x2a2c; // vector
        constexpr int m_flSkyboxScale = 0x2a38; // float
        constexpr int m_bInSkybox =     0x2a3c; // int
        constexpr int m_bDoImpactEffects =      0x2a3d; // int
        constexpr int m_bLanded =       0x2990; // int
        constexpr int m_hSkyboxCopy =   0x29b8; // int
        constexpr int m_nMyZoneIndex =  0x2a40; // int
        constexpr int m_vecOrigin =     0x138;  // vector2D (x and y)
        constexpr int m_vecOrigin_2_ =  0x140;  // float
}
namespace DT_Dronegun {
        constexpr int m_vecAttentionTarget =    0x2990; // vector
        constexpr int m_vecTargetOffset =       0x299c; // vector
        constexpr int m_iHealth =       0x100;  // int
        constexpr int m_bHasTarget =    0x29a8; // int
}
namespace DT_ParadropChopper {
        constexpr int m_vecOrigin =     0x138;  // vector2D (x and y)
        constexpr int m_vecOrigin_2_ =  0x140;  // float
        constexpr int m_hCallingPlayer =        0x29a0; // int
}
namespace DT_SurvivalSpawnChopper {
        constexpr int m_vecOrigin =     0x138;  // vector2D (x and y)
        constexpr int m_vecOrigin_2_ =  0x140;  // float
}
namespace DT_BRC4Target {
        constexpr int m_bBrokenOpen =   0x2994; // int
        constexpr int m_flRadius =      0x2998; // float
}
namespace DT_InfoMapRegion {
        constexpr int m_flRadius =      0x9d8;  // float
        constexpr int m_szLocToken =    0x9dc;  // const char*
}
namespace DT_Inferno {
        constexpr int m_fireXDelta =    0x9e4;  // datatable
        constexpr int m_fireYDelta =    0xb74;  // datatable
        constexpr int m_fireZDelta =    0xd04;  // datatable
        constexpr int m_bFireIsBurning =        0xe94;  // datatable
        constexpr int m_nFireEffectTickBegin =  0x13b4; // int
        constexpr int m_fireCount =     0x13a8; // int
}
namespace DT_CChicken {
        constexpr int m_jumpedThisFrame =       0x29f8; // int
        constexpr int m_leader =        0x29fc; // int
}
namespace DT_Drone {
        constexpr int m_hMoveToThisEntity =     0x29e8; // int
        constexpr int m_hDeliveryCargo =        0x29ec; // int
        constexpr int m_bPilotTakeoverAllowed = 0x29f0; // int
        constexpr int m_hPotentialCargo =       0x29f4; // int
        constexpr int m_hCurrentPilot = 0x29f8; // int
        constexpr int m_vecTagPositions_0_ =    0x29fc; // vector
        constexpr int m_vecTagPositions =       0x0;    // array
        constexpr int m_vecTagIncrements_0_ =   0x2b1c; // int
        constexpr int m_vecTagIncrements =      0x0;    // array
}
namespace DT_FootstepControl {
        constexpr int m_source =        0xa10;  // const char*
        constexpr int m_destination =   0xa20;  // const char*
}
namespace DT_TEPlantBomb {
        constexpr int m_vecOrigin =     0x14;   // vector
        constexpr int m_iPlayer =       0x10;   // int
        constexpr int m_option =        0x20;   // int
}
namespace DT_TEFireBullets {
        constexpr int m_vecOrigin =     0x18;   // vector
        constexpr int m_vecAngles_0_ =  0x24;   // float
        constexpr int m_vecAngles_1_ =  0x28;   // float
        constexpr int m_iWeaponID =     0x34;   // int
        constexpr int m_weapon =        0x30;   // int
        constexpr int m_iMode = 0x38;   // int
        constexpr int m_iSeed = 0x3c;   // int
        constexpr int m_iPlayer =       0x10;   // int
        constexpr int m_fInaccuracy =   0x40;   // float
        constexpr int m_fSpread =       0x48;   // float
        constexpr int m_nItemDefIndex = 0x14;   // int
        constexpr int m_iSoundType =    0x4c;   // int
        constexpr int m_flRecoilIndex = 0x44;   // float
}
namespace DT_TERadioIcon {
        constexpr int m_iAttachToClient =       0x10;   // int
}
namespace DT_PlantedC4 {
        constexpr int m_bBombTicking =  0x2990; // int
        constexpr int m_nBombSite =     0x2994; // int
        constexpr int m_flC4Blow =      0x29a0; // float
        constexpr int m_flTimerLength = 0x29a4; // float
        constexpr int m_flDefuseLength =        0x29b8; // float
        constexpr int m_flDefuseCountDown =     0x29bc; // float
        constexpr int m_bBombDefused =  0x29c0; // int
        constexpr int m_hBombDefuser =  0x29c4; // int
}
namespace DT_CSPlayerResource {
        constexpr int m_iPlayerC4 =     0x165c; // int
        constexpr int m_iPlayerVIP =    0x1660; // int
        constexpr int m_bHostageAlive = 0x167c; // datatable
        constexpr int m_isHostageFollowingSomeone =     0x1688; // datatable
        constexpr int m_iHostageEntityIDs =     0x1694; // datatable
        constexpr int m_bombsiteCenterA =       0x1664; // vector
        constexpr int m_bombsiteCenterB =       0x1670; // vector
        constexpr int m_hostageRescueX =        0x16c4; // datatable
        constexpr int m_hostageRescueY =        0x16d4; // datatable
        constexpr int m_hostageRescueZ =        0x16e4; // datatable
        constexpr int m_iMVPs = 0x16f4; // datatable
        constexpr int m_iArmor =        0x187c; // datatable
        constexpr int m_bHasHelmet =    0x1839; // datatable
        constexpr int m_bHasDefuser =   0x17f8; // datatable
        constexpr int m_iScore =        0x1980; // datatable
        constexpr int m_iCompetitiveRanking =   0x1a84; // datatable
        constexpr int m_iCompetitiveWins =      0x1b88; // datatable
        constexpr int m_iCompetitiveRankType =  0x1c8c; // datatable
        constexpr int m_iCompTeammateColor =    0x1cd0; // datatable
        constexpr int m_iLifetimeStart =        0x1dd4; // datatable
        constexpr int m_iLifetimeEnd =  0x1ed8; // datatable
        constexpr int m_bControllingBot =       0x1fdc; // datatable
        constexpr int m_iControlledPlayer =     0x2020; // datatable
        constexpr int m_iControlledByPlayer =   0x2124; // datatable
        constexpr int m_iBotDifficulty =        0x42a8; // datatable
        constexpr int m_szClan =        0x43ac; // datatable
        constexpr int m_nCharacterDefIndex =    0x47bc; // datatable
        constexpr int m_iTotalCashSpent =       0x48c0; // datatable
        constexpr int m_iGunGameLevel = 0x49c4; // datatable
        constexpr int m_iCashSpentThisRound =   0x4ac8; // datatable
        constexpr int m_nEndMatchNextMapVotes = 0x6a88; // datatable
        constexpr int m_bEndMatchNextMapAllVoted =      0x6b8c; // int
        constexpr int m_nActiveCoinRank =       0x4bcc; // datatable
        constexpr int m_nMusicID =      0x4cd0; // datatable
        constexpr int m_nPersonaDataPublicLevel =       0x4dd4; // datatable
        constexpr int m_nPersonaDataPublicCommendsLeader =      0x4ed8; // datatable
        constexpr int m_nPersonaDataPublicCommendsTeacher =     0x4fdc; // datatable
        constexpr int m_nPersonaDataPublicCommendsFriendly =    0x50e0; // datatable
        constexpr int m_bHasCommunicationAbuseMute =    0x51e4; // datatable
        constexpr int m_szCrosshairCodes =      0x5225; // datatable
        constexpr int m_iMatchStats_Kills_Total =       0x5b08; // datatable
        constexpr int m_iMatchStats_5k_Total =  0x601c; // datatable
        constexpr int m_iMatchStats_4k_Total =  0x5f18; // datatable
        constexpr int m_iMatchStats_3k_Total =  0x5e14; // datatable
        constexpr int m_iMatchStats_Damage_Total =      0x6120; // datatable
        constexpr int m_iMatchStats_EquipmentValue_Total =      0x6224; // datatable
        constexpr int m_iMatchStats_KillReward_Total =  0x6328; // datatable
        constexpr int m_iMatchStats_LiveTime_Total =    0x642c; // datatable
        constexpr int m_iMatchStats_Deaths_Total =      0x5d10; // datatable
        constexpr int m_iMatchStats_Assists_Total =     0x5c0c; // datatable
        constexpr int m_iMatchStats_HeadShotKills_Total =       0x6530; // datatable
        constexpr int m_iMatchStats_Objective_Total =   0x6634; // datatable
        constexpr int m_iMatchStats_CashEarned_Total =  0x6738; // datatable
        constexpr int m_iMatchStats_UtilityDamage_Total =       0x683c; // datatable
        constexpr int m_iMatchStats_EnemiesFlashed_Total =      0x6940; // datatable
}
namespace DT_CSPlayer {
        constexpr int m_angEyeAngles_0_ =       0x113d0;        // float
        constexpr int m_angEyeAngles_1_ =       0x113d4;        // float
        constexpr int m_iAddonBits =    0x103c4;        // int
        constexpr int m_iPrimaryAddon = 0x103c8;        // int
        constexpr int m_iSecondaryAddon =       0x103cc;        // int
        constexpr int m_iThrowGrenadeCounter =  0x99b8; // int
        constexpr int m_bWaitForNoAttack =      0x99bc; // int
        constexpr int m_bIsRespawningForDMBonus =       0x99bd; // int
        constexpr int m_iPlayerState =  0x9978; // int
        constexpr int m_iAccount =      0x113b8;        // int
        constexpr int m_iStartAccount = 0x103f4;        // int
        constexpr int m_totalHitsOnServer =     0x103f8;        // int
        constexpr int m_bInBombZone =   0x99b4; // int
        constexpr int m_bInBuyZone =    0x99b5; // int
        constexpr int m_bInNoDefuseArea =       0x99b6; // int
        constexpr int m_bKilledByTaser =        0x99cd; // int
        constexpr int m_iMoveState =    0x99d0; // int
        constexpr int m_iClass =        0x113c8;        // int
        constexpr int m_ArmorValue =    0x113cc;        // int
        constexpr int m_angEyeAngles =  0x113d0;        // vector
        constexpr int m_bHasDefuser =   0x113dc;        // int
        constexpr int m_bNightVisionOn =        0x103e9;        // int
        constexpr int m_bHasNightVision =       0x103ea;        // int
        constexpr int m_bInHostageRescueZone =  0x113dd;        // int
        constexpr int m_bIsDefusing =   0x997c; // int
        constexpr int m_bIsGrabbingHostage =    0x997d; // int
        constexpr int m_iBlockingUseActionInProgress =  0x9980; // int
        constexpr int m_bIsScoped =     0x9974; // int
        constexpr int m_bIsWalking =    0x9975; // int
        constexpr int m_nIsAutoMounting =       0x9ae4; // int
        constexpr int m_bResumeZoom =   0x9976; // int
        constexpr int m_fImmuneToGunGameDamageTime =    0x9988; // float
        constexpr int m_bGunGameImmunity =      0x9990; // int
        constexpr int m_bHasMovedSinceSpawn =   0x9991; // int
        constexpr int m_bMadeFinalGunGameProgressiveKill =      0x9992; // int
        constexpr int m_iGunGameProgressiveWeaponIndex =        0x9994; // int
        constexpr int m_iNumGunGameTRKillPoints =       0x9998; // int
        constexpr int m_iNumGunGameKillsWithCurrentWeapon =     0x999c; // int
        constexpr int m_iNumRoundKills =        0x99a0; // int
        constexpr int m_fMolotovUseTime =       0x99ac; // float
        constexpr int m_fMolotovDamageTime =    0x99b0; // float
        constexpr int m_szArmsModel =   0x99d7; // const char*
        constexpr int m_hCarriedHostage =       0x10448;        // int
        constexpr int m_hCarriedHostageProp =   0x1044c;        // int
        constexpr int m_bIsRescuing =   0x9984; // int
        constexpr int m_flGroundAccelLinearFracLastTime =       0x103f0;        // float
        constexpr int m_bCanMoveDuringFreezePeriod =    0x99d4; // int
        constexpr int m_isCurrentGunGameLeader =        0x99d5; // int
        constexpr int m_isCurrentGunGameTeamLeader =    0x99d6; // int
        constexpr int m_flGuardianTooFarDistFrac =      0x99c0; // float
        constexpr int m_flDetectedByEnemySensorTime =   0x99c4; // float
        constexpr int m_bIsPlayerGhost =        0x9ae1; // int
        constexpr int m_iMatchStats_Kills =     0x104b4;        // datatable
        constexpr int m_iMatchStats_Damage =    0x1052c;        // datatable
        constexpr int m_iMatchStats_EquipmentValue =    0x105a4;        // datatable
        constexpr int m_iMatchStats_MoneySaved =        0x1061c;        // datatable
        constexpr int m_iMatchStats_KillReward =        0x10694;        // datatable
        constexpr int m_iMatchStats_LiveTime =  0x1070c;        // datatable
        constexpr int m_iMatchStats_Deaths =    0x10784;        // datatable
        constexpr int m_iMatchStats_Assists =   0x107fc;        // datatable
        constexpr int m_iMatchStats_HeadShotKills =     0x10874;        // datatable
        constexpr int m_iMatchStats_Objective = 0x108ec;        // datatable
        constexpr int m_iMatchStats_CashEarned =        0x10964;        // datatable
        constexpr int m_iMatchStats_UtilityDamage =     0x109dc;        // datatable
        constexpr int m_iMatchStats_EnemiesFlashed =    0x10a54;        // datatable
        constexpr int m_rank =  0x1138c;        // datatable
        constexpr int m_passiveItems =  0x113a4;        // datatable
        constexpr int m_bHasParachute = 0x113a4;        // int
        constexpr int m_unMusicID =     0x113a8;        // int
        constexpr int m_bHasHelmet =    0x113c0;        // int
        constexpr int m_bHasHeavyArmor =        0x113c1;        // int
        constexpr int m_nHeavyAssaultSuitCooldownRemaining =    0x113c4;        // int
        constexpr int m_flFlashDuration =       0x10470;        // float
        constexpr int m_flFlashMaxAlpha =       0x1046c;        // float
        constexpr int m_iProgressBarDuration =  0x103d0;        // int
        constexpr int m_flProgressBarStartTime =        0x103d4;        // float
        constexpr int m_hRagdoll =      0x1043c;        // int
        constexpr int m_hPlayerPing =   0x10440;        // int
        constexpr int m_cycleLatch =    0x114e0;        // int
        constexpr int m_unCurrentEquipmentValue =       0x11384;        // int
        constexpr int m_unRoundStartEquipmentValue =    0x11386;        // int
        constexpr int m_unFreezetimeEndEquipmentValue = 0x11388;        // int
        constexpr int m_bIsControllingBot =     0x11a4d;        // int
        constexpr int m_bHasControlledBotThisRound =    0x11a5c;        // int
        constexpr int m_bCanControlObservedBot =        0x11a4e;        // int
        constexpr int m_iControlledBotEntIndex =        0x11a50;        // int
        constexpr int m_vecAutomoveTargetEnd =  0x9af4; // vector
        constexpr int m_flAutoMoveStartTime =   0x9b04; // float
        constexpr int m_flAutoMoveTargetTime =  0x9b08; // float
        constexpr int m_bIsAssassinationTarget =        0x11a4c;        // int
        constexpr int m_bHud_MiniScoreHidden =  0x113fe;        // int
        constexpr int m_bHud_RadarHidden =      0x113ff;        // int
        constexpr int m_nLastKillerIndex =      0x11400;        // int
        constexpr int m_nLastConcurrentKilled = 0x11404;        // int
        constexpr int m_nDeathCamMusic =        0x11408;        // int
        constexpr int m_bIsHoldingLookAtWeapon =        0x11975;        // int
        constexpr int m_bIsLookingAtWeapon =    0x11974;        // int
        constexpr int m_iNumRoundKillsHeadshots =       0x99a4; // int
        constexpr int m_unTotalRoundDamageDealt =       0x99a8; // int
        constexpr int m_flLowerBodyYawTarget =  0x9adc; // float
        constexpr int m_bStrafing =     0x9ae0; // int
        constexpr int m_flThirdpersonRecoil =   0x119ec;        // float
        constexpr int m_bHideTargetID = 0x119f0;        // int
        constexpr int m_bIsSpawnRappelling =    0x103fd;        // int
        constexpr int m_vecSpawnRappellingRopeOrigin =  0x10400;        // vector
        constexpr int m_nSurvivalTeam = 0x10410;        // int
        constexpr int m_hSurvivalAssassinationTarget =  0x10414;        // int
        constexpr int m_flHealthShotBoostExpirationTime =       0x10418;        // float
        constexpr int m_flLastExoJumpTime =     0x9b0c; // float
        constexpr int m_vecPlayerPatchEconIndices =     0x119c4;        // datatable
}
namespace DT_PlayerPing {
        constexpr int m_hPlayer =       0x9e4;  // int
        constexpr int m_hPingedEntity = 0x9e8;  // int
        constexpr int m_iType = 0x9ec;  // int
        constexpr int m_bUrgent =       0x9f4;  // int
        constexpr int m_szPlaceName =   0x9f5;  // const char*
}
namespace DT_CSRagdoll {
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_vecRagdollOrigin =      0x2a1c; // vector
        constexpr int m_hPlayer =       0x2a00; // int
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_nForceBone =    0x268c; // int
        constexpr int m_vecForce =      0x2680; // vector
        constexpr int m_vecRagdollVelocity =    0x2a10; // vector
        constexpr int m_iDeathPose =    0x2a28; // int
        constexpr int m_iDeathFrame =   0x2a2c; // int
        constexpr int m_iTeamNum =      0xf4;   // int
        constexpr int m_bClientSideAnimation =  0x28a0; // int
        constexpr int m_flDeathYaw =    0x2a30; // float
        constexpr int m_flAbsYaw =      0x2a34; // float
        constexpr int m_bDiedAirborne = 0x2a38; // int
}
namespace DT_TEPlayerAnimEvent {
        constexpr int m_hPlayer =       0x10;   // int
        constexpr int m_iEvent =        0x14;   // int
        constexpr int m_nData = 0x18;   // int
}
namespace DT_CHostage {
        constexpr int m_isRescued =     0x2f40; // int
        constexpr int m_jumpedThisFrame =       0x2f41; // int
        constexpr int m_iHealth =       0x100;  // int
        constexpr int m_iMaxHealth =    0x2f28; // int
        constexpr int m_lifeState =     0x25f;  // int
        constexpr int m_fFlags =        0x104;  // int
        constexpr int m_nHostageState = 0x2f44; // int
        constexpr int m_flRescueStartTime =     0x2f48; // float
        constexpr int m_flGrabSuccessTime =     0x2f4c; // float
        constexpr int m_flDropStartTime =       0x2f50; // float
        constexpr int m_vel =   0x2f34; // vector
        constexpr int m_leader =        0x2f30; // int
}
namespace DT_BaseCSGrenadeProjectile {
        constexpr int m_vInitialVelocity =      0x29e0; // vector
        constexpr int m_nBounces =      0x29ec; // int
        constexpr int m_nExplodeEffectIndex =   0x29f0; // int
        constexpr int m_nExplodeEffectTickBegin =       0x29f4; // int
        constexpr int m_vecExplodeEffectOrigin =        0x29f8; // vector
}
namespace DT_HandleTest {
        constexpr int m_Handle =        0x9d8;  // int
        constexpr int m_bSendHandle =   0x9dc;  // int
}
namespace DT_SpriteTrail {
        constexpr int m_flLifeTime =    0x1074; // float
        constexpr int m_flStartWidth =  0x1078; // float
        constexpr int m_flEndWidth =    0x107c; // float
        constexpr int m_flStartWidthVariance =  0x1080; // float
        constexpr int m_flTextureRes =  0x1084; // float
        constexpr int m_flMinFadeLength =       0x1088; // float
        constexpr int m_vecSkyboxOrigin =       0x108c; // vector
        constexpr int m_flSkyboxScale = 0x1098; // float
}
namespace DT_Sprite {
        constexpr int m_hAttachedToEntity =     0x9e8;  // int
        constexpr int m_nAttachment =   0x9ec;  // int
        constexpr int m_flScaleTime =   0xa08;  // float
        constexpr int m_flSpriteScale = 0xa04;  // float
        constexpr int m_flSpriteFramerate =     0x9f0;  // float
        constexpr int m_flGlowProxySize =       0xa10;  // float
        constexpr int m_flHDRColorScale =       0xa14;  // float
        constexpr int m_flFrame =       0x9f4;  // float
        constexpr int m_flBrightnessTime =      0xa00;  // float
        constexpr int m_nBrightness =   0x9fc;  // int
        constexpr int m_bWorldSpaceScale =      0xa0c;  // int
}
namespace DT_Ragdoll_Attached {
        constexpr int m_boneIndexAttached =     0x2cc8; // int
        constexpr int m_ragdollAttachedObjectIndex =    0x2cc4; // int
        constexpr int m_attachmentPointBoneSpace =      0x2ca0; // vector
        constexpr int m_attachmentPointRagdollSpace =   0x2cb8; // vector
}
namespace DT_Ragdoll {
        constexpr int m_ragAngles_0_ =  0x2ab0; // vector
        constexpr int m_ragAngles =     0x0;    // array
        constexpr int m_ragPos_0_ =     0x2990; // vector
        constexpr int m_ragPos =        0x0;    // array
        constexpr int m_hUnragdoll =    0x2c8c; // int
        constexpr int m_flBlendWeight = 0x2c90; // float
        constexpr int m_nOverlaySequence =      0x2c98; // int
}
namespace DT_PropCounter {
        constexpr int m_flDisplayValue =        0x2990; // float
}
namespace DT_PoseController {
        constexpr int m_hProps =        0x9d8;  // datatable
        constexpr int m_chPoseIndex =   0x9e8;  // datatable
        constexpr int m_bPoseValueParity =      0x9ec;  // int
        constexpr int m_fPoseValue =    0x9f0;  // float
        constexpr int m_fInterpolationTime =    0x9f4;  // float
        constexpr int m_bInterpolationWrap =    0x9f8;  // int
        constexpr int m_fCycleFrequency =       0x9fc;  // float
        constexpr int m_nFModType =     0xa00;  // int
        constexpr int m_fFModTimeOffset =       0xa04;  // float
        constexpr int m_fFModRate =     0xa08;  // float
        constexpr int m_fFModAmplitude =        0xa0c;  // float
}
namespace DT_GrassBurn {
        constexpr int m_flGrassBurnClearTime =  0x9d8;  // float
}
namespace DT_FuncLadder {
        constexpr int m_vecPlayerMountPositionTop =     0x9f8;  // vector
        constexpr int m_vecPlayerMountPositionBottom =  0xa04;  // vector
        constexpr int m_vecLadderDir =  0x9d8;  // vector
        constexpr int m_bFakeLadder =   0xa11;  // int
}
namespace DT_TEFoundryHelpers {
        constexpr int m_iEntity =       0x10;   // int
}
namespace DT_DetailController {
        constexpr int m_flFadeStartDist =       0x9d8;  // float
        constexpr int m_flFadeEndDist = 0x9dc;  // float
}
namespace DT_DangerZone {
        constexpr int m_vecDangerZoneOriginStartedAt =  0x9d8;  // vector
        constexpr int m_flBombLaunchTime =      0x9e4;  // float
        constexpr int m_flExtraRadius = 0x9e8;  // float
        constexpr int m_flExtraRadiusStartTime =        0x9ec;  // float
        constexpr int m_flExtraRadiusTotalLerpTime =    0x9f0;  // float
        constexpr int m_nDropOrder =    0x9f4;  // int
        constexpr int m_iWave = 0x9f8;  // int
}
namespace DT_DangerZoneController {
        constexpr int m_bDangerZoneControllerEnabled =  0x9d8;  // int
        constexpr int m_bMissionControlledExplosions =  0x9d9;  // int
        constexpr int m_flStartTime =   0x9f4;  // float
        constexpr int m_flFinalExpansionTime =  0x9f8;  // float
        constexpr int m_vecEndGameCircleStart = 0x9dc;  // vector
        constexpr int m_vecEndGameCircleEnd =   0x9e8;  // vector
        constexpr int m_DangerZones =   0x9fc;  // datatable
        constexpr int m_flWaveEndTimes =        0xaa4;  // datatable
        constexpr int m_hTheFinalZone = 0xab8;  // int
}
namespace DT_WorldVguiText {
        constexpr int m_bEnabled =      0x9d8;  // int
        constexpr int m_szDisplayText = 0x9d9;  // const char*
        constexpr int m_szDisplayTextOption =   0xbd9;  // const char*
        constexpr int m_szFont =        0xcd9;  // const char*
        constexpr int m_iTextPanelWidth =       0xd20;  // int
        constexpr int m_clrText =       0xd19;  // int
}
namespace DT_World {
        constexpr int m_flWaveHeight =  0x9d8;  // float
        constexpr int m_WorldMins =     0x9dc;  // vector
        constexpr int m_WorldMaxs =     0x9e8;  // vector
        constexpr int m_bStartDark =    0x9f4;  // int
        constexpr int m_flMaxOccludeeArea =     0x9f8;  // float
        constexpr int m_flMinOccluderArea =     0x9fc;  // float
        constexpr int m_flMaxPropScreenSpaceWidth =     0xa04;  // float
        constexpr int m_flMinPropScreenSpaceWidth =     0xa00;  // float
        constexpr int m_iszDetailSpriteMaterial =       0xa10;  // const char*
        constexpr int m_bColdWorld =    0xa08;  // int
        constexpr int m_iTimeOfDay =    0xa0c;  // int
}
namespace DT_WaterLODControl {
        constexpr int m_flCheapWaterStartDistance =     0x9d8;  // float
        constexpr int m_flCheapWaterEndDistance =       0x9dc;  // float
}
namespace DT_MapVetoPickController {
        constexpr int m_nDraftType =    0x9e8;  // int
        constexpr int m_nTeamWinningCoinToss =  0x9ec;  // int
        constexpr int m_nTeamWithFirstChoice =  0x9f0;  // datatable
        constexpr int m_nVoteMapIdsList =       0xaf0;  // datatable
        constexpr int m_nAccountIDs =   0xb0c;  // datatable
        constexpr int m_nMapId0 =       0xc0c;  // datatable
        constexpr int m_nMapId1 =       0xd0c;  // datatable
        constexpr int m_nMapId2 =       0xe0c;  // datatable
        constexpr int m_nMapId3 =       0xf0c;  // datatable
        constexpr int m_nMapId4 =       0x100c; // datatable
        constexpr int m_nMapId5 =       0x110c; // datatable
        constexpr int m_nStartingSide0 =        0x120c; // datatable
        constexpr int m_nCurrentPhase = 0x130c; // int
        constexpr int m_nPhaseStartTick =       0x1310; // int
        constexpr int m_nPhaseDurationTicks =   0x1314; // int
}
namespace DT_VoteController {
        constexpr int m_iActiveIssueIndex =     0x9e4;  // int
        constexpr int m_iOnlyTeamToVote =       0x9e8;  // int
        constexpr int m_nVoteOptionCount =      0x9ec;  // datatable
        constexpr int m_nPotentialVotes =       0xa04;  // int
        constexpr int m_bIsYesNoVote =  0xa0a;  // int
}
namespace DT_VGuiScreen {
        constexpr int m_flWidth =       0x9e0;  // float
        constexpr int m_flHeight =      0x9e4;  // float
        constexpr int m_fScreenFlags =  0xa0c;  // int
        constexpr int m_nPanelName =    0x9e8;  // int
        constexpr int m_nAttachmentIndex =      0xa04;  // int
        constexpr int m_nOverlayMaterial =      0xa08;  // int
        constexpr int m_hPlayerOwner =  0xa68;  // int
}
namespace DT_PropJeep {
        constexpr int m_bHeadlightIsOn =        0x2adc; // int
}
namespace DT_PropVehicleChoreoGeneric {
        constexpr int m_hPlayer =       0x2a04; // int
        constexpr int m_bEnterAnimOn =  0x2a0c; // int
        constexpr int m_bExitAnimOn =   0x2a0d; // int
        constexpr int m_bForceEyesToAttachment =        0x2a1c; // int
        constexpr int m_vecEyeExitEndpoint =    0x2a10; // vector
        constexpr int m_vehicleView_bClampEyeAngles =   0x2aa0; // int
        constexpr int m_vehicleView_flPitchCurveZero =  0x2aa4; // float
        constexpr int m_vehicleView_flPitchCurveLinear =        0x2aa8; // float
        constexpr int m_vehicleView_flRollCurveZero =   0x2aac; // float
        constexpr int m_vehicleView_flRollCurveLinear = 0x2ab0; // float
        constexpr int m_vehicleView_flFOV =     0x2ab4; // float
        constexpr int m_vehicleView_flYawMin =  0x2ab8; // float
        constexpr int m_vehicleView_flYawMax =  0x2abc; // float
        constexpr int m_vehicleView_flPitchMin =        0x2ac0; // float
        constexpr int m_vehicleView_flPitchMax =        0x2ac4; // float
}
namespace DT_TriggerSoundOperator {
        constexpr int m_nSoundOperator =        0xa10;  // int
}
namespace DT_BaseTrigger {
        constexpr int m_bClientSidePredicted =  0xa08;  // int
        constexpr int m_spawnflags =    0x2c8;  // int
}
namespace DT_Tesla {
        constexpr int m_SoundName =     0xa00;  // const char*
        constexpr int m_iszSpriteName = 0xa40;  // const char*
}
namespace DT_BaseTeamObjectiveResource {
        constexpr int m_iTimerToShowInHUD =     0x9d8;  // int
        constexpr int m_iStopWatchTimer =       0x9dc;  // int
        constexpr int m_iNumControlPoints =     0x9e0;  // int
        constexpr int m_bPlayingMiniRounds =    0x9e8;  // int
        constexpr int m_bControlPointsReset =   0x9e9;  // int
        constexpr int m_iUpdateCapHudParity =   0x9ec;  // int
        constexpr int m_vCPPositions_0_ =       0x9f4;  // vector
        constexpr int m_vCPPositions =  0x0;    // array
        constexpr int m_bCPIsVisible =  0xa54;  // datatable
        constexpr int m_flLazyCapPerc = 0xa5c;  // datatable
        constexpr int m_iTeamIcons =    0xa9c;  // datatable
        constexpr int m_iTeamOverlays = 0xb9c;  // datatable
        constexpr int m_iTeamReqCappers =       0xc9c;  // datatable
        constexpr int m_flTeamCapTime = 0xd9c;  // datatable
        constexpr int m_iPreviousPoints =       0xe9c;  // datatable
        constexpr int m_bTeamCanCap =   0x119c; // datatable
        constexpr int m_iTeamBaseIcons =        0x11dc; // datatable
        constexpr int m_iBaseControlPoints =    0x125c; // datatable
        constexpr int m_bInMiniRound =  0x12dc; // datatable
        constexpr int m_iWarnOnCap =    0x12e4; // datatable
        constexpr int m_iszWarnSound_0_ =       0x1304; // const char*
        constexpr int m_iszWarnSound =  0x0;    // array
        constexpr int m_flPathDistance =        0x1afc; // datatable
        constexpr int m_iNumTeamMembers =       0x1b1c; // datatable
        constexpr int m_iCappingTeam =  0x1c1c; // datatable
        constexpr int m_iTeamInZone =   0x1c3c; // datatable
        constexpr int m_bBlocked =      0x1c5c; // datatable
        constexpr int m_iOwner =        0x1c64; // datatable
        constexpr int m_pszCapLayoutInHUD =     0x1cec; // const char*
}
namespace DT_Team {
        constexpr int m_iTeamNum =      0xb68;  // int
        constexpr int m_bSurrendered =  0xb6c;  // int
        constexpr int m_scoreTotal =    0xb40;  // int
        constexpr int m_scoreFirstHalf =        0xb44;  // int
        constexpr int m_scoreSecondHalf =       0xb48;  // int
        constexpr int m_scoreOvertime = 0xb4c;  // int
        constexpr int m_iClanID =       0xb58;  // int
        constexpr int m_szTeamname =    0x9ec;  // const char*
        constexpr int m_szClanTeamname =        0xa0c;  // const char*
        constexpr int m_szTeamFlagImage =       0xa2c;  // const char*
        constexpr int m_szTeamLogoImage =       0xa34;  // const char*
        constexpr int m_szTeamMatchStat =       0xa3c;  // const char*
        constexpr int m_nGGLeaderEntIndex_CT =  0xb50;  // int
        constexpr int m_nGGLeaderEntIndex_T =   0xb54;  // int
        constexpr int m_numMapVictories =       0xb70;  // int
}
namespace DT_SunlightShadowControl {
        constexpr int m_shadowDirection =       0x9d8;  // vector
        constexpr int m_bEnabled =      0x9e4;  // int
        constexpr int m_TextureName =   0x9e5;  // const char*
        constexpr int m_LightColor =    0xaf0;  // int
        constexpr int m_flColorTransitionTime = 0xb04;  // float
        constexpr int m_flSunDistance = 0xb08;  // float
        constexpr int m_flFOV = 0xb0c;  // float
        constexpr int m_flNearZ =       0xb10;  // float
        constexpr int m_flNorthOffset = 0xb14;  // float
        constexpr int m_bEnableShadows =        0xb18;  // int
}
namespace DT_Sun {
        constexpr int m_clrRender =     0x70;   // int
        constexpr int m_clrOverlay =    0xb38;  // int
        constexpr int m_vDirection =    0xb44;  // vector
        constexpr int m_bOn =   0xb50;  // int
        constexpr int m_nSize = 0xb3c;  // int
        constexpr int m_nOverlaySize =  0xb40;  // int
        constexpr int m_nMaterial =     0xb54;  // int
        constexpr int m_nOverlayMaterial =      0xb58;  // int
}
namespace DT_ParticlePerformanceMonitor {
        constexpr int m_bMeasurePerf =  0x9d9;  // int
        constexpr int m_bDisplayPerf =  0x9d8;  // int
}
namespace DT_SpotlightEnd {
        constexpr int m_flLightScale =  0x9d8;  // float
        constexpr int m_Radius =        0x9dc;  // float
}
namespace DT_SpatialEntity {
        constexpr int m_vecOrigin =     0x9d8;  // vector
        constexpr int m_minFalloff =    0x9e4;  // float
        constexpr int m_maxFalloff =    0x9e8;  // float
        constexpr int m_flCurWeight =   0x9ec;  // float
        constexpr int m_bEnabled =      0xaf4;  // int
}
namespace DT_SlideshowDisplay {
        constexpr int m_bEnabled =      0x9d8;  // int
        constexpr int m_szDisplayText = 0x9d9;  // const char*
        constexpr int m_szSlideshowDirectory =  0xa59;  // const char*
        constexpr int m_chCurrentSlideLists =   0xaf0;  // datatable
        constexpr int m_fMinSlideTime = 0xb08;  // float
        constexpr int m_fMaxSlideTime = 0xb0c;  // float
        constexpr int m_iCycleType =    0xb14;  // int
        constexpr int m_bNoListRepeats =        0xb18;  // int
}
namespace DT_ShadowControl {
        constexpr int m_shadowDirection =       0x9d8;  // vector
        constexpr int m_shadowColor =   0x9e4;  // int
        constexpr int m_flShadowMaxDist =       0x9e8;  // float
        constexpr int m_bDisableShadows =       0x9ec;  // int
        constexpr int m_bEnableLocalLightShadows =      0x9ed;  // int
}
namespace DT_SceneEntity {
        constexpr int m_nSceneStringIndex =     0x9e8;  // int
        constexpr int m_bIsPlayingBack =        0x9dc;  // int
        constexpr int m_bPaused =       0x9dd;  // int
        constexpr int m_bMultiplayer =  0x9de;  // int
        constexpr int m_flForceClientTime =     0x9e4;  // float
        constexpr int m_hActorList =    0x0;    // datatable
}
namespace DT_RopeKeyframe {
        constexpr int m_nChangeCount =  0xccc;  // int
        constexpr int m_iRopeMaterialModelIndex =       0xa14;  // int
        constexpr int m_hStartPoint =   0xcac;  // int
        constexpr int m_hEndPoint =     0xcb0;  // int
        constexpr int m_iStartAttachment =      0xcb4;  // int
        constexpr int m_iEndAttachment =        0xcb6;  // int
        constexpr int m_fLockedPoints = 0xcc8;  // int
        constexpr int m_Slack = 0xcc0;  // int
        constexpr int m_RopeLength =    0xcbc;  // int
        constexpr int m_RopeFlags =     0xa10;  // int
        constexpr int m_TextureScale =  0xcc4;  // float
        constexpr int m_nSegments =     0xca8;  // int
        constexpr int m_bConstrainBetweenEndpoints =    0xd50;  // int
        constexpr int m_Subdiv =        0xcb8;  // int
        constexpr int m_Width = 0xcd0;  // float
        constexpr int m_flScrollSpeed = 0xa0c;  // float
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_iParentAttachment =     0x2ec;  // int
        constexpr int m_iDefaultRopeMaterialModelIndex =        0xa18;  // int
        constexpr int m_nMinCPULevel =  0x988;  // int
        constexpr int m_nMaxCPULevel =  0x989;  // int
        constexpr int m_nMinGPULevel =  0x98a;  // int
        constexpr int m_nMaxGPULevel =  0x98b;  // int
}
namespace DT_RagdollManager {
        constexpr int m_iCurrentMaxRagdollCount =       0x9d8;  // int
}
namespace DT_PhysicsPropMultiplayer {
        constexpr int m_iPhysicsMode =  0x29d4; // int
        constexpr int m_fMass = 0x29d8; // float
        constexpr int m_collisionMins = 0x29dc; // vector
        constexpr int m_collisionMaxs = 0x29e8; // vector
}
namespace DT_PhysBoxMultiplayer {
        constexpr int m_iPhysicsMode =  0x9e4;  // int
        constexpr int m_fMass = 0x9e8;  // float
}
namespace DT_DynamicProp {
        constexpr int m_bUseHitboxesForRenderBox =      0x29b4; // int
        constexpr int m_flGlowMaxDist = 0x29d4; // float
        constexpr int m_bShouldGlow =   0x29d8; // int
        constexpr int m_clrGlow =       0x29d9; // int
        constexpr int m_nGlowStyle =    0x29e0; // int
}
namespace DT_Prop_Hallucination {
        constexpr int m_bEnabled =      0x29a9; // int
        constexpr int m_fVisibleTime =  0x29ac; // float
        constexpr int m_fRechargeTime = 0x29b0; // float
}
namespace DT_PostProcessController {
        constexpr int m_flPostProcessParameters =       0x9d8;  // datatable
        constexpr int m_bMaster =       0xa04;  // int
}
namespace DT_PointWorldText {
        constexpr int m_szText =        0xa08;  // const char*
        constexpr int m_flTextSize =    0xb0c;  // float
        constexpr int m_textColor =     0xb10;  // int
}
namespace DT_PointCommentaryNode {
        constexpr int m_bActive =       0x2990; // int
        constexpr int m_flStartTime =   0x2994; // float
        constexpr int m_iszCommentaryFile =     0x2998; // const char*
        constexpr int m_iszCommentaryFileNoHDR =        0x2a9c; // const char*
        constexpr int m_iszSpeakers =   0x2ba0; // const char*
        constexpr int m_iNodeNumber =   0x2ca0; // int
        constexpr int m_iNodeNumberMax =        0x2ca4; // int
        constexpr int m_hViewPosition = 0x2cac; // int
}
namespace DT_PointCamera {
        constexpr int m_FOV =   0x9d8;  // float
        constexpr int m_Resolution =    0x9dc;  // float
        constexpr int m_bFogEnable =    0x9e0;  // int
        constexpr int m_FogColor =      0x9e1;  // int
        constexpr int m_flFogStart =    0x9e8;  // float
        constexpr int m_flFogEnd =      0x9ec;  // float
        constexpr int m_flFogMaxDensity =       0x9f0;  // float
        constexpr int m_bActive =       0x9f4;  // int
        constexpr int m_bUseScreenAspectRatio = 0x9f5;  // int
}
namespace DT_PlayerResource {
        constexpr int m_iPing = 0xb28;  // datatable
        constexpr int m_iKills =        0xc2c;  // datatable
        constexpr int m_iAssists =      0xd30;  // datatable
        constexpr int m_iDeaths =       0xe34;  // datatable
        constexpr int m_bConnected =    0xae4;  // datatable
        constexpr int m_iTeam = 0xf38;  // datatable
        constexpr int m_iPendingTeam =  0x103c; // datatable
        constexpr int m_bAlive =        0x1140; // datatable
        constexpr int m_iHealth =       0x1184; // datatable
        constexpr int m_iCoachingTeam = 0x1288; // datatable
}
namespace DT_Plasma {
        constexpr int m_flStartScale =  0x9d8;  // float
        constexpr int m_flScale =       0x9dc;  // float
        constexpr int m_flScaleTime =   0x9e0;  // float
        constexpr int m_nFlags =        0x9e4;  // int
        constexpr int m_nPlasmaModelIndex =     0x9e8;  // int
        constexpr int m_nPlasmaModelIndex2 =    0x9ec;  // int
        constexpr int m_nGlowModelIndex =       0x9f0;  // int
}
namespace DT_PhysicsProp {
        constexpr int m_bAwake =        0x29b0; // int
        constexpr int m_spawnflags =    0x2c8;  // int
}
namespace DT_StatueProp {
        constexpr int m_hInitBaseAnimating =    0x29d0; // int
        constexpr int m_bShatter =      0x29d4; // int
        constexpr int m_nShatterFlags = 0x29d8; // int
        constexpr int m_vShatterPosition =      0x29dc; // vector
        constexpr int m_vShatterForce = 0x29e8; // vector
}
namespace DT_PhysBox {
        constexpr int m_mass =  0x9d8;  // float
}
namespace DT_ParticleSystem {
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_fEffects =      0xf0;   // int
        constexpr int m_hOwnerEntity =  0x14c;  // int
        constexpr int m_iParentAttachment =     0x2ec;  // int
        constexpr int m_angRotation =   0x12c;  // vector
        constexpr int m_iEffectIndex =  0x9d8;  // int
        constexpr int m_bActive =       0x9e0;  // int
        constexpr int m_nStopType =     0x9dc;  // int
        constexpr int m_flStartTime =   0x9e4;  // float
        constexpr int m_szSnapshotFileName =    0x9e8;  // const char*
        constexpr int m_vServerControlPoints =  0xaec;  // datatable
        constexpr int m_iServerControlPointAssignments =        0xb1c;  // datatable
        constexpr int m_hControlPointEnts =     0xb30;  // datatable
        constexpr int m_iControlPointParents =  0xc2c;  // datatable
}
namespace DT_MovieDisplay {
        constexpr int m_bEnabled =      0x9d8;  // int
        constexpr int m_bLooping =      0x9d9;  // int
        constexpr int m_szMovieFilename =       0x9da;  // const char*
        constexpr int m_szGroupName =   0xa5a;  // const char*
        constexpr int m_bStretchToFill =        0xada;  // int
        constexpr int m_bForcedSlave =  0xadb;  // int
        constexpr int m_bUseCustomUVs = 0xadc;  // int
        constexpr int m_flUMin =        0xae0;  // float
        constexpr int m_flUMax =        0xae4;  // float
        constexpr int m_flVMin =        0xae8;  // float
        constexpr int m_flVMax =        0xaec;  // float
}
namespace DT_MaterialModifyControl {
        constexpr int m_szMaterialName =        0x9d8;  // const char*
        constexpr int m_szMaterialVar = 0xad7;  // const char*
        constexpr int m_szMaterialVarValue =    0xbd6;  // const char*
        constexpr int m_iFrameStart =   0xce0;  // int
        constexpr int m_iFrameEnd =     0xce4;  // int
        constexpr int m_bWrap = 0xce8;  // int
        constexpr int m_flFramerate =   0xcec;  // float
        constexpr int m_bNewAnimCommandsSemaphore =     0xcf0;  // int
        constexpr int m_flFloatLerpStartValue = 0xcf4;  // float
        constexpr int m_flFloatLerpEndValue =   0xcf8;  // float
        constexpr int m_flFloatLerpTransitionTime =     0xcfc;  // float
        constexpr int m_bFloatLerpWrap =        0xd00;  // int
        constexpr int m_nModifyMode =   0xd08;  // int
}
namespace DT_LightGlow {
        constexpr int m_clrRender =     0x70;   // int
        constexpr int m_nHorizontalSize =       0x9d8;  // int
        constexpr int m_nVerticalSize = 0x9dc;  // int
        constexpr int m_nMinDist =      0x9e0;  // int
        constexpr int m_nMaxDist =      0x9e4;  // int
        constexpr int m_nOuterMaxDist = 0x9e8;  // int
        constexpr int m_spawnflags =    0x9ec;  // int
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_angRotation =   0x12c;  // vector
        constexpr int m_flGlowProxySize =       0xac4;  // float
}
namespace DT_ItemAssaultSuitUseable {
        constexpr int m_nArmorValue =   0x3450; // int
        constexpr int m_bIsHeavyAssaultSuit =   0x3454; // int
}
namespace DT_Item {
        constexpr int m_bShouldGlow =   0x3240; // int
}
namespace DT_InfoOverlayAccessor {
        constexpr int m_iTextureFrameIndex =    0x98c;  // int
        constexpr int m_iOverlayID =    0x9d8;  // int
}
namespace DT_FuncSmokeVolume {
        constexpr int m_Color1 =        0xac4;  // int
        constexpr int m_Color2 =        0xac8;  // int
        constexpr int m_MaterialName =  0xacc;  // const char*
        constexpr int m_ParticleDrawWidth =     0xbcc;  // float
        constexpr int m_ParticleSpacingDistance =       0xbd0;  // float
        constexpr int m_DensityRampSpeed =      0xbd4;  // float
        constexpr int m_RotationSpeed = 0xbd8;  // float
        constexpr int m_MovementSpeed = 0xbdc;  // float
        constexpr int m_Density =       0xbe0;  // float
        constexpr int m_maxDrawDistance =       0xbe4;  // float
        constexpr int m_spawnflags =    0xbe8;  // int
        constexpr int m_Collision =     0x320;  // datatable
        namespace DT_CollisionProperty {
                constexpr int m_vecMins =       0x8;    // vector
                constexpr int m_vecMaxs =       0x14;   // vector
                constexpr int m_nSolidType =    0x22;   // int
                constexpr int m_usSolidFlags =  0x20;   // int
                constexpr int m_nSurroundType = 0x2a;   // int
                constexpr int m_triggerBloat =  0x23;   // int
                constexpr int m_vecSpecifiedSurroundingMins =   0x2c;   // vector
                constexpr int m_vecSpecifiedSurroundingMaxs =   0x38;   // vector
        }
}
namespace DT_FuncRotating {
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_angRotation_0_ =        0x12c;  // float
        constexpr int m_angRotation_1_ =        0x130;  // float
        constexpr int m_angRotation_2_ =        0x134;  // float
        constexpr int m_flSimulationTime =      0x268;  // int
}
namespace DT_FuncOccluder {
        constexpr int m_bActive =       0x9dc;  // int
        constexpr int m_nOccluderIndex =        0x9d8;  // int
}
namespace DT_FuncMoveLinear {
        constexpr int m_vecVelocity =   0x114;  // vector
        constexpr int m_fFlags =        0x104;  // int
}
namespace DT_Func_LOD {
        constexpr int m_nDisappearMinDist =     0x9d8;  // int
        constexpr int m_nDisappearMaxDist =     0x9dc;  // int
}
namespace DT_TEDust {
        constexpr int m_flSize =        0x1c;   // float
        constexpr int m_flSpeed =       0x20;   // float
        constexpr int m_vecDirection =  0x24;   // vector
}
namespace DT_Func_Dust {
        constexpr int m_Color = 0x9d8;  // int
        constexpr int m_SpawnRate =     0x9dc;  // int
        constexpr int m_flSizeMin =     0x9e0;  // float
        constexpr int m_flSizeMax =     0x9e4;  // float
        constexpr int m_LifetimeMin =   0x9ec;  // int
        constexpr int m_LifetimeMax =   0x9f0;  // int
        constexpr int m_DustFlags =     0xa00;  // int
        constexpr int m_SpeedMax =      0x9e8;  // int
        constexpr int m_DistMax =       0x9f4;  // int
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_FallSpeed =     0x9f8;  // float
        constexpr int m_bAffectedByWind =       0x9fc;  // int
        constexpr int m_Collision =     0x320;  // datatable
        namespace DT_CollisionProperty {
                constexpr int m_vecMins =       0x8;    // vector
                constexpr int m_vecMaxs =       0x14;   // vector
                constexpr int m_nSolidType =    0x22;   // int
                constexpr int m_usSolidFlags =  0x20;   // int
                constexpr int m_nSurroundType = 0x2a;   // int
                constexpr int m_triggerBloat =  0x23;   // int
                constexpr int m_vecSpecifiedSurroundingMins =   0x2c;   // vector
                constexpr int m_vecSpecifiedSurroundingMaxs =   0x38;   // vector
        }
}
namespace DT_FuncConveyor {
        constexpr int m_flConveyorSpeed =       0x9d8;  // float
}
namespace DT_BreakableSurface {
        constexpr int m_nNumWide =      0x9dc;  // int
        constexpr int m_nNumHigh =      0x9e0;  // int
        constexpr int m_flPanelWidth =  0x9e4;  // float
        constexpr int m_flPanelHeight = 0x9e8;  // float
        constexpr int m_vNormal =       0x9ec;  // vector
        constexpr int m_vCorner =       0x9f8;  // vector
        constexpr int m_bIsBroken =     0xa04;  // int
        constexpr int m_nSurfaceType =  0xa08;  // int
        constexpr int m_RawPanelBitVec =        0xa2c;  // datatable
}
namespace DT_FuncAreaPortalWindow {
        constexpr int m_flFadeStartDist =       0x9d8;  // float
        constexpr int m_flFadeDist =    0x9dc;  // float
        constexpr int m_flTranslucencyLimit =   0x9e0;  // float
        constexpr int m_iBackgroundModelIndex = 0x9e4;  // int
}
namespace DT_CFish {
        constexpr int m_poolOrigin =    0x29f0; // vector
        constexpr int m_x =     0x29d8; // float
        constexpr int m_y =     0x29dc; // float
        constexpr int m_z =     0x29e0; // float
        constexpr int m_angle = 0x29e8; // float
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_lifeState =     0x25f;  // int
        constexpr int m_waterLevel =    0x29fc; // float
}
namespace DT_FireSmoke {
        constexpr int m_flStartScale =  0x9d8;  // float
        constexpr int m_flScale =       0x9dc;  // float
        constexpr int m_flScaleTime =   0x9e0;  // float
        constexpr int m_nFlags =        0x9e4;  // int
        constexpr int m_nFlameModelIndex =      0x9e8;  // int
        constexpr int m_nFlameFromAboveModelIndex =     0x9ec;  // int
}
namespace DT_EnvTonemapController {
        constexpr int m_bUseCustomAutoExposureMin =     0x9d8;  // int
        constexpr int m_bUseCustomAutoExposureMax =     0x9d9;  // int
        constexpr int m_bUseCustomBloomScale =  0x9da;  // int
        constexpr int m_flCustomAutoExposureMin =       0x9dc;  // float
        constexpr int m_flCustomAutoExposureMax =       0x9e0;  // float
        constexpr int m_flCustomBloomScale =    0x9e4;  // float
        constexpr int m_flCustomBloomScaleMinimum =     0x9e8;  // float
        constexpr int m_flBloomExponent =       0x9ec;  // float
        constexpr int m_flBloomSaturation =     0x9f0;  // float
        constexpr int m_flTonemapPercentTarget =        0x9f4;  // float
        constexpr int m_flTonemapPercentBrightPixels =  0x9f8;  // float
        constexpr int m_flTonemapMinAvgLum =    0x9fc;  // float
        constexpr int m_flTonemapRate = 0xa00;  // float
}
namespace DT_EnvScreenEffect {
        constexpr int m_flDuration =    0x9d8;  // float
        constexpr int m_nType = 0x9dc;  // int
}
namespace DT_EnvScreenOverlay {
        constexpr int m_iszOverlayNames_0_ =    0x9d8;  // const char*
        constexpr int m_iszOverlayNames =       0x0;    // array
        constexpr int m_flOverlayTimes_0_ =     0x13d0; // float
        constexpr int m_flOverlayTimes =        0x0;    // array
        constexpr int m_flStartTime =   0x13f8; // float
        constexpr int m_iDesiredOverlay =       0x13fc; // int
        constexpr int m_bIsActive =     0x1400; // int
}
namespace DT_EnvProjectedTexture {
        constexpr int m_hTargetEntity = 0x9dc;  // int
        constexpr int m_bState =        0x9e0;  // int
        constexpr int m_bAlwaysUpdate = 0x9e1;  // int
        constexpr int m_flLightFOV =    0x9e4;  // float
        constexpr int m_bEnableShadows =        0x9e8;  // int
        constexpr int m_bSimpleProjection =     0x9e9;  // int
        constexpr int m_bLightOnlyTarget =      0x9ea;  // int
        constexpr int m_bLightWorld =   0x9eb;  // int
        constexpr int m_bCameraSpace =  0x9ec;  // int
        constexpr int m_flBrightnessScale =     0x9f0;  // float
        constexpr int m_LightColor =    0x9f4;  // int
        constexpr int m_flColorTransitionTime = 0xa08;  // float
        constexpr int m_flAmbient =     0xa0c;  // float
        constexpr int m_SpotlightTextureName =  0xa18;  // const char*
        constexpr int m_nSpotlightTextureFrame =        0xb24;  // int
        constexpr int m_flNearZ =       0xa10;  // float
        constexpr int m_flFarZ =        0xa14;  // float
        constexpr int m_nShadowQuality =        0xb28;  // int
        constexpr int m_flProjectionSize =      0xb38;  // float
        constexpr int m_flRotation =    0xb3c;  // float
        constexpr int m_iStyle =        0xb2c;  // int
}
namespace DT_EnvParticleScript {
        constexpr int m_flSequenceScale =       0x2a74; // float
}
namespace DT_FogController {
        constexpr int m_fog_enable =    0xa1c;  // int
        constexpr int m_fog_blend =     0xa1d;  // int
        constexpr int m_fog_dirPrimary =        0x9dc;  // vector
        constexpr int m_fog_colorPrimary =      0x9e8;  // int
        constexpr int m_fog_colorSecondary =    0x9ec;  // int
        constexpr int m_fog_start =     0x9f8;  // float
        constexpr int m_fog_end =       0x9fc;  // float
        constexpr int m_fog_farz =      0xa00;  // float
        constexpr int m_fog_maxdensity =        0xa04;  // float
        constexpr int m_fog_colorPrimaryLerpTo =        0x9f0;  // int
        constexpr int m_fog_colorSecondaryLerpTo =      0x9f4;  // int
        constexpr int m_fog_startLerpTo =       0xa08;  // float
        constexpr int m_fog_endLerpTo = 0xa0c;  // float
        constexpr int m_fog_maxdensityLerpTo =  0xa10;  // float
        constexpr int m_fog_lerptime =  0xa14;  // float
        constexpr int m_fog_duration =  0xa18;  // float
        constexpr int m_fog_HDRColorScale =     0xa24;  // float
        constexpr int m_fog_ZoomFogScale =      0xa20;  // float
}
namespace DT_EnvDOFController {
        constexpr int m_bDOFEnabled =   0x9d8;  // int
        constexpr int m_flNearBlurDepth =       0x9dc;  // float
        constexpr int m_flNearFocusDepth =      0x9e0;  // float
        constexpr int m_flFarFocusDepth =       0x9e4;  // float
        constexpr int m_flFarBlurDepth =        0x9e8;  // float
        constexpr int m_flNearBlurRadius =      0x9ec;  // float
        constexpr int m_flFarBlurRadius =       0x9f0;  // float
}
namespace DT_CascadeLight {
        constexpr int m_shadowDirection =       0x9d8;  // vector
        constexpr int m_envLightShadowDirection =       0x9e4;  // vector
        constexpr int m_bEnabled =      0x9f0;  // int
        constexpr int m_bUseLightEnvAngles =    0x9f1;  // int
        constexpr int m_LightColor =    0x9f2;  // int
        constexpr int m_LightColorScale =       0x9f8;  // int
        constexpr int m_flMaxShadowDist =       0x9fc;  // float
}
namespace DT_EnvAmbientLight {
        constexpr int m_vecColor =      0xb00;  // vector
}
namespace DT_EntityParticleTrail {
        constexpr int m_iMaterialName = 0xac0;  // int
        constexpr int m_Info =  0xac4;  // datatable
        namespace DT_EntityParticleTrailInfo {
                constexpr int m_flLifetime =    0x8;    // float
                constexpr int m_flStartSize =   0xc;    // float
                constexpr int m_flEndSize =     0x10;   // float
        }
        constexpr int m_hConstraintEntity =     0xad8;  // int
}
namespace DT_EntityFreezing {
        constexpr int m_vFreezingOrigin =       0x9d8;  // vector
        constexpr int m_flFrozenPerHitbox =     0x9e4;  // datatable
        constexpr int m_flFrozen =      0xaac;  // float
        constexpr int m_bFinishFreezing =       0xab0;  // int
}
namespace DT_EntityFlame {
        constexpr int m_hEntAttached =  0x9d8;  // int
        constexpr int m_bCheapEffect =  0x9ec;  // int
}
namespace DT_EntityDissolve {
        constexpr int m_flStartTime =   0x9dc;  // float
        constexpr int m_flFadeOutStart =        0x9e0;  // float
        constexpr int m_flFadeOutLength =       0x9e4;  // float
        constexpr int m_flFadeOutModelStart =   0x9e8;  // float
        constexpr int m_flFadeOutModelLength =  0x9ec;  // float
        constexpr int m_flFadeInStart = 0x9f0;  // float
        constexpr int m_flFadeInLength =        0x9f4;  // float
        constexpr int m_nDissolveType = 0x9f8;  // int
        constexpr int m_vDissolverOrigin =      0xa00;  // vector
        constexpr int m_nMagnitude =    0xa0c;  // int
}
namespace DT_DynamicLight {
        constexpr int m_Flags = 0x9d8;  // int
        constexpr int m_LightStyle =    0x9d9;  // int
        constexpr int m_Radius =        0x9dc;  // float
        constexpr int m_Exponent =      0x9e0;  // int
        constexpr int m_InnerAngle =    0x9e4;  // float
        constexpr int m_OuterAngle =    0x9e8;  // float
        constexpr int m_SpotRadius =    0x9ec;  // float
}
namespace DT_ColorCorrectionVolume {
        constexpr int m_bEnabled =      0xa20;  // int
        constexpr int m_MaxWeight =     0xa24;  // float
        constexpr int m_FadeDuration =  0xa28;  // float
        constexpr int m_Weight =        0xa2c;  // float
        constexpr int m_lookupFilename =        0xa30;  // const char*
}
namespace DT_ColorCorrection {
        constexpr int m_vecOrigin =     0x9d8;  // vector
        constexpr int m_minFalloff =    0x9e4;  // float
        constexpr int m_maxFalloff =    0x9e8;  // float
        constexpr int m_flCurWeight =   0x9f8;  // float
        constexpr int m_flMaxWeight =   0x9f4;  // float
        constexpr int m_flFadeInDuration =      0x9ec;  // float
        constexpr int m_flFadeOutDuration =     0x9f0;  // float
        constexpr int m_netLookupFilename =     0x9fc;  // const char*
        constexpr int m_bEnabled =      0xb00;  // int
        constexpr int m_bMaster =       0xb01;  // int
        constexpr int m_bClientSide =   0xb02;  // int
        constexpr int m_bExclusive =    0xb03;  // int
}
namespace DT_BreakableProp {
        constexpr int m_qPreferredPlayerCarryAngles =   0x2994; // vector
        constexpr int m_bClientPhysics =        0x29a0; // int
}
namespace DT_BeamSpotlight {
        constexpr int m_nHaloIndex =    0x9d8;  // int
        constexpr int m_bSpotlightOn =  0x9e4;  // int
        constexpr int m_bHasDynamicLight =      0x9e5;  // int
        constexpr int m_flSpotlightMaxLength =  0x9e8;  // float
        constexpr int m_flSpotlightGoalWidth =  0x9ec;  // float
        constexpr int m_flHDRColorScale =       0x9f0;  // float
        constexpr int m_nRotationAxis = 0x9dc;  // int
        constexpr int m_flRotationSpeed =       0x9e0;  // float
}
namespace DT_BaseButton {
        constexpr int m_usable =        0xa08;  // int
}
namespace DT_BaseToggle {
        constexpr int m_vecFinalDest =  0x9ec;  // vector
        constexpr int m_movementType =  0x9f8;  // int
        constexpr int m_flMoveTargetTime =      0x9fc;  // float
}
namespace DT_BasePlayer {
        constexpr int m_iFOV =  0x31f4; // int
        constexpr int m_iFOVStart =     0x31f8; // int
        constexpr int m_flFOVTime =     0x3218; // float
        constexpr int m_iDefaultFOV =   0x333c; // int
        constexpr int m_hZoomOwner =    0x325c; // int
        constexpr int m_afPhysicsFlags =        0x32fc; // int
        constexpr int m_hVehicle =      0x3300; // int
        constexpr int m_hUseEntity =    0x3338; // int
        constexpr int m_hGroundEntity = 0x150;  // int
        constexpr int m_iHealth =       0x100;  // int
        constexpr int m_lifeState =     0x25f;  // int
        constexpr int m_iAmmo = 0x2d88; // datatable
        constexpr int m_iBonusProgress =        0x3250; // int
        constexpr int m_iBonusChallenge =       0x3254; // int
        constexpr int m_flMaxspeed =    0x3258; // float
        constexpr int m_fFlags =        0x104;  // int
        constexpr int m_iObserverMode = 0x3388; // int
        constexpr int m_bActiveCameraMan =      0x338c; // int
        constexpr int m_bCameraManXRay =        0x338d; // int
        constexpr int m_bCameraManOverview =    0x338e; // int
        constexpr int m_bCameraManScoreBoard =  0x338f; // int
        constexpr int m_uCameraManGraphs =      0x3390; // int
        constexpr int m_iDeathPostEffect =      0x3384; // int
        constexpr int m_hObserverTarget =       0x339c; // int
        constexpr int m_hViewModel_0_ = 0x3308; // int
        constexpr int m_hViewModel =    0x0;    // array
        constexpr int m_iCoachingTeam = 0x2f60; // int
        constexpr int m_szLastPlaceName =       0x35c4; // const char*
        constexpr int m_vecLadderNormal =       0x3240; // vector
        constexpr int m_ladderSurfaceProps =    0x3210; // int
        constexpr int m_ubEFNoInterpParity =    0x35e8; // int
        constexpr int m_hPostProcessCtrl =      0x37b8; // int
        constexpr int m_hColorCorrectionCtrl =  0x37bc; // int
        constexpr int m_PlayerFog_m_hCtrl =     0x37c4; // int
        constexpr int m_vphysicsCollisionState =        0x326c; // int
        constexpr int m_hViewEntity =   0x334c; // int
        constexpr int m_bShouldDrawPlayerWhileUsingViewEntity = 0x3350; // int
        constexpr int m_flDuckAmount =  0x2fbc; // float
        constexpr int m_flDuckSpeed =   0x2fc0; // float
        constexpr int m_nWaterLevel =   0x25e;  // int
}
namespace DT_BaseFlex {
        constexpr int m_flexWeight =    0x2a38; // datatable
        constexpr int m_blinktoggle =   0x2be4; // int
        constexpr int m_viewtarget =    0x2a00; // vector
}
namespace DT_BaseEntity {
        constexpr int m_flSimulationTime =      0x268;  // int
        constexpr int m_cellbits =      0x74;   // int
        constexpr int m_cellX = 0x7c;   // int
        constexpr int m_cellY = 0x80;   // int
        constexpr int m_cellZ = 0x84;   // int
        constexpr int m_vecOrigin =     0x138;  // vector
        constexpr int m_angRotation =   0x12c;  // vector
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_fEffects =      0xf0;   // int
        constexpr int m_nRenderMode =   0x25b;  // int
        constexpr int m_nRenderFX =     0x25a;  // int
        constexpr int m_clrRender =     0x70;   // int
        constexpr int m_iTeamNum =      0xf4;   // int
        constexpr int m_iPendingTeamNum =       0xf8;   // int
        constexpr int m_CollisionGroup =        0x474;  // int
        constexpr int m_flElasticity =  0x300;  // float
        constexpr int m_flShadowCastDistance =  0x3a0;  // float
        constexpr int m_hOwnerEntity =  0x14c;  // int
        constexpr int m_hEffectEntity = 0x998;  // int
        constexpr int m_iParentAttachment =     0x2ec;  // int
        constexpr int m_iName = 0x154;  // const char*
        constexpr int m_Collision =     0x320;  // datatable
        namespace DT_CollisionProperty {
                constexpr int m_vecMins =       0x8;    // vector
                constexpr int m_vecMaxs =       0x14;   // vector
                constexpr int m_nSolidType =    0x22;   // int
                constexpr int m_usSolidFlags =  0x20;   // int
                constexpr int m_nSurroundType = 0x2a;   // int
                constexpr int m_triggerBloat =  0x23;   // int
                constexpr int m_vecSpecifiedSurroundingMins =   0x2c;   // vector
                constexpr int m_vecSpecifiedSurroundingMaxs =   0x38;   // vector
        }
        constexpr int m_iTextureFrameIndex =    0x98c;  // int
        constexpr int m_bSimulatedEveryTick =   0x93a;  // int
        constexpr int m_bAnimatedEveryTick =    0x93b;  // int
        constexpr int m_bAlternateSorting =     0x93c;  // int
        constexpr int m_bSpotted =      0x93d;  // int
        constexpr int m_bSpottedBy =    0x93e;  // datatable
        constexpr int m_bSpottedByMask =        0x980;  // datatable
        constexpr int m_bIsAutoaimTarget =      0x60;   // int
        constexpr int m_fadeMinDist =   0x2f4;  // float
        constexpr int m_fadeMaxDist =   0x2f8;  // float
        constexpr int m_flFadeScale =   0x2fc;  // float
        constexpr int m_nMinCPULevel =  0x988;  // int
        constexpr int m_nMaxCPULevel =  0x989;  // int
        constexpr int m_nMinGPULevel =  0x98a;  // int
        constexpr int m_nMaxGPULevel =  0x98b;  // int
        constexpr int m_flUseLookAtAngle =      0x2cc;  // float
        constexpr int m_flLastMadeNoiseTime =   0x20;   // float
        constexpr int m_flMaxFallVelocity =     0xdc;   // float
        constexpr int m_bEligibleForScreenHighlight =   0x9b9;  // int
}
namespace DT_BaseDoor {
        constexpr int m_flWaveHeight =  0xa08;  // float
}
namespace DT_BaseCombatCharacter {
        constexpr int m_LastHitGroup =  0x2d84; // int
        constexpr int m_hActiveWeapon = 0x2f08; // int
        constexpr int m_flTimeOfLastInjury =    0x2f0c; // float
        constexpr int m_nRelativeDirectionOfLastInjury =        0x2f10; // int
        constexpr int m_hMyWeapons =    0x2e08; // datatable
        constexpr int m_hMyWearables =  0x2f14; // datatable
}
namespace DT_BoneFollower {
        constexpr int m_modelIndex =    0x9d8;  // int
        constexpr int m_solidIndex =    0x9dc;  // int
}
namespace DT_BaseAnimating {
        constexpr int m_nSequence =     0x28c0; // int
        constexpr int m_nForceBone =    0x268c; // int
        constexpr int m_vecForce =      0x2680; // vector
        constexpr int m_nSkin = 0xa1c;  // int
        constexpr int m_nBody = 0xa20;  // int
        constexpr int m_nHitboxSet =    0x9fc;  // int
        constexpr int m_flModelScale =  0x274c; // float
        constexpr int m_flPoseParameter =       0x2778; // datatable
        constexpr int m_flPlaybackRate =        0xa18;  // float
        constexpr int m_flEncodedController =   0xa54;  // datatable
        constexpr int m_bClientSideAnimation =  0x28a0; // int
        constexpr int m_bClientSideFrameReset = 0x26c4; // int
        constexpr int m_bClientSideRagdoll =    0x279;  // int
        constexpr int m_nNewSequenceParity =    0xa44;  // int
        constexpr int m_nResetEventsParity =    0xa48;  // int
        constexpr int m_nMuzzleFlashParity =    0xa64;  // int
        constexpr int m_hLightingOrigin =       0x2948; // int
        constexpr int m_flFrozen =      0x26fc; // float
        constexpr int m_ScaleType =     0x2750; // int
        constexpr int m_bSuppressAnimSounds =   0x294e; // int
        constexpr int m_nHighlightColorR =      0xa38;  // int
        constexpr int m_nHighlightColorG =      0xa3c;  // int
        constexpr int m_nHighlightColorB =      0xa40;  // int
}
namespace DT_AI_BaseNPC {
        constexpr int m_lifeState =     0x25f;  // int
        constexpr int m_bPerformAvoidance =     0x2f34; // int
        constexpr int m_bIsMoving =     0x2f35; // int
        constexpr int m_bFadeCorpse =   0x2f36; // int
        constexpr int m_iDeathPose =    0x2f24; // int
        constexpr int m_iDeathFrame =   0x2f28; // int
        constexpr int m_iSpeedModRadius =       0x2f2c; // int
        constexpr int m_iSpeedModSpeed =        0x2f30; // int
        constexpr int m_bSpeedModActive =       0x2f37; // int
        constexpr int m_bImportanRagdoll =      0x2f38; // int
        constexpr int m_flTimePingEffect =      0x2f20; // float
}
namespace DT_Beam {
        constexpr int m_nBeamType =     0x9f4;  // int
        constexpr int m_nBeamFlags =    0x9f8;  // int
        constexpr int m_nNumBeamEnts =  0x9e8;  // int
        constexpr int m_hAttachEntity = 0x9fc;  // datatable
        constexpr int m_nAttachIndex =  0xa24;  // datatable
        constexpr int m_nHaloIndex =    0x9f0;  // int
        constexpr int m_fHaloScale =    0xa58;  // float
        constexpr int m_fWidth =        0xa4c;  // float
        constexpr int m_fEndWidth =     0xa50;  // float
        constexpr int m_fFadeLength =   0xa54;  // float
        constexpr int m_fAmplitude =    0xa5c;  // float
        constexpr int m_fStartFrame =   0xa60;  // float
        constexpr int m_fSpeed =        0xa64;  // float
        constexpr int m_flFrameRate =   0x9d8;  // float
        constexpr int m_flHDRColorScale =       0x9dc;  // float
        constexpr int m_clrRender =     0x70;   // int
        constexpr int m_nRenderFX =     0x25a;  // int
        constexpr int m_nRenderMode =   0x25b;  // int
        constexpr int m_flFrame =       0xa68;  // float
        constexpr int m_nClipStyle =    0xa6c;  // int
        constexpr int m_vecEndPos =     0xa70;  // vector
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_vecOrigin =     0x138;  // vector
}
namespace DT_BaseViewModel {
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_hWeapon =       0x29d8; // int
        constexpr int m_nSkin = 0xa1c;  // int
        constexpr int m_nBody = 0xa20;  // int
        constexpr int m_nSequence =     0x28c0; // int
        constexpr int m_nViewModelIndex =       0x29d0; // int
        constexpr int m_flPlaybackRate =        0xa18;  // float
        constexpr int m_fEffects =      0xf0;   // int
        constexpr int m_nAnimationParity =      0x29d4; // int
        constexpr int m_hOwner =        0x29dc; // int
        constexpr int m_nNewSequenceParity =    0xa44;  // int
        constexpr int m_nResetEventsParity =    0xa48;  // int
        constexpr int m_nMuzzleFlashParity =    0xa64;  // int
        constexpr int m_bShouldIgnoreOffsetAndAccuracy =        0x29a0; // int
}
namespace DT_BaseGrenade {
        constexpr int m_flDamage =      0x29a8; // float
        constexpr int m_DmgRadius =     0x2994; // float
        constexpr int m_bIsLive =       0x2991; // int
        constexpr int m_hThrower =      0x29b0; // int
        constexpr int m_vecVelocity =   0x114;  // vector
        constexpr int m_fFlags =        0x104;  // int
}
namespace DT_BaseCombatWeapon {
        constexpr int m_iViewModelIndex =       0x3250; // int
        constexpr int m_iWorldModelIndex =      0x3254; // int
        constexpr int m_iWorldDroppedModelIndex =       0x3258; // int
        constexpr int m_iState =        0x3268; // int
        constexpr int m_hOwner =        0x3240; // int
        constexpr int m_iClip1 =        0x3274; // int
        constexpr int m_iClip2 =        0x3278; // int
        constexpr int m_iPrimaryReserveAmmoCount =      0x327c; // int
        constexpr int m_iSecondaryReserveAmmoCount =    0x3280; // int
        constexpr int m_hWeaponWorldModel =     0x3264; // int
        constexpr int m_iNumEmptyAttacks =      0x3260; // int
}
namespace DT_BaseWeaponWorldModel {
        constexpr int m_nModelIndex =   0x258;  // int
        constexpr int m_nBody = 0xa20;  // int
        constexpr int m_fEffects =      0xf0;   // int
        constexpr int m_hCombatWeaponParent =   0x2a00; // int
}
