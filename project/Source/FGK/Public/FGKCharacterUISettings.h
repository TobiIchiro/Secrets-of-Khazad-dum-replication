#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKCharacterUISettings.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class FGK_API UFGKCharacterUISettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UFGKCharacterUISettings();

};

