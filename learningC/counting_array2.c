#include<stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int a[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  int cnt[7]={0};
  
  for(int i=0;i<n;i++)
    {
      cnt[a[i]]++;//
    }
  for(int i=0;i<6;i++)
    {
      if(cnt[i]!=0)//to exclude digits that doesnt appear on  the array
      {
        printf("%d - %d\n",i,cnt[i]);
      }
      
    }
  
  return 0;
}