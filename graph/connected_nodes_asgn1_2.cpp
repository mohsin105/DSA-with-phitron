#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    //int mat[n][n];
    vector<int>adjL[n];
    //memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        //adjacency list entry
        adjL[a].push_back(b);
        adjL[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        if(adjL[x].empty()==true) cout<<-1;
        else
        {
            sort(adjL[x].begin(),adjL[x].end(),greater<int>());
            for(int con:adjL[x])
            {
                cout<<con<<" ";
            }
        cout<<endl;
        }
        
    }
    return 0;
}
/*
input file
6 8
0 4
0 5
4 2
4 3
5 3
2 0
0 1
1 3
6
0
1
2
3
4
5
*/