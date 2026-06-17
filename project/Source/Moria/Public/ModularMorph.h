#pragma once
#include "CoreMinimal.h"
#include "EModularCharacterSlot.h"
#include "ModularMorph.generated.h"

USTRUCT(BlueprintType)
struct FModularMorph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModularCharacterSlot TargetSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphName;
    
    MORIA_API FModularMorph();
};

