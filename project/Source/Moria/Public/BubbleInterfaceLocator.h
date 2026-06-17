#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECellDirection.h"
#include "BubbleInterfaceLocator.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FBubbleInterfaceLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Subcell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellDirection Direction;
    
    FBubbleInterfaceLocator();
};
FORCEINLINE uint32 GetTypeHash(const FBubbleInterfaceLocator) { return 0; }

