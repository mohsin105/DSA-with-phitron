#include<bits/stdc++.h>
using namespace std;
const int N=1005;
vector<int>v;
int dp[N][v]; //standard minimum size => int dp[n+1][s+1]
int subset_sum_memo(int n,int a[],vector<int>v)
{
    bool vali=true;
    for(int i=0;i<v.size();i++)
    {
        if(a[n-1]==v[i]) 
        {
            vali=false;
            break;
        }
    }
    if(n==0) return 0;
    
    if(dp[n][v]!=-1) return dp[n][v]; //dp will only hold 0 or 1, which are equivalent to false or true
    if(a[n-1]<=s)
    {
        bool op1=subset_sum_memo(n-1,a,s-a[n-1]);
        bool op2=subset_sum_memo(n-1,a,s);
        dp[n][s]=op1 || op2;
        return dp[n][s];
    }
    else 
    {
        bool op2=subset_sum_memo(n-1,a,s);
        dp[n][s]=op2;
        return dp[n][s];
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    //int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //s=s+a[i];
    }
    memset(dp,-1,sizeof(dp));
    /*for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            dp[i][j]=-1;
        }
    }*/
    bool ans=subset_sum_memo(n,a,v);
    if(ans==true) cout<<"YES POSSIBLE";
    else cout<<"NO NOT POSSIBLE";
    return 0;
}


/*
to count the number of ways subset sum can be acquired
step 1=> memset the dp[n+1][s+1] to -1
step 2=> turn the subset_sum_memo() to int type
    change true and false to 1 and 0 respectively
    return op1+op2 instead of op1 || op2 
    
*/