#include <stdio.h>

int main(void) {
  int i,sum=0;
  printf("Hello World\n");
  for(i=0; i<=100; i++)
    {
      if(i%2!=0)
      {
        printf("%d\t",i);
        sum=sum+i;
      }
    }
  printf("the summation of all odd numbers between 0 to 100 is %d\n", sum);
  return 0;
}