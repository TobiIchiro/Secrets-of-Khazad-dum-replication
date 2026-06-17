#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MorFilteredResourceReceptacle.h"
#include "MorInteraction.h"
#include "Templates/SubclassOf.h"
#include "TreasureBuffStruct.h"
#include "MorTreasurePileBase.generated.h"

class UGameplayEffect;
class UMorTreasureComponent;

UCLASS(Blueprintable)
class MORIA_API AMorTreasurePileBase : public AMorFilteredResourceReceptacle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AdmireInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreasureBuffStruct> BuffsToConsiderToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorTreasureComponent* TreasureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeAfterBuffExpiresTillNextAdmireAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RecentlyAdmiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RecentlyAdmiredBuff;
    
public:
    AMorTreasurePileBase(const FObjectInitializer& ObjectInitializer);

};

