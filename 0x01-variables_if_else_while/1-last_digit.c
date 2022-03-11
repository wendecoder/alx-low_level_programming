#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt = n % 10;
	if (lt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lt);
	else if (lt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lt);
	else if (lt < 6 && lt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt);
	return (0);
}
