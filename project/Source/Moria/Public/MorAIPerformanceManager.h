#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorAIPerformanceManager.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable)
class MORIA_API AMorAIPerformanceManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFGKBaseCharacter*> AllAISpawns;
    
public:
    AMorAIPerformanceManager(const FObjectInitializer& ObjectInitializer);

};

