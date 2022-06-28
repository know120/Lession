/*
Write a program to print the first N odd natural numbers
 */

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of odd natural numbers you want to print: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", i*2+1);
    }
    return 0;
}