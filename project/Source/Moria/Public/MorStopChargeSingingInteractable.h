#pragma once
#include "CoreMinimal.h"
#include "MorChargeSingingBaseInteractable.h"
#include "MorStopChargeSingingInteractable.generated.h"

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorStopChargeSingingInteractable : public AMorChargeSingingBaseInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractableText;
    
public:
    AMorStopChargeSingingInteractable(const FObjectInitializer& ObjectInitializer);

};

