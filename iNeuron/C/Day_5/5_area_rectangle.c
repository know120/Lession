/* 
Write a program to calculate the area of a rectangle
 */

#include<stdio.h>

int main(){
    int length, width, area;
    printf("Enter lenght and width of the rectangle: ");
    scanf("%d%d", &length,&width);
    area = length * width;
    printf("Area of the rectangle with length %d and width %d is : %d\n", length,width,area);
    return 0;
}