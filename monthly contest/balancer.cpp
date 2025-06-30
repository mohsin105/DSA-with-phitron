#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int e[n];
    long long int psA[n];
    for(int i=0;i<n;i++)
    {
        cin>>e[i];
    }
    psA[0]=e[0];
    for(int i=1;i<n;i++)
    {
        psA[i]=e[i]+psA[i-1];
    }
    bool flag=false;
    if (psA[0]==psA[n-1])
    {
        //flag=true;
        cout<<psA[0]<<" "<<1<<endl;
    }
    else 
    {
        int i;
        for(i=1;i<n;i++)
        {
            long long int l=psA[i];
            long long int r=psA[n-1]-psA[i-1];
            if(l==r)
            {
                //int x=i;
                flag=true;
                break;
            }
            //psA[i]=e[i]+psA[i-1];
        }
        if(flag==true) cout<<psA[i]<<" "<<i+1;
        else if(flag==false) cout<<"UNSTABLE";
    }
    return 0;
    /*
    int sumR,sumL;
    for(int i=0;i<n;i++)
    {
        cin>>e[i];
    }
    int i=0;
    int j=n-1;
    bool flag=false;
    while(i<n)
    {
        sumL=sumL+e[i];
        sumR=sumR+e[j];
        if(sumL==sumR)
        {
            flag=true;
            break;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<sumL<<" "<<e[i];
    */
}