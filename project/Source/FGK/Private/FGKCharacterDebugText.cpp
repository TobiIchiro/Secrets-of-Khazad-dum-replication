#include "FGKCharacterDebugText.h"
#include "Components/SceneComponent.h"

AFGKCharacterDebugText::AFGKCharacterDebugText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComp"));
    this->VerticalPadding = 4.00f;
    this->MinScale = 1.00f;
    this->MinScaleDistance = 1000.00f;
    this->MaxScale = 5.00f;
    this->MaxScaleDistance = 50000.00f;
    this->Character = NULL;
}

void AFGKCharacterDebugText::OnCharacterDestroyed(AActor* DestroyedActor) {
}

FVector AFGKCharacterDebugText::GetScreenLocation() const {
    return FVector{};
}

FString AFGKCharacterDebugText::GetDebugText() const {
    return TEXT("");
}


