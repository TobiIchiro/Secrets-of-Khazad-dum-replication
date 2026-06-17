#include "MorChallengeInteractable.h"
#include "FGKActorFSMComponent.h"
#include "FGKFilteredInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AMorChallengeInteractable::AMorChallengeInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bChallengeRepeatable = false;
    this->bRepeatIsFree = true;
    this->bAllowPartialPayment = false;
    this->bIsOpenForRewards = false;
    this->bHasManualActivation = true;
    this->bHasUnpaidInteraction = false;
    this->bCanRollLoot = true;
    this->bWaitsForLinkedContainer = false;
    this->bDontDestroyOnSaveLoad = false;
    this->bWasActivated = false;
    this->bWasPaid = false;
    this->bActivatedSinceReleasePatch = false;
    this->bPaidForSinceReleasePatch = false;
    this->bNeedsToBreakForReleasePatch = false;
    this->bWasInteractedWith = false;
    this->bWasLoaded = false;
    this->bIsLoading = false;
    this->bWasOverWritten = false;
    this->DefaultDropItem = NULL;
    this->RewardBuff = NULL;
    this->RewardStorageLocation = EMorLootRewardStorageType::DropOnGround;
    this->bWasSetup = false;
    this->EnabledOnlyFor = NULL;
    this->TemperatureModifier = 0.00f;
    this->Inventory = CreateDefaultSubobject<UFGKFilteredInventoryComponent>(TEXT("InventoryComponent"));
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InteractableFSMComp"));
    this->LinkedContainer = NULL;
    this->bUseCollectibleHighlight = false;
}

bool AMorChallengeInteractable::WasPaid() const {
    return false;
}

bool AMorChallengeInteractable::WasActivated() const {
    return false;
}

void AMorChallengeInteractable::SetWasPaid(bool NewValue) {
}

void AMorChallengeInteractable::SetWasActivated(bool NewValue) {
}

void AMorChallengeInteractable::SetOnlyInteractor(const AMorCharacter* Interactor) {
}

void AMorChallengeInteractable::SetEquipmentForAnimation(ACharacter* Interactor) {
}

void AMorChallengeInteractable::RestoreEquipmentForAnimation(ACharacter* Interactor) {
}

void AMorChallengeInteractable::OnSaveSystemWorldStateIsReady() {
}

void AMorChallengeInteractable::OnLoadedFromSave_Implementation() {
}

bool AMorChallengeInteractable::IsChallengeFree() {
    return false;
}

UInventoryComponent* AMorChallengeInteractable::GetRewardInventory() const {
    return NULL;
}

void AMorChallengeInteractable::DropRewardItem(const FTransform& DropLocation) {
}

void AMorChallengeInteractable::DropRecipeFragmentRewardsLoot(const FMorChallengeRecipeFragmentRewardsRequest& Request, const FTransform& DropLocation) {
}

void AMorChallengeInteractable::DisableCollectibleHighlight() {
}

void AMorChallengeInteractable::ClearLoadedFlag() {
}

bool AMorChallengeInteractable::AreAllPartsCompleted() {
    return false;
}

void AMorChallengeInteractable::ApplyRewardBuff() {
}


void AMorChallengeInteractable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorChallengeInteractable, ChallengeElementData);
    DOREPLIFETIME(AMorChallengeInteractable, bWasActivated);
    DOREPLIFETIME(AMorChallengeInteractable, bActivatedSinceReleasePatch);
    DOREPLIFETIME(AMorChallengeInteractable, EnabledOnlyFor);
    DOREPLIFETIME(AMorChallengeInteractable, ToolRowHandlesRequiredToPayCost);
}


