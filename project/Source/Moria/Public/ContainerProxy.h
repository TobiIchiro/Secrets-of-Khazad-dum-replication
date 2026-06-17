#pragma once
#include "CoreMinimal.h"
#include "ContainerProxyProperties.h"
#include "ContentProxy.h"
#include "ContainerProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API AContainerProxy : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerProxyProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ContainerOwner;
    
    AContainerProxy(const FObjectInitializer& ObjectInitializer);

};

