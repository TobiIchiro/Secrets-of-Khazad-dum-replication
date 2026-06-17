#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "MorLandmarkRowHandle.h"
#include "MorDiscoveredLandmarksForGuid.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredLandmarksForGuid : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLandmarkRowHandle> Landmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorDiscoveredLandmarksForGuid();
};

