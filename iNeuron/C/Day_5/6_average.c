/* 
Write a program to calculate the average of three numbers
 */

#include<stdio.h>

int main(){
    int num1, num2, num3;
    float result;
    printf("Enter three number : ");
    scanf("%d%d%d", &num1,&num2, &num3);
    result = (num1+num2+num3)/3.0 ;
    printf("Average of three number %d, %d, %d is : %.2lf\n",num1,num2,num3,result);
    return 0;
}