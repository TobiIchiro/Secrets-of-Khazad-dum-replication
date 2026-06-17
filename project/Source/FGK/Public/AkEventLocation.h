#pragma once
#include "CoreMinimal.h"
#include "AkEventLocation.generated.h"

class UAkAudioEvent;
class UAkComponent;

USTRUCT(BlueprintType)
struct FAkEventLocation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkEventOwner;
    
    FGK_API FAkEventLocation();
};

