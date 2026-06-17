#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "luidNinjaBoneList.h"
#include "MorFluidNinjaBaseComponent.generated.h"

class AActor;
class UBoxComponent;
class UMeshComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorFluidNinjaBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FRGTrackActorPrimitiveComponentsWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FRGTrackActorSkeletalMeshComponentsWithTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<EObjectTypeQuery>> FRGOverlapFilterInclusiveCollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> FRGOverlapFilterInclusiveObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FRGOverlapFilterInclusiveBoneNameExact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FRGOverlapFilterInclusiveBoneNamePartial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FRGExcludeSpecificActorsFromOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FRGExcludeLargeOverlappingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FRGUseTraceMeshAsInteractionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> FRGCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> FRGOverlappingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> FRGNearbyOverlappingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UPrimitiveComponent*> FRGNearbySkeletalMeshToBoneArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> FRGOverlappingComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UPrimitiveComponent*> FRGSkeletalMeshToBoneArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> FRGAvailableBoneArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FluidNinjaBoneList> FRGBoneArrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool FRGIsOverlappingAnything;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* FRGInteractionVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* FRGActivationVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* FRGTraceMesh;
    
    UMorFluidNinjaBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOverlapDetectionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FRGUseFRGOverlapCode() const;
    
    UFUNCTION(BlueprintCallable)
    void FRGRegisterInitialOverlaps();
    
    UFUNCTION(BlueprintCallable)
    void FRGNotifyEndOverlapComponent(AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable)
    void FRGNotifyBeginOverlapComponent(AActor* OtherActor, UPrimitiveComponent* OtherComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* FRGGetOverlapInteractionVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> FRGGetBoneNames(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void FRGClearInteractionLists();
    
    UFUNCTION(BlueprintCallable)
    void FRGClearBoneArrays();
    
};

