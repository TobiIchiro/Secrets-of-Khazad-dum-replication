#include "WorldLayout.h"
#include "Components/SceneComponent.h"
#include "MorBubbleActivationManager.h"
#include "MorLayoutParcelizer.h"
#include "MorLayoutValidationComponent.h"
#include "MorWorldTourComponent.h"
#include "Net/UnrealNetwork.h"

AWorldLayout::AWorldLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->BubbleCatalog = NULL;
    this->bRequireVoxels = true;
    this->LocationReference = NULL;
    this->RoutingDirectness = 80.00f;
    this->bShowGenerationResults = false;
    this->bCuratedMap = false;
    this->bSafeMode = false;
    this->Tier1DirtPlugMineral = NULL;
    this->Tier2DirtPlugMineral = NULL;
    this->bPersistWorldLayout = true;
    this->bSplitBubbles = true;
    this->CellSearchExpandAttempts = 8;
    this->CellSearchAttempts = 20;
    this->StartCellActivationPriority = 0;
    this->ZoomieDelayFrames = 30;
    this->CellDeactivateFrames = 600;
    this->SignpostDepthLimit = 10;
    this->ChallengeManager = NULL;
    this->BubbleActivationManager = CreateDefaultSubobject<UMorBubbleActivationManager>(TEXT("BubbleActivationManager"));
    this->Parcelizer = CreateDefaultSubobject<UMorLayoutParcelizer>(TEXT("Parcelizer"));
    this->LayoutValidation = CreateDefaultSubobject<UMorLayoutValidationComponent>(TEXT("LayoutValidationComponent"));
    this->WorldScreenshot = CreateDefaultSubobject<UMorWorldTourComponent>(TEXT("WorldScreenshotComponent"));
    this->NavManager = NULL;
}

FIntVector AWorldLayout::WorldToLayout(const FVector& WorldCoord) const {
    return FIntVector{};
}

FString AWorldLayout::WorldLayoutWarnings() {
    return TEXT("");
}

FString AWorldLayout::WorldInfo() {
    return TEXT("");
}

UWorldLayoutBubble* AWorldLayout::TryGetBubbleAt(const FVector& WorldPosition) const {
    return NULL;
}

void AWorldLayout::Sync(const FString& Context, int32 Checksum) {
}

FString AWorldLayout::SignPostInfo(FIntVector Coord) {
    return TEXT("");
}

void AWorldLayout::Server_Sync_Implementation(const FString& Node, const FString& Context, int32 Checksum) {
}

void AWorldLayout::OnRep_VisitedBubbles(const TArray<FMorVisitedBubbleData>& OldData) {
}

FVector AWorldLayout::LayoutToWorld(const FIntVector& LayoutCoord) const {
    return FVector{};
}

FMorZoneRowHandle AWorldLayout::GetZoneHandleAt(const FVector& WorldPosition) {
    return FMorZoneRowHandle{};
}

FText AWorldLayout::GetZoneDisplayNameAt(const FVector& WorldPosition) {
    return FText::GetEmpty();
}

FName AWorldLayout::GetZoneAt(const FVector& WorldPosition) {
    return NAME_None;
}

FWorldLayoutCell AWorldLayout::GetRootCellAt(const FVector& WorldPosition) {
    return FWorldLayoutCell{};
}

FMorChapterRowHandle AWorldLayout::GetPreviousChapter(FMorChapterRowHandle ChapterId) {
    return FMorChapterRowHandle{};
}

FWorldLayoutCell AWorldLayout::GetPhysicalCellAt(const FVector& WorldPosition) {
    return FWorldLayoutCell{};
}

FMorChapterRowHandle AWorldLayout::GetNextChapter(FMorChapterRowHandle ChapterId) {
    return FMorChapterRowHandle{};
}

FMorLandmarkRowHandle AWorldLayout::GetLandmarkAt(const FVector& WorldPosition) {
    return FMorLandmarkRowHandle{};
}

FMorChapterRowHandle AWorldLayout::GetChapterForID(int32 ChapterId) {
    return FMorChapterRowHandle{};
}

FMorChapterRowHandle AWorldLayout::GetChapterAt(const FVector& WorldPosition) {
    return FMorChapterRowHandle{};
}

FTransform AWorldLayout::GetCellWorldTransform(const FIntVector& Coord) {
    return FTransform{};
}

FVector AWorldLayout::GetCellSize() {
    return FVector{};
}

FString AWorldLayout::GetCellInterfaceInfo(const FWorldLayoutCell& Cell) {
    return TEXT("");
}

FString AWorldLayout::GetCellInfo(const UWorldLayoutBubble* Bubble) {
    return TEXT("");
}

EBubbleState AWorldLayout::GetBubbleStatusForActor(const AActor* Actor) {
    return EBubbleState::Inactive;
}

FString AWorldLayout::GetBubbleHudInfo(const UWorldLayoutBubble* Bubble) {
    return TEXT("");
}

FText AWorldLayout::GetBubbleDepthStringOverride(const FVector& WorldPosition) {
    return FText::GetEmpty();
}

UWorldLayoutBubble* AWorldLayout::GetBubbleAt(const FVector& WorldPosition) {
    return NULL;
}

UWorldLayoutBubble* AWorldLayout::BubbleAt(const FIntVector& Position) const {
    return NULL;
}

bool AWorldLayout::AreBothWorldPositionsAtSameCellDepth(const FVector& WorldPositionA, const FVector& WorldPositionB) {
    return false;
}

void AWorldLayout::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWorldLayout, BubblesVisitedByPlayers);
}


