#include <stdio.h>
#include <main.h>
/**
 *
 *main -print the alphabetic
 *
 *Reurn: Always 0 (Successec)
 */
void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
