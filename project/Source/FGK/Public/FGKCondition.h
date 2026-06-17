#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKCondition.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class FGK_API UFGKCondition : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceTrue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInvert: 1;
    
public:
    UFGKCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Resolve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceTrue() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BP_GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_Evaluate() const;
    
};

