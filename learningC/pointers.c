#include<stdio.h>
int main()
{
  int ary[4]={1,2,3,4};
  //printf("%d\n",ary[0]);
  int *p;
  p=ary+3;
  *p=5;
  printf("%d",*p);
  //printf("%d",*(ary+1));
  return 0;
}