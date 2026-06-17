#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "UMorActionEffect_Teleport.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UUMorActionEffect_Teleport : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UUMorActionEffect_Teleport();

};

