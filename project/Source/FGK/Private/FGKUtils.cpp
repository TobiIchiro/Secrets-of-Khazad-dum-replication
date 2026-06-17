#include "FGKUtils.h"
#include "Templates/SubclassOf.h"

UFGKUtils::UFGKUtils() {
}

void UFGKUtils::SpoofInput(const UObject* WorldContextObject, int32 ControllerId, FKey Key, TEnumAsByte<EInputEvent> InputEvent) {
}

bool UFGKUtils::IsLocallyControlledPlayer(AActor* Actor) {
    return false;
}

bool UFGKUtils::IsAServerPlayer(AActor* Actor) {
    return false;
}

AActor* UFGKUtils::GetManager(const UObject* WorldContextObject, const TSubclassOf<AActor> ManagerClass) {
    return NULL;
}

void UFGKUtils::GetLODAvailable(int32& CPULod, int32& RenderLOD, int32& RenderLODAvail, int32& NonStreamingLOD, int32& NonOptionalLOD, const USkeletalMeshComponent* SkeletalMeshComponent) {
}

UObject* UFGKUtils::GetGlobalManager(const UObject* WorldContextObject, const UClass* ManagerClass, bool bExactMatch) {
    return NULL;
}

UFGKInteractableComponent* UFGKUtils::GetCurrentInteractableFromCharacter(const AFGKBaseCharacter* FGKCharacter) {
    return NULL;
}

UActorComponent* UFGKUtils::FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass) {
    return NULL;
}

TEnumAsByte<EPhysicalSurface> UFGKUtils::FindComplexSurfaceTypeFromHit(const UObject* WorldContextObject, FVector HitLocation, FVector HitNormal, float SearchOffset, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return SurfaceType_Default;
}

TArray<UActorComponent*> UFGKUtils::FindAllComponentsByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass) {
    return TArray<UActorComponent*>();
}

void UFGKUtils::ArrayActorsRadially(TArray<AActor*> Actors, FVector Center, float Radius, float FacingAngleOffset) {
}


