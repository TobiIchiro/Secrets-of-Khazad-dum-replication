#pragma once
#include "CoreMinimal.h"
#include "EZoneSet.h"
#include "MorExpeditionDifficultyRowHandle.h"
#include "MorExpeditionModifierRowHandle.h"
#include "MorZoneRowHandle.h"
#include "MorExpeditionDataset.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionDataset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EZoneSet ExpeditionZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> Zones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMorExpeditionDifficultyRowHandle Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorExpeditionModifierRowHandle> ModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsDone;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    FMorExpeditionDataset();
};

