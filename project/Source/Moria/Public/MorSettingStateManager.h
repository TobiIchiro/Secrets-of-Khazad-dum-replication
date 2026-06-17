#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorMultiplayerNamesMode.h"
#include "EMorMultiplayerSessionMode.h"
#include "EMorSubtitleOptions.h"
#include "OnCanAccessUserGeneratedContentChangedDelegate.h"
#include "OnControllerPromptModeChangedDelegate.h"
#include "OnMultiplayerNamesModeChangedDelegate.h"
#include "OnMultiplayerSessionModeChangedDelegate.h"
#include "OnSubtitleFontSizeChangedDelegate.h"
#include "OnSubtitleVisSettingChangedDelegate.h"
#include "MorSettingStateManager.generated.h"

class UMorSettingStateManager;

UCLASS(Blueprintable)
class MORIA_API UMorSettingStateManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleVisSettingChanged OnSubtitleVisSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubtitleFontSizeChanged OnSubtitleFontSizeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerPromptModeChanged OnControllerPromptModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanAccessUserGeneratedContentChanged OnCanAccessUserGeneratedContentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiplayerSessionModeChanged OnMultiplayerSessionModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiplayerNamesModeChanged OnPlayersNameModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiplayerNamesModeChanged OnEditableNameModeChanged;
    
    UMorSettingStateManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsLimitedMultiplayerSessionModePlatform(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorSubtitleOptions GetSubtitleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitleFontSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorMultiplayerNamesMode GetPlayersNameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorMultiplayerSessionMode GetMultiplayerSessionMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorMultiplayerNamesMode GetEditableNameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorSettingStateManager* Get(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanUserChangeMultiplayerSessionMode(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanUserChangeMultiplayerNamesMode(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAccessUserGeneratedContent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSubtitlesKhuzdulOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSubtitlesEnabled() const;
    
};

