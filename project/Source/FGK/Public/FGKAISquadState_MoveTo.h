#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKAISquadState.h"
#include "FGKAISquadState_MoveTo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAISquadState_MoveTo : public UFGKAISquadState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIRequestID MoveRequestID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAIMoveRequest MoveRequest;
    
public:
    UFGKAISquadState_MoveTo();

};

