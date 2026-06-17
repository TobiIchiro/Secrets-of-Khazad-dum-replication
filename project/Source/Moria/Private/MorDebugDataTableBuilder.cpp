#include "MorDebugDataTableBuilder.h"

UMorDebugDataTableBuilder::UMorDebugDataTableBuilder() {
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::EndRow() {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::BeginRowByObject(const UObject* RowObject) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::BeginRow(const FString& RowName) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddText(const FString& Column, const FText& Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddRowHandle(const FString& Column, const FFGKDataTableRowHandle& Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddObject(const FString& Column, const UObject* Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddName(const FString& Column, const FName& Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddInt(const FString& Column, int32 Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddFloat(const FString& Column, float Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::AddBool(const FString& Column, bool Value) {
    return NULL;
}

UMorDebugDataTableBuilder* UMorDebugDataTableBuilder::Add(const FString& Column, const FString& Value) {
    return NULL;
}


