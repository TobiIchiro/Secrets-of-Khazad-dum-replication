#pragma once
#include "CoreMinimal.h"
#include "FGKUIManager.h"
#include "MorUIScreenConfigRowHandle.h"
#include "MorUIManager.generated.h"

class AMorPlayerController;
class UFGKUIScreen;
class UMorUIManager;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorUIManager : public UFGKUIManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* MorPlayer;
    
public:
    UMorUIManager();

    UFUNCTION(BlueprintCallable)
    UFGKUIScreen* ShowScreenWithHandle(const FMorUIScreenConfigRowHandle& ScreenHandle);
    
    UFUNCTION(BlueprintCallable)
    void ShowScreenInstance(UFGKUIScreen* ScreenInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentScreenActivatedFromInteract() const;
    
    UFUNCTION(BlueprintCallable)
    void CycleHudVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMorUIManager* BPGetManager(const UObject* WorldContextObject);
    
};

