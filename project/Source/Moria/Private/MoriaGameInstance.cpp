#include "MoriaGameInstance.h"
#include "MorAccountDataManager.h"
#include "MorCultureManager.h"
#include "MorEntitlementManager.h"
#include "MorPlatformUiManager.h"
#include "MorSettingStateManager.h"

UMoriaGameInstance::UMoriaGameInstance() {
    this->PhysicHitReact_ForceMin = 50.00f;
    this->PhysicHitReact_ForceMax = 1000.00f;
    this->PhysicHitReact_DurationMin = 0.20f;
    this->PhysicHitReact_DurationMax = 0.50f;
    this->PhysicHitReact_PerBoneWeightScale = 1.00f;
    this->PhysicHitReact_KnockbackScale = 1.00f;
    this->PhysicHitReact_ChestScale = 1.00f;
    this->DatabaseInstance = NULL;
    this->UIManagerInstance = NULL;
    this->SettingStateManagerInstance = CreateDefaultSubobject<UMorSettingStateManager>(TEXT("Setting State Manager"));
    this->PlatformUiManager = CreateDefaultSubobject<UMorPlatformUiManager>(TEXT("Platform UI Manager"));
    this->EntitlementManager = CreateDefaultSubobject<UMorEntitlementManager>(TEXT("Entitlement Manager"));
    this->AccountDataManager = CreateDefaultSubobject<UMorAccountDataManager>(TEXT("Account Data Manager"));
    this->GameVersionChangelist = 0;
    this->CultureManager = CreateDefaultSubobject<UMorCultureManager>(TEXT("Culture Manager"));
}


