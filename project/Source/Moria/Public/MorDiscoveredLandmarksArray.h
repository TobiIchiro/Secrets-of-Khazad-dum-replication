#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorDiscoveredLandmarksForGuid.h"
#include "MorDiscoveredLandmarksArray.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredLandmarksArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorDiscoveredLandmarksForGuid> Items;
    
public:
    MORIA_API FMorDiscoveredLandmarksArray();
};

