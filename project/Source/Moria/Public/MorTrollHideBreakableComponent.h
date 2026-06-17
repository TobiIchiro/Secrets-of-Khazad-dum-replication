#pragma once
#include "CoreMinimal.h"
#include "MorBreakableComponent.h"
#include "MorBreakablePropertiesRowHandle.h"
#include "MorTrollHideBreakableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorTrollHideBreakableComponent : public UMorBreakableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBreakablePropertiesRowHandle PropertiesHandleStateStone;
    
    UMorTrollHideBreakableComponent(const FObjectInitializer& ObjectInitializer);

};

