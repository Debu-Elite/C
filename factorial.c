// program to find sum of digit
#include <stdio.h>
int res=1,num;
int main() {

    printf("Enter the number\n");
    scanf("%d",&num);
  for(;num>1;num--)
  {
      res=res*num;
  }
  printf("result=%d\n",res);
    return 0;
}