#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MorEarthquakeSubsystem_EarthquakeStartedSignatureDelegate.h"
#include "MorEarthquakeSubsystem.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorEarthquakeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEarthquakeSubsystem_EarthquakeStartedSignature OnEarthquakeStarted;
    
    UMorEarthquakeSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEarthquake() const;
    
};

