#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FGKBaseCharacterRepCurrentAcceleration.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKBaseCharacterRepCurrentAcceleration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentAcceleration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVectorQuantization CurrentAccelerationQuantizationLevel;
    
    FFGKBaseCharacterRepCurrentAcceleration();
};

