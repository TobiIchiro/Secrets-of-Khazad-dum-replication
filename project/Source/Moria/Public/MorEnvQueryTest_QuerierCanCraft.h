#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "ECraftFailureReason.h"
#include "ENpcCraftType.h"
#include "MorEnvQueryTest_QuerierCanCraft.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_QuerierCanCraft : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInventoryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcCraftType CraftType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECraftFailureReason> IgnorableFailures;
    
public:
    UMorEnvQueryTest_QuerierCanCraft();

};

