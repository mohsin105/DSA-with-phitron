#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int u,v,c;
    Edge(int u,int v,int c)
    {
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
int dis[1001];
int main()
{
    int n,e;
    cin>>n>>e;
    vector<Edge>Edgelist;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Edgelist.push_back(Edge(a,b,c));//directed graph
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(Edge ed:Edgelist)
        {
            int startN=ed.u;
            int endN=ed.v;
            int cost=ed.c;
            if(dis[startN]<INT_MAX && dis[startN]+cost<dis[endN])
            {
                dis[endN]=dis[startN]+cost;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<"distance of "<<i<<" is: "<<dis[i]<<endl;
    }
    return 0;
}
/*
4 4
0 2 5
0 3 12
2 1 2
1 3 3
*/