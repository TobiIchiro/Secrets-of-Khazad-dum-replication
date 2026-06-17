#pragma once
#include "CoreMinimal.h"
#include "MorReceptacle.h"
#include "MorDeathReceptacle.generated.h"

class UMorPreciousssComponent;

UCLASS(Blueprintable)
class MORIA_API AMorDeathReceptacle : public AMorReceptacle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameFormatYours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameFormatOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorPreciousssComponent* PreciousssComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> EquippedItemSlots;
    
public:
    AMorDeathReceptacle(const FObjectInitializer& ObjectInitializer);

};

