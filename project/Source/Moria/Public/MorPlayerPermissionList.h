#pragma once
#include "CoreMinimal.h"
#include "MorBlockedPlayersList.h"
#include "MorPlayerPermissionList.generated.h"

UCLASS(Blueprintable, Config=Engine)
class MORIA_API UMorPlayerPermissionList : public UMorBlockedPlayersList {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenSaves;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivePlatform;
    
public:
    UMorPlayerPermissionList();

};

