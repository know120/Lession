/* 
Write a program to check whether a given number is even or odd
 */

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    number % 2 == 0 ? printf("Even number\n") : printf("Odd number\n");
    return 0;
}