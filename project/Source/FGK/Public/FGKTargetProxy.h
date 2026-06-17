#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKTargetProxy.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class FGK_API AFGKTargetProxy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    AFGKTargetProxy(const FObjectInitializer& ObjectInitializer);

};

