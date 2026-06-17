#pragma once
#include "CoreMinimal.h"
#include "MorNetUserId.h"
#include "MorPersistentPlayerIdentifier.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorPersistentPlayerIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString ComparableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorNetUserId ActiveUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorNetUserId NativeUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NativePlatform;
    
    FMorPersistentPlayerIdentifier();
};

