#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ConstructionPermitVisibilityDelegateDelegate.h"
#include "EBubbleState.h"
#include "EMorConstructionPermitSize.h"
#include "MorConstructionPermitComponent.generated.h"

class AActor;
class UInventoryComponent;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorConstructionPermitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaysHomeMusic;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionPermitVisibilityDelegate ShowBoundingRegion;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionPermitVisibilityDelegate HideBoundingRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PermitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraFoliageClearingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorConstructionPermitSize PermitSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ContainedConstructions, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ContainedConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventoryComponent*> CachedInventoryComponents;
    
public:
    UMorConstructionPermitComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetBaseBoundsVisibility(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ContainedConstructions();
    
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChanged(const UWorldLayoutBubble* Bubble, EBubbleState BubbleState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPermitLocation() const;
    
};

