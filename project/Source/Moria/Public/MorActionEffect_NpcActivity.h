#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "EMorNpcActivity.h"
#include "ENpcActivitySource.h"
#include "MorNPCActivityRowHandle.h"
#include "MorActionEffect_NpcActivity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcActivity : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcActivitySource ActivitySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorNpcActivity Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCActivityRowHandle ActivityHandle;
    
public:
    UMorActionEffect_NpcActivity();

};

