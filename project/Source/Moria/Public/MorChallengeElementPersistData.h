#pragma once
#include "CoreMinimal.h"
#include "MorChallengeRowHandle.h"
#include "MorChallengeElementPersistData.generated.h"

USTRUCT(BlueprintType)
struct FMorChallengeElementPersistData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveSaveData;
    
    MORIA_API FMorChallengeElementPersistData();
};

