#include "item.h"

Item::Item(int input)
{
	grouplist.push_back("Helm"); //0
	grouplist.push_back("Brustschutz"); //1
	grouplist.push_back("Armschienen"); //2
	grouplist.push_back("Hüftschutz"); //3
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
	strength = 0;
	dextory = 0;
	wisdom = 0;
	criticalChance = 0;
	criticalDamage = 0;
	gold = 0;
	agility = 0;

	srand((unsigned) time(NULL));

	itemGeneration(input);
}

void Item::itemGeneration(int playerlevel) 
{
	int y = grouplist.size();
	int x1 = rand() % y;
	group = grouplist.at(x1);
	std::cout << group << std::endl;

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
	std::cout << seldom << std::endl;

	std::string suffix = "";
	if (x1 == 0 || x1 == 1 || x1 == 3 || x1 == 9 || x1 == 10)
		suffix = "er";
	else if (x1 == 5 || x1 == 6)
		suffix = "es";
	else if (x1 == 2 || x1 == 4 || x1 == 7 || x1 == 8 || x1 == 11)
		suffix = "e";
	name = seldom + suffix + " " + group;
	std::cout << name << std::endl;


}