#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
{
        v.push_back(x);
        int cur_i=v.size()-1;
        while(cur_i!=0)
        {
            int parent=(cur_i-1)/2;
            if(v[cur_i]<v[parent])
            {
                swap(v[parent],v[cur_i]);
            }
            else break;
            cur_i=parent;
        }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur_i=0;
    while(true)
    {
        int left_i=(cur_i*2)+1;
        int right_i=(cur_i*2)+2;
        int last_i=v.size()-1;
        if(left_i<=last_i && right_i<=last_i)
        {
            if(v[left_i]<v[right_i] && v[left_i]<v[cur_i])
            {
                swap(v[left_i],v[cur_i]);
                cur_i=left_i;
            }
            else if(v[right_i]<v[left_i] && v[right_i]<v[cur_i])
            {
                swap(v[right_i],v[cur_i]);
                cur_i=right_i;
            }
            else break;
        }
        else if(left_i<=last_i)
        {
            if(v[left_i]<v[cur_i])
            {
                swap(v[left_i],v[cur_i]);
                cur_i=left_i;
            }
            else break;
        }
        else if(right_i<=last_i)
        {
            if(v[right_i]<v[cur_i])
            {
                swap(v[right_i],v[cur_i]);
                cur_i=right_i;
            }
            else break;
        }
        else break;
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int c;
        cin>>c;
        if(c==0)
        {
            int x;
            cin>>x;
            insert_heap(v,x);
            if(v.empty()==true) cout<<"Empty"<<endl;
            else cout<<v.front()<<endl;
        }
        else if(c==1)
        {
            if(v.empty()==true) cout<<"Empty"<<endl;
            else cout<<v.front()<<endl;
        }
        else if(c==2)
        {
            if(v.empty()==true) cout<<"Empty"<<endl;
            else delete_heap(v);
            if(v.empty()==true) cout<<"Empty"<<endl;
            else cout<<v.front()<<endl;
        }
    }
    return 0;
}