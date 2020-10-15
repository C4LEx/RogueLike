#include "inventory.h"
#include "item.h"
#include "player.h"

Inventory::Inventory()
{
	this->inventory = nullptr;
	gearlist.resize(12);
	itemlist.resize(10);
}

void Inventory::putItemInGear(Item whatItem)
{
	for (int i = 0; i < itemlist.size(); i++)
	{
		if (whatItem.getName().compare(itemlist.at(i).getName()) == 0)
			itemlist.erase(itemlist.begin() + i); 
	}
	
	Item copy = gearlist[whatItem.getGroupIndex()];
	gearlist[whatItem.getGroupIndex()] = whatItem;
	itemlist.push_back(copy);
}

void Inventory::changeItemlistSize(int change)
{
	itemlist.resize(change);
}