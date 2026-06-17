#pragma once
#include "CoreMinimal.h"
#include "EMorBreakableBehavior.h"
#include "MorEnvQueryTest_BreakableBase.h"
#include "MorEnvQueryTest_BreakableBehavior.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableBehavior : public UMorEnvQueryTest_BreakableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorBreakableBehavior BreakableBehavior;
    
public:
    UMorEnvQueryTest_BreakableBehavior();

};

