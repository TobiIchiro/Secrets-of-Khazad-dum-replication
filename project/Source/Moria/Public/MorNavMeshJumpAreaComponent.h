#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "Components/PrimitiveComponent.h"
#include "NavLinkCustomInterface.h"
#include "NavLinkHostInterface.h"
#include "EJumpLinkType.h"
#include "MorNavMeshEdgeProps.h"
#include "MorNavMeshJumpAreaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorNavMeshJumpAreaComponent : public UPrimitiveComponent, public INavLinkHostInterface, public INavLinkCustomInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpLinkType JumpLinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ShapeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNavMeshEdgeProps EdgeProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLinkBase NavLinkProps;
    
public:
    UMorNavMeshJumpAreaComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

