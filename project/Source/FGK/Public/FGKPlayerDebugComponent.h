#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKPlayerDebugComponent.generated.h"

class AFGKPlayerController;
class UFGKDebugSpawning;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKPlayerDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKDebugSpawning* DebugSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKPlayerController* ControllerOwner;
    
public:
    UFGKPlayerDebugComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_QuickSpawn(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_QuickSpawnComplete(const FString& Msg);
    
};

