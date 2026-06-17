#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorExpeditionModifierType.h"
#include "EMorModifierUISection.h"
#include "MorAIPatrolRowHandle.h"
#include "MorAIPopulationDistributionRowHandle.h"
#include "MorExpeditionDifficultyRowHandle.h"
#include "MorZoneChallengeRowHandle.h"
#include "MorZoneResourceLootPassRowHandle.h"
#include "MorExpeditionModifierDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionModifierDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorExpeditionDifficultyRowHandle> AllowedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorExpeditionModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneResourceLootPassRowHandle ResourceToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIPopulationDistributionRowHandle EnemyToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseGenerationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneChallengeRowHandle ZoneChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAIPatrolRowHandle> AdditionalPatrols;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DifficultyScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorModifierUISection UiSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FlavorText;
    
    FMorExpeditionModifierDefinition();
};

