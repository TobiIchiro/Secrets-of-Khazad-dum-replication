#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "ELoadingScreenState.h"
#include "MorLoadingScreenManager.generated.h"

class UMorGameSessionManager;
class UMorLoadingScreen;

UCLASS(Blueprintable)
class MORIA_API UMorLoadingScreenManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadingScreenZOrder;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LoadingScreenMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* GameSessionManager;
    
public:
    UMorLoadingScreenManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenStateChanged(UMorLoadingScreen* LoadingScreen, ELoadingScreenState NewScreenState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSessionDestroyed();
    

    // Fix for true pure virtual functions not being implemented
};

