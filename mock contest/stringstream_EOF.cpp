#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ln;
    while(getline(cin,ln))
    {
        stringstream ss(ln);
        string word;
        //ss>>word;
        //cout<<word<<" ";
        //ss>>word;
        //cout<<word<<endl;
        while(ss>>word)
        {
            cout<<word<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}