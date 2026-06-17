#pragma once
#include "CoreMinimal.h"
#include "MorDecorationVolumeData.h"
#include "MorProxyIndex.h"
#include "MorDecorationVolumeLevelActorData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDecorationVolumeLevelActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProxyIndex ProxyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDecorationVolumeData Volume;
    
    FMorDecorationVolumeLevelActorData();
};

