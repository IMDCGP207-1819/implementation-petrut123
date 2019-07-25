#pragma once
#include <random>

/// <summary>
/// Class that it's used to generate random numbers
/// </summary>
static class Random
{
public:
	/// <summary>
	/// Generate a random integer in the given range
	/// </summary>
	/// <param name="min">The maximum number allowed (included)</param>
	/// <param name="max">The minimum number allowed (included</param>
	/// <returns></returns>
	static int RandomNumberInRange(int min, int max);
};

