#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long int n;
    cin>>n;
    int a[n];
    long long int psA[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    psA[0]=a[0];
    for(int i=1;i<n;i++)
    {
        psA[i]=psA[i-1]+a[i];
    }
    int q;
    cin>>q;
    for(int t=0;t<q;t++)
    {
        long long int s;
        cin>>s;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(psA[i]>=s) 
            {
                cout<<i+1<<"\n";
                found=true;
                break;
            }
        }
        if(found==false) cout<<-1<<"\n";
    }
    
    return 0;
}
/*
You are given an array A of size N and Q queries. For each query, you are given a target sum S. Your task is to find the minimum index i (1-based indexing) such that the sum of the elements from the first index to i (i.e., A[1] + A[2] + ... + A[i]) is greater than or equal to S. If no such index exists, return -1.

Note: Don’t forget to use fast I/o code in main function. ios_base::sync_with_stdio(false); cin.tie(NULL); Use this two line at the beginning of the main function. Use ‘\n’ instead of endl;

Input Format

The first line contains an integer N , the size of the array. The second line contains N space-separated integers representing the elements of the array A. The third line contains an integer Q, the number of queries. The next Q lines each contain a single integer S, representing the target sum for that query.

Constraints

(0 < N ≤ 100,000),
(0 ≤ A[i] ≤ 1,000,000,000),
(1 ≤ Q ≤ 120,000),
(0 ≤ S ≤ 10^18)
Output Format

For each query, output a single integer representing the minimum index i such that the prefix sum from the first element to i is greater than or equal to S. If no such index exists, output -1.

Sample Input 0
*/