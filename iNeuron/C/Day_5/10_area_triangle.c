/* 
Write a program to calculate the area of a triangle where base and height of the triangle are given.
 */
#include<stdio.h>

int main(){
    int base, height;
    float area;
    printf("Enter base and height of triange : ");
    scanf("%d %d", &base, &height);
    area = base * height / 2.0;
    printf("Area of a Triangle with base %d and height %d is : %.2lf\n",base,height,area);
    return 0;
}