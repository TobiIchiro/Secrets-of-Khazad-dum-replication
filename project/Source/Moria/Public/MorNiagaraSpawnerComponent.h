#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "MorNiagaraSpawnerComponent.generated.h"

class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraSystem;
class UObject;
class UTexture;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNiagaraSpawnerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraSystemCullDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedComponent;
    
public:
    UMorNiagaraSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpawnedComponentIsValid();
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentVectorParameter(const FName ParameterName, const FVector VectorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentTextureParameter(const FName ParameterName, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentObjectParameter(const FName ParameterName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentMaterialParameter(const FName ParameterName, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentIntParameter(const FName ParameterName, const int32 IntValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentFloatParameter(const FName ParameterName, const float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentColorParameter(const FName ParameterName, const FLinearColor ColorValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedComponentBoolParameter(const FName ParameterName, const bool BoolValue);
    
};

