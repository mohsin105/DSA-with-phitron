#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ln;
    cin>>ln;
    //getline(cin,ln);
    cout<<ln<<endl;
    int cnt[26]={0};
    for(int i=0;i<ln.size();i++)
    {
        cout<<ln[i]<<" ";//the character
        cout<<ln[i]-'a'<<endl;//the corresponding index number in cnt[], of that character
        cnt[ln[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>0)
        { //printing the ascii value of character and its count
            cout<<i+'a'<<" = "<<cnt[i]<<endl;
        }
    }
    //printing the character and its count from cnt[], using the corresponding index of that character
    for(char x='a';x<='z';x++) //x++=> x+1 => 'a'+'1' => 'b'
    {
        if(cnt[x-'a']>0)//x-'a' returns an integer value
        {
            cout<<x<<" = "<<cnt[x-'a']<<endl;
        }
    }
    return 0;
}