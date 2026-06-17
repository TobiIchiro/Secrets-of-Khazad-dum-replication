#pragma once
#include "CoreMinimal.h"
#include "SimpleSubtitle.h"
#include "SimpleAkSubtitle.generated.h"

class AActor;
class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSimpleAkSubtitle : public FSimpleSubtitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AkEventOwner;
    
    FGK_API FSimpleAkSubtitle();
};

