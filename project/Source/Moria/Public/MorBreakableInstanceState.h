#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorBreakableBrokenState.h"
#include "MorBreakableHealthChangedState.h"
#include "MorBreakableInstanceState.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreakableInstanceState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBreakableBrokenState BrokenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBreakableHealthChangedState HealthChangedState;
    
    FMorBreakableInstanceState();
};

