#pragma once
#include "CoreMinimal.h"
#include "MorPrefabProperties.generated.h"

class UMorPrefabData;

USTRUCT(BlueprintType)
struct MORIA_API FMorPrefabProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFullyCataloged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMorPrefabData> PrefabData;
    
    FMorPrefabProperties();
};

