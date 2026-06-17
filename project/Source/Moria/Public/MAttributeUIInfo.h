#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MAttributeUIInfo.generated.h"

class UMorActiveEffectUIInfo;
class UTexture2D;

UCLASS(Blueprintable)
class MORIA_API UMAttributeUIInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorActiveEffectUIInfo*> InfluencingEffects;
    
    UMAttributeUIInfo();

};

