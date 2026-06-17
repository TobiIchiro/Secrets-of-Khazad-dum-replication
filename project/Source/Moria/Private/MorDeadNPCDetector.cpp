#include "MorDeadNPCDetector.h"

UMorDeadNPCDetector::UMorDeadNPCDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDetectOnOverlap = true;
}

bool UMorDeadNPCDetector::SetTargetDeadNPC(UMorNPCComponent* NPC) {
    return false;
}

bool UMorDeadNPCDetector::ResetTargetDeadNPC() {
    return false;
}

void UMorDeadNPCDetector::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UMorDeadNPCDetector::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UMorDeadNPCDetector::NpcRevived(AActor* NPC) {
}

void UMorDeadNPCDetector::NpcDied(AActor* NPC) {
}

bool UMorDeadNPCDetector::IsTargetDeadNPCAlive() const {
    return false;
}

bool UMorDeadNPCDetector::HasTargetDeadNPC() const {
    return false;
}

bool UMorDeadNPCDetector::HasDetectedDeadNPCs() const {
    return false;
}

AMorCharacter* UMorDeadNPCDetector::GetTargetDeadNPC() const {
    return NULL;
}


