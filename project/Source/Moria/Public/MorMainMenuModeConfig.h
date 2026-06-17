#pragma once
#include "CoreMinimal.h"
#include "EMorMainMenuMode.h"
#include "Templates/SubclassOf.h"
#include "MorMainMenuModeConfig.generated.h"

class APawn;
class UMorMainMenuModeTransition;
class UMorMainMenuPlayerControllerModeImpl;
class UWorld;

USTRUCT(BlueprintType)
struct MORIA_API FMorMainMenuModeConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMainMenuMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> StreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> DefaultPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorMainMenuPlayerControllerModeImpl> PlayerControlerImplementationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorMainMenuModeTransition> TransitionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    FMorMainMenuModeConfig();
};

