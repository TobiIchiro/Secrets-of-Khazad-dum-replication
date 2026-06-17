#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorBreakableAttachable.generated.h"

UINTERFACE(Blueprintable)
class UMorBreakableAttachable : public UInterface {
    GENERATED_BODY()
};

class IMorBreakableAttachable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAttachToBreakable() const;
    
};

