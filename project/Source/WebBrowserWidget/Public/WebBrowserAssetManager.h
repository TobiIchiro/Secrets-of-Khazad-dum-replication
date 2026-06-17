#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WebBrowserAssetManager.generated.h"

class UMaterial;

UCLASS(Blueprintable)
class WEBBROWSERWIDGET_API UWebBrowserAssetManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> DefaultMaterial;
    
public:
    UWebBrowserAssetManager();

};

