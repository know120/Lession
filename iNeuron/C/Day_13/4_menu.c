/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
 */
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c;

    while (true)
    {
        printf("\nEnter your choice: \n\t1. To check isosceles triangle\n\t2. To check right angled triangle\n\t3. To checkequilateral triangle\n\t4. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            if (a == b || b == c || c == a)
            {
                printf("%d %d %d is an isosceles triangle\n", a, b, c);
            }
            else
            {
                printf("%d %d %d is not an isosceles triangle\n", a, b, c);
            }
            break;
        case 2:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
            {
                printf("%d %d %d is a right angled triangle\n", a, b, c);
            }
            else
            {
                printf("%d %d %d is not a right angled triangle\n", a, b, c);
            }
            break;
        case 3:
            printf("Enter three numbers: ");
            scanf("%d %d %d", &a, &b, &c);

            if (a == b && b == c)
            {
                printf("%d %d %d is an equilateral triangle\n", a, b, c);
            }
            else
            {
                printf("%d %d %d is not an equilateral triangle\n", a, b, c);
            }
            break;
        case 4:
            printf("Exit\n");
            return 0;
        default:
            printf("Invalid choice\n");
            return 0;
        }
    }

    return 0;
}