#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int v=0;
        int c=0;
        int d=0;
        int box;
        for(char ch:s)
        {
            if(ch>='0' && ch<='9') d++;
            else if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u') v++;
            else c++;
        }
        //cout<<v<<" "<<c<<" "<<d;
        if(d>0)
        {
            box=d;
            if(box*2<v)
            {
                int dif=v-(box*2);
                if(dif%2==0) box=box+(dif/2);
                else box=box+(dif/2)+1;
            }
            if(box*3<c)
            {
                int dif=v-(box*3);
                if(dif%3==0) box=box+(dif/3);
                else box=box+(dif/3)+1;
            }
        }
        else if(v>0)
        {
            if(v%2==0) box=v/2;
            else box=(v/2)+1;
            if(box*3<c)
            {
                int dif=v-(box*3);
                if(dif%3==0) box=box+(dif/3);
                else box=box+(dif/3)+1;
            }
        }
        else 
        {
            if(c%3==0)box=c/3;
            else box=(c/3)+1;
        }
        cout<<box<<endl;
        }
    return 0;
}

/*
You are given T test cases. In each test case , you are given a string consisting of small letters and digits. You are given some boxes to store characters according to some rules.

The rules are really simple. You will be able to store

no more than 3 consonants in a box
no more than 2 vowels in a box
no more than 1 digit in a box
Your task is to find out the minimum number of boxes needed to store all of the characters from the string.

Input Format

The first line will contain T, the number of test cases.
For every T, there will be a string S
string consisting of only small letters and digits.
Constraints

1 <= T <= 10000
1<= |S| <= 1000 , all characters in lowercase and digits.
Output Format

Output a single integer number , the minimum number of boxes needed to store all of the characters.
Sample Input 0

3
aeiouaeiou
hello
ae12io
Sample Output 0

5
1
2
*/