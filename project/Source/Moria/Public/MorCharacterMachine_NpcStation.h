#pragma once
#include "CoreMinimal.h"
#include "MorCharacterMachine_Station.h"
#include "MorCharacterMachine_NpcStation.generated.h"

class UMorAIBehaviorPointComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterMachine_NpcStation : public UMorCharacterMachine_Station {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAIBehaviorPointComponent* BehaviorPoint;
    
public:
    UMorCharacterMachine_NpcStation();

};

