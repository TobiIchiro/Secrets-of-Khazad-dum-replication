#include "MorOptionHandler.h"

UMorOptionHandler::UMorOptionHandler() {
    this->OptionManager = NULL;
}

void UMorOptionHandler::StartModifications() {
}

void UMorOptionHandler::SaveOptions(bool bAsynchronous) {
}

UFGKOption* UMorOptionHandler::HandlerGetOption(const FName& OptionName) {
    return NULL;
}

UMorOptionManager* UMorOptionHandler::GetOwningManager() const {
    return NULL;
}

EOptionHandlerState UMorOptionHandler::GetOptionCurrentState() const {
    return EOptionHandlerState::Options_Unchanged;
}

void UMorOptionHandler::CancelModifications() {
}


