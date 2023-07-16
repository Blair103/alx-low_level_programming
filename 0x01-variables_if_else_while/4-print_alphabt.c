#include <stdio.h>

/**
 * main - prints alphabet except q and e
 * Return: 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 1222)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
