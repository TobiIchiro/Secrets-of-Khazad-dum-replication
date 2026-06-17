#pragma once
#include "CoreMinimal.h"
#include "FGKUserWidget.h"
#include "OnPlayerListWidget_PlayerAddedDelegate.h"
#include "OnPlayerListWidget_PlayerChangedDelegate.h"
#include "OnPlayerListWidget_PlayerRemovedDelegate.h"
#include "MorPlayerListWidget.generated.h"

class AMorPlayerListManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPlayerListWidget : public UFGKUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerListWidget_PlayerAdded OnPlayerAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerListWidget_PlayerRemoved OnPlayerRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerListWidget_PlayerChanged OnPlayerChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerListManager* PlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnabledList: 1;
    
public:
    UMorPlayerListWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetListEnabled(bool bValue);
    
};

