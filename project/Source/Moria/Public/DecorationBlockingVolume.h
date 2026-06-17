#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecorationBlockingVolume.generated.h"

class UDecorationBlockingComponent;

UCLASS(Blueprintable)
class MORIA_API ADecorationBlockingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecorationBlockingComponent* BlockingComponent;
    
    ADecorationBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

