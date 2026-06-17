#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "ENpcBrewTransportType.h"
#include "MorActionEffect_NpcTransportBrew.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_NpcTransportBrew : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_Keg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_Tank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcBrewTransportType TransportType;
    
public:
    UMorActionEffect_NpcTransportBrew();

};

