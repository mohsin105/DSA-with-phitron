#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin,sentence);
    stringstream ss(sentence);
    string word;
    map<string,int>cnt;
    while(ss>>word)
    {
        cnt[word]++;
    }
    for(auto it=cnt.begin();it != cnt.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //to know the count of one specific word
    cout<<cnt["love"]<<endl;
    return 0;
}