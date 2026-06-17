#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKMantleParams.h"
#include "FGKVaultConfigSettings.h"
#include "FGKParkourComponent.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKParkourComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKMantleParams MantleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKVaultConfigSettings VaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* CharacterOwner;
    
public:
    UFGKParkourComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void LoadVaultConfigValues();
    
};

