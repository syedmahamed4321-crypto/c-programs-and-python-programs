#include <stdio.h>

int main() {
    int a, b;//integer values

    printf("Enter first number: ");//assigning integer values of a
    scanf("%d", &a);

    printf("Enter second number: ");//assigning integer values of b
    scanf("%d", &b);

    if (a > b) {   //here we use thev if-else condition 
        printf("%d is the largest number:\n", a);
    } else if (b > a) {
        printf("%d is the largest number:\n",b);

    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
