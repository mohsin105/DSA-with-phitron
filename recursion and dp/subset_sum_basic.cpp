#include<bits/stdc++.h>
using namespace std;
bool subset_sum_basic(int n,int a[],int s)
{
    if(n==0)
    {
        if(s==0) return true;
        else return false;
    }
    if(a[n-1]<=s)
    {
        bool op1=subset_sum_basic(n-1,a,s-a[n-1]); //there is nothing to add 
        bool op2=subset_sum_basic(n-1,a,s);
        return op1 || op2; //true when even only one is true
    }
    else
    {
        bool op2=subset_sum_basic(n-1,a,s);
        return op2;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;
    bool pos=subset_sum_basic(n,a,s);
    if(pos==true) cout<<"YES POSSIBLE";
    else cout<<"NO, NOT POSSIBLE";
    return 0;
}