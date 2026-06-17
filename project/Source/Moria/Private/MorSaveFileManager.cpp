#include "MorSaveFileManager.h"
#include "MorSaveFileQuery.h"

UMorSaveFileManager::UMorSaveFileManager() {
    this->SaveFileQuery = CreateDefaultSubobject<UMorSaveFileQuery>(TEXT("SaveFileQuery"));
}


