#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base
 *  10 starting from 0
 *  Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
