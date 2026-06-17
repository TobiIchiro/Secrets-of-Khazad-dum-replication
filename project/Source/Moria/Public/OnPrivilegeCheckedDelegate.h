#pragma once
#include "CoreMinimal.h"
#include "EMorUserPrivileges.h"
#include "OnPrivilegeCheckedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPrivilegeChecked, EMorUserPrivileges, Privilege, bool, bHasPrivilege);

