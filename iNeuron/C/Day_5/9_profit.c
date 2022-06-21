/* 
Write a program to calculate the profit percentage upon selling a product. Cost price and selling price are given by the user.
 */

#include<stdio.h>

int main(){
    int cost, selling_price;
    float profit;
    printf("Enter Cost price and Selling price : ");
    scanf("%d %d",&cost, &selling_price);
    profit = (selling_price - cost)*100.0/ cost;
    printf("Profit on selling price %d upon cost %d is %.2lf %%\n",selling_price,cost, profit);
    return 0;
}