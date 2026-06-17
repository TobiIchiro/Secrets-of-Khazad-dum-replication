#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreen.h"
#include "EMorDeconstructValidity.h"
#include "MorDeconstructHud.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDeconstructHud : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CurrentTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDeconstructValidity TargetDeconstructValidity;
    
public:
    UMorDeconstructHud();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeconstructHudPropertiesChanged();
    
};

