#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Interact.h"
#include "Templates/SubclassOf.h"
#include "MorInteractableState_Sing.generated.h"

class UGameplayAbility;
class UVoiceComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_Sing : public UMorInteractableState_Interact {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> DefaultSingAbility;
    
public:
    UMorInteractableState_Sing();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayAbility> GetSingGameplayAbility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSingingStarted(uint8 SongID, UVoiceComponent* Comp);
    
};

