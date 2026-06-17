#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MorFluidNinjaBaseActor.generated.h"

class UMorFluidNinjaBaseComponent;

UCLASS(Blueprintable)
class MORIA_API AMorFluidNinjaBaseActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OriginatingActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorFluidNinjaBaseComponent* FluidNinjaComponent;
    
    AMorFluidNinjaBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWaterIsOn(bool IsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTraceMeshScale(const FVector& ScaleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetOriginatingActor(AActor* OriginatingActorIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOriginatingActor() const;
    
};

