#include <stdio.h>
/**
 * main -print three combination
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, c, e;

	for (i = '0'; i <= '9'; i++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			for (e = '0'; e <= '9'; e++)
			{
				if (c <i)
				{
					putchar(c);
					putchar(i);
					if (i != '7' || (c != '8' && e == '9'))
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
