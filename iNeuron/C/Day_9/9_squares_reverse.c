/* 
Write a program to print the squares of first 10 natural numbers in reverse order
 */
#include<stdio.h>

int main(){
    int i;
    for(i=9;i>=0;i--){
        printf("%d\n",i*i);
    }
    return 0;
}