#pragma once
#include "CoreMinimal.h"
#include "MorGameLevelReference.generated.h"

class UMorBubbleCatalog;
class UWorld;

USTRUCT(BlueprintType)
struct MORIA_API FMorGameLevelReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMorBubbleCatalog> BubbleCatalog;
    
    FMorGameLevelReference();
};

