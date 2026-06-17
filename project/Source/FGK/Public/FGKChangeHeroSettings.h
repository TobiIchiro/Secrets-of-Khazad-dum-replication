#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FGKChangeHeroSettings.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable)
class FGK_API UFGKChangeHeroSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFGKBaseCharacter>> CharacterSet;
    
    UFGKChangeHeroSettings();

};

