#pragma once
#include "CoreMinimal.h"
#include "EBreakableReceptacle.h"
#include "MorEnvQueryTest_BreakableBase.h"
#include "MorEnvQueryTest_BreakableReceptacle.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableReceptacle : public UMorEnvQueryTest_BreakableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakableReceptacle Filter;
    
public:
    UMorEnvQueryTest_BreakableReceptacle();

};

