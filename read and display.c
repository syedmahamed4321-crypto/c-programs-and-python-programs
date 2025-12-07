#include <stdio.h>

int main() {
    int myNum;
    printf("Enter the number: ");
    scanf("%d", &myNum);     // Integer input

    float myFloatNum;
    printf("Enter the float value: ");
    scanf("%d", &myFloatNum); // Float input 
    //we can also use the %f in float input like scanf("%f", &MyFloatNum);

    char myLetter;
    printf("Enter a letter: ");
    scanf(" %d", &myLetter);  // Character input (space avoids newline issue)
     //we can also use the %c in char input like scanf("%f", &character input);

    // Print variables use to print the output values
    printf("\nInteger value: %d\n", myNum);
    printf("Float value: %.2f\n", myFloatNum);
    printf("Character value: %c\n", myLetter);

    return 0;
}
