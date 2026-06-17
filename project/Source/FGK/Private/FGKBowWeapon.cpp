#include "FGKBowWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AFGKBowWeapon::AFGKBowWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->DummyArrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DummyArrowMesh"));
    this->ABPDrawName = TEXT("Draw");
    this->StringSocketName = TEXT("String_JNT");
    this->ArrowLocation = CreateDefaultSubobject<USphereComponent>(TEXT("ArrowLocation"));
    this->bDefaultHandIKEnabled = false;
    this->bDefaultDummyArrowVisibility = false;
    this->bUpdateRotationBasedOnHandIK = false;
    this->bUseReloadUpdate = false;
    this->bHandIKEnabled = false;
    this->bReloaded = false;
    this->bReady = true;
    this->bAiming = false;
    this->bRotationEnabled = false;
    this->PullingSocket = TEXT("RightHandSocket");
    this->FireDelay = 0.00f;
    this->RefireDelay = 0.00f;
    this->ChargeDelay = 0.00f;
    this->CharacterSkelMesh = NULL;
    this->TargetDraw = 0.00f;
    this->DrawSpeed = 0.00f;
    this->MaxTargetAngle = 0.00f;
    this->MaxTargetAngleZ = 0.00f;
    this->ArrowLocation->SetupAttachment(WeaponMesh);
    this->DummyArrowMesh->SetupAttachment(WeaponMesh);
    this->WeaponMesh->SetupAttachment(RootComponent);
}

void AFGKBowWeapon::SetDummyArrowVisibility(bool bNewVisibility) {
}

void AFGKBowWeapon::SetBowStringDrawWithIK(const FVector& IKLocation) {
}

void AFGKBowWeapon::SetBowStringDrawOverTime(float NewValue, float Speed) {
}

void AFGKBowWeapon::SetBowStringDraw(float Value) {
}

void AFGKBowWeapon::OnShotReady_Implementation(int32 Level) {
}

void AFGKBowWeapon::OnReload_Implementation() {
}

void AFGKBowWeapon::OnFire_Implementation() {
}

void AFGKBowWeapon::OnAimEnd_Implementation() {
}

void AFGKBowWeapon::OnAimBegin_Implementation() {
}

bool AFGKBowWeapon::IsReloaded() const {
    return false;
}

bool AFGKBowWeapon::IsReady() const {
    return false;
}

bool AFGKBowWeapon::GetDummyArrowVisibility() const {
    return false;
}


