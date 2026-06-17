#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceVoxelDataAsset.generated.h"

class UVoxelDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class VOXELNIAGARA_API UNiagaraDataInterfaceVoxelDataAsset : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelDataAsset* Asset;
    
    UNiagaraDataInterfaceVoxelDataAsset();

};

