#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProceduralDecorationPass.h"
#include "BiomeDecoConfig.generated.h"

UCLASS(Blueprintable)
class MORIA_API UBiomeDecoConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralDecorationPass> DecorationPasses;
    
    UBiomeDecoConfig();

};

