#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VoxelCharacter.generated.h"

UCLASS(Blueprintable)
class VOXEL_API AVoxelCharacter : public ACharacter {
    GENERATED_BODY()
public:
    AVoxelCharacter(const FObjectInitializer& ObjectInitializer);

};

