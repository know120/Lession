/*
Write a program to count digits in a given number
 */
#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Number of digits in the number is %d\n", count);
    return 0;
}