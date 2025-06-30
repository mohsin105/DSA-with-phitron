#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int odd=-1;
        for(int j=1;j<=i;j++)
        {
            odd+=2;
            printf("%d ",odd);
        }
        printf("\n");
    }
    return 0;
}


/*




#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // int odd=-1;
        for(int j=1;j<=i;j++)
        {
            // odd+=2;
            printf("%d ",(j*2)-1); //for even, (j*2)-2. for even excluding 0, only (j*2)
        }
        printf("\n");
    }
    return 0;
}





*/