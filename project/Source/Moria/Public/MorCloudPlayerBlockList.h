#pragma once
#include "CoreMinimal.h"
#include "MorBlockedPlayersList.h"
#include "MorCloudPlayerBlockList.generated.h"

UCLASS(Blueprintable, Config=Engine)
class MORIA_API UMorCloudPlayerBlockList : public UMorBlockedPlayersList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SavingBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OssName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
public:
    UMorCloudPlayerBlockList();

};

