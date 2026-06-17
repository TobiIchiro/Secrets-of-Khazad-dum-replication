#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKOptionDefinition.h"
#include "FGKOptionLabeledValue.h"
#include "FGKOption.generated.h"

UCLASS(Abstract, Blueprintable)
class FGK_API UFGKOption : public UObject {
    GENERATED_BODY()
public:
    UFGKOption();

    UFUNCTION(BlueprintCallable)
    void SetString(const FString& InValue, bool bMarkAsChanged, bool bFireDelegates);
    
    UFUNCTION(BlueprintCallable)
    void SetInt(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBool(bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefinitionChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFGKOptionLabeledValue> GetValues() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOptionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKOptionDefinition GetOptionDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCleanName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBool() const;
    
};

