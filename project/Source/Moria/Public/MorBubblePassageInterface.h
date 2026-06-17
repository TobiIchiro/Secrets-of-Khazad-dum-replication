#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBubbleInterface.h"
#include "MorBubblePassageInterface.generated.h"

UINTERFACE(Blueprintable)
class UMorBubblePassageInterface : public UInterface {
    GENERATED_BODY()
};

class IMorBubblePassageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterfacePassageOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterfacePassageInitialized(EBubbleInterface AssignedInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterfacePassageBlocked();
    
};

