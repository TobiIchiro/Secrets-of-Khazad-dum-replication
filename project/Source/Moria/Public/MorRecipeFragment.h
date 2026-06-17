#pragma once
#include "CoreMinimal.h"
#include "MorItemBase.h"
#include "MorRecipeFragmentRowHandle.h"
#include "MorRecipeFragment.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorRecipeFragment : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRecipeFragmentRowHandle RowHandle;
    
    AMorRecipeFragment(const FObjectInitializer& ObjectInitializer);

};

