/* 
Write a program to calculate the area of a circle.
 */

#include<stdio.h>

int main(){
    int radius;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = radius*radius*22/7.0;
    printf("Area of a circle with radius %d is : %.2lf\n", radius,area);
    return 0;
}