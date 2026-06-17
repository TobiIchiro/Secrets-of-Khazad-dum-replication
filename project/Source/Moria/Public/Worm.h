#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorCharacter.h"
#include "Worm.generated.h"

UCLASS(Blueprintable)
class MORIA_API AWorm : public AMorCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DigDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DigDuration;
    
public:
    AWorm(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastDigOut(const FVector& InLocation, const float InYaw);
    
};

