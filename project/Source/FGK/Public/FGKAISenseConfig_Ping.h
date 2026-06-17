#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "FGKAISenseConfig_Ping.generated.h"

class UFGKAISense_Ping;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class FGK_API UFGKAISenseConfig_Ping : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISense_Ping> Implementation;
    
    UFGKAISenseConfig_Ping();

};

