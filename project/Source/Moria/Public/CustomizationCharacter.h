#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EModularCharacterSlot.h"
#include "CustomizationBodyData.h"
#include "CustomizationCraftData.h"
#include "CustomizationCraftItemData.h"
#include "CustomizationPresetData.h"
#include "ECustomizationTable.h"
#include "MorCharacter.h"
#include "SavedMorphEntry.h"
#include "CustomizationCharacter.generated.h"

class UCustomizationManager;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class MORIA_API ACustomizationCharacter : public AMorCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableLiveEditorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationTable, FDataTableRowHandle> EditorSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSavedMorphEntry> MorphEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableOutfitCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationCraftData CustomCraftToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationCraftItemData CustomCraftHat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationCraftItemData CustomCraftChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationCraftItemData CustomCraftGloves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationCraftItemData CustomCraftLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableBodyCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationBodyData CustomBodyToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationPresetData FullCustomizationsToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, USkeletalMeshComponent*> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomizationManager* CustomizationManager;
    
    ACustomizationCharacter(const FObjectInitializer& ObjectInitializer);

};

