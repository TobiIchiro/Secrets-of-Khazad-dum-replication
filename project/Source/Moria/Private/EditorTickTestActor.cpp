#include "EditorTickTestActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

AEditorTickTestActor::AEditorTickTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->bAlignWithGround = false;
    this->Capsule = (UCapsuleComponent*)RootComponent;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


