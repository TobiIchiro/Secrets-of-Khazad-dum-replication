#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorEntitlementRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorDoorLoreTodDefinition.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct MORIA_API FMorDoorLoreTodDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> SingAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresEntitlement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementRowHandle RequiredEntitlement;
    
    FMorDoorLoreTodDefinition();
};

