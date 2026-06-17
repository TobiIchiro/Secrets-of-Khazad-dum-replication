#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorPlayerProfileDataComponent.generated.h"

class AMorPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, Within=MorPlayerController, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorPlayerProfileDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* PlayerController;
    
public:
    UMorPlayerProfileDataComponent(const FObjectInitializer& ObjectInitializer);

};

