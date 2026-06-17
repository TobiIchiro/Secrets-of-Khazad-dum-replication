#pragma once
#include "CoreMinimal.h"
#include "EMSongType.h"
#include "EMusicState.h"
#include "MorSongRowHandle.h"
#include "MorStartSongRequest.generated.h"

class AActor;
class UVoiceComponent;

USTRUCT(BlueprintType)
struct FMorStartSongRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMSongType SongType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSongRowHandle SpecificSong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpecificSongSectionIndex;
    
    MORIA_API FMorStartSongRequest();
};

