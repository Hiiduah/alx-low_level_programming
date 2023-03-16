#include <stdio.h>
/**
 * main - main function
 * Return: 0 (Success)
 */
int main(viod)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	pritf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
