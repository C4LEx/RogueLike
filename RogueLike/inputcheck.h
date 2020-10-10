#pragma once
#include <vector>

class Inputcheck
{
private:
	int input;
public:
	Inputcheck();
	bool isIntInputValid(int input, std::vector<int> inputs);
	int makeIntInputValid(std::vector<int> inputs);
};