#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDebugItemPopulationMode.h"
#include "MContainerItem.h"
#include "MorChallengeRowHandle.h"
#include "MorToolRowHandle.h"
#include "SetupChallengeCompletedDelegate.h"
#include "MorSetupChallengeComponent.generated.h"

class AChallengeProxy;
class IMorContainerInstance;
class UMorContainerInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSetupChallengeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetupChallengeCompleted OnChallengeSetup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowChallengeManagerToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle Challenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMContainerItem> RequiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorToolRowHandle> RequiredTools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugItemPopulationMode ItemMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IMorContainerInstance>> Containers;
    
public:
    UMorSetupChallengeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AChallengeProxy* GetChallengeProxy() const;
    
};

