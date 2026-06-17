#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorSoftSpawnableAssetPtr.h"
#include "MorArchitectureDecorationLayer.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureDecorationLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InRoomType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSoftSpawnableAssetPtr> ArtAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FMorArchitectureDecorationLayer();
};

