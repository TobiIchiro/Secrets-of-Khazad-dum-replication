#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSaveFileManager.generated.h"

class UMorSaveFileQuery;

UCLASS(Blueprintable, Within=MorSaveGameManager)
class MORIA_API UMorSaveFileManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveFileQuery* SaveFileQuery;
    
public:
    UMorSaveFileManager();

};

