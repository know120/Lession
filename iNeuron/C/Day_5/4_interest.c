/* 
Write a program to calculate the simple interest
 */

#include<stdio.h>

int main(){
    int principle, rate, time, interest;
    printf("Enter principle amount: ");
    scanf("%d", &principle);
    printf("Enter interest rate in percentage: ");
    scanf("%d", &rate);
    printf("Enter time period in years: ");
    scanf("%d", &time);
    interest = principle * rate * time;
    printf("Simple interest of Rs %d for %d years at %d ineterest rate is : %d\n", principle,time,rate,interest); 
    return 0;
}