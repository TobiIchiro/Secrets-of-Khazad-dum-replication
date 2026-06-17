#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MoriaControllerInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMoriaControllerInterface : public UInterface {
    GENERATED_BODY()
};

class IMoriaControllerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetGamepadVibrationOn() const;
    
};

