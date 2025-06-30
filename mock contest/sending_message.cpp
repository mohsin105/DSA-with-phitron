#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ln;
    while(getline(cin,ln))
    {
        stringstream ss(ln);
        string word;
        int cnt1[26]={0};
        int cnt2[26]={0};
        ss>>word;
        for(int i=0;i<word.size();i++)
        {
            cnt1[word[i]-'a']++;
        }
        //cout<<word<<" ";
        ss>>word;
        for(int i=0;i<word.size();i++)
        {
            cnt2[word[i]-'a']++;
        }
        //cout<<word<<endl;
        bool ans=true;
        for(int i=0;i<26;i++)
        {
            if(cnt2[i]!=0)
            {
                if(cnt2[i]>cnt1[i])
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans==true) cout<<"Possible\n";
        else cout<<"Impossible\n";
        //cout<<endl;
        //cout<<ln<<endl;
    }
    
    /*string word;
    while(ss>>word)
    {
        string word1;
        string word2;
        for(int i=1;i<2;i++)
        {
            ss>>word1;
            cout<<word1<<"\t";
            ss>>word2;
            cout<<word2<<"\t";
        }
        cout<<"1st line\n";
    }*/
    return 0;
}