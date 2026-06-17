#pragma once
#include "CoreMinimal.h"
#include "HintEntry.h"
#include "MorReplicatedManager.h"
#include "Templates/SubclassOf.h"
#include "HintManager.generated.h"

class AActor;
class UPlayerHintWidget;

UCLASS(Blueprintable)
class MORIA_API AHintManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FHintEntry> Hints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterlineDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPlayerHintWidget*> HintWidgets;
    
public:
    AHintManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Display(const FText& Line);
    
};

