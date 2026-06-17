#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EFontSizeCategory.h"
#include "MorFontSizeDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorFontSizeDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontSizeCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FontSizeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    FMorFontSizeDefinition();
};

