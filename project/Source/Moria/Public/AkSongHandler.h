#pragma once
#include "CoreMinimal.h"
#include "AkSongHandler.generated.h"

class AActor;
class UAkComponent;

USTRUCT(BlueprintType)
struct MORIA_API FAkSongHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> FreeAkComponents;
    
public:
    FAkSongHandler();
};

