#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
            }
        }
        if(cnt>k) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}