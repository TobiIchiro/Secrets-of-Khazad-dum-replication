#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LadderInteractable.h"
#include "Templates/SubclassOf.h"
#include "RopeInteractable.generated.h"

class AActor;
class ARopeInteractable;

UCLASS(Blueprintable)
class MORIA_API ARopeInteractable : public ALadderInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PitonOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> HorizontalLengths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PitonHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalNormalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthSelectionThreshold;
    
public:
    ARopeInteractable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static ARopeInteractable* TrySpawn(AActor* SpawnSource, const FHitResult& Hit, TSubclassOf<ARopeInteractable> SpawnClass, AActor* SpawnInstigator);
    
};

