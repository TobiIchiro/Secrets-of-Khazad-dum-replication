#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/MeshMerging.h"
#include "MergeActorCollisionSettings.h"
#include "FGKMergeActor.generated.h"

class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FGK_API AFGKMergeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* OptimizedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 ChildHash;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshMergingSettings MergeSettings;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOptimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, FMergeActorCollisionSettings> CollisionSettingsMap;
    
public:
    AFGKMergeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleOptimization();
    
    UFUNCTION(BlueprintCallable)
    void SetChildActorsEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelActorDeleted(AActor* DeletedActor);
    
    UFUNCTION(BlueprintCallable)
    void MergeActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    void MergeActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FString GetOptimizedMeshPackageName();
    
};

