/* 
Write a program to swap values of two int variables
 */

#include<stdio.h>

int main(){
    int num1, num2, swap;
    printf("Enter two integer number : ");
    scanf("%d%d", &num1,&num2);
    printf("Value before swapping : %d, %d\n", num1, num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("Value after swapping : %d, %d\n", num1, num2);
    return 0;
}