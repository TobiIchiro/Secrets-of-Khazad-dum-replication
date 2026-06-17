#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSaveSystemLevelRecordRuntimeCollection.generated.h"

class UMorSaveSystemLevelRecordRuntime;
class UMorSaveSystemLevelRecordRuntimeRestore;

UCLASS(Blueprintable, Within=MorSaveSystemWorldState)
class MORIA_API UMorSaveSystemLevelRecordRuntimeCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorSaveSystemLevelRecordRuntime*> LevelRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveSystemLevelRecordRuntimeRestore* LevelRecordRestore;
    
public:
    UMorSaveSystemLevelRecordRuntimeCollection();

};

