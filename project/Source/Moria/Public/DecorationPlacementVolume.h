#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecorationPlacementVolume.generated.h"

class UDecoractionPlacementComponent;

UCLASS(Blueprintable)
class MORIA_API ADecorationPlacementVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecoractionPlacementComponent* PlacementComponent;
    
    ADecorationPlacementVolume(const FObjectInitializer& ObjectInitializer);

};

