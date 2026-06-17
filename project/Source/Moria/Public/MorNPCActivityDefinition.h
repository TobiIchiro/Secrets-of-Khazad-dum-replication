#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorIconAnimation.h"
#include "EMorNpcActivity.h"
#include "EMorNpcActivityCategory.h"
#include "EMorNpcActivityTrackEvent.h"
#include "MorNPCActivityDefinition.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCActivityDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorNpcActivity Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Explanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LongExplanation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorIconAnimation IconAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorNpcActivityCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorNpcActivityTrackEvent TrackAs;
    
    FMorNPCActivityDefinition();
};

