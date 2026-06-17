#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKDangerInvokerRequest.h"
#include "FGKDangerInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKDangerInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKDangerInvokerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterDanger(const FFGKDangerInvokerRequest& Request);
    
};

