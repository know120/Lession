/* 
Write a program to display following patterns
   *
  ***
 *****
*******
 */
#include<stdio.h>

int main(){
    int i,j;
    int n = 4;
    for(i=1;i<=n;i++){
        for(j=2*n-1;j>=1;j--){
            if(j>=n-i+1 && j<=n+i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}