#include<stdio.h>
void pr(int i)
{
  if(i==6)
  {
    return;
  }
  printf("%d\n",i);
  //i++;
  pr(i+1); //pr(i++) causes infinity loop. 
}
int main()
{
  int i=1;
  pr(i);
  return 0;
}

/*
this code causes infinity loop
if(i<=10)
  {
    printf("%d\n",i);
     pr(i++);
  }
*/



/*
this code runs perfectly 

void pr(int i)
{
  printf("%d\n",i);
  i++;
  if(i<=10)
  {
    pr(i);
  }
}
*/

/*
phitron technique:base case
void pr(int i)
{
  if(i==6)
  {
    return;
  }
  printf("%d\n",i);
  i++;
  pr(i);
}
*/
//function stops immediately when return keyword becomes active. 