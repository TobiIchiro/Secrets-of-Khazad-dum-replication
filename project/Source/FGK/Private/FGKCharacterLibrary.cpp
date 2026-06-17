#include "FGKCharacterLibrary.h"
#include "Templates/SubclassOf.h"

UFGKCharacterLibrary::UFGKCharacterLibrary() {
}

bool UFGKCharacterLibrary::GetSocketTransformChar(const AFGKBaseCharacter* Character, const FName& SocketName, FTransform& OutTransform) {
    return false;
}

bool UFGKCharacterLibrary::GetSocketTransform(const USkeletalMeshComponent* MeshComponent, const FName& SocketName, FTransform& OutTransform) {
    return false;
}

void UFGKCharacterLibrary::FlushWorldComposition(const UObject* WorldContext) {
}

bool UFGKCharacterLibrary::CreateAndProcessNewCharacter(AFGKBaseCharacter* CurrentCharacter, TSubclassOf<AFGKBaseCharacter> NewCharacterClass, AController* Controller) {
    return false;
}


