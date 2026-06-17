#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorBackgroundMusicActor.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class MORIA_API AMorBackgroundMusicActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AMorBackgroundMusicActor(const FObjectInitializer& ObjectInitializer);

};

