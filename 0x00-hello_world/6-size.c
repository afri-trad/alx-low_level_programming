#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z;
	int v;
	long int w;
	long long int x;
	float y;

	printf("size of a char: %d byte(s)\n", sizeof(z));
	printf("size of an int: %d byte(s)\n", sizeof(v));
	printf("size of a long int: %d byte(s)\n", sizeof(w));
	printf("size of a long long int: %d byte(s)\n", sizeof(x));
	printf("size of a float: %d byte(s))\n", sizeof(y));
	return (0);
}
