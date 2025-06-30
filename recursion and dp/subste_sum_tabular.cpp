#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;
    bool dp[n+1][s+1];
    dp[0][0]=true;
    //maybe nicher line e dp[0][j] hobar kotha 
    for(int j=1;j<=s;j++) dp[1][j]=false; //dp when i=0 and j=0 is already set as true previously
    for(int i=1;i<=n;i++) //first row (dp i index 0 ) is filled already
    {
        for(int j=0;j<=s;j++) // we are at dp[i][j]
        {
            if(a[i-1]<=j)
            {
                bool op1=dp[i-1][j-a[i-1]]; //after considering current i and j, moving to previous element. 
                bool op2=dp[i-1][j];
                dp[i][j]=op1 || op2;
            }
            else 
            {
                bool op2=dp[i-1][j];
                dp[i][j]=op2;
            }
        }
    }
    return 0;
}