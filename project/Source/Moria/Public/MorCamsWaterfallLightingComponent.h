#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorUpdateNiagaraLightingDelegateDelegate.h"
#include "MorCamsWaterfallLightingComponent.generated.h"

class AMorLocalLightingInfo;
class UCurveFloat;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCamsWaterfallLightingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimeOfDayCurve;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorUpdateNiagaraLightingDelegate OnUpdateNiagaraLightingByTimeOfDay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorLocalLightingInfo* OwningZoneLighting;
    
public:
    UMorCamsWaterfallLightingComponent(const FObjectInitializer& ObjectInitializer);

};

