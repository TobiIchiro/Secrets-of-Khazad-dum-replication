#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMorBreadcrumbCountStrategy.h"
#include "EMorBreadcrumbMatchStrategy.h"
#include "MorBreadcrumbCountChangedEventDelegate.h"
#include "MorBreadcrumbEventListener.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorBreadcrumbEventListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CategoryTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorBreadcrumbMatchStrategy MatchStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMorBreadcrumbCountStrategy CountStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorBreadcrumbCountChangedEvent> Delegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FMorBreadcrumbEventListener();
};

