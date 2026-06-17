#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EModularCharacterSlot.h"
#include "StoredModularData.h"
#include "ModularCharacterComponent.generated.h"

class IModularCharacterInterface;
class UModularCharacterInterface;
class UCustomizationManager;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UModularCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EModularCharacterSlot> SupportedSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EModularCharacterSlot, FStoredModularData> DefaultModularMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> CurrentArmSkeletalMeshOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IModularCharacterInterface> ModularCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCustomizationManager* CustomizationManagerOwner;
    
public:
    UModularCharacterComponent(const FObjectInitializer& ObjectInitializer);

};

