/* 
Write a program to swap values of two int variables without using third variable
 */

#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter two integer number : ");
    scanf("%d%d", &num1, &num2);
    printf("Values before swapping : %d, %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Values before swapping : %d, %d\n", num1, num2);
    return 0;
}