#pragma once
#include "CoreMinimal.h"
#include "MorSoftSpawnableAssetPtr.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MORIA_API FMorSoftSpawnableAssetPtr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ObjectPtr;
    
public:
    FMorSoftSpawnableAssetPtr();
};

