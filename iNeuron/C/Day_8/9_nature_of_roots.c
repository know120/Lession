/* 
Write a program to find the nature of roots of a quadratic equation.
 */

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, d, x1, x2;
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0) {
        printf("The equation has no real roots\n");
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("The equation has one real root: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The equation has two real roots: %.2f and %.2f\n", x1, x2);
    }
    return 0;
}