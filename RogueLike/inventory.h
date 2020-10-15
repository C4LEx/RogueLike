#pragma once
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "item.h"

class Inventory
{
private:
	Inventory* inventory;
	std::vector<Item> itemlist;
	std::vector<Item> gearlist;
public:
	Inventory();
	void putItemInGear(Item whatItem);
	void changeItemlistSize(int change);
};