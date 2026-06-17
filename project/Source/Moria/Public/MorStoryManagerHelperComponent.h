#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorLoreRowHandle.h"
#include "MorUIScreenConfigRowHandle.h"
#include "MorStoryManagerHelperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorStoryManagerHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorStoryManagerHelperComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OpenScreenWhenReady(FMorLoreRowHandle RowHandle, FMorUIScreenConfigRowHandle ScreenHandle);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnServerLoreCallback(const FMorLoreRowHandle& LoreRow);
    
    UFUNCTION(BlueprintCallable)
    void OnClientLoreCallback();
    
};

