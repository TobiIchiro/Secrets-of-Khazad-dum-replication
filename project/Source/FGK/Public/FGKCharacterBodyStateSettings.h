#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FGKCharacterBodyStateSettings.generated.h"

class UFGKCharacterState;

UCLASS(Blueprintable)
class FGK_API UFGKCharacterBodyStateSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UFGKCharacterState>> DynamicStates;
    
public:
    UFGKCharacterBodyStateSettings();

};

