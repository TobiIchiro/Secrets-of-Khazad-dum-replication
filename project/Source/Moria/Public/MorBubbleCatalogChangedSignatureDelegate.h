#pragma once
#include "CoreMinimal.h"
#include "MorBubbleCatalogChangedSignatureDelegate.generated.h"

class UMorBubbleCatalog;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMorBubbleCatalogChangedSignature, UMorBubbleCatalog*, BubbleCatalog);

