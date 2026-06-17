#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserActor.h"
#include "FGKAnimChooserCondition.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimChooser_Class.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Class : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimChooserActor ActorToEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UFGKAnimChooser_Class();

};

