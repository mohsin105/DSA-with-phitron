#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x); //insert the element at BST and sorts at the same time
                    //also removes duplicate values
    }
    for(auto it=s.begin();it != s.end();it++)
    {
        cout<<*it<<endl; //prints the BST in in-order
    }
    //to check whether a value exists in set or not
    cout<<s.count(13); //return 1 if exists, 0 if not
    return 0;
}