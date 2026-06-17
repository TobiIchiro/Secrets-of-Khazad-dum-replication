#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "Templates/SubclassOf.h"
#include "FGKActionEffect_OverridePreferredNavData.generated.h"

class ANavigationData;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_OverridePreferredNavData : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANavigationData> OverridePreferredNavDataClass;
    
public:
    UFGKActionEffect_OverridePreferredNavData();

};

