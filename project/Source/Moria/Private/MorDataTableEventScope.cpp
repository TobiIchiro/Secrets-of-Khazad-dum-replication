#include "MorDataTableEventScope.h"

UMorDataTableEventScope::UMorDataTableEventScope() {
    this->DelegateDataTable = NULL;
}

void UMorDataTableEventScope::RegisterForDataTableChange(FMorDataTableDelegate Delegate, UDataTable* InDataTable) {
}

void UMorDataTableEventScope::Clear() {
}


