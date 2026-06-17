#pragma once
#include "CoreMinimal.h"
#include "ECharacterCreatorCamera.h"
#include "MorMainMenuPlayerControllerModeImpl.h"
#include "MorMainMenuCharacterCreatorModeImpl.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorMainMenuCharacterCreatorModeImpl : public UMorMainMenuPlayerControllerModeImpl {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterCreatorCamera, FName> CameraActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharSelectionFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFocusHead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterCreatorCamera, AActor*> Cameras;
    
public:
    UMorMainMenuCharacterCreatorModeImpl();

    UFUNCTION(BlueprintCallable)
    void SwitchCamera(ECharacterCreatorCamera Camera);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRotateCharacterAxisValueChanged(float AxisValue);
    
};

