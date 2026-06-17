#include "MorWidgetNavigationUtils.h"

UMorWidgetNavigationUtils::UMorWidgetNavigationUtils() {
}

FMorWidgetNavigationBuilderHandle UMorWidgetNavigationUtils::StartNewRow(FMorWidgetNavigationBuilderHandle BuilderHandle) {
    return FMorWidgetNavigationBuilderHandle{};
}

FMorWidgetNavigationBuilderHandle UMorWidgetNavigationUtils::InitNavigationBuilder(UWidget* Parent, int32 Options) {
    return FMorWidgetNavigationBuilderHandle{};
}

UWidget* UMorWidgetNavigationUtils::GetFirstNavigableWidget(FMorWidgetNavigationBuilderHandle BuilderHandle) {
    return NULL;
}

void UMorWidgetNavigationUtils::FinishNavigationBuilder(FMorWidgetNavigationBuilderHandle BuilderHandle) {
}

void UMorWidgetNavigationUtils::ConfigureVerticalNavigationList(const TArray<UWidget*>& Widgets, UWidget* Parent, int32 Options) {
}

FMorWidgetNavigationBuilderHandle UMorWidgetNavigationUtils::AddRow(FMorWidgetNavigationBuilderHandle BuilderHandle, UWidget* Widget) {
    return FMorWidgetNavigationBuilderHandle{};
}

FMorWidgetNavigationBuilderHandle UMorWidgetNavigationUtils::AddColumn(FMorWidgetNavigationBuilderHandle BuilderHandle, UWidget* Widget) {
    return FMorWidgetNavigationBuilderHandle{};
}


