#pragma once

#include <random>

class RandomFunctions
{
private:
	default_random_engine re;
	uniform_int_distribution<> dist;

public:
	RandomFunctions(int low, int high) :dist(low, high) {}

	int operator()() { return dist(re); }
};