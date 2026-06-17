#pragma once
#include "CoreMinimal.h"
#include "ETriangleSurfaceType.generated.h"

UENUM(BlueprintType)
enum class ETriangleSurfaceType : uint8 {
    TriangleSurface_Floor,
    TriangleSurface_Wall,
    TriangleSurface_Ceiling,
};

