#pragma once
#include "CoreMinimal.h"
#include "FGKHitReactionState.h"
#include "FGKDeathState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKDeathState : public UFGKHitReactionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ApplyCollisionChangesToComponentsWithAnyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDespawnWeapons: 1;
    
public:
    UFGKDeathState();

};

