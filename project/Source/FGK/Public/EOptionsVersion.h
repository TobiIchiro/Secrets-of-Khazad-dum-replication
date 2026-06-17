#pragma once
#include "CoreMinimal.h"
#include "EOptionsVersion.generated.h"

UENUM()
enum class EOptionsVersion {
    NA = -1,
    InitialVersion = 0,
    TestTheBump,
    LastTest,
    NumVersions,
    CurrentVersion = LastTest,
};

