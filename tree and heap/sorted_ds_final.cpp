#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        set<int>s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        //set<int>::iterator it;
        for(auto it=s.begin();it!=s.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}