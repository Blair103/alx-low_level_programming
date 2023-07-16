#include <stdio.h>

/**
 * main - program printing alphabet in lower then uppercase
 * Return: 0 (success)
 */

int main(void)
{
	int n = 97;
	int x = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
