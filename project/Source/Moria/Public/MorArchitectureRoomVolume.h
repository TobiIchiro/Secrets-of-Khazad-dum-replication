#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorArchitectureRoomVolume.generated.h"

class UBillboardComponent;
class UMorArchitectureRoomComponent;

UCLASS(Blueprintable)
class MORIA_API AMorArchitectureRoomVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorArchitectureRoomComponent* RoomComponent;
    
    AMorArchitectureRoomVolume(const FObjectInitializer& ObjectInitializer);

};

