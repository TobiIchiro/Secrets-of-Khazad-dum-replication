#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FGKBaseCharacterRepControlRotation.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKBaseCharacterRepControlRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotatorQuantization ControlRotationQuantizationLevel;
    
    FFGKBaseCharacterRepControlRotation();
};

