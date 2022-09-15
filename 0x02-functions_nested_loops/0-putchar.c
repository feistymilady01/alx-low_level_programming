#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 on error, 1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
