#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "Templates/SubclassOf.h"
#include "FGKResumeClosestSpawnerState.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKResumeClosestSpawnerState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanTakeDamageDuringSpawning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRemoveInteractAfterUse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpToSpawningMontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKBaseCharacter> SpawnClass;
    
public:
    UFGKResumeClosestSpawnerState();

};

