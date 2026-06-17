#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "MorBubbleLevelTag.generated.h"

class AMorBubbleInstance;
class UWorldLayoutBubble;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorBubbleLevelTag : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorBubbleInstance* BubbleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldLayoutBubble* Bubble;
    
    UMorBubbleLevelTag();

};

