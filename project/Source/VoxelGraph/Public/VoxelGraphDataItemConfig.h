#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGraphDataItemConfig.generated.h"

UCLASS(Blueprintable)
class VOXELGRAPH_API UVoxelGraphDataItemConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Parameters;
    
    UVoxelGraphDataItemConfig();

};

