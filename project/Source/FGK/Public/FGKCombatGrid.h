#pragma once
#include "CoreMinimal.h"
#include "FGKCombatOccupation.h"
#include "FGKCombatRequest.h"
#include "FGKCombatSlot.h"
#include "FGKCombatGrid.generated.h"

class AFGKBaseCharacter;
class AFGKCombatManager;

USTRUCT(BlueprintType)
struct FGK_API FFGKCombatGrid {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFGKBaseCharacter> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKCombatRequest> PendingRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentGridWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentAttackWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKCombatSlot> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKCombatOccupation> Occupations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* OwningManager;
    
public:
    FFGKCombatGrid();
};

