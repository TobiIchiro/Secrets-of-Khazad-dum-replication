#include "FGKInputState.h"
#include "Components/InputComponent.h"

UFGKInputState::UFGKInputState() {
    this->InputPriorityOverride = -1;
    this->PlayerController = NULL;
    this->InputComponent = NULL;
    this->InputConfig = NULL;
    this->InputComponentClass = UInputComponent::StaticClass();
}

void UFGKInputState::Input_AnyKey(const FKey& Key) {
}

FString UFGKInputState::GetScoring() const {
    return TEXT("");
}

FString UFGKInputState::GetCurrentInputResults() {
    return TEXT("");
}

AFGKBaseCharacter* UFGKInputState::GetCharacter() const {
    return NULL;
}


