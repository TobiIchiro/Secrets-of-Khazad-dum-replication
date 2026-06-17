#pragma once
#include "CoreMinimal.h"
#include "WormSquadState.h"
#include "WormSquadRetreat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormSquadRetreat : public UWormSquadState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRetreatInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRetreatInterval;
    
public:
    UWormSquadRetreat();

};

