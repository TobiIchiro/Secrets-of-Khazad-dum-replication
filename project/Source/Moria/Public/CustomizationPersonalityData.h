#pragma once
#include "CoreMinimal.h"
#include "Emote.h"
#include "ModularCharacterItem.h"
#include "MorCustomizationTableRowBase.h"
#include "Templates/SubclassOf.h"
#include "CustomizationPersonalityData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FCustomizationPersonalityData : public FMorCustomizationTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmote> PersonalityEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> IdleAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModularCharacterItem> ModularItems;
    
    MORIA_API FCustomizationPersonalityData();
};

