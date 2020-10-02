#include "experience.h"

Experience::Experience()
{
	for (int i = 1; i < 31; i++)
	{
		int x = 10;
		int y = i*i;
		explist.push_back(x*y);
	}
}

std::vector<int> Experience::getExpList()
{
	return explist;
}

bool Experience::enoughExp(int exp, int level)
{
	int comparevalue = explist.at(level - 1);
	if (exp >= comparevalue)
		return true;
	else
		return false;
}