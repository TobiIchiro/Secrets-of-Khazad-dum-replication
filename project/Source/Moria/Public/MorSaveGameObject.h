#pragma once
#include "CoreMinimal.h"
#include "FGKSaveGameObject.h"
#include "EMorSaveGameObjectDormancyState.h"
#include "MorSaveGameObjectFlags.h"
#include "MorSaveGameObjectId.h"
#include "MorSaveGameObject.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UMorSaveGameObject : public UFGKSaveGameObject {
    GENERATED_BODY()
};

class IMorSaveGameObject : public IFGKSaveGameObject {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCustomSaveGameObjectOptionalFlags(FMorSaveGameObjectFlags& OutFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveGameObjectSetId(const FMorSaveGameObjectId& NewId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SaveGameObjectIgnore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FMorSaveGameObjectId SaveGameObjectGetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMorSaveGameObjectDormancyState SaveGameObjectGetDormancy() const;
    
};

