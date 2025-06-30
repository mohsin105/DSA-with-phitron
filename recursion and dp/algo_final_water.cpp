//accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end(),greater<int>());
        vector<int>indx;
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i]==a[j])
                {
                    indx.push_back(j);
                    break;
                }
            }
        }
        if(indx[0]<indx[1])
        {
            cout<<indx[0]<<" "<<indx[1]<<"\n";
        }
        else cout<<indx[1]<<" "<<indx[0]<<"\n";
    }
    return 0;
}