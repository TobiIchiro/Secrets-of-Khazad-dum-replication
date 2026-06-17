#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorBubbleDecorationBlockersDebug.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBubbleDecorationBlockersDebug : public UActorComponent {
    GENERATED_BODY()
public:
    UMorBubbleDecorationBlockersDebug(const FObjectInitializer& ObjectInitializer);

};

