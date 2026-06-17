#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_MeleeCombat.h"
#include "MorBehaviorState_MeleeCombat_Structure.generated.h"

class UEnvQuery;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_MeleeCombat_Structure : public UMorBehaviorState_MeleeCombat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BreakableTargetActorKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* BreakablesQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 EQSRequestID;
    
public:
    UMorBehaviorState_MeleeCombat_Structure();

};

