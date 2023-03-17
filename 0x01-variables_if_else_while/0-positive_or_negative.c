#include <stdio.h>
/**
 * main - A program to check if number is zero,positive or negative
 * Return: Always (Success)
 */
int main(void)
{

    int A; 
 
    printf("Enter the number A: "); 
    scanf("%d", &A); 
  
    if (A > 0) 
        printf("%d is positive.", A); 
    else if (A < 0) 
        printf("%d is negative.", A); 
    else if (A == 0) 
        printf("%d is zero.", A); 
  
    return (0);
}

