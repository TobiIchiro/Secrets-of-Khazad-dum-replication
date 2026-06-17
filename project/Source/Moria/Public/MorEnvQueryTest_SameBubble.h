#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "MorEnvQueryTest_SameBubble.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_SameBubble : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UMorEnvQueryTest_SameBubble();

};

