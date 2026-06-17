#pragma once
#include "CoreMinimal.h"
#include "ShadowCapsuleInformation.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FShadowCapsuleInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    MORIA_API FShadowCapsuleInformation();
};

