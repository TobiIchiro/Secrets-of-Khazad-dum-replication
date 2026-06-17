#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "MorSaveGameObjectCallbacks.generated.h"

class AMorSaveSystemWorldState;

UINTERFACE(Blueprintable, MinimalAPI)
class UMorSaveGameObjectCallbacks : public UInterface {
    GENERATED_BODY()
};

class IMorSaveGameObjectCallbacks : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectUpgradeClass(AMorSaveSystemWorldState* WorldState, const FSoftClassPath& OldClassPath);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectPreStore(AMorSaveSystemWorldState* WorldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectPreRestoreDestroy(AMorSaveSystemWorldState* WorldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectPreRestore(AMorSaveSystemWorldState* WorldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectPostStore(AMorSaveSystemWorldState* WorldState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectPostRestore(AMorSaveSystemWorldState* WorldState);
    
};

