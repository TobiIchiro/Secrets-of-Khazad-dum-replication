#pragma once
#include "CoreMinimal.h"
#include "FGKOptionManager.h"
#include "MorOptionManager.generated.h"

class UMorOptionHandler;

UCLASS(Blueprintable)
class MORIA_API UMorOptionManager : public UFGKOptionManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorOptionHandler* OptionHandler;
    
public:
    UMorOptionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorOptionHandler* GetOptionHandler() const;
    
};

