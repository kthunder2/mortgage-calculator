#include <stdio.h>

int main()
{
    int accountnum;
    int mort_amount, mortgage_term;
    float int_rate, payment, tot_int;

    printf("Enter account number:");
    scanf("%d", &accountnum);

    if(accountnum==0)
        printf("See you!");

    else
        printf("Enter the mortgage amount:");
        scanf("%d", &mort_amount);

        printf("Enter the mortgage term (in months):");
        scanf("%d", &mortgage_term);

        printf("Enter the interest rate:");
        scanf("%f", &int_rate);

        tot_int = mort_amount*mortgage_term*int_rate;
        printf("Total interest is %.1f", tot_int);

        payment = (mort_amount+tot_int)/mortgage_term;

        if(payment<0)
            printf("\nMonthly payment: %.2f --IMPOSSIBLE!", payment);

        else if(payment>=0 && payment<=300)
            printf("\nMonthly payment: %.2f --TOO LOW!", payment);

        else if(payment>300 && payment<=1000)
            printf("\nMonthly payment: %.2f --MEDIUM", payment);

        else if(payment>1000)
            printf("\nMonthly payment: %.2f -- TOO HIGH!", payment);

    return 0;
}
