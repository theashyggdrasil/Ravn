#include "RNG.h"

RandomNumber::RandomNumber(int min, int max)
{
	m_min = min;
	m_max = max;


	set = std::uniform_int_distribution<>(m_min, m_max);
}


int RandomNumber::getRandomNumber()
{
	std::random_device rd;
	std::mt19937 mersenne(rd());
	return set(mersenne);
}
