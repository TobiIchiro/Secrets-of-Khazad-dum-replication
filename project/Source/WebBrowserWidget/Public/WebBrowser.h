#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "WebBrowser.generated.h"

UCLASS(Blueprintable)
class WEBBROWSERWIDGET_API UWebBrowser : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Text);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeforePopup, const FString&, URL, const FString&, Frame);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUrlChanged OnUrlChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeforePopup OnBeforePopup;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadDelegate OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadDelegate OnLoadError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadDelegate OnLoadStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTransparency;
    
public:
    UWebBrowser();

    UFUNCTION(BlueprintCallable)
    void LoadURL(const FString& NewURL);
    
    UFUNCTION(BlueprintCallable)
    void LoadString(const FString& Contents, const FString& DummyURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUrl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitleText() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteJavascript(const FString& ScriptText);
    
};

