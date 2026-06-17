#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "EMorGameEffectDisplayBehavior.h"
#include "EMorGameEffectHudBehavior.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayEffectUIData.generated.h"

class UGameplayEffectUICalculation;
class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMorGameplayEffectUIData : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGameEffectDisplayBehavior DisplayBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffectUICalculation> CustomBehaviorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorGameEffectHudBehavior HudBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayStacking;
    
public:
    UMorGameplayEffectUIData();

};

