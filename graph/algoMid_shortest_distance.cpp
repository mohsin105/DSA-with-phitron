#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
            adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
    }
    for (int k = 0; k <=n; k++)
    {
        for (int i = 0; i <=n; i++)
        {
            for (int j = 0; j <=n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    //cout << "AFTER" << endl;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int src,des;
        cin>>src>>des;
        if(adj[src][des]==1e18) cout<<-1<<endl;
        else cout<<adj[src][des]<<endl;
    }
/*    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == 1e18)
            cout << "INF ";
            else
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

 for (int i = 0; i < n; i++)

 {

 if (adj[i][i] < 0)

 {

 cout << "Cycle detected" << endl;

 break;

 }

 }
*/
 return 0;

}
