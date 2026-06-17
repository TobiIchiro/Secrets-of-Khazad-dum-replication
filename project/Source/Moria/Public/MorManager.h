#pragma once
#include "CoreMinimal.h"
#include "FGKManager.h"
#include "MorManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorManager : public AFGKManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalManager;
    
public:
    AMorManager(const FObjectInitializer& ObjectInitializer);

};

