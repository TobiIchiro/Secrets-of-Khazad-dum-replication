#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKDangerInvokerRequest.h"
#include "FGKBowAimMachine.generated.h"

class UFGKDangerInvokerComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBowAimMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKDangerInvokerRequest DangerInvokerRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKDangerInvokerComponent* DangerInvokerComponent;
    
public:
    UFGKBowAimMachine();

};

