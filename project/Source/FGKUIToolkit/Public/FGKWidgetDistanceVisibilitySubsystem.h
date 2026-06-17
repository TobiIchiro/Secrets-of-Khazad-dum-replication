#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FGKWidgetDistanceVisibilityConfig.h"
#include "FGKWidgetDistanceVisibilityTickFunction.h"
#include "FGKWidgetDistanceVisibilitySubsystem.generated.h"

class AActor;
class UActorComponent;
class USceneComponent;
class UWidget;

UCLASS(Blueprintable)
class FGKUITOOLKIT_API UFGKWidgetDistanceVisibilitySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKWidgetDistanceVisibilityTickFunction TickFunction;
    
public:
    UFGKWidgetDistanceVisibilitySubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidgetWithRefComponent(UWidget* Widget, USceneComponent* StartReference, USceneComponent* EndReference, const FFGKWidgetDistanceVisibilityConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidgetWithRefActor(UWidget* Widget, AActor* StartReference, AActor* EndReference, const FFGKWidgetDistanceVisibilityConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    void LinkComponent(UWidget* Widget, UActorComponent* LinkedComponent);
    
};

