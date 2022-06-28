/*
Write a program to print the cubes of the first N natural numbers in reverse order.
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i * i * i);
    }
    return 0;
}