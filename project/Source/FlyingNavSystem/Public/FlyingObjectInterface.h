#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SVOQuerySettings.h"
#include "FlyingObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class FLYINGNAVSYSTEM_API UFlyingObjectInterface : public UInterface {
    GENERATED_BODY()
};

class FLYINGNAVSYSTEM_API IFlyingObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSVOQuerySettings GetPathfindingQuerySettings() const;
    
};

