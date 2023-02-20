#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: ' last digit of the number stored in the variable n'
 * Return: always 0
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ld);
	}
	else (0 > n > 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
