#include "MorBreakableImpostor.h"
#include "Components/SceneComponent.h"
#include "MorBreakableComponent.h"
#include "MorBreakableFXComponent.h"

AMorBreakableImpostor::AMorBreakableImpostor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->BreakableComponent = CreateDefaultSubobject<UMorBreakableComponent>(TEXT("BreakableComponent"));
    this->FXComponent = CreateDefaultSubobject<UMorBreakableFXComponent>(TEXT("FXComponent"));
}


