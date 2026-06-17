#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorChallengeElementPersistData.h"
#include "MorGenChallengePersistData.generated.h"

USTRUCT(BlueprintType)
struct FMorGenChallengePersistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeElementPersistData Element;
    
    MORIA_API FMorGenChallengePersistData();
};

