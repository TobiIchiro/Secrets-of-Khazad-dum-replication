#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "OnTeleportToBookmarkDelegate.h"
#include "FGKBookmark.generated.h"

class AFGKBookmark;
class UObject;

UCLASS(Blueprintable)
class FGK_API AFGKBookmark : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportToBookmark OnTeleportToBookmark;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingActionName;
    
public:
    AFGKBookmark(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniqueNameAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBindingKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static int32 GetAllBookmarks(UObject* WorldContext, TArray<AFGKBookmark*>& Bookmarks);
    
};

