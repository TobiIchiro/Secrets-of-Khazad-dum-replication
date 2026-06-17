#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "FGKCharacterLibrary.generated.h"

class AController;
class AFGKBaseCharacter;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FGK_API UFGKCharacterLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKCharacterLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetSocketTransformChar(const AFGKBaseCharacter* Character, const FName& SocketName, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSocketTransform(const USkeletalMeshComponent* MeshComponent, const FName& SocketName, FTransform& OutTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void FlushWorldComposition(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAndProcessNewCharacter(AFGKBaseCharacter* CurrentCharacter, TSubclassOf<AFGKBaseCharacter> NewCharacterClass, AController* Controller);
    
};

