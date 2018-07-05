#pragma once
#include <random>

class RandomNumber
{
private:
	int m_min, m_max;
	std::uniform_int_distribution<> set;
	

public:
	RandomNumber(int min, int max);
	~RandomNumber() {};

	int getRandomNumber();
};