/*
Write a program to calculate sum of first N even natural numbers
 */

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * 2;
    }
    printf("Sum of first %d even natural numbers is %d\n", n, sum);
    return 0;
}