#include <stdio.h>
/**
 * main - Entry point
 *
 * Diescription: using the function
 *this program prints "Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	
	
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
