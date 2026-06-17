#include "MorCharacterCreatorRenameDialog.h"

UMorCharacterCreatorRenameDialog::UMorCharacterCreatorRenameDialog() {
    this->MaxNameLength = 32;
    this->DisallowedWords = FText::FromString(TEXT("arse\x00A7")TEXT("feck"));
    this->RenameBox = NULL;
}

bool UMorCharacterCreatorRenameDialog::CheckNewCharacterName_Implementation(const FString& NewName) {
    return false;
}


