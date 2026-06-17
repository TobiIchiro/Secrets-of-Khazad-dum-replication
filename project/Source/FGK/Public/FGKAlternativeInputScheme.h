#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKActionKeyMapping.h"
#include "FGKAxisKeyMapping.h"
#include "FGKAlternativeInputScheme.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKAlternativeInputScheme : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SchemeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKActionKeyMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKAxisKeyMapping> AxisMappings;
    
    UFGKAlternativeInputScheme();

};

