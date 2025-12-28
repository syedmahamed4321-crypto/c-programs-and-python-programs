#include <stdio.h>
int main() {
    int a = 90;
    int b = 50;
    int* const ptr = &a;
    ptr = &b;
    return 0;
}
