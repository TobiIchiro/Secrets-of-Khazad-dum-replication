#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "EMorTutorialAction.h"
#include "MorConstructionRecipeRowHandle.h"
#include "MorTutorialRowHandle.h"
#include "OnLightChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorTutorialComponent.generated.h"

class ACharacter;
class AMorItemBase;
class AMorPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLightChanged OnLightChanged;
    
    UMorTutorialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TriggerTutorialUponCompletion(ACharacter* Player, const FMorTutorialRowHandle& CompletedTutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void TriggerTutorial(ACharacter* Player, const FMorTutorialRowHandle& TutorialRowHandle);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetTutorialEntrySelected(AMorPlayerController* Player, const FMorTutorialRowHandle& TutorialRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReportTutorialRepairAction(ACharacter* Player, EMorTutorialAction TutorialAction, FMorConstructionRecipeRowHandle ConstructionRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReportTutorialItemAction(ACharacter* Player, EMorTutorialAction TutorialAction, TSubclassOf<AMorItemBase> ItemClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReportTutorialAction(ACharacter* Player, EMorTutorialAction TutorialAction);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(const FItemHandle& Item);
    
};

