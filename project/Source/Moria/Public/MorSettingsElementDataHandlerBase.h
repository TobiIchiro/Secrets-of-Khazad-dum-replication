#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSettingsElementDataHandlerBase.generated.h"

class UFGKOption;
class UMorOptionHandler;
class UWidget;

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorSettingsElementDataHandlerBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKOption* Option;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKOption*> OtherBoundOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorOptionHandler* OptionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> ElementWidget;
    
public:
    UMorSettingsElementDataHandlerBase();

    UFUNCTION(BlueprintCallable)
    void UpdateOptionString(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOptionInt(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOptionFloat(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOptionBool(const bool Value);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReinitalizeElementBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsOptionValidBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeElementBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateElementToOption();
    
};

