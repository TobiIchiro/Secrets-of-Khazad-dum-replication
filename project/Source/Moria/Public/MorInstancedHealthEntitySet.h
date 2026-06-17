#pragma once
#include "CoreMinimal.h"
#include "GlobalInstancedMeshEntitySet.h"
#include "MorInstancedHealthEntitySet.generated.h"

UINTERFACE(MinimalAPI)
class UMorInstancedHealthEntitySet : public UGlobalInstancedMeshEntitySet {
    GENERATED_BODY()
};

class IMorInstancedHealthEntitySet : public IGlobalInstancedMeshEntitySet {
    GENERATED_BODY()
public:
};

