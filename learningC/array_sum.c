#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  int numList[10]={20,30,40,50,60,70,80,90,100,110};
  int i,sum=0;
  for(i=0;i<10;i++)
    {
      printf("%d\t",numList[i]);
      sum=sum+numList[i];
    }
  printf("Sum of the array is %d\n",sum);
  return 0;
}