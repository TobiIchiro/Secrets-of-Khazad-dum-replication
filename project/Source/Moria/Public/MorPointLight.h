#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorPointLight.generated.h"

class UMorPointLightComponent;

UCLASS(Blueprintable)
class MORIA_API AMorPointLight : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorPointLightComponent* MorPointLightComponent;
    
public:
    AMorPointLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorPointLightComponent* GetMorPointLightComponent() const;
    
};

