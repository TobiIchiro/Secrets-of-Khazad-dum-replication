#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorNatAnimDwarfProperties.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class MORIA_API UMorNatAnimDwarfProperties : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultIdleSequence;
    
    UMorNatAnimDwarfProperties();

};

