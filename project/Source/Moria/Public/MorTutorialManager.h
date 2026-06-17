#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorTrackedTutorials.h"
#include "MorTutorialCompleteSignatureDelegate.h"
#include "MorTutorialDisplaySignatureDelegate.h"
#include "MorTutorialRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorTutorialManager.generated.h"

class ACharacter;
class AMorPlayerController;
class APawn;
class APlayerController;
class UAnimMontage;
class UDataTable;
class UMorGameplayAbility_Tutorial;
class UMorTutorialComponent;

UCLASS(Blueprintable)
class MORIA_API AMorTutorialManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTutorialDisplaySignature ShowTutorialDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTutorialCompleteSignature TutorialComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TutorialTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorGameplayAbility_Tutorial> AnimationAbilityToPlayOnFinishingTutorialSegment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTrackedTutorials ServerTrackedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTrackedTutorials ServerAllTrackedTutorials;
    
public:
    AMorTutorialManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerTutorialUponCompletion(ACharacter* Player, const FMorTutorialRowHandle& CompletedTutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void TriggerTutorial(ACharacter* Player, const FMorTutorialRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialEntrySelected(AMorPlayerController* Player, const FMorTutorialRowHandle& TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void PlayTutorialAnimationWhenPossible(ACharacter* Player, UAnimMontage* Anim);
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialListItemCompleted(const ACharacter* Player, FMorTutorialRowHandle Tutorial, int32 TutorialListItemIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialCompleted(const ACharacter* Player, FMorTutorialRowHandle Tutorial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorTutorialComponent* GetTutorialComponentFromPawn(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorTutorialComponent* GetTutorialComponentFromController(const APlayerController* Controller) const;
    
    UFUNCTION(BlueprintCallable)
    void GetClientTutorials(TArray<FMorTutorialRowHandle>& ClientTutorials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTriggerTutorial(const ACharacter* Player, FMorTutorialRowHandle Tutorial) const;
    

    // Fix for true pure virtual functions not being implemented
};

