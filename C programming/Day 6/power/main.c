#include <stdio.h>
#include <stdlib.h>
int power (int num1, int num2);
void main()
{
    int i=0;
    int j=0;
    int result=0;
    printf("Enter base : ");
    scanf("%d", &i);
    printf("Enter power : ");
    scanf("%d", &j);
    result=power(i,j);
    printf("%d", result);

}

int power (int num1, int num2){

 if (num2 != 0){

 return (num1* power(num1,num2-1));
  }
else
    return 1;

}

