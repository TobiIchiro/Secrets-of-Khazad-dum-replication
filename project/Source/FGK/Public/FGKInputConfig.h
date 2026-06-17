#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKInputAction.h"
#include "FGKInputConfig.generated.h"

UCLASS(Blueprintable, Const)
class FGK_API UFGKInputConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKInputAction> NativeInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKInputAction> AbilityInputActions;
    
    UFGKInputConfig();

};

