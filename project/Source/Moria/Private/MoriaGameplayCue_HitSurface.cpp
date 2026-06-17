#include "MoriaGameplayCue_HitSurface.h"

UMoriaGameplayCue_HitSurface::UMoriaGameplayCue_HitSurface() {
    this->AkRtpc_Magnitude = NULL;
    this->AkRtpcName_Magnitude = TEXT("rt_weapon_damage");
    this->ParticlesParameterHitDirection = TEXT("HitDirection");
    this->ParticlesParameterHitDirectionValid = TEXT("HitDirectionValid");
    this->ParticlesParameterHitNormal = TEXT("HitNormal");
    this->ParticlesParameterHitNormalValid = TEXT("HitNormalValid");
    this->bEnableDebugDraw = false;
}


