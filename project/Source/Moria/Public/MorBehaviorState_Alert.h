#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_Alert.h"
#include "Templates/SubclassOf.h"
#include "MorBehaviorState_Alert.generated.h"

class AActor;
class AMorItemBase;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Alert : public UFGKBehaviorState_Alert {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorItemBase> ItemToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DropItemClass;
    
public:
    UMorBehaviorState_Alert();

};

