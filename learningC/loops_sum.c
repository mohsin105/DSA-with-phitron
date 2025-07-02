#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int i,sum;
  sum=0;
  for(i=0;i<=100;i++)
    {
      sum=sum+i;
    }
  printf("%d\n",sum);
  return 0;
}