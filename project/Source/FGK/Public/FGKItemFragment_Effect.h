#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryItemFragment.h"
#include "FGKItemFragment_Effect.generated.h"

class UFGKActionEffect;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKItemFragment_Effect : public UFGKInventoryItemFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionEffect*> HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFGKActionEffect*> ExpireEffect;
    
    UFGKItemFragment_Effect();

};

