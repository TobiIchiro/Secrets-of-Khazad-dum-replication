#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorZoneRowHandle.h"
#include "MorOrcTrapDefinition.generated.h"

class AMorCharacter;
class AMorInventoryItem;

USTRUCT(BlueprintType)
struct MORIA_API FMorOrcTrapDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorCharacter>, int32> Combatants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AMorInventoryItem>, int32> Treasure;
    
    FMorOrcTrapDefinition();
};

