#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameVersion.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UGameVersion : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoreVersion;
    
public:
    UGameVersion();

};

