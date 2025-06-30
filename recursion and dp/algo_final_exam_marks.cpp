//accepted
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int dp[N][N]; //standard minimum size => int dp[n+1][s+1]
bool subset_sum_memo(int n,int a[],int s)
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
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(m<1000)
        {
            int s=1000-m;
            //cin>>s;
            for(int i=0;i<=n;i++)
            {
                for(int j=0;j<=s;j++)
                {
                    dp[i][j]=-1;
                }
            }
            bool ans=subset_sum_memo(n,a,s);
            if(ans==true) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}