#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FGKAnimNotify_SpawnLoot.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_SpawnLoot : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
public:
    UFGKAnimNotify_SpawnLoot();

};

