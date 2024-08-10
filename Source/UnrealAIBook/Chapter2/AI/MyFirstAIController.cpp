// Copyright 2019 Francesco Sapio. All right reserved.

#include "MyFirstAIController.h"
#include "UnrealAIBookCharacter.h"
#include "BehaviorTree/BehaviorTree.h"

void AMyFirstAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	AUnrealAIBookCharacter* Character = Cast<AUnrealAIBookCharacter>(InPawn);
	if (Character != nullptr)
	{
		UBehaviorTree* BehaviorTree = Character->BehaviorTree;
		if (BehaviorTree != nullptr) {
			RunBehaviorTree(BehaviorTree);
		}
	}
}