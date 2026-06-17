#pragma once
#include "CoreMinimal.h"
#include "MorFloraReceptacleRowHandle.h"
#include "MorFloraItemData.generated.h"

class AInventoryItem;

USTRUCT(BlueprintType)
struct FMorFloraItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFloraReceptacleRowHandle FloraRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrefersInShade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEnoughLight;
    
    MORIA_API FMorFloraItemData();
};

