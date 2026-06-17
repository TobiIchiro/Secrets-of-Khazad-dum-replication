#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKBlueprintCheatKey.h"
#include "FGKBlueprintCheatsActor.generated.h"

UCLASS(Blueprintable)
class FGKDEBUGMENU_API AFGKBlueprintCheatsActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MenuPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PriorityFunctionNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKBlueprintCheatKey> AllCheatKeys;
    
public:
    AFGKBlueprintCheatsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CloseDebugMenu();
    
};

