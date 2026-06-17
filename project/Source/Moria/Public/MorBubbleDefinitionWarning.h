#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorBubbleDefinitionWarningCategory.h"
#include "MorBubbleDefinitionWarning.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorBubbleDefinitionWarning : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorBubbleDefinitionWarningCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> ContextActors;
    
    UMorBubbleDefinitionWarning();

};

