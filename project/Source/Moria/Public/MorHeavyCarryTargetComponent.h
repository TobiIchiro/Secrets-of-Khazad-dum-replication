#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorHeavyCarryBeginSignatureDelegate.h"
#include "MorHeavyCarryEndSignatureDelegate.h"
#include "MorHeavyCarryTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorHeavyCarryTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorHeavyCarryBeginSignature OnHeavyCarryBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorHeavyCarryEndSignature OnHeavyCarryEnd;
    
    UMorHeavyCarryTargetComponent(const FObjectInitializer& ObjectInitializer);

};

