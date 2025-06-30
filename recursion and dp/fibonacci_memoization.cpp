#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int dp[N];
int fib(int n)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    int val=fib(n-1)+fib(n-2);
    dp[n]=val;
    return val;
    //complexity O(n)
}
int main()
{
    int n;
    cin>>n;
    //finding the n-th term of fibonacci series using memoization
    memset(dp,-1,sizeof(dp));
    int ans=fib(n);
    cout<<ans;
    return 0;
}