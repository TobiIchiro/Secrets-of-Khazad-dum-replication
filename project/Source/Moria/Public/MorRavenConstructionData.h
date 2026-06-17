#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorRavenConstructionData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRavenConstructionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 RavenConstructionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector RavenConstructionLocation;
    
    FMorRavenConstructionData();
};

