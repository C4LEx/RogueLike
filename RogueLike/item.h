#pragma once
#include <string>

class Item
{
private:
	std::string name;
	std::string group;
	int health;
	int armor;
	int strength;
	int dextory;
	int wisdom;
	int criticalChance;
	int criticalDamage;
	int gold;
	int agility;
public:
	Item(int input);
	void itemGeneration(int input);

};