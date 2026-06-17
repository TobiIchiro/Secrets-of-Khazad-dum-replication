#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "MorEnvQueryTest_SettlementStone.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEnvQueryTest_SettlementStone : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyWithActiveLevelUpSong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyStonesAllowedToStoreActivityPoints;
    
public:
    UMorEnvQueryTest_SettlementStone();

};

