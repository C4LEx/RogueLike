#pragma once
#include <vector>
#include <cmath>

class Experience
{
private:
	std::vector<int> explist;
public:
	Experience();
	std::vector<int> getExpList();
	bool enoughExp(int exp, int level);
};