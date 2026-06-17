#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_CharacterBase.h"
#include "MorCondition_RecentlySpawned.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_RecentlySpawned : public UFGKCondition_CharacterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceSpawned;
    
public:
    UMorCondition_RecentlySpawned();

};

