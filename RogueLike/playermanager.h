#pragma once
#include <string>
#include <iostream>
#include <vector>

class Playermanager
{
private:
	std::string name;
	int origin;
	std::vector<int> validOriginList;
public:
	Playermanager();
	void nameInput();
	void classInput();
	void generatePlayer();
	void startItems();
	void changeGear(int whatGroup);
	void updatePlayer();
};