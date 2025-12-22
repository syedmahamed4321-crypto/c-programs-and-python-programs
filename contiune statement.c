#include <stdio.h>
int main() 
{
    int b;
    for ( b = 1; b <= 5; b++) 
    {
        if (b == 3)
            continue;
        printf("%d ", b);
    }
    return 0;
}
