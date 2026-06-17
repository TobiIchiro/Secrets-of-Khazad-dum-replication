#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorSaveGameObjectNative.h"
#include "MorBreakableImpostor.generated.h"

class UMorBreakableComponent;
class UMorBreakableFXComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorBreakableImpostor : public AActor, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableComponent* BreakableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorBreakableFXComponent* FXComponent;
    
public:
    AMorBreakableImpostor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

