#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorAchievementRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAchievementRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRestoredFromSaveData;
    
    FMorAchievementRowHandle();
};

