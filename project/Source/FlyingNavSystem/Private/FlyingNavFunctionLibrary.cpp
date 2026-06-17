#include "FlyingNavFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UFlyingNavFunctionLibrary::UFlyingNavFunctionLibrary() {
}

TArray<FVector> UFlyingNavFunctionLibrary::SmoothPathPoints(const TArray<FVector>& PathPoints, const float SampleLength) {
    return TArray<FVector>();
}

UNavigationPath* UFlyingNavFunctionLibrary::SmoothPath(const UObject* WorldContextObject, UNavigationPath* Path, const float SampleLength) {
    return NULL;
}

UNavigationPath* UFlyingNavFunctionLibrary::SetNavigationPathPoints(const UObject* WorldContextObject, UNavigationPath* NavPath, const TArray<FVector>& PathPoints) {
    return NULL;
}

void UFlyingNavFunctionLibrary::RequestMove(UNavigationPath* PathToFollow, AAIController* Controller) {
}

void UFlyingNavFunctionLibrary::RebuildAllFlyingNavigation(const UObject* WorldContextObject) {
}

UCatmullRomSpline* UFlyingNavFunctionLibrary::MakeCatmullRomSpline(const TArray<FVector>& PathPoints) {
    return NULL;
}

bool UFlyingNavFunctionLibrary::IsPositionAValidEndpoint(const APawn* NavAgent, const FVector& Position, const bool bAllowBlocked) {
    return false;
}

EPathfindingResult UFlyingNavFunctionLibrary::GetPathfindingResult(UNavigationPath* Path) {
    return EPathfindingResult::Invalid;
}

AFlyingNavigationData* UFlyingNavFunctionLibrary::GetFlyingNavigationData(const APawn* NavAgent) {
    return NULL;
}

FVector UFlyingNavFunctionLibrary::GetActorFeetOffset(const APawn* Pawn) {
    return FVector{};
}

FVector UFlyingNavFunctionLibrary::GetActorFeetLocation(const APawn* Pawn) {
    return FVector{};
}

UNavigationPath* UFlyingNavFunctionLibrary::FindPathToLocationAsynchronously(UObject* WorldContextObject, const FLatentActionInfo LatentInfo, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return NULL;
}

UNavigationPath* UFlyingNavFunctionLibrary::FindPathToActorAsynchronously(UObject* WorldContextObject, const FLatentActionInfo LatentInfo, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return NULL;
}

void UFlyingNavFunctionLibrary::DrawNavPath(const UObject* WorldContextObject, UNavigationPath* NavPath, const FLinearColor PathColor, const FVector PathOffset, const bool bPersistent) {
}


