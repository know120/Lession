/*
Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
 */

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter marks of five subjects : ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    if (num1 < 33)
    {
        printf("Failed\n");
        return 0;
    }
    else if (num2 < 33)
    {
        printf("Failed\n");
        return 0;
    }
    else if (num3 < 33)
    {
        printf("Failed\n");
        return 0;
    }
    else if (num4 < 33)
    {
        printf("Failed\n");
        return 0;
    }
    else if (num5 < 33)
    {
        printf("Failed\n");
        return 0;
    }else{
        printf("Passed\n");
    }

    return 0;
}