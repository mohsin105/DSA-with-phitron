//Array printing using a function
#include<stdio.h>
void pr_ar(int fil[],int s,int i)
{
  if(i==s)
  {
    return;
  }
  printf("%d\n",fil[i]);
  pr_ar(fil,s,i+1);//ekhane parameter e main er original variable name deya jabe na.orthat, arr instead of fil, n instead of s will be error. 
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
  pr_ar(arr,n,0);
    
  return 0;
}