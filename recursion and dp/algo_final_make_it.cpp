//accepted
#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool make_it(int n,int cur)
{
    if(cur==n) return true;
    if(cur>n) return false;
    if(dp[cur]!=-1) return dp[cur];
    bool op1=make_it(n,cur+3);
    bool op2=make_it(n,cur*2);
    dp[cur]=op1 || op2;
    return dp[cur];
}
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            dp[i]=-1;
        }
        bool ans=make_it(n,1);
        if(ans==true) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
bool make_it(int n,int s)
{

}
int main()
{
    int n;
    cin>>n;
    int s=n-1;
    bool ans=make_it(2,s);
    return 0;
}*/