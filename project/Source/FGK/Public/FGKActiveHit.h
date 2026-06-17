#pragma once
#include "CoreMinimal.h"
#include "FGKActiveHit.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FGK_API FFGKActiveHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveHitDetectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> MostRecentMeleeHitTime;
    
    FFGKActiveHit();
};

