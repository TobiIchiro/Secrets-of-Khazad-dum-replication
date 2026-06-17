#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "FGKAISenseConfig_Shout.generated.h"

class UFGKAISense_Shout;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class FGK_API UFGKAISenseConfig_Shout : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKAISense_Shout> Implementation;
    
    UFGKAISenseConfig_Shout();

};

