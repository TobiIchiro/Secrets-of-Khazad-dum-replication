#pragma once
#include "CoreMinimal.h"
#include "MorRecreatedModularMesh.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FMorRecreatedModularMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Instance;
    
    MORIA_API FMorRecreatedModularMesh();
};

