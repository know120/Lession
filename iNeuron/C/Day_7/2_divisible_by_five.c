/* 
Write a program to check whether a given number is divisible by 5 or not
 */

#include<stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    number % 5 == 0 ? printf("Divisible by 5\n") : printf("Not divisible by 5\n");
    return 0;
}