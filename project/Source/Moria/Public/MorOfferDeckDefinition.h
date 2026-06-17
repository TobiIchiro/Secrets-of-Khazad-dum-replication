#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorOfferTemplateRowHandle.h"
#include "MorOfferDeckDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorOfferDeckDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorOfferTemplateRowHandle> Offers;
    
    FMorOfferDeckDefinition();
};

