#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorProxyInstanceId.h"
#include "MorTransporterPadProperties.h"
#include "MorTransporterPadInstanceProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTransporterPadInstanceProperties : public FMorTransporterPadProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProxyInstanceId ProxyInstanceId;
    
    FMorTransporterPadInstanceProperties();
};

