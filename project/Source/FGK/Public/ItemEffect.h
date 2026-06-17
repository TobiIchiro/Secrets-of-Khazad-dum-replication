#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemEffect.generated.h"

UCLASS(Blueprintable)
class FGK_API UItemEffect : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UItemEffect();

};

