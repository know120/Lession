/* 
Write a program to find first digit of a given three digit number
 */

#include<stdio.h>

int main(){

    int number, first_digit;
    printf("Enter a three digit number : ");
    scanf("%d",&number);
    first_digit =  number/100;
    printf("First digit of %d is : %d\n", number, first_digit);
    return 0;
}