/* 
Write a program which takes the day number of a week and displays a unique greeting message for the day.
 */

#include<stdio.h>

int main(){
    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);
    switch(day){
        case 1:
            printf("Monday Motivation : Do Hard Work.\n");
            break;
        case 2:
            printf("Lets work more this Tuesday\n");
            break;
        case 3:
            printf("Hey this is Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Its' Friday. Let's party\n");
            break;
        case 6:
            printf("Enjoy with your family this Saturday\n");
            break;
        case 7:
            printf("Wish you a great sunny Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}