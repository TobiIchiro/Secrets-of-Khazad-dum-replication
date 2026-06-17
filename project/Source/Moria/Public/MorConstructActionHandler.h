#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorConstructActionHandler.generated.h"

UINTERFACE(Blueprintable)
class UMorConstructActionHandler : public UInterface {
    GENERATED_BODY()
};

class IMorConstructActionHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ConstructionDeconstructed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ConstructionConstructed(bool bRestoringFromSave);
    
};

