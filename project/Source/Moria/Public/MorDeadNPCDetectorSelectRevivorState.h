#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorDeadNPCDetectorConditionState.h"
#include "MorDeadNPCDetectorSelectRevivorState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDeadNPCDetectorSelectRevivorState : public UMorDeadNPCDetectorConditionState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavProjectionExtent;
    
public:
    UMorDeadNPCDetectorSelectRevivorState();

};

