//accepted 
#include<bits/stdc++.h>
using namespace std;
int const N=1005;
int dp[N][N];
int knapsack_memo(int n,int weight[],int value[],int W)
{
    if(n==0 || W==0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];
    if(weight[n-1]<=W)
    {
        int op1=value[n-1]+knapsack_memo(n-1,weight,value,W-weight[n-1]);
        int op2=knapsack_memo(n-1,weight,value,W);
        dp[n][W]=max(op1,op2);
        return max(op1,op2);
    }
    else 
    {
        int op2=knapsack_memo(n-1,weight,value,W);
        dp[n][W]=op2;
        return op2;
    }
}
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n,W;
        cin>>n>>W;
        int weight[n],value[n];
        for(int i=0;i<n;i++)
        {
            cin>>weight[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>value[i];
        }
    
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                dp[i][j]=-1;
            }
        }
        int val=knapsack_memo(n,weight,value,W);
        cout<<val<<endl;
    }
    return 0;
}