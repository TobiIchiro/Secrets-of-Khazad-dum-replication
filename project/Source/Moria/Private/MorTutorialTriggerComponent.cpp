#include "MorTutorialTriggerComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

UMorTutorialTriggerComponent::UMorTutorialTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
    this->ActToDo = EMorTutorialType::TriggerTutorial;
    this->TutorialAction = EMorTutorialAction::None;
}

void UMorTutorialTriggerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


