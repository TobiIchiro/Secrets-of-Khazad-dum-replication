#pragma once
#include "CoreMinimal.h"
#include "GlobalInstancedMeshManager.h"
#include "MorGlobalInstancedMeshManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorGlobalInstancedMeshManager : public AGlobalInstancedMeshManager {
    GENERATED_BODY()
public:
    AMorGlobalInstancedMeshManager(const FObjectInitializer& ObjectInitializer);

};

