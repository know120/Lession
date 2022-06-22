/* 
Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
 */

#include<stdio.h>

int main(){
    int number, result;
    printf("Enter a number : ");
    scanf("%d", &number);
    result = number - (number % 10);
    printf("After making last digit of %d zero is %d\n", number, result);
    return 0;
}