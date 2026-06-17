#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MontageGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayAbility_Emote.generated.h"

class AEmoteIcon;
class UTexture2D;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_Emote : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEmoteIcon> IconToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IconLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
public:
    UMorGameplayAbility_Emote();

};

