/*
Write a program to find last digit of a given number
 */

#include <stdio.h>

int main()
{
    int num, last_digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    last_digit = num%10;
    printf("Last digit of %d is : %d\n", num, last_digit);
    return 0;
}