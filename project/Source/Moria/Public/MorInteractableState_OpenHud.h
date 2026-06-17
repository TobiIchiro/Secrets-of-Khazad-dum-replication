#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "MorInteractableState_OpenHud.generated.h"

class ACharacter;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_OpenHud : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TargetWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* PlayerInteractor;
    
public:
    UMorInteractableState_OpenHud();

};

