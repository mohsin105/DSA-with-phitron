#include<stdio.h>
int main()
{
    int a=10;
    int b=15;
    int c=22;
    int d=8;
    // printf("%d\n",&a);
    // printf("%d\n",&b);
    // printf("%d\n",&c);
    // printf("%d\n\n",&d);

    // printf("using %%x\n\n");
    // printf("%d\n",&a);
    // printf("%d\n",&b);
    // printf("%d\n",&c);
    // printf("%d\n\n",&d);

    // printf("using %%p\n\n");
    // printf("%p\n",&a);
    // printf("%p\n",&b);
    // printf("%p\n",&c);
    // printf("%p\n",&d);


    int arr[4]={10,12,65,78};

    for(int i=0;i<4;i++)
    {
        printf("%d\n",&arr[i]);
    }
    printf("\nusing %%x\n\n");
    for(int i=0;i<4;i++)
    {
        printf("%x\n",&arr[i]);
    }
    printf("\nusing %%p\n\n");
    for(int i=0;i<4;i++)
    {
        printf("%p\n",&arr[i]);
    }



}