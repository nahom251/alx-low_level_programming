#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - betty style documentation for last digit checking
 * Return: Always 0 (Success)
 */
int main(void)
/* starting point */
{
	int n;
	int A;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	A = n % 10;
	if (A > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, A);
	if (A == 0)
	printf("Last digit of %d is 0 and is 0\n", n);
	if (A < 6 && A != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, A);
	return (0);
}
