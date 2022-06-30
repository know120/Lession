/* 
Write a program to calculate HCF of two numbers
 */
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int e = a, f = b;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("HCF of %d and %d is %d\n", e, f, a);
    return 0;
}