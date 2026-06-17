#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FGKTargetableSubsystem.generated.h"

class UFGKTargetableManager;

UCLASS(Blueprintable)
class UFGKTargetableSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKTargetableManager* TargetableManager;
    
    UFGKTargetableSubsystem();

};

