#pragma once
#include "CoreMinimal.h"
#include "MorAchievementRowHandle.h"
#include "MorArmorRowHandle.h"
#include "MorDamageModifierRowHandle.h"
#include "MorItemDefinition.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorArmorDefinition.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct MORIA_API FMorArmorDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Durability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageProtection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDamageModifierRowHandle> DamageModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRequiredRecipeMaterial> InitialRepairCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RepairCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorArmorRowHandle CosmeticOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAchievementRowHandle CosmeticAchievement;
    
    FMorArmorDefinition();
};

