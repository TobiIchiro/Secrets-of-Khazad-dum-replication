#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "OnVoxelColorWheelColorChangedEventDelegate.h"
#include "VoxelColorWheel.generated.h"

UCLASS(Blueprintable)
class VOXELHELPERS_API UVoxelColorWheel : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoxelColorWheelColorChangedEvent OnColorChanged;
    
    UVoxelColorWheel();

};

