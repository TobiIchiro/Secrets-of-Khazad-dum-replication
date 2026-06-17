#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlobalInstancedLevelCatalog.generated.h"

UCLASS(Blueprintable)
class MORIA_API AGlobalInstancedLevelCatalog : public AActor {
    GENERATED_BODY()
public:
    AGlobalInstancedLevelCatalog(const FObjectInitializer& ObjectInitializer);

};

