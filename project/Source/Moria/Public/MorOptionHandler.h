#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOptionHandlerState.h"
#include "OnHandlerStateChangedDelegate.h"
#include "MorOptionHandler.generated.h"

class UFGKOption;
class UMorOptionManager;

UCLASS(Blueprintable)
class MORIA_API UMorOptionHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandlerStateChanged OnHandlerStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorOptionManager* OptionManager;
    
public:
    UMorOptionHandler();

    UFUNCTION(BlueprintCallable)
    void StartModifications();
    
    UFUNCTION(BlueprintCallable)
    void SaveOptions(bool bAsynchronous);
    
    UFUNCTION(BlueprintCallable)
    UFGKOption* HandlerGetOption(const FName& OptionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorOptionManager* GetOwningManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOptionHandlerState GetOptionCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelModifications();
    
};

