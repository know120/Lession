/* 
Write a program to check whether a given alphabet is in uppercase or lowercase.
 */

#include<stdio.h>

int main(){
    char inp;
    int value;
    printf("Enter any one Alphabet : ");
    scanf("%c", &inp);
    value = inp;
    if(value >= 65 && value <=90){
        printf("Upper Case\n");
    }else{
        printf("Lower Case\n");
    }

    return 0;
}