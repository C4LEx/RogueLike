#pragma once
#include <string>
#include <iostream>
#include <vector>

class Framework
{
private:
	std::string name;
	int origin;
	std::vector<int> validOriginList;
public:
	Framework();
	void nameInput();
	void classInput();
	void generatePlayer();
	void startItems();
};