#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FGKUIScreenToggleData.generated.h"

class UFGKUIScreen;

USTRUCT(BlueprintType)
struct FGKUITOOLKIT_API FFGKUIScreenToggleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ConfigHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKUIScreen* ScreenInstance;
    
    FFGKUIScreenToggleData();
};

