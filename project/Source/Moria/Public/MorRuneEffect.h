#pragma once
#include "CoreMinimal.h"
#include "MorItemEffect.h"
#include "MorRuneRowHandle.h"
#include "MorRuneEffect.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorRuneEffect : public UMorItemEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRuneRowHandle RowHandle;
    
    UMorRuneEffect();

};

