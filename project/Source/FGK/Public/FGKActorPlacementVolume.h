#pragma once
#include "CoreMinimal.h"
#include "ActorStruct.h"
#include "FGKPlacementVolume.h"
#include "FGKActorPlacementVolume.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKActorPlacementVolume : public AFGKPlacementVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorStruct> Templates;
    
    AFGKActorPlacementVolume(const FObjectInitializer& ObjectInitializer);

};

