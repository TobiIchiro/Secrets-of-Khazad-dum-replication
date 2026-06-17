#pragma once
#include "CoreMinimal.h"
#include "WormPlayLoopAnimState.h"
#include "WormIdle.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormIdle : public UWormPlayLoopAnimState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> IdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayDurationPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayDurationPct;
    
public:
    UWormIdle();

};

