#pragma once
#include "CoreMinimal.h"
#include "ArchitectureProxyProperties.h"
#include "ChallengeProxyProperties.h"
#include "ContainerProxyProperties.h"
#include "MorLightProxyProperties.h"
#include "MorProxyIndex.h"
#include "MorProxyProperties.h"
#include "MorTransporterPadProperties.h"
#include "MorWaterProxyProperties.h"
#include "MorContentProxyCatalog.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorContentProxyCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorProxyIndex> ProxyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FMorProxyProperties> AllProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FMorTransporterPadProperties> TransporterPads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FContainerProxyProperties> ContainerProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FArchitectureProxyProperties> ArchitectureProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FChallengeProxyProperties> ChallengeProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FMorWaterProxyProperties> WaterProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMorProxyIndex, FMorLightProxyProperties> LightProxies;
    
    FMorContentProxyCatalog();
};

