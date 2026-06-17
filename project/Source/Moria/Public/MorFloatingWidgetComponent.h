#pragma once
#include "CoreMinimal.h"
#include "MoriaWidgetComponent.h"
#include "MorFloatingWidgetComponent.generated.h"

class UMorFloatingWidgetContainer;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorFloatingWidgetComponent : public UMoriaWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorFloatingWidgetContainer* WidgetContainer;
    
public:
    UMorFloatingWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

