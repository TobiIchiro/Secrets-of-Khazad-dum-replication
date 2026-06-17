#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKDataTableRowHandle.h"
#include "MorDebugDataTableBuilder.generated.h"

class UMorDebugDataTableBuilder;

UCLASS(Blueprintable)
class MORIA_API UMorDebugDataTableBuilder : public UObject {
    GENERATED_BODY()
public:
    UMorDebugDataTableBuilder();

    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* EndRow();
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* BeginRowByObject(const UObject* RowObject);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* BeginRow(const FString& RowName);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddText(const FString& Column, const FText& Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddRowHandle(const FString& Column, const FFGKDataTableRowHandle& Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddObject(const FString& Column, const UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddName(const FString& Column, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddInt(const FString& Column, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddFloat(const FString& Column, float Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* AddBool(const FString& Column, bool Value);
    
    UFUNCTION(BlueprintCallable)
    UMorDebugDataTableBuilder* Add(const FString& Column, const FString& Value);
    
};

