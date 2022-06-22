/* 
Write a program to find middle digit of a given three digit number
 */
#include<stdio.h>

int main(){
    int number, middle_digit;
    printf("Enter a three digit number : ");
    scanf("%d",&number);
    middle_digit = (number%100)/10;
    printf("Middle digit of %d is %d.\n", number, middle_digit);
    return 0;
}