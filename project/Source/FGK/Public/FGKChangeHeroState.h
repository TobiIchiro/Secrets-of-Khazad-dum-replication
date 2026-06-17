#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKChangeHeroState.generated.h"

class UFGKChangeHeroSettings;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKChangeHeroState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKChangeHeroSettings* ChangeHeroSettings;
    
public:
    UFGKChangeHeroState();

};

