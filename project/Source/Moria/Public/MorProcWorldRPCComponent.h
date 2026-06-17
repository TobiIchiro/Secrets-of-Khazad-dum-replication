#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorVoxelCommand.h"
#include "MorProcWorldRPCComponent.generated.h"

class UMorNetBigDataPlayerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=MorPlayerController, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorProcWorldRPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorNetBigDataPlayerComponent* NetBigDataPlayerComponent;
    
public:
    UMorProcWorldRPCComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCarveId(const FString& CarveId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyVoxelWorldReady(const FString& InCarveUniqueNetId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerNotifyCarveReceived(const FString& InCarveUniqueNetId);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestWorldLayout();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetCarveId() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveVoxelCarveList(const TArray<FMorVoxelCommand>& VoxelCmdList);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveVoxelCarve(const FMorVoxelCommand& VoxelCmd);
    
};

