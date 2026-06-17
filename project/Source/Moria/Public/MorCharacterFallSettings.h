#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorCharacterFallStage.h"
#include "MorCharacterFallSettings.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorCharacterFallSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorCharacterFallStage> FallStages;
    
    UMorCharacterFallSettings();

};

