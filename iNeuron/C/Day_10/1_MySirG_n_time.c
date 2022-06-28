/*
Write a program to print MySirG N times on the screen.
 */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of times you want to print MySirG: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("MySirG\n");
    }
    return 0;
}