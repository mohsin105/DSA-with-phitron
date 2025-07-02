#include<stdio.h>
void pr_arra(int *a,int s)//can also use int a[] instead. 
{
  for(int i=0;i<s;i++)
    {
      printf("%d\n",a[i]);
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&ar[i]);
    }
  printf("first element value %d\n",ar[0]);
  printf("ponter of first element is %p\n",ar);//the very name of the array is also a pointer of the first element of the array. 
  printf("first element value %d\n",*ar);
  pr_arra(ar,n);
  /*printf("the array is ");
  for(int i=0;i<n;i++)
    {
      printf("%d\n",ar[i]);
    }*/
  return 0;
}