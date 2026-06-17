#pragma once
#include "CoreMinimal.h"
#include "EAnimChooserActor.h"
#include "FGKAnimChooserCondition.h"
#include "FGKAnimChooser_Skeleton.generated.h"

class USkeleton;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Skeleton : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimChooserActor ActorToEval;
    
    UFGKAnimChooser_Skeleton();

};

