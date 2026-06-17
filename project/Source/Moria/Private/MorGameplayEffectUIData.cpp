#include "MorGameplayEffectUIData.h"

UMorGameplayEffectUIData::UMorGameplayEffectUIData() {
    this->DisplayBehavior = EMorGameEffectDisplayBehavior::Depleting;
    this->CustomBehaviorClass = NULL;
    this->HudBehavior = EMorGameEffectHudBehavior::ShowOnMainHud;
    this->Icon = NULL;
    this->bDisplayStacking = false;
}


