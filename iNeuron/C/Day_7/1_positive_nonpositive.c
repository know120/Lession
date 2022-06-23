/* 
Write a program to check whether a given number is positive or non positive
 */

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    number > 0 ? printf("Positive\n") : printf("Non Positive\n");
    return 0;
}