#include "GridlyGameSettings.h"

UGridlyGameSettings::UGridlyGameSettings() {
    this->ImportApiKey = TEXT("FCHRbwRrOzRYrI");
    this->ImportFromViewIds.AddDefaulted(1);
    this->ImportMaxRecordsPerRequest = 1000;
    this->ExportMaxRecordsPerRequest = 1000;
    this->bUseCombinedNamespaceId = false;
    this->bAlsoExportNamespaceColumn = false;
    this->NamespaceColumnId = TEXT("path");
    this->SourceLanguageColumnIdPrefix = TEXT("src_");
    this->TargetLanguageColumnIdPrefix = TEXT("tg_");
    this->bUseCustomCultureMapping = true;
    this->bExportContext = true;
    this->ContextColumnId = TEXT("src_context");
    this->bExportMetadata = true;
}


