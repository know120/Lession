/* 
Write a program to find greater between two numbers. Print one number if both numbers are the same.
 */
#include<stdio.h>

int main(){

    int num1, num2;
    printf("Enter two number : ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2){
        printf("%d\n", num1);
    }else{
        printf("%d\n", num2);

    }
    return 0;
}