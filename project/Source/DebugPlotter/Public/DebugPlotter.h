#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "DebugPlotter.generated.h"

class AHUD;
class UCanvas;
class UDebugPlotter;
class UFont;
class UGameInstance;

UCLASS(Blueprintable)
class DEBUGPLOTTER_API UDebugPlotter : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameInstance* Game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHUD* CurrentHUD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* PlotterFont;
    
public:
    UDebugPlotter();

    UFUNCTION(BlueprintCallable)
    void ToggleDrawingEnabled();
    
    UFUNCTION(BlueprintCallable)
    void SetDrawingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool SetDrawingCategory(FName Category);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterPlot(const FString& PlotName, FName PlotCategory, FColor Color, float MinInterval, int32 MaxSamples);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterFixedPlot(const FString& PlotName, FName PlotCategory, float MinValue, float MaxValue, FColor Color, float MinInterval, int32 MaxSamples);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHUDPostRender(AHUD* HUD, UCanvas* DebugCanvas);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawingPossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDrawingCategory(FName Category) const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsDrawing(FName Category);
    
    UFUNCTION(BlueprintCallable)
    static UDebugPlotter* Get(UGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void CycleDrawingCategory();
    
    UFUNCTION(BlueprintCallable)
    bool ClearPlot(const FString& PlotName);
    
    UFUNCTION(BlueprintCallable)
    bool AddSample(const FString& PlotName, float Value);
    
};

