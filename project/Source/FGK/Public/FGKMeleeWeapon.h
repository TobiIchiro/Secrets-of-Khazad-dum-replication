#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKWeapon.h"
#include "FGKMeleeWeapon.generated.h"

class UDataTable;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class FGK_API AFGKMeleeWeapon : public AFGKWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackVelocityLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttackTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEverTrackVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldTrackVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastFrameTrackLocation;
    
public:
    AFGKMeleeWeapon(const FObjectInitializer& ObjectInitializer);

};

