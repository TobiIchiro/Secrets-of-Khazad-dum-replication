#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Templates/SubclassOf.h"
#include "FGKUtils.generated.h"

class AActor;
class AFGKBaseCharacter;
class UActorComponent;
class UFGKInteractableComponent;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FGK_API UFGKUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpoofInput(const UObject* WorldContextObject, int32 ControllerId, FKey Key, TEnumAsByte<EInputEvent> InputEvent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocallyControlledPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAServerPlayer(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetManager(const UObject* WorldContextObject, const TSubclassOf<AActor> ManagerClass);
    
public:
    UFUNCTION(BlueprintCallable)
    static void GetLODAvailable(int32& CPULod, int32& RenderLOD, int32& RenderLODAvail, int32& NonStreamingLOD, int32& NonOptionalLOD, const USkeletalMeshComponent* SkeletalMeshComponent);
    
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UObject* GetGlobalManager(const UObject* WorldContextObject, const UClass* ManagerClass, bool bExactMatch);
    
public:
    UFUNCTION(BlueprintCallable)
    static UFGKInteractableComponent* GetCurrentInteractableFromCharacter(const AFGKBaseCharacter* FGKCharacter);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* FindDefaultComponentByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<EPhysicalSurface> FindComplexSurfaceTypeFromHit(const UObject* WorldContextObject, FVector HitLocation, FVector HitNormal, float SearchOffset, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> FindAllComponentsByClass(const TSubclassOf<AActor> InActorClass, const TSubclassOf<UActorComponent> InComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static void ArrayActorsRadially(TArray<AActor*> Actors, FVector Center, float Radius, float FacingAngleOffset);
    
};

