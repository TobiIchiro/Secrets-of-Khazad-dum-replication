#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "MorRopeMachine.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRopeMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IsFinishedIgnoreChildren;
    
public:
    UMorRopeMachine();

};

