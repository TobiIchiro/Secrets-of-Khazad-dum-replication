#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EModularCharacterSlot.h"
#include "FGKComponentWithReplicatorInterface.h"
#include "CharacterCustomizations.h"
#include "CustomizationsLocallyAppliedDelegateDelegate.h"
#include "ECharacterCustomizationPropertyType.h"
#include "ECustomizationTable.h"
#include "EMeshMorphs.h"
#include "MergingMeshesParameters.h"
#include "MorMeshCustomizationData.h"
#include "CustomizationManager.generated.h"

class AController;
class IModularCharacterInterface;
class UModularCharacterInterface;
class UDataTable;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UCustomizationManager : public UActorComponent, public IFGKComponentWithReplicatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickedCustomizationRow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationsLocallyAppliedDelegate OnCustomizationsLocallyApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTestingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDwarfCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Customizations, meta=(AllowPrivateAccess=true))
    FCharacterCustomizations Customizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, USkeletalMeshComponent*> MeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* CustomizationDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharacterToCustomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultPresetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECustomizationTable, UDataTable*> DTMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IModularCharacterInterface> ValidOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePresetOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipBuildOnInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeDefaultPresetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighAsyncLoadPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMergingMeshesParameters MergeMeshesParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNetworkDemoMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FMorMeshCustomizationData> MainSlotMeshCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FMorMeshCustomizationData> ExternSlotMeshCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FMorMeshCustomizationData> FinalSlotMeshCustomizations;
    
public:
    UCustomizationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnmergeMeshes();
    
    UFUNCTION(BlueprintCallable)
    void StartEmotePreview(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetVoice(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetTattooColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetTattoo(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetSkinColor(const FDataTableRowHandle& ColorHandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetScar(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetPersonality(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetOrigin(const FDataTableRowHandle& HandleIn, bool bUpdateCrafts, bool bApplyStarterCrafts);
    
    UFUNCTION(BlueprintCallable)
    void SetMorph(const EMeshMorphs& MorphIn, const float ValueIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHead(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHairDecorativeColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHairColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHair(const FDataTableRowHandle& HandleIn, bool UseHelmetHair);
    
    UFUNCTION(BlueprintCallable)
    void SetEyeColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationProperty(ECharacterCustomizationPropertyType PropertyType, const FDataTableRowHandle& PropertyRow);
    
    UFUNCTION(BlueprintCallable)
    void SetCraftItem(ECharacterCustomizationPropertyType PropertyType, const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetCraft(const FDataTableRowHandle& HandleIn, bool bClearOverrides);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterPreset(FDataTableRowHandle HandleIn, bool bClearCraftOverrides);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterName(const FString& NewCharacterName);
    
    UFUNCTION(BlueprintCallable)
    void SetBody(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetBeardDecorativeColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetBeardColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetBeard(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetBackpackColor(const FDataTableRowHandle& HandleIn);
    
    UFUNCTION(BlueprintCallable)
    void SetBackpack(const FDataTableRowHandle& HandleIn);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCustomizations(const FCharacterCustomizations& CustomizationsIn);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemergeMeshes();
    
    UFUNCTION(BlueprintCallable)
    void Randomize();
    
    UFUNCTION(BlueprintCallable)
    void PlayRandomVoicePreview();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Customizations();
    
public:
    UFUNCTION(BlueprintCallable)
    void MergeMeshes();
    
    UFUNCTION(BlueprintCallable)
    void LocalSetupOnPossession(AController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingFinished() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMorph(const EMeshMorphs& MorphIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCharacterName();
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets();
    

    // Fix for true pure virtual functions not being implemented
};

