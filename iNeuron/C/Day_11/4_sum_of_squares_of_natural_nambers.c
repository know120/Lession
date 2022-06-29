/*
Write a program to calculate sum of squares of first N natural numbers
 */
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of squares of first %d natural numbers is %d\n", n, sum);
    return 0;
}