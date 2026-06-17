#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "Templates/SubclassOf.h"
#include "MorRuneCraftingStation.generated.h"

class ACharacter;
class UFGKActorFSMComponent;
class UMorRuneCraftingScreen;
class UMorRuneEffect;

UCLASS(Blueprintable)
class MORIA_API AMorRuneCraftingStation : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorRuneCraftingScreen> RuneCraftingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorRuneEffect*> Runes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultDisplayName;
    
public:
    AMorRuneCraftingStation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowRuneCraftingScreen(ACharacter* Interactor) const;
    
};

