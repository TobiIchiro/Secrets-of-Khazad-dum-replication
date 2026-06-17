#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "MorSaveGameObjectNative.h"
#include "MorGameplayEffectSerializerComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorGameplayEffectSerializerComp : public UActorComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> EffectsToConsider;
    
public:
    UMorGameplayEffectSerializerComp(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

