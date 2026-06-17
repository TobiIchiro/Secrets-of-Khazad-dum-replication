#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EDebugBoxType.h"
#include "EWaterTriggerBoxCategory.h"
#include "MorWaterColliderTriggerBoxComp.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorWaterColliderTriggerBoxComp : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterTriggerBoxCategory WaterTriggerBoxCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebugBoxType DebugBoxType;
    
    UMorWaterColliderTriggerBoxComp(const FObjectInitializer& ObjectInitializer);

};

