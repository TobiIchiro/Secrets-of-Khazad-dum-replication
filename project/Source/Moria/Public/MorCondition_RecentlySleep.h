#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "MorCondition_RecentlySleep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_RecentlySleep : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameTimeInMinuteSinceLastSleep;
    
public:
    UMorCondition_RecentlySleep();

};

