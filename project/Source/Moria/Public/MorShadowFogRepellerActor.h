#pragma once
#include "CoreMinimal.h"
#include "MorShadowFogActor.h"
#include "MorShadowFogRepellerActor.generated.h"

class UMorShadowFogRepellerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFogRepellerActor : public AMorShadowFogActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowFogRepellerComponent* RepellerComponent;
    
    AMorShadowFogRepellerActor(const FObjectInitializer& ObjectInitializer);

};

