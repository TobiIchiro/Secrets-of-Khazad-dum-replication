#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorCatalogedDataAsset.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorCatalogedDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UMorCatalogedDataAsset();

};

