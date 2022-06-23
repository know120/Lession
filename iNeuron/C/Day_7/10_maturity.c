/*
A policy agent has to inform about the amount a client will get after maturity of the scheme. If the client comes in the age group 18 to 25 then the policy period is 30 years, if the client comes in the age group 25 to 40 then the policy period is 20 years and if the client comes in the age group 40 to 55 then the policy period is 10 years. Policy is not for other age groups. Clients can invest any amount lesser than or equal to 100000 but must be greater than or equal to 10000. Rate of return is 5% using simple interest. Write a program to take age and investment amount. Print the maturity amount a client will get.
 */

#include <stdio.h>

int main()
{
    int age, invested_amount;
    float maturity_amount;
    printf("Enter age and investment amount : ");
    scanf("%d%d", &age, &invested_amount);
    if (invested_amount > 100000 || invested_amount < 10000)
    {
        printf("Invested amount should be in between 100000 and 10000\n");
        return 0;
    }
    if (age >= 18 && age < 25)
    {
        maturity_amount = invested_amount + (invested_amount * 30 * 0.05);
    }
    else if (age >= 25 && age < 40)
    {
        maturity_amount = invested_amount + (invested_amount * 20 * 0.05);
    }
    else if (age >= 40 && age < 55)
    {
        maturity_amount = invested_amount + (invested_amount * 10 * 0.05);
    }
    else
    {
        printf("You are nnot eligible due to age.\n");
        return 0;
    }
    printf("Maturity amount = %.lf\n", maturity_amount);

    return 0;
}