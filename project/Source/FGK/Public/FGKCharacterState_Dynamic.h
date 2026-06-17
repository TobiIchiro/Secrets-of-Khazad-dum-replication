#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FGKCharacterState.h"
#include "Templates/SubclassOf.h"
#include "FGKCharacterState_Dynamic.generated.h"

class UFGKState;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCharacterState_Dynamic : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKState* InsertedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKCharacterState> DefaultState;
    
public:
    UFGKCharacterState_Dynamic();

};

