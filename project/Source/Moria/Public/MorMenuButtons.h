#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMorButtonsTypes.h"
#include "MorMenuButtons.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MORIA_API UMorMenuButtons : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorButtonsTypes, FName> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlatformTexturesDataTable;
    
public:
    UMorMenuButtons();

};

