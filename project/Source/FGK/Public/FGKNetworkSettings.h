#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "FGKNetworkSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class FGK_API UFGKNetworkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FName> NetworkedFNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> NetworkedFNamesNameToIdMap;
    
public:
    UFGKNetworkSettings();

};

