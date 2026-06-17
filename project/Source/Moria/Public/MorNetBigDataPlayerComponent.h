#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorNetBigDataPlayerComponent.generated.h"

class UMorNetBigDataChannel;

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerController, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNetBigDataPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorNetBigDataChannel* DataChannel;
    
public:
    UMorNetBigDataPlayerComponent(const FObjectInitializer& ObjectInitializer);

};

