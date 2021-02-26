// Fill out your copyright notice in the Description page of Project Settings.


#include "TextReaderLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UTextReaderLibrary::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool UTextReaderLibrary::SaveTxt(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}