#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char f=s[0];
    char low='a'+(f-'A');
    s.erase(0,1);
    //s.replace(0,1,);
    reverse(s.begin(),s.end());
    s=s+low;
    cout<<s;
    return 0;
}