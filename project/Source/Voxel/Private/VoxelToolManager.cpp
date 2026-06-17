#include "VoxelToolManager.h"
#include "Templates/SubclassOf.h"
#include "VoxelToolSharedConfig.h"

UVoxelToolManager::UVoxelToolManager() {
    this->SharedConfig = CreateDefaultSubobject<UVoxelToolSharedConfig>(TEXT("SharedConfig"));
    this->ActiveTool = NULL;
}

void UVoxelToolManager::SetActiveToolByName(FName NewActiveTool) {
}

void UVoxelToolManager::SetActiveToolByClass(TSubclassOf<UVoxelTool> NewActiveTool) {
}

void UVoxelToolManager::SetActiveTool(UVoxelTool* NewActiveTool) {
}

UVoxelToolSharedConfig* UVoxelToolManager::K2_GetSharedConfig() const {
    return NULL;
}

TArray<UVoxelTool*> UVoxelToolManager::GetTools() const {
    return TArray<UVoxelTool*>();
}

UVoxelTool* UVoxelToolManager::GetActiveTool() const {
    return NULL;
}

void UVoxelToolManager::CreateDefaultTools(bool bLoadBlueprints) {
}


