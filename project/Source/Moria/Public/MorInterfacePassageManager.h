#pragma once
#include "CoreMinimal.h"
#include "EBubbleInterface.h"
#include "EBubbleState.h"
#include "MorInterfaceBlockMesh.h"
#include "MorReplicatedManager.h"
#include "Templates/SubclassOf.h"
#include "MorInterfacePassageManager.generated.h"

class AGlobalInstancedMeshManager;
class AMorInterfaceBlockTextActor;
class AWorldLayout;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorInterfacePassageManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBubbleInterface, FMorInterfaceBlockMesh> InterfaceBlockMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionOpenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramesToSwitchBarriers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTransitionOpenWithScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorInterfaceBlockTextActor> InterfaceBlockTextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGlobalInstancedMeshManager* InstancedMeshManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
public:
    AMorInterfacePassageManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnWorldBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
};

