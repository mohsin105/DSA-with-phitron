#include<stdio.h>
int main()
{
    int n=5;
    int star=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}