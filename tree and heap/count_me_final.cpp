#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=0;i<t;i++)
    {
        string sentence;
        getline(cin,sentence);
        map<string,int>mp;
        string word;
        stringstream ss(sentence);
        int mx_count=0;
        string mx_word;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>mx_count) 
            {
                mx_count=mp[word];
                mx_word=word;
            }
        }
        cout<<mx_word<<" "<<mx_count<<endl;
        sentence.clear();
    }
    return 0;
}