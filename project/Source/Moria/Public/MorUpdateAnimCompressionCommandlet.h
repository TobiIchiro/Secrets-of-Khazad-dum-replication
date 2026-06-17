#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorUpdateAnimCompressionCommandlet.generated.h"

class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorUpdateAnimCompressionCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimBoneCompressionSettings* DBC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimCurveCompressionSettings* DCC;
    
public:
    UMorUpdateAnimCompressionCommandlet();

};

