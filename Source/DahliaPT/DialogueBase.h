// Copyright Dahlia Dev © 2019

#pragma once

#include "CoreMinimal.h"
#include "UserWidget.h"

/**
 * 
 */
class DAHLIAPT_API DialogueBase
{
public:
	DialogueBase(UUserWidget* TextWindowIn);
	~DialogueBase();

	void runDialogue();

private:
	DialogueBase* PreviousDialogue;
	DialogueBase* NextDialogue;
	UUserWidget* TextWindow;
};
