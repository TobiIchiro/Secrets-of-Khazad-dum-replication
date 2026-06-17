#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorAttributeDisplayDefinition.h"
#include "MorAttributeDisplaySettings.generated.h"

UCLASS(Blueprintable)
class UMorAttributeDisplaySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorAttributeDisplayDefinition> AttributeList;
    
    UMorAttributeDisplaySettings();

};

