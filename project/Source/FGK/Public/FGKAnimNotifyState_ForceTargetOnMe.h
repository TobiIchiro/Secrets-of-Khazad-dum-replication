#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState.h"
#include "FGKAnimNotifyState_ForceTargetOnMe.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_ForceTargetOnMe : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
public:
    UFGKAnimNotifyState_ForceTargetOnMe();

};

