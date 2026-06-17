#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EPlayerLoginStatus.h"
#include "MorOnNewsfeedReadCompleteDelegate.h"
#include "NewsFeedManager.generated.h"

class UNewsFeedManager;

UCLASS(Blueprintable)
class UNewsFeedManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOnNewsfeedReadComplete OnNewsfeedSuccessfullyRead;
    
    UNewsFeedManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReadFileComplete(bool bSuccesful, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerLoginStatusChanged(EPlayerLoginStatus LoginStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetNewsFeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNewsFeedManager* Get(const UObject* WorldContextObject);
    

    // Fix for true pure virtual functions not being implemented
};

