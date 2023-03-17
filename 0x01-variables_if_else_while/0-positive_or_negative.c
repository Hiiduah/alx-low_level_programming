#include <stdio.h>
/**
 * main - A program to check if number is zero,positive or negative
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	printf("Enter the number to check");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	return (0);
}
