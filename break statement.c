#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=10;a++)
    {
        printf("%d",a);
        if(a==7)
        {
            break;
        }
    }
    return 0;
}
