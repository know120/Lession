/*
Write a program to print the first N natural numbers.
 */

#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of natural numbers you want to print: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}