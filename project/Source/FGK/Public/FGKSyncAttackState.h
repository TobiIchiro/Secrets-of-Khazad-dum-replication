#pragma once
#include "CoreMinimal.h"
#include "FGKComboState.h"
#include "FGKSyncAttackData.h"
#include "FGKSyncAttackState.generated.h"

class AFGKBaseCharacter;
class UFGKSyncedAnimComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKSyncAttackState : public UFGKComboState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKSyncAttackData SyncAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKSyncedAnimComponent* SyncedAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Puppet;
    
public:
    UFGKSyncAttackState();

};

