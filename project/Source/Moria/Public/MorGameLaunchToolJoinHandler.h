#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerJoinFailReason.h"
#include "EPlayerJoinStatus.h"
#include "MorGameLaunchToolJoinHandler.generated.h"

class UMorGameSessionManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorGameLaunchToolJoinHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* SessionManager;
    
public:
    UMorGameLaunchToolJoinHandler(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnJoinGameStatusChanged(EPlayerJoinStatus JoinStatus, EPlayerJoinFailReason FailReason);
    
};

