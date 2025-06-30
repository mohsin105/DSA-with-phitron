//accepted
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Edge
{
    public:
    int u,v;
    ll c;
    Edge(int u,int v,ll c)
    {
        this->u=u;
        this->v=v;
        this->c=c;
    }
};
ll dis[1005];
int main()
{
    int n,e;
    cin>>n>>e;
    vector<Edge>Edgelist;
    while(e--)
    {
        int a,b;
        ll c;
        cin>>a>>b>>c;
        Edgelist.push_back(Edge(a,b,c));//directed graph
    }
    for(int i=0;i<=n;i++)
    {
        dis[i]=1e18;
    }
    int src;
    cin>>src;
    dis[src]=0;
    for(int i=1;i<=n-1;i++)
    {
        for(Edge ed:Edgelist)
        {
            int startN=ed.u;
            int endN=ed.v;
            ll cost=ed.c;
            if(dis[startN]<1e18 && dis[startN]+cost<dis[endN])
            {
                dis[endN]=dis[startN]+cost;
            }
        }
    }
    bool cycle=false;
    for(Edge ed:Edgelist)
        {
            int startN=ed.u;
            int endN=ed.v;
            ll cost=ed.c;
            if(dis[startN]<1e18 && dis[startN]+cost<dis[endN])
            {
                cycle=true;
                //dis[endN]=dis[startN]+cost;
            }
        }
    if(cycle==true) cout<<"Negative Cycle Detected";
    else if(cycle==false)
    {
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int des;
            cin>>des;
            if(dis[des]==1e18) cout<<"Not Possible\n";
            else cout<<dis[des]<<endl;
        }
    }
    /*
    for(int i=1;i<=n;i++)
    {
        cout<<"distance of "<<i<<" is: "<<dis[i]<<endl;
    }*/
    return 0;
}
