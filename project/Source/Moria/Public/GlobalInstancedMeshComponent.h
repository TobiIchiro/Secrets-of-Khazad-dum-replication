#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalInstancedMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UGlobalInstancedMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCustomDataFloats;
    
    UGlobalInstancedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

