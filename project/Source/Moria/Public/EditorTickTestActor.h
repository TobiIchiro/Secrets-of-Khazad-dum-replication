#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EditorTickTestActor.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AEditorTickTestActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlignWithGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AEditorTickTestActor(const FObjectInitializer& ObjectInitializer);

};

