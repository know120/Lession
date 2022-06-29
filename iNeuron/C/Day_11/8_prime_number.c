/*
Write a program to check whether a given number is a Prime number or not
 */
#include <stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}