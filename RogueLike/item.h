#pragma once
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

class Item
{
private:
	std::string name;
	std::string group;
	std::string seldom;
	int health;
	int armor;
	int strength;
	int dextory;
	int wisdom;
	int criticalChance;
	int criticalDamage;
	int gold;
	int agility;
	std::vector<std::string> grouplist;
	std::vector<std::string> seldomlist;
public:
	Item(int input);
	void itemGeneration(int playerlevel);

};