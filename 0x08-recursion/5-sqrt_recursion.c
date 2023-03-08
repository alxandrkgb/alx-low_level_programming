#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: natural square root of n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n));
	}
}


/**
 * _sqrt_helper - Helper function for _sqrt_recursion
 * @n: The number to find the natural square root of
 * @min: The minimum possible square root.
 * @max: The maximum possible square root
 *
 * Return: The natural square root of the number,
 * or -1 if the number does not have a natural square root
 */
int _sqrt_helper(int n, int min, int max)
{
	if (max < min)
	{
		return (-1);
	}
	else
	{
		int guess = (min + max) / 2;

		if (guess * guess == n)
		{
			return (guess);
		}
		else if (guess * guess > n)
		{
			return (_sqrt_helper(n, min, guess - 1));
		}
		else
		{
			return (_sqrt_helper(n, guess + 1, max));
		}
	}
}
