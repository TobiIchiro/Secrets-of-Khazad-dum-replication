#include "MorLootUtils.h"
#include "Templates/SubclassOf.h"

UMorLootUtils::UMorLootUtils() {
}

void UMorLootUtils::CreateAndDropLootItems(UObject* WorldContextObject, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation) {
}

void UMorLootUtils::BestowToPlayer(UObject* WorldContextObject, APlayerController* PlayerController, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation) {
}

void UMorLootUtils::BestowToHost(UObject* WorldContextObject, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation) {
}


