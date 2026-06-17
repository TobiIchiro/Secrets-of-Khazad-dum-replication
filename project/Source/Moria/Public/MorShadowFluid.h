#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorShadowFluid.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFluid : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OriginatingActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTriggerSizeExtend;
    
    AMorShadowFluid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOriginatingActor(AActor* OriginatingActorIn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetShadowMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBoxComponent* GetShadowFXBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBoxComponent* GetPlayerTriggerBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOriginatingActor() const;
    
};

