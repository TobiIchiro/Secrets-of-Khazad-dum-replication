#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "GameplayTagContainer.h"
#include "MorNPCActivityActionRowHandle.h"
#include "MorBehaviorState_Recreate.generated.h"

class AMorNPCManager;
class UMorNPCComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Recreate : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTagsForActivityPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityActionRowHandle ActivityActionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNPCComponent* NPCComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorNPCManager* NpcManager;
    
public:
    UMorBehaviorState_Recreate();

};

