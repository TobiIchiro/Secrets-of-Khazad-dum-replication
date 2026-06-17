#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemHandle.h"
#include "MorAccessibleStorageInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UMorAccessibleStorageInterface : public UInterface {
    GENERATED_BODY()
};

class IMorAccessibleStorageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasAccessibleStorage() const PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FItemHandle GetAccessibleStorageRoot() const PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

