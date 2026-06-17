#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorConsumableDefinition.h"
#include "Templates/SubclassOf.h"
#include "MorBrewDefinition.generated.h"

class UGameplayEffect;
class UMaterialInterface;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct MORIA_API FMorBrewDefinition : public FMorConsumableDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SongCompleteEffectOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BrewVfxPourColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BrewInProgressFizzVfxColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BrewMaterialPour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BrewMaterialFoam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BrewFizz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BrewBuff;
    
    FMorBrewDefinition();
};

