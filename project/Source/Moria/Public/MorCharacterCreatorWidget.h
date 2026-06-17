#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorUIMainMenuScreen.h"
#include "MorCharacterCreatorWidget.generated.h"

class UCustomizationManager;
class UMorCharacterCustomizationRowWidget;
class UMorPhysiqueValueWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterCreatorWidget : public UMorUIMainMenuScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomizationManager* CustomizationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UMorCharacterCustomizationRowWidget*> RowCustomizationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UMorPhysiqueValueWidget*> PhysiqueCustomizationWidgets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CharacterDefaultRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterUnrotationDelay;
    
public:
    UMorCharacterCreatorWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateGuiFromCustomizationManager();
    
    UFUNCTION(BlueprintCallable)
    void UnrotateCharacter(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowSecretMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationManager(UCustomizationManager* InCustomizationManager);
    
    UFUNCTION(BlueprintCallable)
    void RotateCharacter(const float AxisInput);
    
};

