#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorAnyItemRowHandle.h"
#include "MorResourceLocator.h"
#include "ZoneDefinition.h"
#include "WorldLayoutZone.generated.h"

class ULandmark;

UCLASS(Blueprintable)
class MORIA_API UWorldLayoutZone : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULandmark*> Landmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorAnyItemRowHandle, FMorResourceLocator> TrackedResources;
    
public:
    UWorldLayoutZone();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FZoneDefinition GetZoneDefinition() const;
    
};

