#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Templates/SubclassOf.h"
#include "FGKGameState.generated.h"

class AActor;
class AFGKManager;
class UExpressionContainer;

UCLASS(Blueprintable)
class FGK_API AFGKGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveManagers, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, AActor*> ActiveManagerMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> Managers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ManagerOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitializeManagersBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFGKManager*> PendingManagersToInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UExpressionContainer* ExpressionContainer;
    
public:
    AFGKGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveManagers();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetManagerInternal(const TSubclassOf<AActor> ManagerClass, bool bExactMatch);
    
};

