#include<stdio.h>
int main()
{
  int N,M;
  scanf("%d %d",&N,&M);
  int A[N];
  int cnt[M+1];//joto porjonto count korbo, cnt array er size 1 beshi hote hobe. cz tokhon cnt array er last element er index hobe M. and that will indicate count of M digit. 
  for(int i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
    }
  for(int i=0;i<=M;i++)
    {
      cnt[i]=0;
    }
  //int count[M]={0};
  for(int i=0;i<N;i++)
    {
      cnt[A[i]]++;
    }
  for(int i=1;i<=M;i++)//M porjonto digit er count dekhabe
    {
      printf("%d\n",cnt[i]);
    }
  return 0;
}