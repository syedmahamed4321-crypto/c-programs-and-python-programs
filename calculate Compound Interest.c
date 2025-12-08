// C program to calculate Compound Interest
#include <stdio.h>

// For using pow function we must
// include math.h
#include <math.h>

// Driver code
int main()
{
    // Principal amount
    double principal = 4000;

    // Annual rate of interest
    double rate = 5;

    // Time
    double time = 2;

    // Calculating compound Interest
    double amount
        = principal * ((pow((1 + rate / 100), time)));
    double CI = amount - principal;

    printf("Compound Interest is : %lf", CI);
    return 0;
}
