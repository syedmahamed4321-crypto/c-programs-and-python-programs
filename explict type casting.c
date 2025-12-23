#include<stdio.h>
void main()
{
    int a=15,b=2;
    float c;
    c=a/b;
    printf("without casting result %f\n",c);
    c=(float)a/b;
    printf("with casting result %f",c);
}
