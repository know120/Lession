#include <stdio.h>

int main()
{
    int i, j, n = 4;
    char a = 'A', b;
    for (i = 0; i < n; i++)
    {
        b = a;
        for (j = 0; j < n - i; j++)
        {
            printf("%c ", b);
            b++;
        }
        printf("\n");
    }

    return 0;
}