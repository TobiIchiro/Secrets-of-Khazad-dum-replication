#pragma once
#include "CoreMinimal.h"
#include "MorUIMainMenuScreen.h"
#include "MorPreparingHostGameScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPreparingHostGameScreen : public UMorUIMainMenuScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockInputWhileShown;
    
public:
    UMorPreparingHostGameScreen();

};

