#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorOutdoorComponentsContainer.generated.h"

class AMorEasySky;

UCLASS(Blueprintable)
class MORIA_API AMorOutdoorComponentsContainer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DistantGeo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInstancedFoliageInDistantGeo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorEasySky* EasySky;
    
public:
    AMorOutdoorComponentsContainer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

