#pragma once
#include "CoreMinimal.h"
#include "MorWidgetNavigationBuilderHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorWidgetNavigationBuilderHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentColumn;
    
    FMorWidgetNavigationBuilderHandle();
};

