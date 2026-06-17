#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorCountedChallenge.h"
#include "MorZoneChallengeDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorZoneChallengeDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCountedChallenge> MustDistributeChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCountedChallenge> RepeatableChallenges;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChallengeFootprintDensityPercentage[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDensityOnFirstRepeat;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TargetShadowCountPerCell;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TargetPoisonCountPerCell;
    
    FMorZoneChallengeDefinition();
};

