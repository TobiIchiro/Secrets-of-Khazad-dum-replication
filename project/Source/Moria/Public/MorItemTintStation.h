#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorItemTintStation.generated.h"

class ACharacter;
class UFGKActorFSMComponent;
class UMorItemTintEffect;
class UMorItemTintScreen;

UCLASS(Blueprintable)
class MORIA_API AMorItemTintStation : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMorItemTintScreen> ItemTintScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorItemTintEffect*> TintEffects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
public:
    AMorItemTintStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowTintCraftingScreen(ACharacter* Interactor) const;
    
};

