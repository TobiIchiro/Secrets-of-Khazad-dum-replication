#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorBreakBreakablesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBreakBreakablesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromCapsuleEdgeToAABBToBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugLines;
    
    UMorBreakBreakablesComponent(const FObjectInitializer& ObjectInitializer);

};

