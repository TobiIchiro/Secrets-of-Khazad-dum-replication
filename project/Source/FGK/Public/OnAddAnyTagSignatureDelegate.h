#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnAddAnyTagSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddAnyTagSignature, FGameplayTag, Tag);

