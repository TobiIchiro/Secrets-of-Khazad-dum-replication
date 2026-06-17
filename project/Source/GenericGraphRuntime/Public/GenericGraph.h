#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GenericGraph.generated.h"

class UGenericGraphEdge;
class UGenericGraphNode;

UCLASS(Blueprintable)
class GENERICGRAPHRUNTIME_API UGenericGraph : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericGraphNode> NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGenericGraphEdge> EdgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GraphTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericGraphNode*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGenericGraphNode*> AllNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEdgeEnabled;
    
    UGenericGraph();

    UFUNCTION(BlueprintCallable)
    void Print(bool ToConsole, bool ToScreen);
    
    UFUNCTION(BlueprintCallable)
    void GetNodesByLevel(int32 Level, TArray<UGenericGraphNode*>& Nodes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelNum() const;
    
};

