#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Static.h"
#include "MoriaGameplayCue_Simple.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

UCLASS(Blueprintable)
class MORIA_API UMoriaGameplayCue_Simple : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> Sounds;
    
public:
    UMoriaGameplayCue_Simple();

};

