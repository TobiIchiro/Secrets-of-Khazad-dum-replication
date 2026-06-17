#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RopeCuttingMessage.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URopeCuttingMessage : public UInterface {
    GENERATED_BODY()
};

class IRopeCuttingMessage : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActorMessageBeginCut_RC(UPrimitiveComponent* HitCollisionComponent, FName RopeComponentUniqueIdentifier);
    
};

