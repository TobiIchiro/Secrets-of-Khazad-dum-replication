#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_ReportToMusicManager.generated.h"

class AActor;
class AMorAIController;
class AMorCharacter;
class AMorMusicManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_ReportToMusicManager : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMusicManager* MusicManager;
    
public:
    UMorActionEffect_ReportToMusicManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget);
    
};

