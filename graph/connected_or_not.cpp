#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    vector<int>adjL[n];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        //adjacency matrix entry
        mat[a][b]=1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"YES\n";
        else if(mat[a][b]==1) cout<<"YES"<<endl;//mayb a,b same hole yes hobe
        else if(mat[a][b]==0) cout<<"NO\n";
    }
    return 0;
}
/*intput file
5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2*/