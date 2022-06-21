/* 
Write a program which takes a character as input and print its ASCII code.
 */

#include<stdio.h>

int main(){
    char inp;
    printf("Enter any one character : ");
    scanf("%c", &inp);
    printf("ASCII value of %c is : %d\n", inp,inp);
    return 0;
}