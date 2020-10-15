#include "playermanager.h"
#include "inputcheck.h"
#include "item.h"
#include "player.h"
#include "inventory.h"

Playermanager::Playermanager()
{
	name = "";
	origin = 0;
	for (int i = 1; i < 4; i++)
		validOriginList.push_back(i);
}

void Playermanager::nameInput()
{
	std::cout << "Geben Sie Ihren Namen ein!" << std::endl;
	std::cin >> name;
	//std::cout << name << std::endl;
}

void Playermanager::classInput()
{
	std::cout << "Welcher Klasse moechten Sie zugehoerig sein?" << std::endl;
	std::cout << "Zur Auswahl stehen: Krieger (1), Schuetze (2) oder Zauberer (3)" << std::endl;
	Inputcheck check;
	origin = check.makeIntInputValid(validOriginList);
	//std::cout << origin << std::endl;
}

void Playermanager::generatePlayer()
{
	Player* player = new Player(name, origin);
	std::string name1 = player->getPlayername();
}

void Playermanager::startItems()
{
	Inventory* inventar = new Inventory();
	if (origin == 1) // Krieger
	{
		Item einhandschwertStart;
		einhandschwertStart.generateSpecificItem(5, 0, 0, 0, 3, 1, 0, 0, 0, 0, 2, 1);
		inventar->putItemInGear(einhandschwertStart);
	}
	else if (origin == 2) // Schütze
	{
		Item armbrustStart;
		armbrustStart.generateSpecificItem(11, 0, 0, 0, 5, 0, 1, 0, 0, 0, 1, 1);
		inventar->putItemInGear(armbrustStart);
	}
	else if (origin == 3) // Zauberer
	{
		Item stabStart;
		stabStart.generateSpecificItem(10, 0, 0, 0, 5, 0, 0, 1, 0, 0, 1, 1);
		inventar->putItemInGear(stabStart);
	}
}

void Playermanager::changeGear(int whatGroup)
{

}

void Playermanager::updatePlayer()
{

}
