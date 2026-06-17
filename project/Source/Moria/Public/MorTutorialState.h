#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorTutorialRowHandle.h"
#include "MorTutorialState.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTutorialState : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTutorialRowHandle RowHandle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Counts[16];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CompletedListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackedInHud: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestoredFromSaveData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestoredFromSaveDataCompleted: 1;
    
public:
    FMorTutorialState();
};

