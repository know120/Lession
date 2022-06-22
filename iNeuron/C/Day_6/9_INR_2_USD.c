/* 
Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
 */

#include<stdio.h>

int main(){
    float inr , usd;
    printf("Enter amount in INR : ");
    scanf("%f", &inr);
    usd = inr * 76.23;
    printf("Value of INR %.2f is %.2f USD.\n", inr,usd);
    return 0;
}