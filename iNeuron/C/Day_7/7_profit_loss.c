/* 
Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
 */

#include<stdio.h>

int main(){
    int cost, sellig_price;
    float profit;
    printf("Enter cost and selling price : ");
    scanf("%d%d", &cost, &sellig_price);
    profit = 100.0*(sellig_price - cost)/cost;
    if(profit > 0)
        printf("Profit = %.2lf%%\n", profit);
    else
        printf("Loss = %.2lf%%\n", profit*-1);
    return 0;
}