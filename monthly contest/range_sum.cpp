#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    long long int sum=0;
    for(int i=1;i<=(n/2);i++)
    {
        sum=sum+(i*2);
    }
    //cout<<sum<<endl;
    long long int psA[n];
    int x=1;
    psA[0]=1;
    for(int i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            psA[i]=x+psA[i-1];
            x++;
        }
        else
        {
            psA[i]=x+psA[i-1];
        }
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1) cout<<psA[r-1]<<endl;
        else cout<<psA[r-1]-psA[l-2]<<endl;
    }
    
    return 0;
}