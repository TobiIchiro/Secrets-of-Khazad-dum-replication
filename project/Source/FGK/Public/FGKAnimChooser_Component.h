#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserActor.h"
#include "FGKAnimChooserCondition.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimChooser_Component.generated.h"

class UActorComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Component : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimChooserActor ActorToEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UFGKAnimChooser_Component();

};

