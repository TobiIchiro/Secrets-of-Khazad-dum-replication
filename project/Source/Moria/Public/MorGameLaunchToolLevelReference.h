#pragma once
#include "CoreMinimal.h"
#include "MorGameLaunchToolLevelReference.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGameLaunchToolLevelReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    FMorGameLaunchToolLevelReference();
};

