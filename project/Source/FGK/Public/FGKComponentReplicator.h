#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKComponentReplicator.generated.h"

UCLASS(Abstract, Blueprintable, Within=Actor)
class FGK_API UFGKComponentReplicator : public UObject {
    GENERATED_BODY()
public:
    UFGKComponentReplicator();

};

