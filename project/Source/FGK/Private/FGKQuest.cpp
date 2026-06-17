#include "FGKQuest.h"

UFGKQuest::UFGKQuest() {
    this->Requirement = NULL;
}

FText UFGKQuest::GetTitle() const {
    return FText::GetEmpty();
}

TArray<FRequirementDetails> UFGKQuest::GetRequirementDetails() const {
    return TArray<FRequirementDetails>();
}

FName UFGKQuest::GetID() const {
    return NAME_None;
}

AFGKBaseCharacter* UFGKQuest::GetCompleter() const {
    return NULL;
}

FText UFGKQuest::GetBlurb() const {
    return FText::GetEmpty();
}


