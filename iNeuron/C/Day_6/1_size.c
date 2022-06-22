/* 
Write a program to print size of an int, a float, a char and a double type variable
 */

#include<stdio.h>

int main(){
    printf("Size of an 'int' is : %ld\n", sizeof(int));
    printf("Size of a 'float' is : %ld\n", sizeof(float));
    printf("Size of a 'char' is : %ld\n", sizeof(char));
    printf("Size of an 'double' is : %ld\n", sizeof(double));
    return 0;
}