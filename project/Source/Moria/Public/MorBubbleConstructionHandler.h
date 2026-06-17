#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorBubbleConstructionHandler.generated.h"

class UMorLevelContentData;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorBubbleConstructionHandler : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorLevelContentData*> LevelContentDataList;
    
public:
    AMorBubbleConstructionHandler(const FObjectInitializer& ObjectInitializer);

};

