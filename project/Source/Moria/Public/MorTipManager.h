#pragma once
#include "CoreMinimal.h"
#include "MorManager.h"
#include "MorTipManager.generated.h"

class AMorTipManager;
class UMorTipComponent;
class UObject;

UCLASS(Blueprintable)
class MORIA_API AMorTipManager : public AMorManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorTipComponent* DeserializationTipComponent;
    
public:
    AMorTipManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AMorTipManager* Get(UObject* WorldContext);
    
};

