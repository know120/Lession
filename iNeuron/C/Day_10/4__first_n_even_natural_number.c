/*
Write a program to print the first N even natural numbers.
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of even natural numbers you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i*2);
    }
    return 0;
}