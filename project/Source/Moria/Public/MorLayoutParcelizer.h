#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorLayoutParcelizer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorLayoutParcelizer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParcelRegionsPerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParcelDensity;
    
    UMorLayoutParcelizer(const FObjectInitializer& ObjectInitializer);

};

