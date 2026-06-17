#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorReplicatedManager.h"
#include "PooledDestructible.h"
#include "MorDestructiblePoolManager.generated.h"

class UDestructibleMesh;
class UMorBubbleBreakableInstanceHandler;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorDestructiblePoolManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FPooledDestructible> Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDestructibleMesh>> DestructiblesToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDestructibleMesh>> Loading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorBubbleBreakableInstanceHandler*> BubbleBreakableInstanceHandlers;
    
public:
    AMorDestructiblePoolManager(const FObjectInitializer& ObjectInitializer);

};

