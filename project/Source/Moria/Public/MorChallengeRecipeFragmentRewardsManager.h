#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectNative.h"
#include "Templates/SubclassOf.h"
#include "MorChallengeRecipeFragmentRewardsManager.generated.h"

class AMorItemBase;

UCLASS(Blueprintable)
class MORIA_API AMorChallengeRecipeFragmentRewardsManager : public AMorReplicatedManager, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> UsedCards;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorItemBase> DefaultDropWhenFragmentUnneeded;
    
public:
    AMorChallengeRecipeFragmentRewardsManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

