#include <stdio.h>

/**
 * main - print the sting in the char function
 *
 *Description: using the function
 *this program prints "Programming is like building a multilingual puzzle"
 * Return: 0
 */
int main(void)
{
    char c;
    init i;
    long li;
    long long lli;
    fload f;

    printf("size of char: %ld byte(s)\n", sizeof(c));
    printf("size of an int: %ld byte(s)\n", sizeof(i));
    printf("size of a long int: %ld byte(s)\n", sizeof(li));
    printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
    printf("size of a float: %ld byte(s)\n", sizeof(f));
    return(0);
}
