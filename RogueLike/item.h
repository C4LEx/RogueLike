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
	int damage;
	int strength;
	int dextory;
	int wisdom;
	int criticalChance;
	int criticalDamage;
	int agility;
	int goldworth;
	std::vector<std::string> grouplist;
	std::vector<std::string> seldomlist;
public:
	Item();
	void randomItemGeneration(int playerlevel);
	void generateSpecificItem(int whatItem, int rarity, int health, int armor, int damage, int strength, int dextory, int wisdom, int criticalDamage, int criticalChance, int agility, int goldworth);
	std::string suffixGenerator(int whatItem);
	std::string getGroup();
	int getGroupIndex();
	std::string getName();
};