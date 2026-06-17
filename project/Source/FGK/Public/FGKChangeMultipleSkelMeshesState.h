#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "Templates/SubclassOf.h"
#include "FGKChangeMultipleSkelMeshesState.generated.h"

class AFGKBaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKChangeMultipleSkelMeshesState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFGKBaseCharacter>> CharacterSet;
    
public:
    UFGKChangeMultipleSkelMeshesState();

};

