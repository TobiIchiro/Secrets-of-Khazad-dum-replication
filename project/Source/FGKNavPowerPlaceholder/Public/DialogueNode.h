#pragma once
#include "CoreMinimal.h"
#include "DialogueNode.generated.h"

USTRUCT(BlueprintType)
struct FGKNAVPOWERPLACEHOLDER_API FDialogueNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FDialogueNode();
};

