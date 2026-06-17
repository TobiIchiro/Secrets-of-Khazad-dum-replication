#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "FGKVoiceLine.h"
#include "FGKAnimNotify_VoiceLine.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_VoiceLine : public UFGKAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKVoiceLine VoiceLine;
    
    UFGKAnimNotify_VoiceLine();

};

