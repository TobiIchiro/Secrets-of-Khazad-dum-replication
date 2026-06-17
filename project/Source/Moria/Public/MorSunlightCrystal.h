#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorSunlightCrystal.generated.h"

class AMorLocalLightingInfo;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorSunlightCrystal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorLocalLightingInfo* OwningZoneLighting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SharedMaterial;
    
public:
    AMorSunlightCrystal(const FObjectInitializer& ObjectInitializer);

};

