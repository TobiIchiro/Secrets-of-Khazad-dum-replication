#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorSaveGameObjectNative.h"
#include "MorBubbleInstance.generated.h"

class AMorBubbleConstructionHandler;
class UMorBubbleBreakableInstanceHandler;
class USceneComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable)
class MORIA_API AMorBubbleInstance : public AActor, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBubbleBreakableInstanceHandler* BreakableInstanceHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldLayoutBubble* WorldLayoutBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AMorBubbleConstructionHandler* ConstructionHandler;
    
public:
    AMorBubbleInstance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

