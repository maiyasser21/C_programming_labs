#include <stdio.h>
#include <stdlib.h>

void main()
{
int x=0;
int sum=0;

do{
 printf("enter number : \n");
 scanf("%d", &x);
  sum=sum+x;
  } while(sum<100);



  printf("sum is = %d", sum);

return 0;
}
