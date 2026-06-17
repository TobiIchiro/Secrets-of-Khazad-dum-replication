#pragma once
#include "CoreMinimal.h"
#include "Engine/Channel.h"
#include "MorNetBigDataChannel.generated.h"

class UMorNetBigDataPlayerComponent;

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorNetBigDataChannel : public UChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNetBigDataPlayerComponent* PlayerComponent;
    
public:
    UMorNetBigDataChannel();

};

