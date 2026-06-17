#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MorAgenticFriendConf.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=AgenticFriendConf)
class MORIA_API UMorAgenticFriendConf : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AgenticFriendActorClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AgenticStartingCmd;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AWSJenkinsIP;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JenkinsUsername;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JenkinsApiToken;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArgsToLocalClient;
    
    UMorAgenticFriendConf();

};

