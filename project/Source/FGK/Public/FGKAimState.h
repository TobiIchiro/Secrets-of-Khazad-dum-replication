#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKCharacterState.h"
#include "Templates/SubclassOf.h"
#include "FGKAimState.generated.h"

class AFGKProjectile;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKAimState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKAimState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetDirectionValid(const FVector& RayOrigin, const FVector& RayDirection, const FVector& TargetLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectileOriginLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectileOriginDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFGKProjectile> GetCurrentProjectileClass() const;
    
};

