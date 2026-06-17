#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ResourceContextMarker.generated.h"

class UResourceContextComponent;

UCLASS(Blueprintable)
class MORIA_API AResourceContextMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UResourceContextComponent* ContextComponent;
    
    AResourceContextMarker(const FObjectInitializer& ObjectInitializer);

};

