#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMorArchitectureBlockStability.h"
#include "MorPrefabStabilityComponent.generated.h"

class AMorBreakable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorPrefabStabilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorArchitectureBlockStability StabilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyIfCloseToEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorBreakable> UpperLeftEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorBreakable> UpperMiddleEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorBreakable> UpperRightEdge;
    
    UMorPrefabStabilityComponent(const FObjectInitializer& ObjectInitializer);

};

