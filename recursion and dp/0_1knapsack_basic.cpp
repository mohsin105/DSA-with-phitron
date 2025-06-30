#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int weight[],int value[],int W)
{
    if(n==0 || W==0) return 0;
    if(weight[n-1]<=W)
    {
        int op1=value[n-1]+knapsack(n-1,weight,value,W-weight[n-1]);
        int op2=knapsack(n-1,weight,value,W);
        return max(op1,op2);
    }
    else 
    {
        int op2=knapsack(n-1,weight,value,W);
        return op2;
    }
}
int main()
{
    int n;
    cin>>n;
    int weight[n],value[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[n];
    }
    for(int i=0;i<n;i++)
    {
        cin>>value[n];
    }
    int W;
    cin>>W;
    int val=knapsack(n,weight,value,W);
    cout<<"Highest value can be acquired with "<<W<<" money is "<<val<<endl;
    return 0;
}