#pragma once
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>

class Inventory
{
private:
	int slots;
	//std::vector<Item> gear;
public:
	Inventory();
	void putItemInGear(int whatItem);
};