#pragma once
#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "ProcVoxelRegionEditorVisComp.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UProcVoxelRegionEditorVisComp : public UBillboardComponent {
    GENERATED_BODY()
public:
    UProcVoxelRegionEditorVisComp(const FObjectInitializer& ObjectInitializer);

};

