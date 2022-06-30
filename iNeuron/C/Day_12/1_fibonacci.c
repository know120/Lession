/* 
Write a program to print first N terms of a Fibonacci series
 */
#include <stdio.h>
int main()
{
    int n, i, a, b, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}