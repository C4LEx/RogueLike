#include "item.h"

Item::Item()
{
	grouplist.push_back("Helm"); //0
	grouplist.push_back("Brustschutz"); //1
	grouplist.push_back("Armschienen"); //2
	grouplist.push_back("Hueftschutz"); //3
	grouplist.push_back("Beinschienen"); //4
	grouplist.push_back("Einhandschwert"); //5
	grouplist.push_back("Zweihandschwert"); //6
	grouplist.push_back("Einhandaxt"); //7
	grouplist.push_back("Zweihandaxt"); //8
	grouplist.push_back("Dolch"); //9
	grouplist.push_back("Stab"); // Zweihand 10
	grouplist.push_back("Armbrust"); // Zweihand 11

	seldomlist.push_back("normal");
	seldomlist.push_back("magisch");
	seldomlist.push_back("selten");
	seldomlist.push_back("legendaer"); // WIP

	name = "";
	group = "";
	seldom = "";
	health = 0;
	armor = 0;
	damage = 0;
	strength = 0;
	dextory = 0;
	wisdom = 0;
	criticalChance = 0;
	criticalDamage = 0;
	goldworth = 0;
	agility = 0;

	srand((unsigned) time(NULL));
}

void Item::itemGeneration(int playerlevel) 
{
	playerlevel = playerlevel / 2; // Balancing
	if (playerlevel == 0)
		playerlevel = 1;

	int y = grouplist.size();
	int x1 = rand() % y;
	group = grouplist.at(x1);

	int x2 = rand() % 100;
	int z = 0;
	if (x2 < 40)
		z = 0;
	else if (x2 >= 40 && x2 < 70)
		z = 1;
	else if (x2 >= 70 && x2 < 90)
		z = 2;
	else if (x2 >= 90)
		z = 3;
	seldom = seldomlist.at(z);

	std::string suffix = "";
	if (x1 == 0 || x1 == 1 || x1 == 3 || x1 == 9 || x1 == 10)
		suffix = "er";
	else if (x1 == 5 || x1 == 6)
		suffix = "es";
	else if (x1 == 2 || x1 == 4 || x1 == 7 || x1 == 8 || x1 == 11)
		suffix = "e";
	name = seldom + suffix + " " + group;
	
	z++;
	int x = 0;
	if (x1 <= 4)
	{
		x = rand() % 24;
		health = x + playerlevel * z;

		x = rand() % 14;
		armor = x + playerlevel * z;
	}
	else
	{
		x = rand() % 14;
		damage = x + playerlevel * z;
	}

	x = rand() % 2;
	if (x == 0)
	{
		x = rand() % 9;
		strength = x + playerlevel * z;
	}
	else if (x == 1)
	{
		x = rand() % 9;
		dextory = x + playerlevel * z;
	}
	else if (x == 2)
	{
		x = rand() % 9;
		wisdom = x + playerlevel * z;
	}

	int x3 = 0;
	if (z > 1)
	{
		if (z == 4)
		{
			x = rand() % 3;
			criticalChance = x + playerlevel * z;
			x = rand() % 3;
			criticalDamage = x + playerlevel * z;
			x = rand() % 3;
			agility = x + playerlevel * z;
		}
		else if (z == 3)
		{
			x3 = rand() % 2;
			if (x3 == 0)
			{
				x = rand() % 3;
				criticalChance = x + playerlevel * z;
				x = rand() % 3;
				criticalDamage = x + playerlevel * z;
			}
			else if (x3 == 1)
			{
				x = rand() % 3;
				criticalDamage = x + playerlevel * z;
				x = rand() % 3;
				agility = x + playerlevel * z;
			}
			else if (x3 == 2)
			{
				x = rand() % 3;
				criticalChance = x + playerlevel * z;
				x = rand() % 3;
				agility = x + playerlevel * z;
			}
		}
		else if (z == 2)
		{
			x3 = rand() % 2;
			if (x3 == 0)
			{
				x = rand() % 3;
				criticalChance = x + playerlevel * z;
			}
			else if (x3 == 1)
			{
				x = rand() % 3;
				criticalDamage = x + playerlevel * z;
			}
			else if (x3 == 2)
			{
				x = rand() % 3;
				agility = x + playerlevel * z;
			}
		}
	}

	goldworth = x2 + playerlevel * z;
	
	/*std::cout << name << std::endl;
	std::cout << "health: " << health << std::endl;
	std::cout << "armor: " << armor << std::endl;
	std::cout << "damage: " << damage << std::endl;
	std::cout << "strength: " << strength << std::endl;
	std::cout << "dextory: " << dextory << std::endl;
	std::cout << "wisdom: " << wisdom << std::endl;
	std::cout << "criticalChance: " << criticalChance << std::endl;
	std::cout << "criticalDamage: " << criticalDamage << std::endl;
	std::cout << "agility: " << agility << std::endl;
	std::cout << "goldworth: "<< goldworth << std::endl; */
}