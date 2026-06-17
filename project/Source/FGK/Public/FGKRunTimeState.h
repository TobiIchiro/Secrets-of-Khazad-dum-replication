#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FGKRunTimeState.generated.h"

class UFGKState;

USTRUCT(BlueprintType)
struct FFGKRunTimeState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKState* State;
    
    FGK_API FFGKRunTimeState();
};

