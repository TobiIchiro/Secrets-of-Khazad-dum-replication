#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorNPCActivityActionRowHandle.h"
#include "MorActionEffect_NpcActivityAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcActivityAction : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityActionRowHandle ActivityActionHandle;
    
public:
    UMorActionEffect_NpcActivityAction();

};

