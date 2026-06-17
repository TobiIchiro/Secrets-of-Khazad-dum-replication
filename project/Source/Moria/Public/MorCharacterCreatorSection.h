#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EMorCharacterCreatorSectionState.h"
#include "OnSectionStateChangedDelegate.h"
#include "MorCharacterCreatorSection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterCreatorSection : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSectionHovered;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSectionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSectionStateChanged OnSectionStateChanged;
    
    UMorCharacterCreatorSection();

    UFUNCTION(BlueprintCallable)
    void SetSectionSelected(bool bSelected);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSectionHovered(bool bHovered);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorCharacterCreatorSectionState GetSectionState() const;
    
};

