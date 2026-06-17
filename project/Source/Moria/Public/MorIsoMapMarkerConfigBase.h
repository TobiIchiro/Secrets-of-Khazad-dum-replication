#pragma once
#include "CoreMinimal.h"
#include "MorColorModifier.h"
#include "MorIsoMapMarkerConfigBase.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorIsoMapMarkerConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorColorModifier TintModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorColorModifier OtherChapterTintModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawPriority;
    
    FMorIsoMapMarkerConfigBase();
};

