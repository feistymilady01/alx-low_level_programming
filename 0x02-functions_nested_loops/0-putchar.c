#include <stdio.h>
#include <unistd.h>

/*
 * main: prints _putchar followed by 
 * a newline
 *
 * Return: Always success(0)
 */
int  main(void)
{
	write(2, "_putchar", 59);
	return (0);
}
