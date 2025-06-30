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
    int tar;
    cin>>tar;
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==tar) 
        {
            cout<<i;
            ans=true;
            break;
        }
    }
    if(ans==false) cout<<-1;
    return 0;
}