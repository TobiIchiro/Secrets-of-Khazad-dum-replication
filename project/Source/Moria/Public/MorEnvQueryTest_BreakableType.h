#pragma once
#include "CoreMinimal.h"
#include "EBreakableType.h"
#include "MorEnvQueryTest_BreakableBase.h"
#include "MorEnvQueryTest_BreakableType.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableType : public UMorEnvQueryTest_BreakableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakableType Filter;
    
public:
    UMorEnvQueryTest_BreakableType();

};

