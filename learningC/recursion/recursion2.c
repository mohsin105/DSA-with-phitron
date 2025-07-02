#include<stdio.h>
void digits(int i)
{
  if(i==0) //base case. must be declared at the beginning of the custom function
  {
    return;
  }
  printf("%d\n",i);
  digits(i-1);
}
int main()
{
  int i=5;
  digits(5);
  return 0;
}