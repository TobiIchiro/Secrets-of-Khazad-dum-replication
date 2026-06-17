#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "EFeatureFlag.h"
#include "FeatureFlags.generated.h"

UCLASS(Blueprintable)
class UFeatureFlags : public UClass {
    GENERATED_BODY()
public:
    UFeatureFlags();

    UFUNCTION(BlueprintCallable)
    static bool GetFeatureFlag(const EFeatureFlag Flag);
    
    UFUNCTION(BlueprintCallable)
    static bool AreFeatureFlagsReady();
    
};

