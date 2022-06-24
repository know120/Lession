/* 
Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
 */

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an alphabet (uppercase)\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is an alphabet (lowercase)\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit\n", ch);
    } else {
        printf("%c is a special character\n", ch);
    }
    return 0;
}