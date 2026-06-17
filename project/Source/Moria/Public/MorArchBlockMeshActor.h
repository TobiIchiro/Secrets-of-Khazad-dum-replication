#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorArchBlockMeshActor.generated.h"

class UMorArchBlockMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorArchBlockMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorArchBlockMeshComponent* BlockMeshComponent;
    
    AMorArchBlockMeshActor(const FObjectInitializer& ObjectInitializer);

};

