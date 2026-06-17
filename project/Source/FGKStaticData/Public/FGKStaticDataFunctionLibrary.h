#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGKDataTableRowHandle.h"
#include "FGKStaticDataFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class FGKSTATICDATA_API UFGKStaticDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKStaticDataFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessThan_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LessThan_NameName(const FName& A, const FName& B);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidRowHandle(const FFGKDataTableRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterThan_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GreaterThan_NameName(const FName& A, const FName& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetRowNameFromHandle(const FFGKDataTableRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActualRowNameFromHandle(const FFGKDataTableRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_RowHandleRowHandle(const FFGKDataTableRowHandle& A, const FFGKDataTableRowHandle& B);
    
};

