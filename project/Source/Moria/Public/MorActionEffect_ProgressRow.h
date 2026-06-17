#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorProgressRowHandle.h"
#include "MorActionEffect_ProgressRow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_ProgressRow : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressRowHandle ProgressRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetToCustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredProgressValue;
    
public:
    UMorActionEffect_ProgressRow();

};

