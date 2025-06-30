#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int dp[N][N]; //standard minimum size => int dp[n+1][s+1]
int subset_sum_memo(int n,int a[],int s)
{
    if(n==0)
    {
        if(s==0) return true;
        else return false;
    }
    if(dp[n][s]!=-1) return dp[n][s]; //dp will only hold 0 or 1, which are equivalent to false or true
    if(a[n-1]<=s)
    {
        bool op1=subset_sum_memo(n-1,a,s-a[n-1]);
        bool op2=subset_sum_memo(n-1,a,s);
        dp[n][s]=op1 + op2;
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
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    int total;
    cin>>total;
    int target=total-s;
    int tarA[target+1];
    for(int i=0;i<=target;i++)
    {
        tarA[i]=i;
    }
    for(int i=0;i<=target;i++)
    {
        for(int j=0;j<=target;j++)
        {
            dp[i][j]=-1;
        }
    }
    bool ans=subset_sum_memo(target,tarA,target);
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