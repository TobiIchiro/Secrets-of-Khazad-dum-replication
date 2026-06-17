#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKBlueprintCheat.h"
#include "FGKBlueprintCheatEntry.generated.h"

class UFGKBlueprintCheatEntry;

UCLASS(Blueprintable)
class FGKDEBUGMENU_API UFGKBlueprintCheatEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKBlueprintCheat BlueprintCheat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKBlueprintCheatEntry*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ChildrenObjects;
    
public:
    UFGKBlueprintCheatEntry();

};

