#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "FGKAIController.h"
#include "GameplayAbilitySpecHandle.h"
#include "MorBreakableTargetInfo.h"
#include "Templates/SubclassOf.h"
#include "MorAIController.generated.h"

class AAILair;
class AActor;
class UGameplayAbility;
class UMorAIBehaviorPointComponent;
class UMorRecipeCostComponent;

UCLASS(Blueprintable)
class MORIA_API AMorAIController : public AFGKAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorRecipeCostComponent* RecipeCostComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle ArtilleryAbilitySpecHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavToBreakableExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakableTargetScanDelayBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakableTargetScanDelayFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreakableTargetTraceAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerActorKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorBreakableTargetInfo> BreakableTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorBreakableTargetInfo CurrentBreakableTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AAILair> SpawnedFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> SpawnActionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorpseCleanupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCleanupCorpse;
    
    AMorAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> TeamAttitude, AActor* NewTarget, AActor* OldTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AssignBehaviorPoint(UMorAIBehaviorPointComponent* BehaviorPoint);
    
};

