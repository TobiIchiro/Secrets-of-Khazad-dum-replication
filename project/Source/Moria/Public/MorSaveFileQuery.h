#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSaveFileInfo.h"
#include "MorSaveFileQuery.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorSaveFileQuery : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSaveFileInfo> AvailableSaveFiles;
    
public:
    UMorSaveFileQuery();

};

