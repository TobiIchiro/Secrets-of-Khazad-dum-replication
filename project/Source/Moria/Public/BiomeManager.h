#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "BiomeManager.generated.h"

class UBiome;
class UDataTable;

UCLASS(Blueprintable)
class MORIA_API ABiomeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BiomeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UBiome*> Biomes;
    
    ABiomeManager(const FObjectInitializer& ObjectInitializer);

};

