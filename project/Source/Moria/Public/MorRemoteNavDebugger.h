#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorRemoteNavDebugger.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorRemoteNavDebugger : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AMorRemoteNavDebugger(const FObjectInitializer& ObjectInitializer);

};

