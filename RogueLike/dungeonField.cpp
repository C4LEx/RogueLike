#include "dungeonField.h"

DungeonField::DungeonField(int startX, int startY, int lenght, int height)
{
	//Creating the root note of the field tree
	this->startX = startX;
	this->startY = startY;
	this->lenght = lenght;
	this->height = height;

	this->parent = nullptr;
	this->childLeftTop = nullptr;
	this->childRightBottom = nullptr;
}

DungeonField::DungeonField(DungeonField* parent, int startX, int startY, int lenght, int height)
{
	//Creating a new note in the fieldtree
	this->startX = startX;
	this->startY = startY;
	this->lenght = lenght;
	this->height = height;

	this->parent = parent;
	this->childLeftTop = nullptr;
	this->childRightBottom = nullptr;
}


DungeonField* DungeonField::createNewField(DungeonField* parent)
{
	bool splitHorizontal = false;

	if ((lenght * 1.15) > height)
	{
		splitHorizontal = false;
	}
	else if ((height * 1.15) > lenght)
	{
		splitHorizontal = true;
	}
	else
	{
		RandomFunctions rng{ 1,2 };

		if (rng == 1)
			splitHorizontal = false;
		else if (rng == 2)
			splitHorizontal = true;
	}

	if (splitHorizontal)
	{

	}

	DungeonField *nextField = new DungeonField(parent, 0,0,0,0);

	return nextField;
}

void DungeonField::split(int var, bool splitHorizontal)
{
	if (splitHorizontal)
	{
		if (var > maxHeight)
		{

		}
	}
	else
	{

	}
}