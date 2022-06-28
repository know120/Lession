/* 
Write a program to print the cubes of the first 10 natural numbers in reverse order.
 */
#include<stdio.h>

int main(){
    int i;
    for(i=10;i>0;i--){
        printf("%d\n",i*i*i);
    }
    return 0;
}