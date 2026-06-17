#include "MorProcWorldRPCComponent.h"

UMorProcWorldRPCComponent::UMorProcWorldRPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetBigDataPlayerComponent = NULL;
}

void UMorProcWorldRPCComponent::SetCarveId(const FString& CarveId) {
}

void UMorProcWorldRPCComponent::ServerNotifyVoxelWorldReady_Implementation(const FString& InCarveUniqueNetId) {
}

void UMorProcWorldRPCComponent::ServerNotifyCarveReceived_Implementation(const FString& InCarveUniqueNetId) {
}

void UMorProcWorldRPCComponent::Server_RequestWorldLayout_Implementation() {
}

FString UMorProcWorldRPCComponent::GetCarveId() const {
    return TEXT("");
}

void UMorProcWorldRPCComponent::ClientReceiveVoxelCarveList_Implementation(const TArray<FMorVoxelCommand>& VoxelCmdList) {
}

void UMorProcWorldRPCComponent::ClientReceiveVoxelCarve_Implementation(const FMorVoxelCommand& VoxelCmd) {
}


