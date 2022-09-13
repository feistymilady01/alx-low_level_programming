#include <stdio.h>
/**
 * main -print three combination
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, c, e;

	for (i = 0; i <= 8; i++)
	{
		for (c = i + 1; c <= 9; c++)
		{
			for (e = c + 1; e <= 10; e++)
			{
				putchar((i % 10) + '0');
				putchar((c % 10) + '0');
				putchar((e % 10) + '0');
				if (i == 7 && c == 8 && e == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
