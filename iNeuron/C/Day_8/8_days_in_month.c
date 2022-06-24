/*
Write a program which takes the month number as an input and display number of days in that month.
 */

#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("%d has 31 days\n", month);
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("%d has 30 days\n", month);
    }
    else if (month == 2)
    {
        printf("%d has 28 days\n", month);
    }
    else
    {
        printf("%d is not a valid month\n", month);
    }
    return 0;
}