#pragma once
#include "CoreMinimal.h"
#include "MorDecoSpawningUtility.generated.h"

class AActor;
class AContentProxy;
class AWorldLayout;
class UWorld;
class UWorldLayoutBubble;

USTRUCT(BlueprintType)
struct MORIA_API FMorDecoSpawningUtility {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AContentProxy* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldLayoutBubble* RealizedBubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    FMorDecoSpawningUtility();
};

