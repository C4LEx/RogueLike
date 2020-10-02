#include "player.h"
#include "experience.h"

Player::Player(std::string input)
{
	std::string name = input;
	level = 1;
	exp = 0;
	health = 10;
	armor = 0;
	strength = 0;
	dextory = 0;
	wisdom = 0;
	criticalChance = 0;
	criticalDamage = 150;
	gold = 0;
	agility = 1;
}

std::string Player::getPlayername()
{
	return name;
}

int Player::getLevel()
{
	return level;
}

void Player::changeLevel(int input)
{
	level = level + input;
}

int Player::getExp()
{
	return exp;
}

void Player::changeExp(int input, int level)
{
	exp = exp + input;
	Experience experience;
	while (experience.enoughExp(exp, level))
	{
		changeLevel(1);
	}
}

int Player::getHealth()
{
	return health;
}

void Player::changeHealth(int input)
{
	health = health + input;
}

int Player::getArmor()
{
	return armor;
}

void Player::changeArmor(int input)
{
	armor = armor + input;
}

int Player::getStrength()
{
	return strength;
}

void Player::changeStrength(int input)
{
	strength = strength + input;
}

int Player::getDextory()
{
	return dextory;
}

void Player::changeDextory(int input)
{
	dextory = dextory + input;
}

int Player::getWisdom()
{
	return wisdom;
}

void Player::changeWisdom(int input)
{
	wisdom = wisdom + input;
}

int Player::getCriticalDamage()
{
	return criticalChance;
}

void Player::changeCriticalDamage(int input)
{
	criticalDamage = criticalDamage + input;
}

int Player::getCriticalChance()
{
	return criticalDamage;
}

void Player::changeCriticalChance(int input)
{
	criticalChance = criticalChance + input;
}

int Player::getGold()
{
	return gold;
}

void Player::changeGold(int input)
{
	gold = gold + input;
}

int Player::getAgility()
{
	return agility;
}

void Player::changeAgility(int input)
{
	agility = agility + input;
}