#include<bits/stdc++.h>
using namespace std;
class peer
{
    public:
    string name;
    int num;
    peer(string name,int num)
    {
        this->name=name;
        this->num=num;
    }
};
class cmp
{
    public:
    bool operator()(peer a,peer b)
    {
        if(a.name==b.name)
        {
            if(a.num<b.num) return true;
            else return false;
        }
        else if(a.name>b.name) return true;
        else return false;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    priority_queue<peer,vector<peer>,cmp>pq;
    for(int i=0;i<n;i++)
    {
        string nm;
        int x;
        cin>>nm;
        cin>>x;
        peer obj(nm,x);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().num<<endl;
        pq.pop();
    }
    return 0;
}