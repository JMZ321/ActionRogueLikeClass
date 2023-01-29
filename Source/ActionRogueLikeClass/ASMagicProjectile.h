#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ASMagicProjectile.generated.h"

UCLASS()
class ACTIONROGUELIKECLASS_API AASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AASMagicProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
