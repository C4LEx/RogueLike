#pragma once

#include "randomFunctions.h"

class DungeonField
{
private:
	int startX, startY, lenght, height;
	int minLength = 8;
	int minHeight = 8;
	int maxLength = 14;
	int maxHeight = 14;

	DungeonField* parent;  
	DungeonField* childLeftTop;
	DungeonField* childRightBottom;

	void split(int var, bool splitHorizontal);

public:
	DungeonField(int startX, int startY, int lenght, int height);
	DungeonField(DungeonField* parent, int startX, int startY, int lenght, int height);

	DungeonField* createNewField(DungeonField* parent);
};