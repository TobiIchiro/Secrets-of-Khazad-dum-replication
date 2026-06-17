#pragma once
#include "CoreMinimal.h"
#include "VoxelMultiplayerInterface.h"
#include "VoxelMultiplayerTcpInterface.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelMultiplayerTcpInterface : public UVoxelMultiplayerInterface {
    GENERATED_BODY()
public:
    UVoxelMultiplayerTcpInterface();

    UFUNCTION(BlueprintCallable)
    bool StartServer(FString& OutError, const FString& Ip, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    bool ConnectToServer(FString& OutError, const FString& Ip, int32 Port);
    
};

