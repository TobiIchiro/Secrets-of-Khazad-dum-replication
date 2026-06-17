#pragma once
#include "CoreMinimal.h"
#include "EMorDistanceSongValidationSourceType.h"
#include "MorSongValidation.h"
#include "MorDistanceSongValidation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDistanceSongValidation : public UMorSongValidation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDistanceSongValidationSourceType SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UMorDistanceSongValidation();

};

