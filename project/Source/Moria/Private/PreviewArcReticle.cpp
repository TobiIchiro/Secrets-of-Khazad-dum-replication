#include "PreviewArcReticle.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"

APreviewArcReticle::APreviewArcReticle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PreviewSimFrequency = 5.00f;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->Impact = CreateDefaultSubobject<USceneComponent>(TEXT("Impact"));
    this->StartMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("StartMesh"));
    this->MidMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("MidMesh"));
    this->EndMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("EndMesh"));
    this->EndMesh->SetupAttachment(RootComponent);
    this->Impact->SetupAttachment(RootComponent);
    this->MidMesh->SetupAttachment(RootComponent);
    this->Spline->SetupAttachment(RootComponent);
    this->StartMesh->SetupAttachment(RootComponent);
}


