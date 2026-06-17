#pragma once
#include "CoreMinimal.h"
#include "FGKCheatManager.h"
#include "MorCheatManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorCheatManager : public UFGKCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNPCDebugging;
    
    UMorCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemSaveGameToFile(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemReloadAutoSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemQuickSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemQuickLoad();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemLoadGameFromFile(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveSystemAutoSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void NPCDebugging(bool bEnable);
    
};

