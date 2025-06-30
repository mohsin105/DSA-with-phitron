#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adjL[1001];
int dis[1001];
class cmp
{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b)
    {
        if(a.second>b.second) return true;
        else return false;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,int>parentP=pq.top();
        int parentN=parentP.first;
        int parentDis=parentP.second;
        pq.pop();
        for(pair<int,int>adjP:adjL[parentN])
        {
            int adjN=adjP.first;
            int adjDis=adjP.second;
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
        adjL[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dijkstra(0);
    for(int i=0;i<n;i++)
    {
        cout<<"Node: "<<i<<" distance: "<<dis[i]<<endl;
    }
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