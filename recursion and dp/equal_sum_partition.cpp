#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int dp[N][N];
bool subset_sum_memo(int n,int a[],int x)
{
    if(n==0)
    {
        if(x==0) return true;
        else return false;
    }
    if(dp[n][x]!=-1) return dp[n][x];
    if(a[n-1]<=x)
    {
        bool op1=subset_sum_memo(n-1,a,x-a[n-1]);
        bool op2=subset_sum_memo(n-1,a,x);
        dp[n][x]=op1 || op2;
        return dp[n][x];
        //more optimised way of coding: 
        /*
        return dp[n][x]=subset_sum_memo(n-1,a,x-a[n-1]) || subset_sum_memo(n-1,a,x);
        */
    }
    else
    {
        bool op2=subset_sum_memo(n-1,a,x);
        dp[n][x]=op2;
        return dp[n][x];
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int totalS=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        totalS=totalS+a[i];
    }
    if(totalS%2==0)
    {
        int x=totalS/2;
        //now, have to check if subset sum with int x can be possible or not
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=x;j++)
            {
                dp[i][j]=-1;
            }
        }
        bool ans=subset_sum_memo(n,a,x);
        if(ans==true) cout<<"POSSIBLE";
        else cout<<"NOT POSSIBLE";
    }
    else cout<<"NO POSSIBLE";
    return 0;
}