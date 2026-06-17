#pragma once
#include "CoreMinimal.h"
#include "ContentProxy.h"
#include "MorShallowWaterProxy.generated.h"

class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShallowWaterProxy : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShallow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTriggerSizeExtend;
    
    AMorShallowWaterProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetWaterMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBoxComponent* GetWaterFXBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBoxComponent* GetPlayerTriggerBox() const;
    
};

