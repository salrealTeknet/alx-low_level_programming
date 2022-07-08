#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.c"

/**
 * main - Entry point
 *
 * Return: nothing
 */

int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

	return (0);
}
