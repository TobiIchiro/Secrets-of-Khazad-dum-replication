#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorPlatformTexture.h"
#include "MorPlatformTextureTableRow.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorPlatformTextureTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorPlatformTexture PlatformTextures;
    
public:
    FMorPlatformTextureTableRow();
};

