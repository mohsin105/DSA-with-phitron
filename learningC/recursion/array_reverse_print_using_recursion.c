#include<stdio.h>
void reverse_pr(int i)
{
  if(i==6)
  {
    return;
  }
  reverse_pr(i+1);//kichu print korar agei porer value er jonno next function e chole jabe. r current function ti wait e thakbe. 
  //jokhon condition true hoye return hobe previouse function e, tokhon next line e eshe ei function er original i er value print korbe. 
  printf("%d\n",i);
}
int main()
{
  int n;
  scanf("%d",&n);
  reverse_pr(n);
  
  return 0;
}