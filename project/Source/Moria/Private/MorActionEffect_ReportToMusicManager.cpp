#include "MorActionEffect_ReportToMusicManager.h"

UMorActionEffect_ReportToMusicManager::UMorActionEffect_ReportToMusicManager() {
    this->Target = NULL;
    this->AIController = NULL;
    this->MusicManager = NULL;
}

void UMorActionEffect_ReportToMusicManager::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}


