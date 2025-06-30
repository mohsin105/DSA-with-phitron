#include<bits/stdc++.h>
using namespace std;
//int n,e;
const int N=10e5+5;
int parentA[N];
int grp_size[N];
void dsu_initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        parentA[i]=-1;
        grp_size[i]=1;
    }
    //cout<<"hello";
}
int find_leader(int node)
{
    if(parentA[node]==-1) return node;
    else
    {
        int l=find_leader(parentA[node]);
        parentA[node]=l;
        return l;
    }
}
void union_size(int a,int b)
{
    int leaderA=find_leader(a);
    int leaderB=find_leader(b);
    if(grp_size[leaderA]>grp_size[leaderB])
    {
        parentA[leaderB]=leaderA;
        grp_size[leaderA]=grp_size[leaderA]+grp_size[leaderB];
    }
    else
    {
        parentA[leaderA]=leaderB;
        grp_size[leaderB]+=grp_size[leaderA];
    }
}
int main()
{
    /*cin>>n>>e;
    dsu_initialize(n);
    cout<<N;*/
    dsu_initialize(7);
    cout<<find_leader(2)<<endl;
    cout<<find_leader(3)<<endl;
    cout<<find_leader(5)<<endl;
    cout<<find_leader(6)<<endl;
    cout<<find_leader(4)<<endl;
    union_size(2,1);
    union_size(2,3);//1 becomes leader of 3, as 2 is in group of size 2, whose leader is 1
    union_size(4,5);//5 becomes leader of, as 5 is node b
    union_size(5,6);//5 becomes leader of 6, as 5 is group of size two
    cout<<find_leader(2)<<endl;
    cout<<find_leader(3)<<endl;
    cout<<find_leader(6)<<endl;
    union_size(1,6);// 1's leader is 1, 6's leader is 5. both group size 3. so 5 becomes leader of 1, as it is in node b in the argument
    cout<<find_leader(2)<<endl;//2's leader was previously 1, but 1's leader has become 5 after uniting with 6. 
    return 0;
}