#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<pair<int,ll>>adjL[1005];
ll dis[1005];
class cmp
{
    public:
    bool operator()(pair<int,ll>a,pair<int,ll>b)
    {
        if(a.second>b.second) return true;
        else return false;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int,ll>,vector<pair<int,ll>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,ll>parentP=pq.top();
        int parentN=parentP.first;
        ll parentDis=parentP.second;
        pq.pop();
        for(pair<int,ll>adjP:adjL[parentN])
        {
            int adjN=adjP.first;
            ll adjDis=adjP.second;
            if(parentDis+adjDis<dis[adjN])
            {
                dis[adjN]=parentDis+adjDis;
                pq.push({adjN,dis[adjN]});
            }
        }
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adjL[a].push_back({b,c});
        //adjL[b].push_back({a,c});
    }
    for(int i=0;i<=n;i++)
    {
        dis[i]=INT_MAX;
    }
    int src;
    cin>>src;
    dijkstra(src);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int des;
        ll dw;
        cin>>des>>dw;
        if(dis[des]<=dw) cout<<"YES\n";
        else cout<<"NO\n";
    }
    /*
    for(int i=1;i<=n;i++)
    {
        cout<<"Node: "<<i<<" distance: "<<dis[i]<<endl;
    }*/
    return 0;
}
/*
input file 
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1
*/