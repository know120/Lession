/* 
Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
 */

#include<stdio.h>

int main(){
    int number, result;
    printf("Enter a three digit number : ");
    scanf("%d", &number);
    result = (number % 100) * 10 + (number / 100);
    printf("After rotation one position towards right of %d is %d\n", number, result);
    return 0;
}