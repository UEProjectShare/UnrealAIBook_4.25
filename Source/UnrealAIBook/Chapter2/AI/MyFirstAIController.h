// Copyright 2019 Francesco Sapio. All right reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MyFirstAIController.generated.h"

/**
 * 
 */
UCLASS()
class UNREALAIBOOK_API AMyFirstAIController : public AAIController
{
	GENERATED_BODY()

protected:

	//** override the OnPossess function to run the behavior tree.
	void OnPossess(APawn* InPawn) override;
	
};
