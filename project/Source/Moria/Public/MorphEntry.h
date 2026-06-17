#pragma once
#include "CoreMinimal.h"
#include "ModularMorph.h"
#include "MorphEntry.generated.h"

USTRUCT(BlueprintType)
struct FMorphEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModularMorph> ModularSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinMorphValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMorphValue;
    
    MORIA_API FMorphEntry();
};

