#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorIconOffset.h"
#include "MorItemDefinition.h"
#include "MorItemRecipeDefinition.h"
#include "MorLoreRowHandle.h"
#include "MorTipRowHandle.h"
#include "MorTutorialRowHandle.h"
#include "OnPopUpButtonClickedDelegate.h"
#include "PopUpOptions.h"
#include "MorUIFunctionLibrary.generated.h"

class AInventoryItem;
class APlayerController;
class UDataTable;
class UMaterialInstanceDynamic;
class UMorBreadcrumbsSubsystem;
class UMorPopUpWidget;
class UObject;
class UTexture;

UCLASS(Blueprintable)
class MORIA_API UMorUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorUIFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UpdateBreadcrumbCounts(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool TryClosePopUp(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static UMorPopUpWidget* ShowPopUpWithoutCallback(APlayerController* Owner, FPopUpOptions PopUpOptions, UObject* ParentWidget);
    
    UFUNCTION(BlueprintCallable)
    static UMorPopUpWidget* ShowPopUp(APlayerController* Owner, FPopUpOptions PopUpOptions, const FOnPopUpButtonClicked& OnClickedEvent, UObject* ParentWidget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetIconOffsetParameters(const UObject* WorldContext, UMaterialInstanceDynamic* MaterialInstance, const UTexture* Texture, const FVector2D& NormOffset, float Rotation, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void SetCustomNavigationConfig(bool bKeyNavigation, bool bTabNavigation, bool bAnalogNavigation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SaveCurrentWorld(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeRecordTutorialBreadcrumbs(const UObject* WorldContext, const FMorTutorialRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeRecordTipBreadcrumbs(const UObject* WorldContext, const FMorTipRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeRecordLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeRecordItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeRecordConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeForgetLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeForgetItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeForgetConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeClearTutorialBreadcrumbs(const UObject* WorldContext, const FMorTutorialRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeClearTipBreadcrumbs(const UObject* WorldContext, const FMorTipRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeClearLoreBreadcrumbs(const UObject* WorldContext, const FMorLoreRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeClearItemRecipeBreadcrumbs(const UObject* WorldContext, const FMorItemRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void NativeClearConstructionRecipeBreadcrumbs(const UObject* WorldContext, const FMorConstructionRecipeDefinition& RecipeDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetPlatformImageForKeySet(const TArray<FKey>& InKeys, const ECommonInputType& CurrentInputType, const FName& CurrentControllerName, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetPlatformImageForKey(const FKey& InKey, const ECommonInputType& CurrentInputType, const FName& CurrentControllerName, bool& Success);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetIconOffsetByTexture(const UObject* WorldContext, UDataTable* DataTable, const TSoftObjectPtr<UTexture>& Texture, FMorIconOffset& OutIconOffset, bool& bOutDefault);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetIconOffsetByItemDefinition(const UObject* WorldContext, UDataTable* DataTable, const FMorItemDefinition& ItemDefinition, FMorIconOffset& OutIconOffset, bool& bOutDefault);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetIconOffsetByItem(const UObject* WorldContext, UDataTable* DataTable, const AInventoryItem* InventoryItem, FMorIconOffset& OutIconOffset, bool& bOutDefault);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorBreadcrumbsSubsystem* GetBreadcrumbsSubsystem(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInputActionKeyMapping> GetActionMappingsByName(const FName& ActionName, APlayerController* PlayerController);
    
};

