#pragma once
#include "CoreMinimal.h"
#include "EBreakableConstruction.h"
#include "MorEnvQueryTest_BreakableBase.h"
#include "MorEnvQueryTest_BreakableConstruction.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_BreakableConstruction : public UMorEnvQueryTest_BreakableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakableConstruction Filter;
    
public:
    UMorEnvQueryTest_BreakableConstruction();

};

