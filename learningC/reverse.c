#include <stdio.h>
int main()
{
    // long long int N;
    // scanf("%lld",&N);
    // int d;
    // int lead=0;
    // while(N!=0)
    // {
    //     d=N%10;
    //     if(d==0)
    //     {
    //         if(lead!=0)
    //         {
    //             printf("%d",d);
    //         }
    //     }
    //     else{
    //         printf("%d",d);
    //         lead=1;
    //     }
    //     N=N/10;
    // }


    int x=120053;
    
    int flag=0;  
    
    int d;
    while(x!=0)
    {
        d=x%10;
        if(d==0)
        {
            if(flag!=0) 
            {
                printf("%d",d);
            }
        }
        else{
            printf("%d",d);
            flag=1;
        }
        x=x/10;
    }
    
    
    
    
    
    
    //8321

    // 1238%10 => 8    d

    // 1238/10 => 123   x


    // 123%10 => 3

    // 123/10 => 12

    // 12%10  =>  2


    // 12/10   =>1


    // 1%10  =>1   d


    // 1/10 => 0










    return 0;
}