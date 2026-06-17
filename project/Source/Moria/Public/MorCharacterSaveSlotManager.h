#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorCharacterSaveSlotManager.generated.h"

class UMorSaveFileManager;

UCLASS(Blueprintable)
class MORIA_API UMorCharacterSaveSlotManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveFileManager* SaveFileManager;
    
public:
    UMorCharacterSaveSlotManager();

};

