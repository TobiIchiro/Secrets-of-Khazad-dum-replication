#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "FGKInputBindingInfo.h"
#include "FGKMappableConfigPair.h"
#include "FGKState.h"
#include "Templates/SubclassOf.h"
#include "FGKInputState.generated.h"

class AFGKBaseCharacter;
class AFGKPlayerController;
class UFGKInputConfig;
class UInputComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKInputState : public UFGKState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputPriorityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFGKPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKInputBindingInfo> InputsToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKInputConfig* InputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKMappableConfigPair> DefaultInputConfigs;
    
public:
    UFGKInputState();

protected:
    UFUNCTION(BlueprintCallable)
    void Input_AnyKey(const FKey& Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetScoring() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentInputResults();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFGKBaseCharacter* GetCharacter() const;
    
};

