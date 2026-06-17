#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "ECalloutIconType.h"
#include "MorCalloutTargetDefinition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MORIA_API FMorCalloutTargetDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MineralId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalloutIconType CustomIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomTargetName;
    
    FMorCalloutTargetDefinition();
};

