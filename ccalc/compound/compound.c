#include <stdio.h>
#include <math.h>
#include "compound.h"

void compound(void) {
    
    double startingAmount;
    double interestRate;
    int years;
    int timesCompounded;

    printf("Welcome to the COMPOUND INTEREST CALCULATOR.");

    printf("What is your starting amount? ");
    scanf("%lf", &startingAmount);

    printf("What is the interest rate? ");
    scanf("%lf", &interestRate);

    printf("How many times does your money compound per year? ");
    scanf("%d", &timesCompounded);

    printf("How many years has your money been in for? ");
    scanf("%d", &years);

    double finalAmount = startingAmount * pow(1.0 + (interestRate / 100) / timesCompounded, timesCompounded * years);
    printf("After %d years, you will have %.2lf pounds.", years, finalAmount);

}