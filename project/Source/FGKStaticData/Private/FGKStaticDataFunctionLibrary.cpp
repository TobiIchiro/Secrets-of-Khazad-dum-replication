#include "FGKStaticDataFunctionLibrary.h"

UFGKStaticDataFunctionLibrary::UFGKStaticDataFunctionLibrary() {
}

bool UFGKStaticDataFunctionLibrary::LessThan_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B) {
    return false;
}

bool UFGKStaticDataFunctionLibrary::LessThan_NameName(const FName& A, const FName& B) {
    return false;
}

bool UFGKStaticDataFunctionLibrary::IsValidRowHandle(const FFGKDataTableRowHandle& RowHandle) {
    return false;
}

bool UFGKStaticDataFunctionLibrary::GreaterThan_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B) {
    return false;
}

bool UFGKStaticDataFunctionLibrary::GreaterThan_NameName(const FName& A, const FName& B) {
    return false;
}

FName UFGKStaticDataFunctionLibrary::GetRowNameFromHandle(const FFGKDataTableRowHandle& RowHandle) {
    return NAME_None;
}

FName UFGKStaticDataFunctionLibrary::GetActualRowNameFromHandle(const FFGKDataTableRowHandle& RowHandle) {
    return NAME_None;
}

bool UFGKStaticDataFunctionLibrary::EqualEqual_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B) {
    return false;
}


