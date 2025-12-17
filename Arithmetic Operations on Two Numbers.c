#include <stdio.h>
int main() {
    float a=1.8, b=4.2;   
    printf("\nAddition = %.2f", a + b);
    printf("\nSubtraction = %.2f", a - b);
    printf("\nMultiplication = %.2f", a * b);
    if (b != 0) {
        printf("\nDivision = %.2f", a / b);
    } else {
        printf("\nDivision not possible (cannot divide by zero)");
    }
    return 0;
}


#include <stdio.h>

int main() {
    float a=1.8, b=0;   

    printf("\nAddition = %.2f", a + b);
    printf("\nSubtraction = %.2f", a - b);
    printf("\nMultiplication = %.2f", a * b);

    if (b != 0) {
        printf("\nDivision = %.2f", a / b);
    } else {
        printf("\nDivision not possible (cannot divide by zero)");
    }

    return 0;
}
