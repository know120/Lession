/* 
Write  a program to calculate the sum of two numbers.
 */

#include<stdio.h>
// #include<stdlib.h>


int main(){
    int num1,num2,sum;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is : %d\n", num1, num2, sum);
    // getchar();
    return 0;
}

