#pragma once
#include "CoreMinimal.h"
#include "EModularCharacterSlot.h"
#include "SoftModularMeshEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSoftModularMeshEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModularCharacterSlot ModularSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SlotMesh;
    
    MORIA_API FSoftModularMeshEntry();
};

