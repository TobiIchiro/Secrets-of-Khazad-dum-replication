#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "MorItemSetDefinition.generated.h"

class UGameplayEffect;
class UTexture2D;

USTRUCT(BlueprintType)
struct MORIA_API FMorItemSetDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SetPieceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> SetEffects;
    
    FMorItemSetDefinition();
};

