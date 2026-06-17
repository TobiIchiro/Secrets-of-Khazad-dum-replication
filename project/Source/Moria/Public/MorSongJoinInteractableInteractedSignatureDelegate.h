#pragma once
#include "CoreMinimal.h"
#include "MorSongJoinInteractableInteractedSignatureDelegate.generated.h"

class ACharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorSongJoinInteractableInteractedSignature, ACharacter*, Interactor);

