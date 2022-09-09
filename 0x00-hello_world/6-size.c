#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int e;
	long int i;
	long long int o;
	float u;

	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(e));
	printf("size of a long int: %d byte(s)\n", sizeof(i));
	printf("size of a long long int: %d byte(s)\n", sizeof(o));
	printf("size of a float: %d byte(s)\n", sizeof(u));
	return (0);
}
