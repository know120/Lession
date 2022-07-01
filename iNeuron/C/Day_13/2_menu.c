/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
c. Exit
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1, num2,choice;
    while (true)
    {
        printf("\nEnter your choice: \n\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Addition\n");
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Subtraction\n");
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Multiplication\n");
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case 4:
            printf("Division\n");
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
            break;
        case 5:
            printf("Exit\n");
            return 0;
        default:
            printf("Invalid choice\n");
        }
        // printf("\n");
    }

    return 0;
}