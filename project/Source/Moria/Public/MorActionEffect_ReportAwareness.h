#pragma once
#include "CoreMinimal.h"
#include "EFGKAIAwarenessLevel.h"
#include "FGKActionEffect.h"
#include "GameplayTagContainer.h"
#include "EMorAIHordeAwarenessEventType.h"
#include "MorActionEffect_ReportAwareness.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_ReportAwareness : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AwarenessKeyToCompareAgainstName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTimeSinceLastAwarenessEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorAIHordeAwarenessEventType AwarenessEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPingAllLairSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPingNearbyCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingNearbyCharactersRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIAwarenessLevel AwarenessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlertSpawningLair;
    
public:
    UMorActionEffect_ReportAwareness();

protected:
    UFUNCTION(BlueprintCallable)
    void ReportAwarenessEvent(AActor* Actor);
    
};

