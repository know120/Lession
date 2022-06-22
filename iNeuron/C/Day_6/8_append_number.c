/* 
Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
 */

#include<stdio.h>

int main(){
    int num1, num2, result;
    printf("Enter a number and a digit : ");
    scanf("%d%d",&num1, &num2);
    result = num1*10 + num2;
    printf("Final number after appending %d in %d is %d.\n", num2, num1, result);
    return 0;
}