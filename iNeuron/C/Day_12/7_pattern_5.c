#include <stdio.h>

int main()
{
    int i, j, n = 4;
    char a = 'A', b;

    for (i = 0; i < n; i++)
    {
        b = a;     
        for(j=4;j>=1;j--){
            if(j<=i){
            printf("%c",b);
                b++;
            }
            else{
                printf(" ");
                
            }
        }
        printf("\n");
    }

    return 0;
}