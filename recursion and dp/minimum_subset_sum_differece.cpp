//tabular approach needed
#include<bits/stdc++.h>
using namespace std;
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
    int dp[n+1][s+1]; //though dp is int type, but it will have only 0 and 1 entry. equivalent to bool false and true
    dp[0][0]=1;
    for(int j=1;j<=s;j++) dp[1][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(a[i-1]<=j)
            {
                int op1=dp[i-1][j-a[i-1]];
                int op2=dp[i-1][j];
                dp[i][j]= op1 || op2;
            }
            else 
            {
                int op2=dp[i-1][j];
                dp[i][j]=op2;
            }
        }
    }
    vector<int>v;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(dp[i][j]==1)
            {
                v.push_back(j);
            }
        }
    }
    int min_diff=INT_MAX;
    for(int s1:v)
    {
        int s2=s-s1;
        int diff=s2-s1;
        min_diff=min(min_diff,abs(s2-s1));
    }
    cout<<min_diff<<endl;
    return 0;
}