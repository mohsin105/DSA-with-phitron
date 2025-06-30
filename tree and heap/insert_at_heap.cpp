#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int cur_i=v.size()-1;
        while(cur_i!=0)
        {
            int parent=(cur_i-1)/2;
            if(v[cur_i]>v[parent])
            {
                swap(v[parent],v[cur_i]);
            }
            else break;
            cur_i=parent;
        }
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}