#pragma once
#include "CoreMinimal.h"
#include "MorSaveFileInfo.generated.h"

class UMorSaveGame;

USTRUCT(BlueprintType)
struct MORIA_API FMorSaveFileInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveGame* SaveGame;
    
public:
    FMorSaveFileInfo();
};

