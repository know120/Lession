/*
Write a program to print the squares of first N natural numbers
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}