#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MorAIChallengeSpawnsComponent.h"
#include "MorNpcRescueSpawnsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNpcRescueSpawnsComponent : public UMorAIChallengeSpawnsComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid SpawnedNPCGuid;
    
public:
    UMorNpcRescueSpawnsComponent(const FObjectInitializer& ObjectInitializer);

};

