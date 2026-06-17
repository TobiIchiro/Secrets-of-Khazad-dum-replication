#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExpressionContainer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UExpressionContainer : public UActorComponent {
    GENERATED_BODY()
public:
    UExpressionContainer(const FObjectInitializer& ObjectInitializer);

};

