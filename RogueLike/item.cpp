#include "item.h"

Item::Item(int input)
{
	name = "";
	group = "";
	health = 0;
	armor = 0;
	strength = 0;
	dextory = 0;
	wisdom = 0;
	criticalChance = 0;
	criticalDamage = 0;
	gold = 0;
	agility = 0;
	itemGeneration(input);
}

void Item::itemGeneration(int input) // input = playerlevel
{

}