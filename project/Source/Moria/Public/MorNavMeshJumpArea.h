#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorNavMeshJumpArea.generated.h"

class UMorNavMeshJumpAreaComponent;

UCLASS(Blueprintable)
class MORIA_API AMorNavMeshJumpArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorNavMeshJumpAreaComponent* JumpAreaComponent;
    
public:
    AMorNavMeshJumpArea(const FObjectInitializer& ObjectInitializer);

};

