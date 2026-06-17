#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProcGuideMesh.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable)
class MORIA_API AProcGuideMesh : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* GuideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> OcclusionGuideMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> OcclusionGuideMeshesAlt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> OcclusionGuideMeshesAlt2;
    
    AProcGuideMesh(const FObjectInitializer& ObjectInitializer);

};

