#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "MorFreeCameraSpectator.generated.h"

class AMorCharacter;
class AMorFreeCameraController;
class UCameraComponent;

UCLASS(Blueprintable)
class MORIA_API AMorFreeCameraSpectator : public ASpectatorPawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorFreeCameraController* FreeCameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* PlayerCharacter;
    
public:
    AMorFreeCameraSpectator(const FObjectInitializer& ObjectInitializer);

};

