#include <stdio.h>
#include <stdlib.h>

int largest (int x, int y, int z);
int main()
{
    int x=0, y=0, z=0;
    printf("enter 3 numbers : ");
    scanf("%d %d %d", &x, &y, &z);
   int max= largest(x, y, z);
    printf("Max is : %d",max);

    return 0;
}

int largest (int x, int y, int z){
if (x>y && x>z){
    //printf(" the largest number is %d", x);
    return x;
}
else if (y>x && y>z){
   // printf(" the largest number is %d", y);
    return y;
}
else{
  //printf(" the largest number is %d", z);
   return z;

}
}
