#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorFXLocalPlayerProximityDelegateDelegate.h"
#include "MorFXLocalPlayerProximityComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorFXLocalPlayerProximityComp : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShotTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerZoneRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorFXLocalPlayerProximityDelegate OnPlayerInTriggerZone;
    
    UMorFXLocalPlayerProximityComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetTrigger();
    
    UFUNCTION(BlueprintCallable)
    bool PlayerLocationValid();
    
    UFUNCTION(BlueprintCallable)
    FVector GetPlayerLocation();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayerDistance();
    
};

