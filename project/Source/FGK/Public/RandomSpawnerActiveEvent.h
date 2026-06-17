#pragma once
#include "CoreMinimal.h"
#include "RandomSpawnerActiveEvent.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FRandomSpawnerActiveEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* Component;
    
    FGK_API FRandomSpawnerActiveEvent();
};

