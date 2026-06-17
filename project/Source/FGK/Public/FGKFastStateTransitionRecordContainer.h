#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FGKFastStateTransitionRecord.h"
#include "FGKFastStateTransitionRecordContainer.generated.h"

USTRUCT(BlueprintType)
struct FFGKFastStateTransitionRecordContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKFastStateTransitionRecord> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FGK_API FFGKFastStateTransitionRecordContainer();
};

