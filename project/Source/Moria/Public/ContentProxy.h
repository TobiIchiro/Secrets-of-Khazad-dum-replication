#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EProxyRotationMode.h"
#include "WorldLayoutCell.h"
#include "ContentProxy.generated.h"

UCLASS(Blueprintable)
class MORIA_API AContentProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteInStandalone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProxyRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollLimit;
    
    AContentProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldLayoutCell GetRootCell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWorldLayoutCell GetPhysicalCell() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInterfaceInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCellInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Customize();
    
};

