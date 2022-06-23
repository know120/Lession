/* 
Write a program to check whether a given number is a three digit number or not.
 */

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    (number/100) > 0 && (number/100) < 10 ? printf("Three digit number\n") : printf("Not a three digit number\n"); 
    return 0;
}