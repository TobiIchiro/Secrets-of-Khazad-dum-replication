#pragma once
#include "CoreMinimal.h"
#include "GlobalInstancedMeshManagerConfig.h"
#include "MorReplicatedManager.h"
#include "GlobalInstancedMeshManager.generated.h"

class UGlobalInstancedRootComponent;

UCLASS(Blueprintable)
class MORIA_API AGlobalInstancedMeshManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalInstancedMeshManagerConfig Configuration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateManually: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoUpdateFrameBudget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGlobalInstancedRootComponent* MeshParent;
    
public:
    AGlobalInstancedMeshManager(const FObjectInitializer& ObjectInitializer);

};

