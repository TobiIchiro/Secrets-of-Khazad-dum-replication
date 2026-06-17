#pragma once
#include "CoreMinimal.h"
#include "MorItemEffect.h"
#include "MorItemTintRowHandle.h"
#include "MorItemTintEffect.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorItemTintEffect : public UMorItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemTintRowHandle RowHandle;
    
    UMorItemTintEffect();

};

