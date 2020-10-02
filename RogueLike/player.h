#pragma once
#include <string>
#include <vector>

class Player
{
private:
	string name;
	int level;
	int exp;
	int health;
	int armor;
	int strength;
	int dextory;
	int wisdom;
	int criticalChance;
	int criticalDamage;
	int gold;
	int agility;
	vector <int> explist;
public:
	Player(string input);
	string getPlayername();
	void changeLevel(int input);
	int getHealth();
	void changeHealth(int input);
	int getArmor();
	void changeArmor(int input);
	int getStrength();
	void changeStrength(int input);
	int getDextory();
	void changeDextory(int input);
	int getWisdom();
	void changeWisdom(int input);
	int getCriticalChance();
	void changeCriticalChance(int input);
	int getCriticalDamage();
	void changeCriticalDamage(int input);
	int getGold();
	void changeGold(int input);
	int getAgility();
	void changeAgility(int input);
};