#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMorDifficultyPreset.h"
#include "EMorWorldType.h"
#include "MorWorldLayoutConfigOptionalEntitlements.h"
#include "MorWorldLayoutCustomConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLayoutCustomConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorWorldType WorldType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorDifficultyPreset DifficultyPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoneFilterRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartLandmarkRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WorldGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldLayoutConfigOptionalEntitlements OptionalEntitlements;
    
    FMorWorldLayoutCustomConfiguration();
};

