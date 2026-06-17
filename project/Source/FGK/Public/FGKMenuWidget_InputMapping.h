#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "InputCoreTypes.h"
#include "FGKMenuWidget.h"
#include "FGKMenuWidget_InputMapping.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKMenuWidget_InputMapping : public UFGKMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputType;
    
public:
    UFGKMenuWidget_InputMapping();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FKey> GetInputMappings() const;
    
};

