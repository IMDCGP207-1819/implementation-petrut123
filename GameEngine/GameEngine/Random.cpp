#include "pch.h"
#include "Random.h"

int Random::RandomNumberInRange(int min, int max)
{
	return rand() % (max + 1 - min) + min;
}
