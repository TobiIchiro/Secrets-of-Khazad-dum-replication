#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorWidgetNavigationBuilderHandle.h"
#include "MorWidgetNavigationUtils.generated.h"

class UWidget;

UCLASS(Blueprintable)
class MORIA_API UMorWidgetNavigationUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorWidgetNavigationUtils();

    UFUNCTION(BlueprintCallable)
    static FMorWidgetNavigationBuilderHandle StartNewRow(FMorWidgetNavigationBuilderHandle BuilderHandle);
    
    UFUNCTION(BlueprintCallable)
    static FMorWidgetNavigationBuilderHandle InitNavigationBuilder(UWidget* Parent, int32 Options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidget* GetFirstNavigableWidget(FMorWidgetNavigationBuilderHandle BuilderHandle);
    
    UFUNCTION(BlueprintCallable)
    static void FinishNavigationBuilder(FMorWidgetNavigationBuilderHandle BuilderHandle);
    
    UFUNCTION(BlueprintCallable)
    static void ConfigureVerticalNavigationList(const TArray<UWidget*>& Widgets, UWidget* Parent, int32 Options);
    
    UFUNCTION(BlueprintCallable)
    static FMorWidgetNavigationBuilderHandle AddRow(FMorWidgetNavigationBuilderHandle BuilderHandle, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FMorWidgetNavigationBuilderHandle AddColumn(FMorWidgetNavigationBuilderHandle BuilderHandle, UWidget* Widget);
    
};

