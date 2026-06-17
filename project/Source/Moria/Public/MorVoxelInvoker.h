#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorVoxelInvoker.generated.h"

class UVoxelSimpleInvokerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorVoxelInvoker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoxelSimpleInvokerComponent* VoxelInvoker;
    
    AMorVoxelInvoker(const FObjectInitializer& ObjectInitializer);

};

