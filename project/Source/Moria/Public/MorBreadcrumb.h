#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorBreadcrumb.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreadcrumb {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName UniqueName;
    
    FMorBreadcrumb();
};

