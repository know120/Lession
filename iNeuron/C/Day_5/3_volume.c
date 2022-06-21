/* 
Write a program to calculate the volume of a Cuboid.
 */

#include<stdio.h>

int main(){
    int length, volume;
    printf("Enter length of the Cuboid : ");
    scanf("%d", &length);
    volume = length*length*length;
    printf("Volume of a Cuboid with lenght %d is : %d\n", length, volume);
    return 0;
}