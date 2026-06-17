#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FGKAnimChooserRow.generated.h"

class UAnimMontage;
class UFGKTestRow;

USTRUCT(BlueprintType)
struct FGK_API FFGKAnimChooserRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKTestRow* HiddenRow;
    
    FFGKAnimChooserRow();
};

