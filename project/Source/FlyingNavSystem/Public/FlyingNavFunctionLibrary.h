#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EPathfindingResult.h"
#include "Templates/SubclassOf.h"
#include "FlyingNavFunctionLibrary.generated.h"

class AAIController;
class AActor;
class AFlyingNavigationData;
class APawn;
class UCatmullRomSpline;
class UNavigationPath;
class UNavigationQueryFilter;
class UObject;

UCLASS(Blueprintable)
class FLYINGNAVSYSTEM_API UFlyingNavFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFlyingNavFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FVector> SmoothPathPoints(const TArray<FVector>& PathPoints, const float SampleLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationPath* SmoothPath(const UObject* WorldContextObject, UNavigationPath* Path, const float SampleLength);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNavigationPath* SetNavigationPathPoints(const UObject* WorldContextObject, UNavigationPath* NavPath, const TArray<FVector>& PathPoints);
    
    UFUNCTION(BlueprintCallable)
    static void RequestMove(UNavigationPath* PathToFollow, AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RebuildAllFlyingNavigation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UCatmullRomSpline* MakeCatmullRomSpline(const TArray<FVector>& PathPoints);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPositionAValidEndpoint(const APawn* NavAgent, const FVector& Position, const bool bAllowBlocked);
    
    UFUNCTION(BlueprintCallable)
    static EPathfindingResult GetPathfindingResult(UNavigationPath* Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFlyingNavigationData* GetFlyingNavigationData(const APawn* NavAgent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorFeetOffset(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetActorFeetLocation(const APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static UNavigationPath* FindPathToLocationAsynchronously(UObject* WorldContextObject, const FLatentActionInfo LatentInfo, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static UNavigationPath* FindPathToActorAsynchronously(UObject* WorldContextObject, const FLatentActionInfo LatentInfo, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawNavPath(const UObject* WorldContextObject, UNavigationPath* NavPath, const FLinearColor PathColor, const FVector PathOffset, const bool bPersistent);
    
};

