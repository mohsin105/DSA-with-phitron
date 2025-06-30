//given an array and a difference value. find two subsets whose sum difference is equal to that
//code might need correction. check answer
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int dp[N][N]; //dp holds the count of subsets, not true or false of possibility
int subset_sum_memo(int n,int a[],int s)
{
    if(n==0)
    {
        if(s==0) return 1;
        else return 0;
    }
    if(dp[n][s]!=-1) return dp[n][s];
    if(a[n-1]<=s)
    {
        int op1=subset_sum_memo(n-1,a,s-a[n-1]);
        int op2=subset_sum_memo(n-1,a,s);
        dp[n][s]=op1+op2;
        return op1+op2;
    }
    else 
    {
        int op2=subset_sum_memo(n-1,a,s);
        dp[n][s]=op2;
        return op2;
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
    int s1,s2,diff;
    cin>>diff;
    s1=(diff+totalS)/2;
    for(int i=0;i<=n;i++)//memsetting dp[][] upto n+1 and s1+1 size. 
    {
        for(int j=0;j<=s1;j++)
        {
            dp[i][j]=-1;
        }
    }
    int cnt=subset_sum_memo(n,a,s1);
    cout<<cnt<<endl;
    return 0;
}