#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns square root
 * @n: number to calculate the square root
 * Return: the retured square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * actual_real_recursion - used to recurse
 * @n: number to calculate the sqaure root
 * @i: iterator
 * Return: the resulting square root
 */
int actual_real_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_real_recursion(n, i + 1));
}

