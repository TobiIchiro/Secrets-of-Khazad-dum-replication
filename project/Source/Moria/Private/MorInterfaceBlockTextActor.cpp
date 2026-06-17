#include "MorInterfaceBlockTextActor.h"
#include "Components/SceneComponent.h"
#include "MoriaWidgetComponent.h"

AMorInterfaceBlockTextActor::AMorInterfaceBlockTextActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("WidgetInterfaceBlockRoot"));
    this->DistanceFromInterfaceCenter = 250.00f;
    this->FrontWidget = CreateDefaultSubobject<UMoriaWidgetComponent>(TEXT("FrontWidgetInterfaceBlock"));
    this->BackWidget = CreateDefaultSubobject<UMoriaWidgetComponent>(TEXT("BackWidgetInterfaceBlock"));
    this->Root = (USceneComponent*)RootComponent;
    this->BackWidget->SetupAttachment(RootComponent);
    this->FrontWidget->SetupAttachment(RootComponent);
}


