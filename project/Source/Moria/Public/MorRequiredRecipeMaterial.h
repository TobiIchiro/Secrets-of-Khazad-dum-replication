#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorCategoryTagRowHandle.h"
#include "MorRequiredRecipeMaterial.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRequiredRecipeMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle MaterialHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorCategoryTagRowHandle WildcardHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FMorRequiredRecipeMaterial();
};

