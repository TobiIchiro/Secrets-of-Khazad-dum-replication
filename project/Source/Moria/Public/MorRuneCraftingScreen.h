#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "FGKUIScreen.h"
#include "GameplayTagContainer.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorRuneCraftingScreen.generated.h"

class ACharacter;
class AMorRuneCraftingStation;
class UMorRuneEffect;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorRuneCraftingScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* Crafter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorRuneCraftingStation* RuneCraftingStation;
    
public:
    UMorRuneCraftingScreen();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuneLearned(UMorRuneEffect* Rune) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuneInscribed(FItemHandle ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuneInscribable(FItemHandle ItemHandle, UMorRuneEffect* Rune) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InscribeRune(FItemHandle ItemHandle, UMorRuneEffect* Rune) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorRequiredRecipeMaterial> GetRuneCosts(UMorRuneEffect* Rune) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetItemsToInscribe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayCost(UMorRuneEffect* Rune) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInscribeRune(FItemHandle ItemHandle) const;
    
};

