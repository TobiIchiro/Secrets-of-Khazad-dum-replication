#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EModularCharacterSlot.h"
#include "FGKBaseCharacter.h"
#include "CustomizationBodyData.h"
#include "CustomizationCraftData.h"
#include "CustomizationPresetData.h"
#include "ECustomizationTable.h"
#include "ModularCharacterInterface.h"
#include "SavedMorphEntry.h"
#include "VoiceInterface.h"
#include "MorCustomizationMannequin.generated.h"

class UAkComponent;
class UCustomizationManager;
class UModularCharacterComponent;
class USkeletalMeshComponent;
class UVoiceComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCustomizationMannequin : public AFGKBaseCharacter, public IModularCharacterInterface, public IVoiceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UModularCharacterComponent* ModularCharacter;
    
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
    bool bEnableBodyCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationBodyData CustomBodyToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCustomizationPresetData FullCustomizationsToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, USkeletalMeshComponent*> ModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomizationManager* CustomizationManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* VoiceAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceComponent* Voice;
    
public:
    AMorCustomizationMannequin(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetEquipment();
    

    // Fix for true pure virtual functions not being implemented
};

