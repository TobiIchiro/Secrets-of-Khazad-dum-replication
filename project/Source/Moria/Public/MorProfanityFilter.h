#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EMorFilteredCharacterNameFormat.h"
#include "EMorFilteredTextType.h"
#include "EPlayerLoginStatus.h"
#include "MorFilteredStringHandle.h"
#include "MorProfanityFilter.generated.h"

class AActor;
class UMorGameSessionManager;
class UMorProfanityFilter;
class UWidget;

UCLASS(Blueprintable)
class MORIA_API UMorProfanityFilter : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnTextUpdatedDynamic, UWidget*, TextWidget, EMorFilteredTextType, Type, const FText&, ResultText);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnStringProcessedDynamic, bool, bSuccess, const FString&, ResultString);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlaceholderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayerCharacterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* SessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTryFilterInSingleplayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCensorOnFailure: 1;
    
public:
    UMorProfanityFilter();

    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle SetTextOptional(UWidget* TextWidget, const FText& UnprocessedText, bool bFilterText, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle SetText(UWidget* TextWidget, const FText& UnprocessedText, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle SetCharacterLabelFromActor(UWidget* TextWidget, const AActor* Actor, bool bFullName, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle SetCharacterLabel(UWidget* TextWidget, const FString& PlayerName, const FString& CharacterName, EMorFilteredCharacterNameFormat Format, const UMorProfanityFilter::FOnTextUpdatedDynamic& OnTextUpdated);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle ProcessStringOptional(const FString& UnprocessedString, bool bFilterString, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle ProcessString(const FString& UnprocessedString, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished);
    
    UFUNCTION(BlueprintCallable)
    FMorFilteredStringHandle ProcessCharacterName(const FString& PlayerName, const FString& CharacterName, EMorFilteredCharacterNameFormat Format, const UMorProfanityFilter::FOnStringProcessedDynamic& OnFinished);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerLoginStatusChanged(EPlayerLoginStatus LoginStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMorProfanityFilter::FOnTextUpdatedDynamic GetEmptyTextUpdatedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorProfanityFilter* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateScope(const FName& ScopeName);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateProfanityFilterScope(const FName& ScopeName, const UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CancelTextRequest(UWidget* TextWidget);
    
    UFUNCTION(BlueprintCallable)
    static void CancelRequest(UPARAM(Ref) FMorFilteredStringHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    void ActivateScope(const FName& ScopeName, const UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ActivateProfanityFilterScope(const FName& ScopeName, const UObject* ContextObject);
    

    // Fix for true pure virtual functions not being implemented
};

