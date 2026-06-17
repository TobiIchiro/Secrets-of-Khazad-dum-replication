#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAnimChooserActor.h"
#include "FGKAnimChooserCondition.h"
#include "FGKAnimChooser_Tag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAnimChooser_Tag : public UFGKAnimChooserCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimChooserActor ActorToEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverse;
    
    UFGKAnimChooser_Tag();

};

