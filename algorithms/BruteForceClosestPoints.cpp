#include "stdafx.h"

double BruteForceClosestPoints(int * poins, int number)
{
	unsigned long distanceSquare = ULONG_MAX;
	for (int i = 0; i < number; i++)
	{
		for (int j = i + 1; j < number; j++)
		{
			distanceSquare = std::min<unsigned long>(distanceSquare, (poins[2 * i] - poins[2 * j]) * (poins[2 * i] - poins[2 * j]) + (poins[2 * i + 1] - poins[2 * j + 1]) * (poins[2 * i + 1] - poins[2 * j + 1]));
		}
	}
	return sqrt(distanceSquare);
}