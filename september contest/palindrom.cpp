#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l,r,k;
    cin>>l>>r>>k;
    string pali;
    for(int i=l;i<=r;i++)
    {
        pali.push_back(s[i]);
    }
    cout<<pali;
    return 0;
}