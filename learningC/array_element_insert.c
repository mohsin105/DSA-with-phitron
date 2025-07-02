#include<stdio.h>
int main()
{
  int N,i;
  scanf("%d",&N);
  int A[N+1]; //N+1 means size of array, not index number
  for(i=0;i<N;i++) //printing one element less than the array size. 
    {
      scanf("%d",&A[i]);
    }
  int pos,val;
  scanf("%d %d",&pos,&val);//pos indicates the index number 
  for(i=N;i>=pos+1;i--)
    {
      A[i]=A[i-1];
    }
  A[pos]=val;
  for(i=0;i<=N;i++) //now, printing all elements of array. 
    //as the array size is N+1, last elememts index number is N
    {
      printf("%d ",A[i]);
    }
  
  return 0;
}