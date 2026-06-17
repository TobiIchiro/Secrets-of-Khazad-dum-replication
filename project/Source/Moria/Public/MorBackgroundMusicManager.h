#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EMorBMModificator.h"
#include "MorBackgroundMusicManager.generated.h"

class UMorBackgroundMusicData;
class UMorBackgroundMusicPlayer;

UCLASS(Blueprintable)
class MORIA_API UMorBackgroundMusicManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBackgroundMusicPlayer* BMPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBackgroundMusicData* BMData;
    
public:
    UMorBackgroundMusicManager();

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void Play(const FName& AssetName);
    
    UFUNCTION(BlueprintCallable)
    void AddModificator(const FName& AssetName, EMorBMModificator Modificator, const FName& ModificatorName);
    
};

