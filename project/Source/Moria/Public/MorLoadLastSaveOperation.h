#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorLoadLastSaveResult.h"
#include "MorLoadLastSaveFinishedDynamicDelegateDelegate.h"
#include "MorLoadLastSaveOperation.generated.h"

class UMorGameSessionManager;
class UMorMenuManager;
class UMorWorldSelectItem;

UCLASS(Blueprintable)
class MORIA_API UMorLoadLastSaveOperation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLoadLastSaveFinishedDynamicDelegate OnFinishedDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorMenuManager* MenuManager;
    
public:
    UMorLoadLastSaveOperation();

    UFUNCTION(BlueprintCallable)
    bool Start(bool bInMultiplayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldsListLoaded(const TArray<UMorWorldSelectItem*>& Worlds);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPremiumSubscriptionChecked(bool bIsPremium);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnFinishedBlueprint(EMorLoadLastSaveResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorGameSessionManager* GetGameSessionManager() const;
    
};

