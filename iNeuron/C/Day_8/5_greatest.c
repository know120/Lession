/* 
Write a program to find the greatest among three numbers. If two or three numbers are identical and the greatest among all then print it only once.
 */

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d is the greatest\n", a);
    } else if (b > a && b > c) {
        printf("%d is the greatest\n", b);
    } else if (c > a && c > b) {
        printf("%d is the greatest\n", c);
    } else if (a == b && a > c) {
        printf("%d is the greatest\n", a);
    } else if (a == c && a > b) {
        printf("%d is the greatest\n", a);
    } else if (b == c && b > a) {
        printf("%d is the greatest\n", b);
    } else if (a == b && a == c) {
        printf("%d is the greatest\n", a);
    }
    return 0;
}