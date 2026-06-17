#pragma once
#include "CoreMinimal.h"
#include "VoxelPlaceableItemActor.h"
#include "VoxelDisableEditsBox.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class VOXEL_API AVoxelDisableEditsBox : public AVoxelPlaceableItemActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Box;
    
public:
    AVoxelDisableEditsBox(const FObjectInitializer& ObjectInitializer);

};

