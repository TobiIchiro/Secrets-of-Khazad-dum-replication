#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "MorEnvQueryTest_PickupItemGroup.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_PickupItemGroup : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterTags;
    
public:
    UMorEnvQueryTest_PickupItemGroup();

};

