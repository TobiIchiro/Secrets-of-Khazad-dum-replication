#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKUserWidget.h"
#include "InputCoreTypes.h"
#include "EMorIsoMapViewValueChange.h"
#include "MorIsoMapVirtualCursor.generated.h"

class UCommonInputSubsystem;
class UMorIsoMapViewWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorIsoMapVirtualCursor : public UFGKUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameCountDelayToFollowFocusedMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableFollowingFocusedMarker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFollowOnlyUserFocusedMarker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorIsoMapViewWidget* MapView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonInputSubsystem* CommonInputSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* RootCursor;
    
public:
    UMorIsoMapVirtualCursor();

    UFUNCTION(BlueprintCallable)
    void TriggerOnClickEvent(const FKey& ClickKey);
    
    UFUNCTION(BlueprintCallable)
    void SetVirtualCursorEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMousePositionFromCursor();
    
    UFUNCTION(BlueprintCallable)
    void SetMapView(UMorIsoMapViewWidget* InMapView);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorFromMousePosition();
    
    UFUNCTION(BlueprintCallable)
    void SetCursorFromMapPivot();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMapVirtualCursorVariantChanged(int32 Variant);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveCursor(const FVector2D& Delta, EMorIsoMapViewValueChange PanChange);
    
};

