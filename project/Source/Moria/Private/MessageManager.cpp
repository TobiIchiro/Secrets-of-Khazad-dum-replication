#include "MessageManager.h"

AMessageManager::AMessageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatingWidgetComponentClass = NULL;
}

void AMessageManager::QueueDamageMessage(FMorDamageMessage Message) {
}

void AMessageManager::MulticastRestoreMessage_Implementation(FMorRestoreMessage Message) {
}

void AMessageManager::MulticastPerfectBlockMessage_Implementation(FMorPerfectBlockMessage Message) {
}

void AMessageManager::MulticastDamageMessage_Implementation(const TArray<FMorDamageMessage>& Messages) {
}


