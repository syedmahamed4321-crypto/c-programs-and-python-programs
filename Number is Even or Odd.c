#include <stdio.h>

int main() {
    int num;// interger values like numbers

    printf("Enter a number: ");//print variables to print the value of output
    scanf("%d", &num);

    if (num % 2 == 0) { //here we use the if-else condition
        printf("%d is Even\n", num);//if this condition is false it returns 0  or if this condition is true
    } else { // then
        printf("%d is Odd\n", num); // this will be excuted means it is true   or  if this condition is false it returns 0
    }

    return 0;
}
