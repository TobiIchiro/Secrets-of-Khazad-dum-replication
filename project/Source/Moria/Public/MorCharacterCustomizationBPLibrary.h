#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EFGKGetDefinitionResult.h"
#include "CharacterCustomizations.h"
#include "CustomizationBackpackColorData.h"
#include "CustomizationBeardData.h"
#include "CustomizationBodyData.h"
#include "CustomizationColorData.h"
#include "CustomizationCraftData.h"
#include "CustomizationCraftItemData.h"
#include "CustomizationHairColorData.h"
#include "CustomizationHairData.h"
#include "CustomizationHeadData.h"
#include "CustomizationOriginData.h"
#include "CustomizationPersonalityData.h"
#include "CustomizationPresetData.h"
#include "CustomizationScarData.h"
#include "CustomizationSkinColorData.h"
#include "CustomizationTattooData.h"
#include "CustomizationVoiceData.h"
#include "MorCharacterCustomizationBPLibrary.generated.h"

class UDataTable;
class UStringTable;

UCLASS(Blueprintable)
class MORIA_API UMorCharacterCustomizationBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorCharacterCustomizationBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void ImportCharacterPreset(const FString& CommaSeparatedValues, const FCharacterCustomizations& DefaultPreset, UDataTable* CharacterPresets, UStringTable* StringTableNpcNames, UStringTable* StringTableFlavor);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationVoiceData GetVoiceData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationTattooData GetTattooData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationSkinColorData GetSkinColorData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationScarData GetScarData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationPresetData GetPresetData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationPersonalityData GetPersonalityData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationOriginData GetOriginData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationHeadData GetHeadData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationHairData GetHairData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationHairColorData GetHairColorData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationCraftItemData GetCraftItemData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationCraftData GetCraftData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationColorData GetColorData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCharacterCustomizations GetCharacterCustomizations(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationBodyData GetBodyData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationBeardData GetBeardData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FCustomizationBackpackColorData GetBackpackColorData(const FDataTableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
};

