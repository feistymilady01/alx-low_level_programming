#include <stdio.h>
/**
 * main -print the alphabetic
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for ( c = 'a'; c <= 'z'; c++)
	
	{
		if ( c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
