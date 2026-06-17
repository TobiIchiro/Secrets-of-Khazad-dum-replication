#include "MorProfanityFilter.h"

UMorProfanityFilter::UMorProfanityFilter() {
    this->TimeoutDelay = 10.00f;
    this->SessionManager = NULL;
    this->bTryFilterInSingleplayer = false;
    this->bCensorOnFailure = false;
}

FMorFilteredStringHandle UMorProfanityFilter::SetTextOptional(UWidget* TextWidget, const FText& UnprocessedText, bool bFilterText, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::SetText(UWidget* TextWidget, const FText& UnprocessedText, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::SetCharacterLabelFromActor(UWidget* TextWidget, const AActor* Actor, bool bFullName, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::SetCharacterLabel(UWidget* TextWidget, const FString& PlayerName, const FString& CharacterName, EMorFilteredCharacterNameFormat Format, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::ProcessStringOptional(const FString& UnprocessedString, bool bFilterString, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::ProcessString(const FString& UnprocessedString, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished) {
    return FMorFilteredStringHandle{};
}

FMorFilteredStringHandle UMorProfanityFilter::ProcessCharacterName(const FString& PlayerName, const FString& CharacterName, EMorFilteredCharacterNameFormat Format, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished) {
    return FMorFilteredStringHandle{};
}

void UMorProfanityFilter::HandleOnPlayerLoginStatusChanged(EPlayerLoginStatus LoginStatus) {
}

UMorProfanityFilter::FOnTextUpdatedDynamic UMorProfanityFilter::GetEmptyTextUpdatedEvent() {
    return UMorProfanityFilter::FOnTextUpdatedDynamic();
}

UMorProfanityFilter* UMorProfanityFilter::Get(const UObject* WorldContext) {
    return NULL;
}

void UMorProfanityFilter::DeactivateScope(const FName& ScopeName) {
}

void UMorProfanityFilter::DeactivateProfanityFilterScope(const FName& ScopeName, const UObject* ContextObject) {
}

void UMorProfanityFilter::CancelTextRequest(UWidget* TextWidget) {
}

void UMorProfanityFilter::CancelRequest(FMorFilteredStringHandle& Handle) {
}

void UMorProfanityFilter::ActivateScope(const FName& ScopeName, const UObject* ContextObject) {
}

void UMorProfanityFilter::ActivateProfanityFilterScope(const FName& ScopeName, const UObject* ContextObject) {
}


