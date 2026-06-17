#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMorSaveGameStatus.h"
#include "MorSaveDataRuntimeActorRecordHandle.h"
#include "MorSaveGameObjectId.h"
#include "MorSaveSystemBlueprintLibrary.generated.h"

class AMorSaveSystemWorldState;

UCLASS(Blueprintable)
class MORIA_API UMorSaveSystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorSaveSystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SaveGameToFile(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorSaveDataRuntimeActorRecordHandle MakeRuntimeActorRecordHandle();
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidRuntimeActorRecordHandle(const FMorSaveDataRuntimeActorRecordHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSaveSystemWorldStateValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AMorSaveSystemWorldState* GetSaveSystemWorldState();
    
    UFUNCTION(BlueprintCallable)
    static AMorSaveSystemWorldState* GetSaveGameStatus(EMorSaveGameStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable)
    static FMorSaveGameObjectId CreatePersistentSaveGameObjectId();
    
};

