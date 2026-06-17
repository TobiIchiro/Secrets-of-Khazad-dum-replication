#pragma once
#include "CoreMinimal.h"
#include "ItemEffect.h"
#include "MorItemEffect.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorItemEffect : public UItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyItemOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemEffect* DecaysInto;
    
    UMorItemEffect();

};

