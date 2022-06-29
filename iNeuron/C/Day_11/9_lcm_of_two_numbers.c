/*
Write a program to calculate LCM of two numbers
 */
#include <stdio.h>

int main()
{
    int a, b, lcm, __gcd;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    for( int i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            __gcd = i;
        }
    }

    lcm = a * b / __gcd;
    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}