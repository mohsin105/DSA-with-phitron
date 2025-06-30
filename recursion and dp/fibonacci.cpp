#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n<=1) return n;
    return fib(n-2)+fib(n-1);
    //complexity pow(2,n)
}
int main()
{
    int n;
    cin>>n;
    //find the n-th term of fibonacci series
    int ans=fib(n);
    cout<<n;
    return 0;
}