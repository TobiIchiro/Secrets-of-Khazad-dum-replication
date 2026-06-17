#pragma once
#include "CoreMinimal.h"
#include "ContainerProxy.h"
#include "MorSnappedContainerProxy.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorSnappedContainerProxy : public AContainerProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AMorSnappedContainerProxy(const FObjectInitializer& ObjectInitializer);

};

