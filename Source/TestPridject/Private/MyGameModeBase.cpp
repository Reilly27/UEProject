// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

FString AMyGameModeBase::Convert(FString Text)
{

	for (int i = 0; i < Text.Len(); i++)
	{
		if (Text[i] >= 65 && Text[i] <= 90)
			Text[i] = Text[i] + 32;
	}


	for (int i = 0; i < Text.Len(); i++)
	{
		for (int j = 0; j < Text.Len(); j++)
		{
			if (Text[i] == Text[j] && Repeat != true && i!=j)
			{
				ReturnText += ')';
				Repeat = true;
			}
		}
		if (Repeat != true)
		{
			ReturnText += '(';
		}
		Repeat = false; 
	}	
	FString SaveText = ReturnText;
	ReturnText = nullptr;
	return SaveText;

}
